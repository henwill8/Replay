#include "CustomTypes/CameraCapture.hpp"

#include "main.hpp"

#include <string>

#include "UnityEngine/Graphics.hpp"

using namespace Replay;
using namespace UnityEngine;

DEFINE_TYPE(CameraCapture);

VideoCapture capture;

void CameraCapture::ctor()
{
    INVOKE_CTOR();
    requests = System::Collections::Generic::List_1<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest *>::New_ctor();
    capture.Init(1920, 1080, 12, 3000, true, "ultrafast", "/sdcard/video.h264");
}

extern UnityEngine::RenderTexture *texture;

void CameraCapture::Update()
{
    if (capture.FrameCount() > 200 && capture.IsInitialized()) {
        log("Finished file");
        capture.CloseFile();
    } else {
        if (requests->get_Count() < 8)
            requests->Add(AsyncGPUReadbackPlugin::Request(texture));
        log("adding request");
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
            void *buffer;
            req->GetRawData(buffer, length);
            capture.queueFrame(buffer);

            req->Dispose();
            toRemove.push_back(req);
        }
    }
    for (auto req : toRemove)
    {
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