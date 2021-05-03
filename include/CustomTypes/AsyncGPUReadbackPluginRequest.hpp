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

    DECLARE_METHOD(bool, IsDone);
    DECLARE_METHOD(bool, HasError);

    DECLARE_METHOD(void, Update);
    DECLARE_METHOD(void, Dispose);

    public:
        void GetRawData(std::shared_ptr<std::vector<rgb24>>& buffer, size_t& length);

    REGISTER_FUNCTION(
        REGISTER_FIELD(eventId);
        REGISTER_FIELD(texture);

        REGISTER_METHOD(ctor);

        REGISTER_METHOD(IsDone);
        REGISTER_METHOD(HasError);

        REGISTER_METHOD(Update);
        REGISTER_METHOD(Dispose);
    )
)

namespace AsyncGPUReadbackPlugin {

    AsyncGPUReadbackPluginRequest* Request(UnityEngine::Texture* src);
    
    static bool ReadPixels = true;
}