#pragma once

#include "main.hpp"
#include "HMUI/ViewController.hpp"

static ModInfo modInfo;

DECLARE_CLASS_CODEGEN(Replay, UIController, HMUI::ViewController,
    
    DECLARE_OVERRIDE_METHOD(void, DidActivate, il2cpp_utils::FindMethodUnsafe("HMUI", "ViewController", "DidActivate", 3), bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);

    REGISTER_FUNCTION(UIController,
        REGISTER_METHOD(DidActivate);
    )
)