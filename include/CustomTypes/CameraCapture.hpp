#pragma once
 
#include "AsyncGPUReadbackPluginRequest.hpp"
 
#include "UnityEngine/MonoBehaviour.hpp"
#include "UnityEngine/RenderTexture.hpp"
 
#include "System/Collections/Generic/List_1.hpp"
 
#include "video_recorder.hpp"
 
#include "custom-types/shared/macros.hpp"
 
DECLARE_CLASS_CODEGEN(Replay, CameraCapture, UnityEngine::MonoBehaviour,

    DECLARE_INSTANCE_FIELD(System::Collections::Generic::List_1<AsyncGPUReadbackPlugin::AsyncGPUReadbackPluginRequest*>*, requests);
 
    DECLARE_CTOR(ctor);
    DECLARE_SIMPLE_DTOR();
 
    DECLARE_METHOD(void, Update);
    
    DECLARE_METHOD(void, OnRenderImage, UnityEngine::RenderTexture* source, UnityEngine::RenderTexture* destination);
 
    REGISTER_FUNCTION(
        REGISTER_FIELD(requests);
 
        REGISTER_METHOD(ctor);
        REGISTER_SIMPLE_DTOR();
 
        REGISTER_METHOD(Update);
        //REGISTER_METHOD(OnRenderImage);
    )
)