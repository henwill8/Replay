#pragma once

#include "UnityEngine/Texture.hpp"

#include "custom-types/shared/macros.hpp"

struct rgb24
{
    uint8_t r;
    uint8_t g;
    uint8_t b;
};

DECLARE_CLASS_CODEGEN(AsyncGPUReadbackPlugin, AsyncGPUReadbackPluginRequest, Il2CppObject,

    DECLARE_INSTANCE_FIELD(int, eventId);
    DECLARE_INSTANCE_FIELD(UnityEngine::Texture*, texture);

    DECLARE_CTOR(ctor, UnityEngine::Texture* src);

    DECLARE_INSTANCE_METHOD(bool, IsDone);
    DECLARE_INSTANCE_METHOD(bool, HasError);

    DECLARE_INSTANCE_METHOD(void, Update);
    DECLARE_INSTANCE_METHOD(void, Dispose);

    public:
        void GetRawData(rgb24*& buffer, size_t& length) const;
)

namespace AsyncGPUReadbackPlugin {

    AsyncGPUReadbackPluginRequest* Request(UnityEngine::Texture* src);
    
}