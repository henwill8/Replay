// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: GameplayRpcManager
#include "GlobalNamespace/GameplayRpcManager.hpp"
// Including type: RemoteProcedureCall`2
#include "GlobalNamespace/RemoteProcedureCall_2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteCutInfoNetSerializable
  class NoteCutInfoNetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: GameplayRpcManager/NoteCutRpc
  class GameplayRpcManager::NoteCutRpc : public GlobalNamespace::RemoteProcedureCall_2<float, GlobalNamespace::NoteCutInfoNetSerializable*> {
    public:
    // public System.Void .ctor()
    // Offset: 0x1B4D754
    // Implemented from: RemoteProcedureCall`2
    // Base method: System.Void RemoteProcedureCall_2::.ctor()
    // Base method: System.Void RemoteProcedureCall::.ctor()
    // Base method: System.Void Object::.ctor()
    static GameplayRpcManager::NoteCutRpc* New_ctor();
  }; // GameplayRpcManager/NoteCutRpc
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayRpcManager::NoteCutRpc*, "", "GameplayRpcManager/NoteCutRpc");
#pragma pack(pop)
