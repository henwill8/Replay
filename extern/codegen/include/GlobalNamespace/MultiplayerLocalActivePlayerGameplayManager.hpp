// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameSongController
  class GameSongController;
  // Forward declaring type: IGameplayRpcManager
  class IGameplayRpcManager;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IMultiplayerLevelEndActionsListener
  class IMultiplayerLevelEndActionsListener;
  // Forward declaring type: PrepareLevelCompletionResults
  class PrepareLevelCompletionResults;
  // Forward declaring type: GameEnergyCounter
  class GameEnergyCounter;
  // Forward declaring type: MultiplayerLocalActivePlayerInGameMenuController
  class MultiplayerLocalActivePlayerInGameMenuController;
  // Forward declaring type: IVRPlatformHelper
  class IVRPlatformHelper;
  // Forward declaring type: MultiplayerLocalPlayerDisconnectHelper
  class MultiplayerLocalPlayerDisconnectHelper;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x69
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerGameplayManager
  // [] Offset: FFFFFFFF
  class MultiplayerLocalActivePlayerGameplayManager : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::InitData
    class InitData;
    // [InjectAttribute] Offset: 0xD3B42C
    // private readonly GameSongController _gameSongController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::GameSongController* gameSongController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameSongController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3B43C
    // private readonly IGameplayRpcManager _gameplayRpcManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IGameplayRpcManager* gameplayRpcManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IGameplayRpcManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3B44C
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3B45C
    // private readonly IMultiplayerLevelEndActionsListener _multiplayerLevelEndActions
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::IMultiplayerLevelEndActionsListener* multiplayerLevelEndActions;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerLevelEndActionsListener*) == 0x8);
    // [InjectAttribute] Offset: 0xD3B46C
    // private readonly PrepareLevelCompletionResults _prepareLevelCompletionResults
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PrepareLevelCompletionResults*) == 0x8);
    // [InjectAttribute] Offset: 0xD3B47C
    // private readonly GameEnergyCounter _gameEnergyCounter
    // Size: 0x8
    // Offset: 0x40
    GlobalNamespace::GameEnergyCounter* gameEnergyCounter;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameEnergyCounter*) == 0x8);
    // [InjectAttribute] Offset: 0xD3B48C
    // private readonly MultiplayerLocalActivePlayerInGameMenuController _inGameMenuController
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController* inGameMenuController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3B49C
    // private readonly IVRPlatformHelper _platformHelper
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::IVRPlatformHelper* platformHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IVRPlatformHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xD3B4AC
    // private readonly MultiplayerLocalPlayerDisconnectHelper _disconnectHelper
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* disconnectHelper;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper*) == 0x8);
    // [InjectAttribute] Offset: 0xD3B4BC
    // private readonly MultiplayerLocalActivePlayerGameplayManager/InitData _initData
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::InitData*) == 0x8);
    // private System.Boolean _levelFinishedOrFailed
    // Size: 0x1
    // Offset: 0x68
    bool levelFinishedOrFailed;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerLocalActivePlayerGameplayManager
    MultiplayerLocalActivePlayerGameplayManager(GlobalNamespace::GameSongController* gameSongController_ = {}, GlobalNamespace::IGameplayRpcManager* gameplayRpcManager_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::IMultiplayerLevelEndActionsListener* multiplayerLevelEndActions_ = {}, GlobalNamespace::PrepareLevelCompletionResults* prepareLevelCompletionResults_ = {}, GlobalNamespace::GameEnergyCounter* gameEnergyCounter_ = {}, GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController* inGameMenuController_ = {}, GlobalNamespace::IVRPlatformHelper* platformHelper_ = {}, GlobalNamespace::MultiplayerLocalPlayerDisconnectHelper* disconnectHelper_ = {}, GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::InitData* initData_ = {}, bool levelFinishedOrFailed_ = {}) noexcept : gameSongController{gameSongController_}, gameplayRpcManager{gameplayRpcManager_}, multiplayerSessionManager{multiplayerSessionManager_}, multiplayerLevelEndActions{multiplayerLevelEndActions_}, prepareLevelCompletionResults{prepareLevelCompletionResults_}, gameEnergyCounter{gameEnergyCounter_}, inGameMenuController{inGameMenuController_}, platformHelper{platformHelper_}, disconnectHelper{disconnectHelper_}, initData{initData_}, levelFinishedOrFailed{levelFinishedOrFailed_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // private System.Void Start()
    // Offset: 0xFDFEB0
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0xFE0310
    void OnDisable();
    // private System.Void PerformPlayerFail()
    // Offset: 0xFE0838
    void PerformPlayerFail();
    // private System.Void HandleGameEnergyDidReach0()
    // Offset: 0xFE0A38
    void HandleGameEnergyDidReach0();
    // private System.Void HandleInGameMenuControllerDidGiveUp()
    // Offset: 0xFE0A5C
    void HandleInGameMenuControllerDidGiveUp();
    // private System.Void HandleInGameMenuControllerRequestsDisconnect()
    // Offset: 0xFE0A60
    void HandleInGameMenuControllerRequestsDisconnect();
    // private System.Void HandleSongDidFinish()
    // Offset: 0xFE0C90
    void HandleSongDidFinish();
    // private System.Void HandleLevelEndedEarly(System.String userId)
    // Offset: 0xFE0E90
    void HandleLevelEndedEarly(::Il2CppString* userId);
    // private System.Void HandleHmdUnmounted()
    // Offset: 0xFE0E94
    void HandleHmdUnmounted();
    // private System.Void HandleInputFocusWasCaptured()
    // Offset: 0xFE0E98
    void HandleInputFocusWasCaptured();
    // private System.Void OnApplicationFocus(System.Boolean hasFocus)
    // Offset: 0xFE0E9C
    void OnApplicationFocus(bool hasFocus);
    // public System.Void .ctor()
    // Offset: 0xFE0EA8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerGameplayManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerGameplayManager*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerGameplayManager
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerGameplayManager), 104 + sizeof(bool)> __GlobalNamespace_MultiplayerLocalActivePlayerGameplayManagerSizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerGameplayManager) == 0x69);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerGameplayManager*, "", "MultiplayerLocalActivePlayerGameplayManager");
