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
  // Forward declaring type: VFXController
  class VFXController;
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: BeatmapObjectSpawnController
  class BeatmapObjectSpawnController;
  // Forward declaring type: BeatmapObjectManager
  class BeatmapObjectManager;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerConnectedPlayerLevelFailController
  // [] Offset: FFFFFFFF
  class MultiplayerConnectedPlayerLevelFailController : public UnityEngine::MonoBehaviour {
    public:
    // private VFXController _failVFXController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::VFXController* failVFXController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::VFXController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3AEAC
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IMultiplayerSessionManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3AEBC
    // private readonly BeatmapObjectSpawnController _beatmapObjectSpawnController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectSpawnController*) == 0x8);
    // [InjectAttribute] Offset: 0xD3AECC
    // private readonly BeatmapObjectManager _beatmapObjectManager
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::BeatmapObjectManager* beatmapObjectManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectManager*) == 0x8);
    // [InjectAttribute] Offset: 0xD3AEDC
    // private readonly IConnectedPlayer _connectedPlayer
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IConnectedPlayer*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3AEEC
    // private System.Action playerDidFailEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* playerDidFailEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private System.Boolean _wasActive
    // Size: 0x1
    // Offset: 0x48
    bool wasActive;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: MultiplayerConnectedPlayerLevelFailController
    MultiplayerConnectedPlayerLevelFailController(GlobalNamespace::VFXController* failVFXController_ = {}, GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager_ = {}, GlobalNamespace::BeatmapObjectSpawnController* beatmapObjectSpawnController_ = {}, GlobalNamespace::BeatmapObjectManager* beatmapObjectManager_ = {}, GlobalNamespace::IConnectedPlayer* connectedPlayer_ = {}, System::Action* playerDidFailEvent_ = {}, bool wasActive_ = {}) noexcept : failVFXController{failVFXController_}, multiplayerSessionManager{multiplayerSessionManager_}, beatmapObjectSpawnController{beatmapObjectSpawnController_}, beatmapObjectManager{beatmapObjectManager_}, connectedPlayer{connectedPlayer_}, playerDidFailEvent{playerDidFailEvent_}, wasActive{wasActive_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_playerDidFailEvent(System.Action value)
    // Offset: 0x101AA24
    void add_playerDidFailEvent(System::Action* value);
    // public System.Void remove_playerDidFailEvent(System.Action value)
    // Offset: 0x101A398
    void remove_playerDidFailEvent(System::Action* value);
    // protected System.Void Start()
    // Offset: 0x101BDC0
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x101BF64
    void OnDestroy();
    // private System.Void CheckIfPlayerFailed(IConnectedPlayer player)
    // Offset: 0x101C108
    void CheckIfPlayerFailed(GlobalNamespace::IConnectedPlayer* player);
    // private System.Void HandlePlayerDisconnected(IConnectedPlayer player)
    // Offset: 0x101C330
    void HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer* player);
    // private System.Void HandlePlayerStateChanged(IConnectedPlayer player)
    // Offset: 0x101C334
    void HandlePlayerStateChanged(GlobalNamespace::IConnectedPlayer* player);
    // public System.Void .ctor()
    // Offset: 0x101C338
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerConnectedPlayerLevelFailController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerConnectedPlayerLevelFailController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerConnectedPlayerLevelFailController*, creationType>()));
    }
  }; // MultiplayerConnectedPlayerLevelFailController
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerConnectedPlayerLevelFailController), 72 + sizeof(bool)> __GlobalNamespace_MultiplayerConnectedPlayerLevelFailControllerSizeCheck;
  static_assert(sizeof(MultiplayerConnectedPlayerLevelFailController) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerLevelFailController*, "", "MultiplayerConnectedPlayerLevelFailController");
