#include "CustomTypes/CameraCapture.hpp"

#include "main.hpp"

#include <string>
#include "UnityEngine/WaitForEndOfFrame.hpp"
#include "UnityEngine/WaitForSecondsRealtime.hpp"

#include "UnityEngine/Graphics.hpp"

using namespace custom_types::Helpers;
using namespace Replay;
using namespace UnityEngine;

DEFINE_TYPE(CameraCapture);

extern UnityEngine::RenderTexture *texture;

void CameraCapture::ctor()
{
    capture = std::make_shared<VideoCapture>();
    requests = System::Collections::Generic::List_1<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest *>::New_ctor();
    capture->Init(texture->get_width(), texture->get_height(), 30, 500, true, "ultrafast", "/sdcard/video.h264");

    StartCoroutine(reinterpret_cast<enumeratorT*>(CoroutineHelper::New(RequestPixelsAtEndOfFrame())));
}

// This requests frames at a time interval since we don't want 90frames/s
custom_types::Helpers::Coroutine CameraCapture::RequestPixelsAtEndOfFrame() {
    while (true) {
        co_yield reinterpret_cast<enumeratorT *>(WaitForSecondsRealtime::New_ctor(1.0f/capture->getFpsrate()));
//        co_yield reinterpret_cast<enumeratorT *>(WaitForEndOfFrame::New_ctor()); TODO: Do we need this?

        if (capture->IsInitialized()) {
            if (requests->get_Count() <= 10)
                requests->Add(AsyncGPUReadbackPlugin::Request(texture));

            // log("adding request");
        }

    }
}

// https://github.com/Alabate/AsyncGPUReadbackPlugin/blob/e8d5e52a9adba24bc0f652c39076404e4671e367/UnityExampleProject/Assets/Scripts/UsePlugin.cs#L13
void CameraCapture::Update()
{
    std::vector<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest *> toRemove;
    for (int i = 0; i < requests->get_Count(); i++) {
        auto req = requests->get_Item(i);

//        req->Update();

        if (req->HasError()) {
            req->Dispose();
            toRemove.push_back(req);
        } else if (req->IsDone()) {
            // log("Finished %d", i);
            size_t length;
            std::shared_ptr<std::vector<rgb24>> buffer;
            req->GetRawData(buffer, length);

            capture->queueFrame(buffer);

            req->Dispose();
            toRemove.push_back(req);
        }
    }
    for (auto req : toRemove) {
        requests->Remove(req);
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