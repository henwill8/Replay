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
 
    DECLARE_METHOD(void, Update);

    DECLARE_METHOD(void, RequestFrame);

    DECLARE_METHOD(void, OnPostRender);
    DECLARE_METHOD(void, OnRenderImage, UnityEngine::RenderTexture* source, UnityEngine::RenderTexture* destination);
 
    REGISTER_FUNCTION(
        REGISTER_FIELD(requests);
 
        REGISTER_METHOD(ctor);
        REGISTER_METHOD(dtor);
 
        REGISTER_METHOD(Update);
        REGISTER_METHOD(RequestFrame);
        REGISTER_METHOD(OnPostRender);
        //REGISTER_METHOD(OnRenderImage);
    )
)