// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayRpcManager
#include "GlobalNamespace/GameplayRpcManager.hpp"
// Including type: RemoteProcedureCall`1
#include "GlobalNamespace/RemoteProcedureCall_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlayersAtGameStartNetSerializable
  class PlayersAtGameStartNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayRpcManager/SetGameplaySceneSyncFinishedRpc
  class GameplayRpcManager::SetGameplaySceneSyncFinishedRpc : public GlobalNamespace::RemoteProcedureCall_1<GlobalNamespace::PlayersAtGameStartNetSerializable*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1B4D804
    // Implemented from: RemoteProcedureCall`1
    // Base method: System.Void RemoteProcedureCall_1::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplayRpcManager::SetGameplaySceneSyncFinishedRpc* New_ctor();
  }; // GameplayRpcManager/SetGameplaySceneSyncFinishedRpc
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayRpcManager::SetGameplaySceneSyncFinishedRpc*, "", "GameplayRpcManager/SetGameplaySceneSyncFinishedRpc");
#pragma pack(pop)
