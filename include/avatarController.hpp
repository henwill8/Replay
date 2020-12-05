#pragma once

#include "main.hpp"
#include "UnityEngine/MonoBehaviour.hpp"

DECLARE_CLASS_CODEGEN(Replay, AvatarController, UnityEngine::MonoBehaviour,

    DECLARE_METHOD(void, Start);
    DECLARE_METHOD(void, Update);
    
    REGISTER_FUNCTION(AvatarController,
        REGISTER_METHOD(Start);
        REGISTER_METHOD(Update);
    )
)