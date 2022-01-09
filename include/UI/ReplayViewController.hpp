#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/LevelBar.hpp"
#include "UnityEngine/GameObject.hpp"

#include "custom-types/shared/macros.hpp"
#include "HMUI/ViewController.hpp"

DECLARE_CLASS_CODEGEN(Replay::UI, ReplayViewController, HMUI::ViewController,
    
    DECLARE_OVERRIDE_METHOD(void, DidActivate, il2cpp_utils::FindMethodUnsafe("HMUI", "ViewController", "DidActivate", 3), bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    
    public:
        void Init();
        
        UnityEngine::GameObject* levelBar;
)