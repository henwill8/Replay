// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: MenuButton because it is already included!
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainMenuViewController
  class MainMenuViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MainMenuViewController::MenuButton
    struct MenuButton;
    // Autogenerated type: MainMenuViewController/MenuButton
    struct MenuButton : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: MenuButton
      constexpr MenuButton(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MainMenuViewController/MenuButton SoloFreePlay
      static constexpr const int SoloFreePlay = 0;
      // Get static field: static public MainMenuViewController/MenuButton SoloFreePlay
      static GlobalNamespace::MainMenuViewController::MenuButton _get_SoloFreePlay();
      // Set static field: static public MainMenuViewController/MenuButton SoloFreePlay
      static void _set_SoloFreePlay(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Party
      static constexpr const int Party = 1;
      // Get static field: static public MainMenuViewController/MenuButton Party
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Party();
      // Set static field: static public MainMenuViewController/MenuButton Party
      static void _set_Party(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton BeatmapEditor
      static constexpr const int BeatmapEditor = 2;
      // Get static field: static public MainMenuViewController/MenuButton BeatmapEditor
      static GlobalNamespace::MainMenuViewController::MenuButton _get_BeatmapEditor();
      // Set static field: static public MainMenuViewController/MenuButton BeatmapEditor
      static void _set_BeatmapEditor(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton SoloCampaign
      static constexpr const int SoloCampaign = 3;
      // Get static field: static public MainMenuViewController/MenuButton SoloCampaign
      static GlobalNamespace::MainMenuViewController::MenuButton _get_SoloCampaign();
      // Set static field: static public MainMenuViewController/MenuButton SoloCampaign
      static void _set_SoloCampaign(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton FloorAdjust
      static constexpr const int FloorAdjust = 4;
      // Get static field: static public MainMenuViewController/MenuButton FloorAdjust
      static GlobalNamespace::MainMenuViewController::MenuButton _get_FloorAdjust();
      // Set static field: static public MainMenuViewController/MenuButton FloorAdjust
      static void _set_FloorAdjust(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Quit
      static constexpr const int Quit = 5;
      // Get static field: static public MainMenuViewController/MenuButton Quit
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Quit();
      // Set static field: static public MainMenuViewController/MenuButton Quit
      static void _set_Quit(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Multiplayer
      static constexpr const int Multiplayer = 6;
      // Get static field: static public MainMenuViewController/MenuButton Multiplayer
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Multiplayer();
      // Set static field: static public MainMenuViewController/MenuButton Multiplayer
      static void _set_Multiplayer(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton Options
      static constexpr const int Options = 7;
      // Get static field: static public MainMenuViewController/MenuButton Options
      static GlobalNamespace::MainMenuViewController::MenuButton _get_Options();
      // Set static field: static public MainMenuViewController/MenuButton Options
      static void _set_Options(GlobalNamespace::MainMenuViewController::MenuButton value);
      // static field const value: static public MainMenuViewController/MenuButton HowToPlay
      static constexpr const int HowToPlay = 8;
      // Get static field: static public MainMenuViewController/MenuButton HowToPlay
      static GlobalNamespace::MainMenuViewController::MenuButton _get_HowToPlay();
      // Set static field: static public MainMenuViewController/MenuButton HowToPlay
      static void _set_HowToPlay(GlobalNamespace::MainMenuViewController::MenuButton value);
    }; // MainMenuViewController/MenuButton
    // private UnityEngine.UI.Button _soloButton
    // Offset: 0x70
    UnityEngine::UI::Button* soloButton;
    // private UnityEngine.UI.Button _partyButton
    // Offset: 0x78
    UnityEngine::UI::Button* partyButton;
    // private UnityEngine.UI.Button _campaignButton
    // Offset: 0x80
    UnityEngine::UI::Button* campaignButton;
    // private UnityEngine.UI.Button _quitButton
    // Offset: 0x88
    UnityEngine::UI::Button* quitButton;
    // private UnityEngine.UI.Button _howToPlayButton
    // Offset: 0x90
    UnityEngine::UI::Button* howToPlayButton;
    // private UnityEngine.UI.Button _beatmapEditorButton
    // Offset: 0x98
    UnityEngine::UI::Button* beatmapEditorButton;
    // private UnityEngine.UI.Button _multiplayerButton
    // Offset: 0xA0
    UnityEngine::UI::Button* multiplayerButton;
    // private UnityEngine.UI.Button _optionsButton
    // Offset: 0xA8
    UnityEngine::UI::Button* optionsButton;
    // private System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> didFinishEvent
    // Offset: 0xB0
    System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* didFinishEvent;
    // public System.Void add_didFinishEvent(System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> value)
    // Offset: 0x1A6C5FC
    void add_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* value);
    // public System.Void remove_didFinishEvent(System.Action`2<MainMenuViewController,MainMenuViewController/MenuButton> value)
    // Offset: 0x1A6CE28
    void remove_didFinishEvent(System::Action_2<GlobalNamespace::MainMenuViewController*, GlobalNamespace::MainMenuViewController::MenuButton>* value);
    // private System.Void HandleMenuButton(MainMenuViewController/MenuButton menuButton)
    // Offset: 0x1A6EDF8
    void HandleMenuButton(GlobalNamespace::MainMenuViewController::MenuButton menuButton);
    // private System.Void <DidActivate>b__12_0()
    // Offset: 0x1A6EE78
    void $DidActivate$b__12_0();
    // private System.Void <DidActivate>b__12_1()
    // Offset: 0x1A6EE80
    void $DidActivate$b__12_1();
    // private System.Void <DidActivate>b__12_2()
    // Offset: 0x1A6EE88
    void $DidActivate$b__12_2();
    // private System.Void <DidActivate>b__12_3()
    // Offset: 0x1A6EE90
    void $DidActivate$b__12_3();
    // private System.Void <DidActivate>b__12_4()
    // Offset: 0x1A6EE98
    void $DidActivate$b__12_4();
    // private System.Void <DidActivate>b__12_5()
    // Offset: 0x1A6EEA0
    void $DidActivate$b__12_5();
    // private System.Void <DidActivate>b__12_6()
    // Offset: 0x1A6EEA8
    void $DidActivate$b__12_6();
    // private System.Void <DidActivate>b__12_7()
    // Offset: 0x1A6EEB0
    void $DidActivate$b__12_7();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1A6EB44
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x1A6EE70
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MainMenuViewController* New_ctor();
  }; // MainMenuViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuViewController*, "", "MainMenuViewController");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainMenuViewController::MenuButton, "", "MainMenuViewController/MenuButton");
#pragma pack(pop)