#pragma once
 
#include "AsyncGPUReadbackPluginRequest.hpp"
 
#include "UnityEngine/MonoBehaviour.hpp"
#include "UnityEngine/RenderTexture.hpp"
 
#include "System/Collections/Generic/List_1.hpp"

#include "video_recorder.hpp"
 
#include "custom-types/shared/macros.hpp"
#include <experimental/coroutine>
#include "custom-types/shared/coroutine.hpp"

#include <memory>

DECLARE_CLASS_CODEGEN(Replay, CameraCapture, UnityEngine::MonoBehaviour,

private:

    std::shared_ptr<VideoCapture> capture;
    int frameRequestCount = 0;

    DECLARE_INSTANCE_FIELD(System::Collections::Generic::List_1<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest*>*, requests);
 
    DECLARE_CTOR(ctor);
    DECLARE_DTOR(dtor);
 
    DECLARE_INSTANCE_METHOD(void, Update);

    DECLARE_INSTANCE_METHOD(void, RequestFrame);

    DECLARE_INSTANCE_METHOD(void, OnPostRender);
    // UNCOMMENT LATER
//    DECLARE_INSTANCE_METHOD(void, OnRenderImage, UnityEngine::RenderTexture* source, UnityEngine::RenderTexture* destination);
)