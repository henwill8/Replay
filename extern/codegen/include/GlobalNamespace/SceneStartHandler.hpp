// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: PlayersAtGameStartModel
  class PlayersAtGameStartModel;
  // Forward declaring type: PlayersAtGameStartNetSerializable
  class PlayersAtGameStartNetSerializable;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: SceneStartHandler
  // [] Offset: FFFFFFFF
  class SceneStartHandler : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // private readonly PlayersAtGameStartModel _playersAtGameStartModel
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::PlayersAtGameStartModel* playersAtGameStartModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayersAtGameStartModel*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<System.String> _readyPlayers
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::HashSet_1<::Il2CppString*>* readyPlayers;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<::Il2CppString*>*) == 0x8);
    // private System.Boolean _started
    // Size: 0x1
    // Offset: 0x30
    bool started;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: started and: sceneSetupDidFinishEvent
    char __padding4[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xD1C03C
    // private System.Action sceneSetupDidFinishEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action* sceneSetupDidFinishEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD1C04C
    // private System.Action sceneSetupDidReceiveTooLateEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* sceneSetupDidReceiveTooLateEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: SceneStartHandler
    SceneStartHandler(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager_ = {}, GlobalNamespace::PlayersAtGameStartModel* playersAtGameStartModel_ = {}, System::Collections::Generic::HashSet_1<::Il2CppString*>* readyPlayers_ = {}, bool started_ = {}, System::Action* sceneSetupDidFinishEvent_ = {}, System::Action* sceneSetupDidReceiveTooLateEvent_ = {}) noexcept : multiplayerSessionManager{multiplayerSessionManager_}, gameplayRpcManager{gameplayRpcManager_}, playersAtGameStartModel{playersAtGameStartModel_}, readyPlayers{readyPlayers_}, started{started_}, sceneSetupDidFinishEvent{sceneSetupDidFinishEvent_}, sceneSetupDidReceiveTooLateEvent{sceneSetupDidReceiveTooLateEvent_} {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void add_sceneSetupDidFinishEvent(System.Action value)
    // Offset: 0x1C1E094
    void add_sceneSetupDidFinishEvent(System::Action* value);
    // public System.Void remove_sceneSetupDidFinishEvent(System.Action value)
    // Offset: 0x1C1E138
    void remove_sceneSetupDidFinishEvent(System::Action* value);
    // public System.Void add_sceneSetupDidReceiveTooLateEvent(System.Action value)
    // Offset: 0x1C1E1DC
    void add_sceneSetupDidReceiveTooLateEvent(System::Action* value);
    // public System.Void remove_sceneSetupDidReceiveTooLateEvent(System.Action value)
    // Offset: 0x1C1E280
    void remove_sceneSetupDidReceiveTooLateEvent(System::Action* value);
    // public System.Void .ctor(IMultiplayerSessionManager multiplayerSessionManager, IGameplayRpcManager gameplayRpcManager, PlayersAtGameStartModel playersAtGameStartModel)
    // Offset: 0x1C1E324
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SceneStartHandler* New_ctor(GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, GlobalNamespace::PlayersAtGameStartModel* playersAtGameStartModel) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::SceneStartHandler::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SceneStartHandler*, creationType>(multiplayerSessionManager, gameplayRpcManager, playersAtGameStartModel)));
    }
    // public System.Void GetSceneLoadStatus()
    // Offset: 0x1C1E728
    void GetSceneLoadStatus();
    // public System.Void ForceStart()
    // Offset: 0x1C1ECA4
    void ForceStart();
    // private System.Void HandleSetGameplaySceneReady(System.String userId)
    // Offset: 0x1C1F2D8
    void HandleSetGameplaySceneReady(::Il2CppString* userId);
    // private System.Void HandleGetGameplaySceneReady(System.String userId)
    // Offset: 0x1C1F650
    void HandleGetGameplaySceneReady(::Il2CppString* userId);
    // private System.Void HandleSetGameplaySceneSyncFinished(System.String userId, PlayersAtGameStartNetSerializable playersAtGameStart)
    // Offset: 0x1C1F704
    void HandleSetGameplaySceneSyncFinished(::Il2CppString* userId, GlobalNamespace::PlayersAtGameStartNetSerializable* playersAtGameStart);
    // private System.Void HandleSetPlayerDidConnectLate(System.String userId, System.String failedUserId, PlayersAtGameStartNetSerializable playersAtGameStart)
    // Offset: 0x1C1F75C
    void HandleSetPlayerDidConnectLate(::Il2CppString* userId, ::Il2CppString* failedUserId, GlobalNamespace::PlayersAtGameStartNetSerializable* playersAtGameStart);
    // public System.Void Dispose()
    // Offset: 0x1C1E3EC
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // SceneStartHandler
  #pragma pack(pop)
  static check_size<sizeof(SceneStartHandler), 64 + sizeof(System::Action*)> __GlobalNamespace_SceneStartHandlerSizeCheck;
  static_assert(sizeof(SceneStartHandler) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneStartHandler*, "", "SceneStartHandler");
