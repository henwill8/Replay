#include "CustomTypes/CameraCapture.hpp"

#include "main.hpp"

#include <string>
#include "UnityEngine/WaitForEndOfFrame.hpp"
#include "UnityEngine/WaitForSecondsRealtime.hpp"

#include "UnityEngine/Graphics.hpp"

using namespace custom_types::Helpers;
using namespace Replay;
using namespace UnityEngine;

DEFINE_TYPE(Replay, CameraCapture);

extern UnityEngine::RenderTexture *texture;

extern float songTime;
extern float maxSongTime;
std::optional<std::chrono::time_point<std::chrono::steady_clock>> lastRecordedTime;

void CameraCapture::ctor()
{
    capture = std::make_shared<VideoCapture>();
    requests = System::Collections::Generic::List_1<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest *>::New_ctor();
    capture->Init(texture->get_width(), texture->get_height(), 45, 500, true, "ultrafast", "/sdcard/video.h264");



    // StartCoroutine(reinterpret_cast<enumeratorT*>(CoroutineHelper::New(RequestPixelsAtEndOfFrame())));
    UnityEngine::MonoBehaviour::InvokeRepeating(newcsstr("RequestFrame"), 1.0f, 1.0f/capture->getFpsrate());
}

void CameraCapture::RequestFrame() {
    frameRequestCount++;
}


void CameraCapture::OnRenderImage(UnityEngine::RenderTexture *source, UnityEngine::RenderTexture *destination) {
    bool render = false;

    if (!lastRecordedTime) {
        render = true;
    }

    if (!render) {
        auto currentTime = std::chrono::high_resolution_clock::now();

        int64_t duration = std::chrono::duration_cast<std::chrono::seconds>(currentTime - lastRecordedTime.value()).count();

        if ((float) duration >= 1.0f/capture->getFpsrate()) {
            render = true;
        }
    }




    if (render) {
        // TODO: Fix the 16x16 render texture to higher res
        lastRecordedTime = std::chrono::high_resolution_clock::now();
        UnityEngine::Graphics::Blit(source, destination);

        if (capture->IsInitialized()) {
            if (requests->get_Count() <= 10) {

                log("Requesting! %dx%d", source->GetDataWidth(), source->GetDataHeight());
                requests->Add(AsyncGPUReadbackPlugin::Request(source));
            } else {
                log("Too many requests currently, not adding more");
            }
        }
    }
}

void CameraCapture::OnPostRender() {
    if (frameRequestCount > 0) {

        auto startTime = std::chrono::high_resolution_clock::now();

        if (capture->IsInitialized() && texture->m_CachedPtr.m_value != nullptr) {
            if (requests->get_Count() <= 10) {
                requests->Add(AsyncGPUReadbackPlugin::Request(texture));
            } else {
                log("Too many requests currently, not adding more");
            }
        } else if(texture->m_CachedPtr.m_value == nullptr) {
            log("ERROR: Texture is null, can't add frame!");
        }

        auto endTime = std::chrono::high_resolution_clock::now();

        int64_t duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();

        log("Took %ldms to create request, remaining requests to process %d", duration, frameRequestCount);

        frameRequestCount--;
    }
}

// https://github.com/Alabate/AsyncGPUReadbackPlugin/blob/e8d5e52a9adba24bc0f652c39076404e4671e367/UnityExampleProject/Assets/Scripts/UsePlugin.cs#L13
void CameraCapture::Update()
{
    
    std::vector<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest *> toRemove;

    for (int i = 0; i < requests->get_Count(); i++) {
        auto req = requests->get_Item(i);

        if(capture->IsInitialized() && texture->m_CachedPtr.m_value != nullptr) {
            req->Update();

            if (req->HasError()) {
                req->Dispose();
                toRemove.push_back(req);
            } else if (req->IsDone()) {
                // log("Finished %d", i);
                size_t length;
                rgb24* buffer;
                req->GetRawData(buffer, length);

                capture->queueFrame(buffer);

                req->Dispose();
                toRemove.push_back(req);
            } else
                break;
        } else {
            req->Dispose();
            toRemove.push_back(req);
        }
    }
    for (auto req : toRemove) {
        requests->Remove(req);
    }
}

void CameraCapture::dtor() {
    log("Camera Capture is being destroyed, finishing the capture");
    capture->Finish();
    CancelInvoke();
}

// void CameraCapture::OnRenderImage(RenderTexture *source, RenderTexture *destination)
// {
//     Graphics::Blit(source, destination);
//     // if (Time::get_frameCount() % 60 == 0) {
//     if (requests->get_Count() < 8)
//         requests->Add(AsyncGPUReadbackPlugin::Request(texture));
//     // }
// }