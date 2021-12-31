#pragma once
#include "static-defines.hpp"

#include "HMUI/ViewController.hpp"

DECLARE_CLASS_CODEGEN(Replay::UI, ReplayViewController, HMUI::ViewController,

    /*named instance (no specific impl)*/
    
)

DECLARE_CLASS_CODEGEN(Replay::UI, ReplayButtonUI, UnityEngine::MonoBehaviour,
    static constexpr const char* Name = "ReplayButtonUI";
    
    DECLARE_INSTANCE_FIELD(SongBrowser::DataAccess::BeatSaberUIController*, beatUi);
    DECLARE_INSTANCE_FIELD(SongBrowser::UI::SongBrowserViewController*, viewController);
    
    DECLARE_INSTANCE_FIELD(UnityEngine::UI::Button*, replayButton);
    
    DECLARE_CTOR(ctor);

    bool uiCreated = false;
    
    public:
        void CreateUI(GlobalNamespace::MainMenuViewController::MenuButton mode);
)