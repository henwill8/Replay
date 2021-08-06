#include "CustomTypes/AsyncGPUReadbackPluginRequest.hpp"

#include "main.hpp"
#include "opengl_replay/Shader.hpp"

#include <string>
#include <shared_mutex>

#include <GLES3/gl32.h>
#include <GLES3/gl3ext.h>
#include "video_recorder.hpp"
#include "CustomTypes/TypeHelpers.hpp"

// Looks like this was from https://github.com/Alabate/AsyncGPUReadbackPlugin

struct Task {
	GLuint texture;
	GLuint fbo;
	GLuint pbo;
	GLsync fence;
	bool initialized = false;
	bool error = false;
	bool done = false;
	rgb24* data;
	int miplevel;
	int size;
	int height;
	int width;
	int depth;
	GLint internal_format;
	bool sRGBEnabled;
};

static std::map<int,std::shared_ptr<Task>> tasks;
static std::shared_mutex tasks_mutex;
static int next_event_id = 1;

extern "C" int makeRequest_mainThread(GLuint texture, int miplevel) {
	// Create the task
	std::shared_ptr<Task> task = std::make_shared<Task>();
	task->texture = texture;
	task->miplevel = miplevel;
	int event_id = next_event_id;
	next_event_id++;

	// Save it (lock because possible vector resize)
	std::unique_lock lock(tasks_mutex);
	tasks[event_id] = task;
	lock.unlock();

	return event_id;
}
#include <thread>

static void create_ppm(int frame_id, unsigned int width, unsigned int height, unsigned int pixel_nbytes, GLubyte* pixels) {
    //std::thread t([=]{
       
        size_t i, j, k, cur;
        FILE *f = fopen(("/sdcard/img" + std::to_string(frame_id) + ".ppm").c_str(), "w");
        fprintf(f, "P3\n%d %d\n%d\n", width, height, 255);
        for (i = 0; i < height; i++) {
            for (j = 0; j < width; j++) {
                cur = pixel_nbytes * ((height - i - 1) * width + j);
                fprintf(f, "%3d %3d %3d ", pixels[cur], pixels[cur + 1], pixels[cur + 2]);
            }
            fprintf(f, "\n");
        }
        fclose(f);
        // loggingFunction().info("File %s", ("/sdcard/img" + std::to_string(frame_id) + ".ppm").c_str());
        
    //});
    //t.detach();
}

extern "C" void makeRequest_renderThread(int event_id) {

	// Get task back
    std::shared_lock lock(tasks_mutex);
	std::shared_ptr<Task> task = tasks[event_id];
	lock.unlock();

	// Enable sRGB shader
	static Shader sRGBShader = Shader::shaderGammaConvert();




	// Get texture informations
	glBindTexture(GL_TEXTURE_2D, task->texture);
	glGetTexLevelParameteriv(GL_TEXTURE_2D, task->miplevel, GL_TEXTURE_WIDTH, &(task->width));
	glGetTexLevelParameteriv(GL_TEXTURE_2D, task->miplevel, GL_TEXTURE_HEIGHT, &(task->height));
	glGetTexLevelParameteriv(GL_TEXTURE_2D, task->miplevel, GL_TEXTURE_DEPTH, &(task->depth));
	glGetTexLevelParameteriv(GL_TEXTURE_2D, task->miplevel, GL_TEXTURE_INTERNAL_FORMAT, &(task->internal_format));
	auto pixelSize = getPixelSizeFromInternalFormat(task->internal_format);

	// Configure shader
	int resolution[2] = {task->width, task->height};
	glUniform2iv(glGetUniformLocation(sRGBShader.ID, "resolution"), 2, resolution);

	sRGBShader.use();


	// In our current state, this turns out to be 32 * 1920 * 1080 * 1 (66,355,200)
	// However, we've been expecting this to be 1920 * 1080 * 3 (6,220,800)

	// According to this, we don't need depth: https://github.com/sirjuddington/SLADE/blob/4959a4ab95de4eb59b9dd0c9a05ccd2641aa9bea/src/UI/Canvas/MapPreviewCanvas.cpp#L963
	task->size = task->width * task->height * 3;

	// The format is GL_UNSIGNED_BYTE which is correct.
	log("Task size %d with pixel size %d and depth %d and format %d and byte format %d", task->size, task->depth, pixelSize, getFormatFromInternalFormat(task->internal_format), getTypeFromInternalFormat(task->internal_format));

    if (task->size == 0
        || getFormatFromInternalFormat(task->internal_format) == 0
        || getTypeFromInternalFormat(task->internal_format) == 0) {
        task->error = true;
        return;
    }

    // Start the read request

    // Allocate the final data buffer !!! WARNING: free, will have to be done on script side !!!!
    task->data = static_cast<rgb24*>(std::malloc(task->size));

    // Create the fbo (frame buffer object) from the given texture
	glGenFramebuffers(1, &(task->fbo));

	// Bind the texture to the fbo
	glBindFramebuffer(GL_FRAMEBUFFER, task->fbo);
	glFramebufferTexture(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, task->texture, 0);

	// Create and bind pbo (pixel buffer object) to fbo
	glGenBuffers(1, &(task->pbo));
	glBindBuffer(GL_PIXEL_PACK_BUFFER, task->pbo);
	glBufferData(GL_PIXEL_PACK_BUFFER, task->size, 0, GL_DYNAMIC_READ);


    // Start the read request
    glReadBuffer(GL_COLOR_ATTACHMENT0);
    glReadPixels(0, 0, task->width, task->height, getFormatFromInternalFormat(task->internal_format), getTypeFromInternalFormat(task->internal_format), 0);

	// if(event_id == 500) create_ppm(event_id, task->width, task->height, 3, reinterpret_cast<GLubyte*>(task->data->data()));
    
	// Unbind buffers
	glBindBuffer(GL_PIXEL_PACK_BUFFER, 0);
	glBindFramebuffer(GL_FRAMEBUFFER, 0);

	// Fence to know when it's ready
	task->fence = glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);

	// Done init
	task->initialized = true;
    // log("Finished initializing AsyncGPUReadbackRequest");
}


extern "C" void update_renderThread(int event_id) {
    // Get task back
    std::shared_lock lock(tasks_mutex);
	std::shared_ptr<Task> task = tasks[event_id];
	lock.unlock();

	// Check if task has not been already deleted by main thread
	if(task == nullptr) {
		return;
	}

	// Do something only if initialized (thread safety)
	if (!task->initialized || task->done) {
		return;
	}
	
	// Check fence state
	GLint status = 0;
	GLsizei length = 0;
	glGetSynciv(task->fence, GL_SYNC_STATUS, sizeof(GLint), &length, &status);
	if (length <= 0) {
		task->error = true;
		task->done = true;
		return;
	}

	// When it's done
	if (status == GL_SIGNALED) {

		// Bind back the pbo
		glBindBuffer(GL_PIXEL_PACK_BUFFER, task->pbo);

		// Map the buffer and copy it to data
		auto* ptr = reinterpret_cast<rgb24*>(glMapBufferRange(GL_PIXEL_PACK_BUFFER, 0, task->size, GL_MAP_READ_BIT));
        memcpy(task->data, ptr, task->size);

		// Unmap and unbind
		glUnmapBuffer(GL_PIXEL_PACK_BUFFER);
		glBindBuffer(GL_PIXEL_PACK_BUFFER, 0);

		// Clear buffers
		glDeleteFramebuffers(1, &(task->fbo));
		glDeleteBuffers(1, &(task->pbo));
		glDeleteSync(task->fence);

		// yeah task is done!
		task->done = true;
	}
}

extern "C" void getData_mainThread(int event_id, rgb24*& buffer, size_t& length) {
	// Get task back
    std::shared_lock lock(tasks_mutex);
	std::shared_ptr<Task> task = tasks[event_id];
	lock.unlock();

	// Do something only if initialized (thread safety)
	if (!task->done) {
		return;
	}

	// Copy the pointer. Warning: free will have to be done on script side
	length = task->size;
    buffer = task->data;
}

extern "C" bool isRequestDone(int event_id) {
	// Get task back
    std::shared_lock lock(tasks_mutex);
	std::shared_ptr<Task> task = tasks[event_id];
	lock.unlock();

	return task->done;
}
extern "C" bool isRequestError(int event_id) {
	// Get task back
    std::shared_lock lock(tasks_mutex);;
	std::shared_ptr<Task> task = tasks[event_id];
	lock.unlock();

	return task->error;
}
extern "C" void dispose(int event_id) {
	// Remove from tasks
    std::unique_lock lock(tasks_mutex);
	std::shared_ptr<Task> task = tasks[event_id];
	// free(task->data);
	tasks.erase(event_id);
	lock.unlock();
}

using GLIssuePluginEvent = function_ptr_t<void, void*, int>;

GLIssuePluginEvent GetGLIssuePluginEvent() {
    static GLIssuePluginEvent issuePluginEvent = reinterpret_cast<GLIssuePluginEvent>(il2cpp_functions::resolve_icall("UnityEngine.GL::GLIssuePluginEvent"));
    return issuePluginEvent;
}
using namespace AsyncGPUReadbackPlugin;

DEFINE_TYPE(AsyncGPUReadbackPlugin, AsyncGPUReadbackPluginRequest);

void AsyncGPUReadbackPluginRequest::ctor(UnityEngine::Texture* src, bool tempTexture) {
    disposed = false;
    texture = src;
    this->tempTexture = tempTexture;
    GLuint textureId = reinterpret_cast<uintptr_t>(src->GetNativeTexturePtr().m_value);
    eventId = makeRequest_mainThread(textureId, 0);
    GetGLIssuePluginEvent()(reinterpret_cast<void*>(makeRequest_renderThread), eventId);
}

bool AsyncGPUReadbackPluginRequest::IsDone() {
    return isRequestDone(eventId);
}

bool AsyncGPUReadbackPluginRequest::HasError() {
    return isRequestError(eventId);
}

void AsyncGPUReadbackPluginRequest::Update() {
    GetGLIssuePluginEvent()(reinterpret_cast<void*>(update_renderThread), eventId);
}

void AsyncGPUReadbackPluginRequest::Dispose() {
    if (!disposed) {
        dispose(eventId);
        if (tempTexture && il2cpp_utils::AssignableFrom<UnityEngine::RenderTexture*>(texture->klass)) {
            UnityEngine::RenderTexture::ReleaseTemporary(reinterpret_cast<UnityEngine::RenderTexture *>(texture));
        }
        disposed = true;
    }
    // Comment if using the same texture
    //    UnityEngine::RenderTexture::ReleaseTemporary((UnityEngine::RenderTexture*)texture);
}

AsyncGPUReadbackPluginRequest::~AsyncGPUReadbackPluginRequest() {
    Dispose();
}

void AsyncGPUReadbackPluginRequest::GetRawData(rgb24*& buffer, size_t& length) const {
    getData_mainThread(eventId, buffer, length);
}

AsyncGPUReadbackPluginRequest* AsyncGPUReadbackPlugin::Request(UnityEngine::Texture* src, bool tempTexture) {
    return il2cpp_utils::New<AsyncGPUReadbackPluginRequest*>(src, tempTexture).value();
}
