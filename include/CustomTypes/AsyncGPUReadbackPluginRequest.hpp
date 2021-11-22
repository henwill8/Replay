#pragma once

#include "UnityEngine/Texture.hpp"
#include "UnityEngine/RenderTexture.hpp"

#include "custom-types/shared/macros.hpp"

struct rgb24
{
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

constexpr static size_t calculateFrameSize(uint32_t width, uint32_t height) {
    return sizeof(rgb24) * width * height;
}

DECLARE_CLASS_CODEGEN(AsyncGPUReadbackPlugin, AsyncGPUReadbackPluginRequest, Il2CppObject,
    DECLARE_INSTANCE_FIELD(bool, disposed);
    DECLARE_INSTANCE_FIELD(int, eventId);
    DECLARE_INSTANCE_FIELD(bool, tempTexture);
    DECLARE_INSTANCE_FIELD(UnityEngine::RenderTexture*, texture);

    DECLARE_CTOR(ctor, UnityEngine::RenderTexture* src);
    DECLARE_SIMPLE_DTOR();

    DECLARE_INSTANCE_METHOD(bool, IsDone);
    DECLARE_INSTANCE_METHOD(bool, HasError);

    DECLARE_INSTANCE_METHOD(void, Update);
    DECLARE_INSTANCE_METHOD(void, Dispose);

    public:
        void GetRawData(rgb24*& buffer, size_t& length) const;
        ~AsyncGPUReadbackPluginRequest();
)

namespace AsyncGPUReadbackPlugin {

    AsyncGPUReadbackPluginRequest* Request(UnityEngine::RenderTexture* src);
    
}