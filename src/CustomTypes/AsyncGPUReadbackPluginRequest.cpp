#include "CustomTypes/AsyncGPUReadbackPluginRequest.hpp"

#include "main.hpp"

#include <string>

#include <GLES3/gl32.h>
#include <GLES3/gl3ext.h>
#include "video_recorder.hpp"

// Looks like this was from https://github.com/Alabate/AsyncGPUReadbackPlugin

struct Task {
	GLuint texture;
	GLuint fbo;
	GLuint pbo;
	GLsync fence;
	bool initialized = false;
	bool error = false;
	bool done = false;
	std::shared_ptr<std::vector<rgb24>> data;
	int miplevel;
	int size;
	int height;
	int width;
};

static std::map<int,std::shared_ptr<Task>> tasks;
static std::mutex tasks_mutex;
static int next_event_id = 1;

extern "C" int makeRequest_mainThread(GLuint texture, int miplevel) {
	// Create the task
	std::shared_ptr<Task> task = std::make_shared<Task>();
	task->texture = texture;
	task->miplevel = miplevel;
	int event_id = next_event_id;
	next_event_id++;

	// Save it (lock because possible vector resize)
	tasks_mutex.lock();
	tasks[event_id] = task;
	tasks_mutex.unlock();

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
	tasks_mutex.lock();
	std::shared_ptr<Task> task = tasks[event_id];
	tasks_mutex.unlock();

	// Get texture informations
	glBindTexture(GL_TEXTURE_2D, task->texture);
	glGetTexLevelParameteriv(GL_TEXTURE_2D, task->miplevel, GL_TEXTURE_WIDTH, &(task->width));
	glGetTexLevelParameteriv(GL_TEXTURE_2D, task->miplevel, GL_TEXTURE_HEIGHT, &(task->height));
	task->size = task->width * task->height * 3;

	// Create the fbo (frame buffer object) from the given texture
	glGenFramebuffers(1, &(task->fbo));

	// Bind the texture to the fbo
	glBindFramebuffer(GL_FRAMEBUFFER, task->fbo);
	glFramebufferTexture(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, task->texture, 0);

	// Create and bind pbo (pixel buffer object) to fbo
	/*glGenBuffers(1, &(task->pbo));
	glBindBuffer(GL_PIXEL_PACK_BUFFER, task->pbo);
	glBufferData(GL_PIXEL_PACK_BUFFER, task->size, 0, GL_DYNAMIC_READ);*/

	// Start the read request

	task->data = std::make_shared<std::vector<rgb24>>(task->size/3);
	glReadBuffer(GL_COLOR_ATTACHMENT0);
	glReadPixels(0, 0, task->width, task->height, GL_RGB, GL_UNSIGNED_BYTE, task->data->data());

	// if(event_id == 500) create_ppm(event_id, task->width, task->height, 3, reinterpret_cast<GLubyte*>(task->data->data()));
    
	// Unbind buffers
	//glBindBuffer(GL_PIXEL_PACK_BUFFER, 0);
	glBindFramebuffer(GL_FRAMEBUFFER, 0);
	glDeleteFramebuffers(1, &(task->fbo));
    glDeleteBuffers(1, &(task->pbo));

	// Fence to know when it's ready
	//task->fence = glFenceSync(GL_SYNC_GPU_COMMANDS_COMPLETE, 0);

	// Done init
	task->initialized = true;
	task->done = true;

    // log("Finished initializing AsyncGPUReadbackRequest");
}

// TODO: Remove or use this method. It is never used as far as I can tell
extern "C" void update_renderThread(int event_id) {
    // Get task back
	tasks_mutex.lock();
	std::shared_ptr<Task> task = tasks[event_id];
	tasks_mutex.unlock();

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
		void* ptr = glMapBufferRange(GL_PIXEL_PACK_BUFFER, 0, task->size, GL_MAP_READ_BIT);
		// TODO: Fix
		//		memcpy(task->data, ptr, task->size);

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

extern "C" void getData_mainThread(int event_id, std::shared_ptr<std::vector<rgb24>>& buffer, size_t& length) {
	// Get task back
	tasks_mutex.lock();
	std::shared_ptr<Task> task = tasks[event_id];
	tasks_mutex.unlock();

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
	tasks_mutex.lock();
	std::shared_ptr<Task> task = tasks[event_id];
	tasks_mutex.unlock();

	return task->done;
}
extern "C" bool isRequestError(int event_id) {
	// Get task back
	tasks_mutex.lock();
	std::shared_ptr<Task> task = tasks[event_id];
	tasks_mutex.unlock();

	return task->error;
}
extern "C" void dispose(int event_id) {
	// Remove from tasks
	tasks_mutex.lock();
	std::shared_ptr<Task> task = tasks[event_id];
	// free(task->data);
	tasks.erase(event_id);
	tasks_mutex.unlock();
}

using GLIssuePluginEvent = function_ptr_t<void, void*, int>;

GLIssuePluginEvent GetGLIssuePluginEvent() {
    static GLIssuePluginEvent issuePluginEvent = reinterpret_cast<GLIssuePluginEvent>(il2cpp_functions::resolve_icall("UnityEngine.GL::GLIssuePluginEvent"));
    return issuePluginEvent;
}
using namespace AsyncGPUReadbackPlugin;

DEFINE_TYPE(AsyncGPUReadbackPlugin, AsyncGPUReadbackPluginRequest);

void AsyncGPUReadbackPluginRequest::ctor(UnityEngine::Texture* src) {
    texture = src;
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
    //GetGLIssuePluginEvent()(reinterpret_cast<void*>(update_renderThread), eventId);
}

void AsyncGPUReadbackPluginRequest::Dispose() {
    dispose(eventId);
    //UnityEngine::RenderTexture::ReleaseTemporary((UnityEngine::RenderTexture*)texture);
}

void AsyncGPUReadbackPluginRequest::GetRawData(std::shared_ptr<std::vector<rgb24>>& buffer, size_t& length) {
    getData_mainThread(eventId, buffer, length);
}

AsyncGPUReadbackPluginRequest* AsyncGPUReadbackPlugin::Request(UnityEngine::Texture* src) {
    return il2cpp_utils::New<AsyncGPUReadbackPluginRequest*>(src).value();
}
