// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: IRefreshable
#include "GlobalNamespace/IRefreshable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ServerCodeView
  class ServerCodeView;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Toggle
  class Toggle;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerSettingsPanelController
  // [] Offset: FFFFFFFF
  class MultiplayerSettingsPanelController : public UnityEngine::MonoBehaviour/*, public GlobalNamespace::IRefreshable*/ {
    public:
    // private ServerCodeView _serverCodeView
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ServerCodeView* serverCodeView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ServerCodeView*) == 0x8);
    // private UnityEngine.UI.Toggle _spectateToggle
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Toggle* spectateToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.UI.Toggle _joinableToggle
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::UI::Toggle* joinableToggle;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Toggle*) == 0x8);
    // private UnityEngine.GameObject _connectionSettingsWrapper
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::GameObject* connectionSettingsWrapper;
    // Field size check
    static_assert(sizeof(UnityEngine::GameObject*) == 0x8);
    // [InjectAttribute] Offset: 0xD41B6C
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x40
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // private ILobbyPlayerDataModel _lobbyPlayerDataModel
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ILobbyPlayerDataModel* lobbyPlayerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyPlayerDataModel*) == 0x8);
    // private System.Boolean _refreshed
    // Size: 0x1
    // Offset: 0x50
    bool refreshed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: refreshed and: playerActiveStateChangedEvent
    char __padding7[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD41B7C
    // private System.Action`1<System.Boolean> playerActiveStateChangedEvent
    // Size: 0x8
    // Offset: 0x58
    System::Action_1<bool>* playerActiveStateChangedEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<bool>*) == 0x8);
    // Creating value type constructor for type: MultiplayerSettingsPanelController
    MultiplayerSettingsPanelController(GlobalNamespace::ServerCodeView* serverCodeView_ = {}, UnityEngine::UI::Toggle* spectateToggle_ = {}, UnityEngine::UI::Toggle* joinableToggle_ = {}, UnityEngine::GameObject* connectionSettingsWrapper_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}, GlobalNamespace::ILobbyPlayerDataModel* lobbyPlayerDataModel_ = {}, bool refreshed_ = {}, System::Action_1<bool>* playerActiveStateChangedEvent_ = {}) noexcept : serverCodeView{serverCodeView_}, spectateToggle{spectateToggle_}, joinableToggle{joinableToggle_}, connectionSettingsWrapper{connectionSettingsWrapper_}, playerDataModel{playerDataModel_}, toggleBinder{toggleBinder_}, lobbyPlayerDataModel{lobbyPlayerDataModel_}, refreshed{refreshed_}, playerActiveStateChangedEvent{playerActiveStateChangedEvent_} {}
    // Creating interface conversion operator: operator GlobalNamespace::IRefreshable
    operator GlobalNamespace::IRefreshable() noexcept {
      return *reinterpret_cast<GlobalNamespace::IRefreshable*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_playerActiveStateChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0xF81DA8
    void add_playerActiveStateChangedEvent(System::Action_1<bool>* value);
    // public System.Void remove_playerActiveStateChangedEvent(System.Action`1<System.Boolean> value)
    // Offset: 0xF81E4C
    void remove_playerActiveStateChangedEvent(System::Action_1<bool>* value);
    // public System.Void SetLobbyPlayerDataModel(ILobbyPlayerDataModel lobbyPlayerDataModel)
    // Offset: 0xF81EF0
    void SetLobbyPlayerDataModel(GlobalNamespace::ILobbyPlayerDataModel* lobbyPlayerDataModel);
    // public System.Void HideConnectionSettings(System.Boolean hide)
    // Offset: 0xF82068
    void HideConnectionSettings(bool hide);
    // public System.Void SetLobbyCode(System.String code)
    // Offset: 0xF8208C
    void SetLobbyCode(::Il2CppString* code);
    // protected System.Void Awake()
    // Offset: 0xF820A8
    void Awake();
    // private System.Void OnDestroy()
    // Offset: 0xF821C0
    void OnDestroy();
    // private System.Void UpdateLocalPlayerIsActiveState(System.Boolean isActive)
    // Offset: 0xF821D4
    void UpdateLocalPlayerIsActiveState(bool isActive);
    // private System.Void HandleJoinableToggleChange(System.Boolean value)
    // Offset: 0xF8224C
    void HandleJoinableToggleChange(bool value);
    // private System.Void <Awake>b__14_0(System.Boolean on)
    // Offset: 0xF82280
    void $Awake$b__14_0(bool on);
    // public System.Void Refresh()
    // Offset: 0xF81F1C
    // Implemented from: IRefreshable
    // Base method: System.Void IRefreshable::Refresh()
    void Refresh();
    // Creating proxy method: GlobalNamespace_IRefreshable_Refresh
    // Maps to method: Refresh
    void GlobalNamespace_IRefreshable_Refresh();
    // public System.Void .ctor()
    // Offset: 0xF82278
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerSettingsPanelController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerSettingsPanelController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerSettingsPanelController*, creationType>()));
    }
  }; // MultiplayerSettingsPanelController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerSettingsPanelController), 88 + sizeof(System::Action_1<bool>*)> __GlobalNamespace_MultiplayerSettingsPanelControllerSizeCheck;
  static_assert(sizeof(MultiplayerSettingsPanelController) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerSettingsPanelController*, "", "MultiplayerSettingsPanelController");
