#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/LevelBar.hpp"
#include "UnityEngine/GameObject.hpp"
#include "TMPro/TextMeshProUGUI.hpp"

#include "custom-types/shared/macros.hpp"
#include "HMUI/ViewController.hpp"

#include "System/Collections/IEnumerator.hpp"
#include "custom-types/shared/coroutine.hpp"
#include "UnityEngine/WaitForSeconds.hpp"

DECLARE_CLASS_CODEGEN(Replay::UI, ReplayViewController, HMUI::ViewController,
    
    DECLARE_OVERRIDE_METHOD(void, DidActivate, il2cpp_utils::FindMethodUnsafe("HMUI", "ViewController", "DidActivate", 3), bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    
    public:
        void Init();
        
        UnityEngine::GameObject* levelBar;

        TMPro::TextMeshProUGUI* dateText;
        TMPro::TextMeshProUGUI* scoreOrFailedText;
        TMPro::TextMeshProUGUI* modifiersText;
        
        TMPro::TextMeshProUGUI* averageCutScoreText;
        TMPro::TextMeshProUGUI* missedNotesText;
        TMPro::TextMeshProUGUI* maxComboText;
)