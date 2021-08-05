#include "CustomTypes/CameraCapture.hpp"

#include "main.hpp"

#include "beatsaber-hook/shared/utils/il2cpp-type-check.hpp"

#include <string>

#include "UnityEngine/WaitForEndOfFrame.hpp"
#include "UnityEngine/WaitForSecondsRealtime.hpp"
#include "UnityEngine/RenderTextureFormat.hpp"
#include "UnityEngine/RenderTexture.hpp"
#include "UnityEngine/RenderTextureReadWrite.hpp"
#include "UnityEngine/TextureWrapMode.hpp"
#include "UnityEngine/FilterMode.hpp"

#include "UnityEngine/Graphics.hpp"

using namespace custom_types::Helpers;
using namespace Replay;
using namespace UnityEngine;

DEFINE_TYPE(Replay, CameraCapture);

extern UnityEngine::RenderTexture *texture;

std::optional<std::chrono::time_point<std::chrono::steady_clock>> lastRecordedTime;

template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<&RequestList::get_Count> {
    static const MethodInfo* get() {
        return THROW_UNLESS((::il2cpp_utils::FindMethod(classof(RequestList*), "get_Count", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{})));
    }
};

template<>
struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<&RequestList::get_Item> {
    static const MethodInfo* get() {
        int index = 0;
        return THROW_UNLESS((::il2cpp_utils::FindMethod(classof(RequestList*), "get_Item", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::il2cpp_utils::ExtractType(index)})));
    }
};

void CameraCapture::ctor()
{
    INVOKE_CTOR();
    capture = std::make_shared<VideoCapture>();
    requests = System::Collections::Generic::List_1<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest *>::New_ctor();
    capture->Init(texture->get_width(), texture->get_height(), 45, 500, true, "ultrafast", "/sdcard/video.h264");

    if (slowGameRender) {
        Time::set_captureDeltaTime(1.0f / capture->getFpsrate());
    }

    // StartCoroutine(reinterpret_cast<enumeratorT*>(CoroutineHelper::New(RequestPixelsAtEndOfFrame())));
//    UnityEngine::MonoBehaviour::InvokeRepeating(newcsstr("RequestFrame"), 1.0f, 1.0f/capture->getFpsrate());
}

void CameraCapture::RequestFrame() {
    frameRequestCount++;
}
UnityEngine::RenderTexture* _RecycledRenderTexture;

UnityEngine::RenderTexture* GetTemporaryRenderTexture(VideoCapture* capture, int format)
{
    auto rt = _RecycledRenderTexture;
    _RecycledRenderTexture = nullptr;

    if (rt != nullptr) return rt;

    rt = RenderTexture::GetTemporary(capture->getWidth(), capture->getHeight(), 0, (RenderTextureFormat) format, RenderTextureReadWrite::Default);
    rt->set_wrapMode(TextureWrapMode::Clamp);
    rt->set_filterMode(FilterMode::Bilinear);

    return rt;
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

        auto targetRenderTexture = GetTemporaryRenderTexture(capture.get(), source->get_format());

        UnityEngine::RenderTexture::set_active(targetRenderTexture);


        Graphics::Blit(source, targetRenderTexture);

        if (capture->IsInitialized()) {
            if (requests->get_Count() <= 10) {

                log("Requesting! %dx%d", targetRenderTexture->GetDataWidth(), targetRenderTexture->GetDataHeight());
                requests->Add(AsyncGPUReadbackPlugin::Request(targetRenderTexture));
            } else {
                log("Too many requests currently, not adding more");
            }
        }
    }

    UnityEngine::Graphics::Blit(source, destination);
}

void CameraCapture::OnPostRender() {
    if (slowGameRender) {
        return;
    }

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

    // render = frameRequestCount > 0

    if (render) {

        auto startTime = std::chrono::high_resolution_clock::now();

        if (capture->IsInitialized() && texture->m_CachedPtr.m_value != nullptr) {
            static auto get_Count = FPtrWrapper<&RequestList::get_Count>::get();

            if (get_Count(requests) <= 10) {
                // This is unnnecessary work, no worky
//                auto targetRenderTexture = GetTemporaryRenderTexture(capture.get(), texture->get_format());
//
//                UnityEngine::RenderTexture::set_active(targetRenderTexture);
//
//
//                Graphics::Blit(texture, targetRenderTexture);

                requests->Add(AsyncGPUReadbackPlugin::Request(texture));
            } else {
                log("Too many requests currently, not adding more");
            }

        } else if(texture->m_CachedPtr.m_value == nullptr) {
            log("ERROR: Texture is null, can't add frame!");
        }

        auto endTime = std::chrono::high_resolution_clock::now();

        int64_t duration = std::chrono::duration_cast<std::chrono::milliseconds>(endTime - startTime).count();

        // The time consumption is from AsyncGPUReadbackPlugin::Request which is weird since it's a callback
        log("Took %lldms to create request, remaining requests to process %d", (long long) duration, frameRequestCount);

        frameRequestCount--;
    }
}

// https://github.com/Alabate/AsyncGPUReadbackPlugin/blob/e8d5e52a9adba24bc0f652c39076404e4671e367/UnityExampleProject/Assets/Scripts/UsePlugin.cs#L13
void CameraCapture::Update()
{
    
    std::vector<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest *> toRemove;

    static auto get_Count = FPtrWrapper<&RequestList::get_Count>::get();
    static auto get_Item = FPtrWrapper<&RequestList::get_Item>::get();

    if (slowGameRender) {
        // Force the game to wait until ffmpeg rendered a frame.
        AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest *request;

        if (get_Count(requests) == 0) {
            request = AsyncGPUReadbackPlugin::Request(texture);
            requests->Add(request);
        } else {
            request = get_Item(requests, 0);
        }

        CRASH_UNLESS(request); // should not happen

        // TODO: Should we lock on waiting for the request to be done? Would that cause the OpenGL thread to freeze?
        //  while (!(request->HasError() || request->IsDone())) continue;

        if (!request->HasError() && request->IsDone()) {
            size_t length;
            rgb24 *buffer;
            request->GetRawData(buffer, length);

            auto frameStatus = capture->queueFrame(buffer);

            // Lock. Sleep to save CPU cycles?
            while (!frameStatus->encoded)
                continue;
        }

        if (request->HasError() || request->IsDone()) {
            request->Dispose();
            requests->Remove(request);
        }

    } else {
        for (int i = 0; i < get_Count(requests); i++) {
            auto req = get_Item(requests, i);

            if (capture->IsInitialized() && texture->m_CachedPtr.m_value != nullptr) {
                req->Update();

                if (req->HasError()) {
                    req->Dispose();
                    toRemove.push_back(req);
                } else if (req->IsDone()) {
                    // log("Finished %d", i);
                    size_t length;
                    rgb24 *buffer;
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
}

void CameraCapture::dtor() {
    log("Camera Capture is being destroyed, finishing the capture");
    capture->Finish();
    CancelInvoke();
    if (slowGameRender) {
        Time::set_captureDeltaTime(0.0f);
    }
}

// void CameraCapture::OnRenderImage(RenderTexture *source, RenderTexture *destination)
// {
//     Graphics::Blit(source, destination);
//     // if (Time::get_frameCount() % 60 == 0) {
//     if (requests->get_Count() < 8)
//         requests->Add(AsyncGPUReadbackPlugin::Request(texture));
//     // }
// }