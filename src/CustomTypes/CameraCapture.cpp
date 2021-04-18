#include "CustomTypes/CameraCapture.hpp"

#include "main.hpp"

#include <string>
#include "UnityEngine/WaitForEndOfFrame.hpp"

#include "UnityEngine/Graphics.hpp"

using namespace custom_types::Helpers;
using namespace Replay;
using namespace UnityEngine;

DEFINE_TYPE(CameraCapture);


void CameraCapture::ctor()
{
    capture = std::make_shared<VideoCapture>();
    requests = System::Collections::Generic::List_1<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest *>::New_ctor();
    capture->Init(1920, 1080, 30, 3000, true, "ultrafast", "/sdcard/video.h264");
}

extern UnityEngine::RenderTexture *texture;

custom_types::Helpers::Coroutine CameraCapture::RequestPixelsAtEndOfFrame() {
    co_yield reinterpret_cast<enumeratorT*>(WaitForEndOfFrame::New_ctor());

    if(capture->IsInitialized()) {
        if (requests->get_Count() < 8)
            requests->Add(AsyncGPUReadbackPlugin::Request(texture));
        // log("adding request");
    }
    std::vector<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest *> toRemove;
    for (int i = 0; i < requests->get_Count(); i++)
    {
        auto req = requests->get_Item(i);

        req->Update();

        if (req->HasError())
        {
            req->Dispose();
            toRemove.push_back(req);
        }
        else if (req->IsDone())
        {
            // log("Finished %d", i);
            size_t length;
            std::vector<rgb24> buffer;
            req->GetRawData(buffer, length);

//            log("Flip!");
//            // Reverse the array to make the frame not upside down
//            auto rgbData = reinterpret_cast<rgb24*>(buffer);
//
//            for (int j = 0; j < (length/2) - 1; j++) {
//                std::swap(rgbData[j], rgbData[length - j - 1]);
//            }


            capture->queueFrame(buffer);

            req->Dispose();
            toRemove.push_back(req);
        }
    }
    for (auto req : toRemove)
    {
        requests->Remove(req);
    }
}

// https://github.com/Alabate/AsyncGPUReadbackPlugin/blob/e8d5e52a9adba24bc0f652c39076404e4671e367/UnityExampleProject/Assets/Scripts/UsePlugin.cs#L13
void CameraCapture::Update()
{
    StartCoroutine(reinterpret_cast<enumeratorT*>(CoroutineHelper::New(RequestPixelsAtEndOfFrame())));
}

// void CameraCapture::OnRenderImage(RenderTexture *source, RenderTexture *destination)
// {
//     Graphics::Blit(source, destination);
//     // if (Time::get_frameCount() % 60 == 0) {
//     if (requests->get_Count() < 8)
//         requests->Add(AsyncGPUReadbackPlugin::Request(texture));
//     // }
// }