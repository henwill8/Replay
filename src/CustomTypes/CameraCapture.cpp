#include "CustomTypes/CameraCapture.hpp"

#include "hollywood/video_recorder.hpp"

#include "main.hpp"
#include "gc-util.hpp"

#include <string>

using namespace custom_types::Helpers;
using namespace Replay;
using namespace UnityEngine;

DEFINE_TYPE(Replay, CameraCapture);

// TODO: This should be injected by constructor and allow modification at runtime e.g setCameraTexture
extern UnityEngine::RenderTexture *texture;

std::optional<std::chrono::time_point<std::chrono::steady_clock>> lastRecordedTime;

void CameraCapture::ctor()
{
    // TODO: Inject this through `Init` method?
    requests = RequestList();
    log("Making video capture");
    movieModeRendering = true; // todo: make this constructor param or set if get_captureDeltaTime is non-zero?
    maxFramesAllowedInQueue = 10;

    capture = std::make_unique<VideoCapture>(texture->get_width(), texture->get_height(), 60, 30000, !movieModeRendering, "faster", "/sdcard/video.h264");

    // TODO: This should be handled externally
    if (movieModeRendering) {
        log("Going to set time delta");
        Time::set_captureDeltaTime(1.0f / capture->getFpsRate());
        log("Set the delta time");
    }
    // StartCoroutine(reinterpret_cast<enumeratorT*>(CoroutineHelper::New(RequestPixelsAtEndOfFrame())));
//    UnityEngine::MonoBehaviour::InvokeRepeating(newcsstr("RequestFrame"), 1.0f, 1.0f/capture->getFpsrate());
}

void CameraCapture::RequestFrame() {
    frameRequestCount++;
}

UnityEngine::RenderTexture* GetTemporaryRenderTexture(Hollywood::AbstractVideoEncoder* capture, int format)
{
    UnityEngine::RenderTexture* rt = RenderTexture::GetTemporary(capture->getWidth(), capture->getHeight(), 0, (RenderTextureFormat) format, RenderTextureReadWrite::Default);
    rt->set_wrapMode(TextureWrapMode::Clamp);
    rt->set_filterMode(FilterMode::Bilinear);

    return rt;
}

#pragma region deprecated
// TODO: Remove?
void CameraCapture::OnRenderImage(UnityEngine::RenderTexture *source, UnityEngine::RenderTexture *destination) {
    bool render = false;

    if (!lastRecordedTime) {
        render = true;
    }

    if (!render) {
        auto currentTime = std::chrono::high_resolution_clock::now();

        int64_t duration = std::chrono::duration_cast<std::chrono::seconds>(currentTime - lastRecordedTime.value()).count();

        if ((float) duration >= 1.0f/capture->getFpsRate()) {
            render = true;
        }
    }




    if (render) {
        // TODO: Fix the 16x16 render texture to higher res
        lastRecordedTime = std::chrono::high_resolution_clock::now();

        auto targetRenderTexture = GetTemporaryRenderTexture(capture.get(), source->get_format());

        UnityEngine::RenderTexture::set_active(targetRenderTexture);


        Graphics::Blit(source, targetRenderTexture);

        if (capture->isInitialized()) {
            if (requests.size() <= 10) {

                // log("Requesting! %dx%d", targetRenderTexture->GetDataWidth(), targetRenderTexture->GetDataHeight());
                requests.push_back(AsyncGPUReadbackPlugin::Request(targetRenderTexture));
            } else {
                // log("Too many requests currently, not adding more");
            }
        }
    }

    UnityEngine::Graphics::Blit(source, destination);
}

#pragma endregion

void CameraCapture::OnPostRender() {
    if (movieModeRendering) {
        return;
    }

    bool render = false;

    if (!lastRecordedTime) {
        render = true;
    }

    if (!render) {
        auto currentTime = std::chrono::high_resolution_clock::now();

        int64_t duration = std::chrono::duration_cast<std::chrono::seconds>(currentTime - lastRecordedTime.value()).count();

        if ((float) duration >= 1.0f/capture->getFpsRate()) {
            render = true;
        }
    }

    // render = frameRequestCount > 0

    if (render) {

        auto startTime = std::chrono::high_resolution_clock::now();

        if (capture->isInitialized() && texture->m_CachedPtr.m_value != nullptr) {
            if (capture->approximateFramesToRender() < maxFramesAllowedInQueue && requests.size() <= 10) {
                requests.push_back(AsyncGPUReadbackPlugin::Request(texture));
            } else {
                 log("Too many requests currently, not adding more");
            }

        } else if(texture->m_CachedPtr.m_value == nullptr) {
            log("ERROR: Texture is null, can't add frame!");
        }

        auto endTime = std::chrono::high_resolution_clock::now();

        int64_t duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();

        // The time consumption is from AsyncGPUReadbackPlugin::Request which is weird since it's a callback
        // log("Took %lldms to create request, remaining requests to process %d", (long long) duration, frameRequestCount);

        frameRequestCount--;
    }
}


// https://github.com/Alabate/AsyncGPUReadbackPlugin/blob/e8d5e52a9adba24bc0f652c39076404e4671e367/UnityExampleProject/Assets/Scripts/UsePlugin.cs#L13
void CameraCapture::Update() {
    if (!(capture->isInitialized() && texture->m_CachedPtr.m_value != nullptr))
        return;



    if (movieModeRendering) {
        // Add requests over time?
        auto newTexture = GetProperTexture();

        requests.push_back(AsyncGPUReadbackPlugin::Request(newTexture));
    }

    // log("Request count %i", count);

    auto it = requests.begin();
    while (it != requests.end()) {
        AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest* req = *it;
        bool remove = false;

        if (capture->isInitialized() && texture->m_CachedPtr.m_value != nullptr) {
            req->Update();

            if (movieModeRendering) {
                // TODO: Should we lock on waiting for the request to be done? Would that cause the OpenGL thread to freeze?
                // This doesn't freeze OpenGL. Should this still be done though?
                while (!(req->HasError() || req->IsDone())) {
                    req->Update();
                    std::this_thread::yield();
                }


                // This is to avoid having a frame queue so big that you run out of memory.
                if (req->IsDone() && !req->HasError() && maxFramesAllowedInQueue > 0) {
                    while (capture->approximateFramesToRender() >= maxFramesAllowedInQueue) {
                        std::this_thread::yield();
                    }
                }
            }

            if (req->HasError()) {
                req->Dispose();
                remove = true;
            } else if (req->IsDone()) {
                // log("Finished %d", i);
                size_t length;
                rgb24 *buffer;
                req->GetRawData(buffer, length);

                if (movieModeRendering) {
                    capture->queueFrame(buffer, std::nullopt);
                } else {
                    capture->queueFrame(buffer, UnityEngine::Time::get_time()); // todo: is this the right time method?
                }

                req->Dispose();
                remove = true;
            }
        } else {
            req->Dispose();
            remove = true;
        }
        if (remove) {
            it = requests.erase(it);
        } else {
            it++;
        }
    }

}

void CameraCapture::dtor() {
    log("Camera Capture is being destroyed, finishing the capture");
    for (auto& req : requests) {
        req->Dispose();
    }
    capture.reset(); // force delete of video capture
    CancelInvoke();

    // todo: this shouldn't be done by CameraCapture, rather externally
    if (movieModeRendering) {
        Time::set_captureDeltaTime(0.0f);
    }
    this->~CameraCapture();
}


RenderTexture* CameraCapture::GetProperTexture() {
    return texture;
}