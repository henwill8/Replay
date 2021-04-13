#include "CustomTypes/CameraCapture.hpp"

#include "main.hpp"

#include <string>

#include "UnityEngine/Graphics.hpp"

using namespace Replay;
using namespace UnityEngine;

DEFINE_TYPE(CameraCapture);

VideoCapture capture;

std::list<void*> framebuffers;

void encodeFrames() {
    log("Starting encoding thread");
    
    // while(capture.IsInitialized() || framebuffers.size() > 0) {
    //     if(framebuffers.size() > 0) {
    //         log("size is %i", framebuffers.size());
    //         capture.AddFrame((rgb24*)framebuffers.front());
    //         framebuffers.erase(framebuffers.begin());
    //     }
    // }
    log("Ending encoding thread");
}

void CameraCapture::ctor() {
	requests = System::Collections::Generic::List_1<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest*>::New_ctor();
	capture.Init(1920, 1080, 12, 3000, true, "ultrafast", "/sdcard/video.h264");

    std::thread encodingThread(encodeFrames);

    encodingThread.join();
}

extern UnityEngine::RenderTexture* texture;

void CameraCapture::Update() {
	if(capture.FrameCount() > 2000 && capture.IsInitialized()) {
        log("Finished file");
        capture.Finish();
	}
	if (Time::get_frameCount() % 1 == 0) {
		if(requests->get_Count() < 8)
			requests->Add(AsyncGPUReadbackPlugin::Request(texture));
    }
	std::vector<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest*> toRemove;
	for(int i = 0; i < requests->get_Count(); i++) {
		auto req = requests->get_Item(i);

		req->Update();

		if (req->HasError()) {
			req->Dispose();
			toRemove.push_back(req);
		} else if (req->IsDone()) {
			log("Finished %d", i);
			size_t length;
			void* buffer;
			req->GetRawData(buffer, length);
            framebuffers.push_back(buffer);
			req->Dispose();
			toRemove.push_back(req);
		}
	}
	for(auto req : toRemove) {
		requests->Remove(req);
	}
}

void CameraCapture::OnRenderImage(RenderTexture* source, RenderTexture* destination) {
    Graphics::Blit(source, destination);
   	// if (Time::get_frameCount() % 60 == 0) {
		if(requests->get_Count() < 8)
			requests->Add(AsyncGPUReadbackPlugin::Request(texture));
    // }
}
