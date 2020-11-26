// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: EditableBeatmapSelectionView
  class EditableBeatmapSelectionView;
  // Forward declaring type: EditableModifiersSelectionView
  class EditableModifiersSelectionView;
  // Forward declaring type: ServerCodeView
  class ServerCodeView;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
  // Forward declaring type: MultiplayerLobbyState
  struct MultiplayerLobbyState;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ClientLobbySetupViewController
  class ClientLobbySetupViewController : public HMUI::ViewController {
    public:
    // private UnityEngine.UI.Button _readyButton
    // Offset: 0x70
    UnityEngine::UI::Button* readyButton;
    // private UnityEngine.UI.Button _unreadyButton
    // Offset: 0x78
    UnityEngine::UI::Button* unreadyButton;
    // private UnityEngine.UI.Toggle _spectateToggle
    // Offset: 0x80
    UnityEngine::UI::Toggle* spectateToggle;
    // private EditableBeatmapSelectionView _editableBeatmapSelectionView
    // Offset: 0x88
    GlobalNamespace::EditableBeatmapSelectionView* editableBeatmapSelectionView;
    // private EditableModifiersSelectionView _editableModifiersSelectionView
    // Offset: 0x90
    GlobalNamespace::EditableModifiersSelectionView* editableModifiersSelectionView;
    // private ServerCodeView _serverCodeView
    // Offset: 0x98
    GlobalNamespace::ServerCodeView* serverCodeView;
    // private System.Action suggestBeatmapEvent
    // Offset: 0xA0
    System::Action* suggestBeatmapEvent;
    // private System.Action clearSuggestedBeatmapEvent
    // Offset: 0xA8
    System::Action* clearSuggestedBeatmapEvent;
    // private System.Action suggestModifiersEvent
    // Offset: 0xB0
    System::Action* suggestModifiersEvent;
    // private System.Action clearSuggestedModifiersEvent
    // Offset: 0xB8
    System::Action* clearSuggestedModifiersEvent;
    // private System.Action`1<System.Boolean> setPlayerReadyEvent
    // Offset: 0xC0
    System::Action_1<bool>* setPlayerReadyEvent;
    // private System.Action`1<System.Boolean> playerActiveStateChangedEvent
    // Offset: 0xC8
    System::Action_1<bool>* playerActiveStateChangedEvent;
    // private readonly HMUI.ToggleBinder _toggleBinder
    // Offset: 0xD0
    HMUI::ToggleBinder* toggleBinder;
    // public System.Void add_suggestBeatmapEvent(System.Action value)
    // Offset: 0x1A4DFE4
    void add_suggestBeatmapEvent(System::Action* value);
    // public System.Void remove_suggestBeatmapEvent(System.Action value)
    // Offset: 0x1A4E088
    void remove_suggestBeatmapEvent(System::Action* value);
    // public System.Void add_clearSuggestedBeatmapEvent(System.Action value)
    // Offset: 0x1A4E12C
    void add_clearSuggestedBeatmapEvent(System::Action* value);
    // public System.Void remove_clearSuggestedBeatmapEvent(System.Action value)
    // Offset: 0x1A4E1D0
    void remove_clearSuggestedBeatmapEvent(System::Action* value);
    // public System.Void add_suggestModifiersEvent(System.Action value)
    // Offset: 0x1A4E274
    void add_suggestModifiersEvent(System::Action* value);
    // public System.Void remove_suggestModifiersEvent(System.Action value)
    // Offset: 0x1A4E318
    void remove_suggestModifiersEvent(System::Action* value);
    // public System.Void add_clearSuggestedModifiersEvent(System.Action value)
    // Offset: 0x1A4E3BC
    void add_clearSuggestedModifiersEvent(System::Action* value);
    // public System.Void remove_clearSuggestedModifiersEvent(System.Action value)
    // Offset: 0x1A4E460
    void remove_clearSuggestedModifiersEvent(System::Action* value);
    // public System.Void add_setPlayerReadyEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1A4E504
    void add_setPlayerReadyEvent(System::Action_1<bool>* value);
    // public System.Void remove_setPlayerReadyEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1A4E5A8
    void remove_setPlayerReadyEvent(System::Action_1<bool>* value);
    // public System.Void add_playerActiveStateChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1A4E64C
    void add_playerActiveStateChangedEvent(System::Action_1<bool>* value);
    // public System.Void remove_playerActiveStateChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0x1A4E6F0
    void remove_playerActiveStateChangedEvent(System::Action_1<bool>* value);
    // public System.Void SetLocalLobbyPlayerData(ILobbyPlayerDataModel lobbyPlayerData)
    // Offset: 0x1A4E794
    void SetLocalLobbyPlayerData(GlobalNamespace::ILobbyPlayerDataModel* lobbyPlayerData);
    // public System.Void SetLobbyCode(System.String code)
    // Offset: 0x1A4EC48
    void SetLobbyCode(::Il2CppString* code);
    // public System.Void SetLobbyState(MultiplayerLobbyState lobbyState)
    // Offset: 0x1A4EC64
    void SetLobbyState(GlobalNamespace::MultiplayerLobbyState lobbyState);
    // private System.Void HandleSpectateToggleValueChanged(System.Boolean value)
    // Offset: 0x1A4F03C
    void HandleSpectateToggleValueChanged(bool value);
    // private System.Void <DidActivate>b__28_0()
    // Offset: 0x1A4F128
    void $DidActivate$b__28_0();
    // private System.Void <DidActivate>b__28_1()
    // Offset: 0x1A4F13C
    void $DidActivate$b__28_1();
    // private System.Void <DidActivate>b__28_2()
    // Offset: 0x1A4F150
    void $DidActivate$b__28_2();
    // private System.Void <DidActivate>b__28_3()
    // Offset: 0x1A4F164
    void $DidActivate$b__28_3();
    // private System.Void <DidActivate>b__28_4()
    // Offset: 0x1A4F178
    void $DidActivate$b__28_4();
    // private System.Void <DidActivate>b__28_5()
    // Offset: 0x1A4F1DC
    void $DidActivate$b__28_5();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x1A4ED9C
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x1A4F0B4
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ClientLobbySetupViewController* New_ctor();
  }; // ClientLobbySetupViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ClientLobbySetupViewController*, "", "ClientLobbySetupViewController");
#pragma pack(pop)
