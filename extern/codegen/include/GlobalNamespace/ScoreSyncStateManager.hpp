// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerSyncStateManager`4
#include "GlobalNamespace/MultiplayerSyncStateManager_4.hpp"
// Including type: StandardScoreSyncState
#include "GlobalNamespace/StandardScoreSyncState.hpp"
// Including type: IScoreSyncStateManager
#include "GlobalNamespace/IScoreSyncStateManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardScoreSyncStateNetSerializable
  class StandardScoreSyncStateNetSerializable;
  // Forward declaring type: IPacketPool`1<T>
  template<typename T>
  class IPacketPool_1;
  // Skipping declaration: MessageType because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ScoreSyncStateManager
  class ScoreSyncStateManager : public GlobalNamespace::MultiplayerSyncStateManager_4<GlobalNamespace::StandardScoreSyncState, GlobalNamespace::StandardScoreSyncState_Score, int, GlobalNamespace::StandardScoreSyncStateNetSerializable*>/*, public GlobalNamespace::IScoreSyncStateManager*/ {
    public:
    // Creating interface conversion operator: operator GlobalNamespace::IScoreSyncStateManager
    operator GlobalNamespace::IScoreSyncStateManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IScoreSyncStateManager*>(this);
    }
    // protected IPacketPool`1<StandardScoreSyncStateNetSerializable> get_serializablePool()
    // Offset: 0xFC8CC8
    GlobalNamespace::IPacketPool_1<GlobalNamespace::StandardScoreSyncStateNetSerializable*>* get_serializablePool();
    // protected System.Int32 Interpolate(System.Int32 prev, System.Single prevTime, System.Int32 curr, System.Single currTime, System.Single time)
    // Offset: 0xFC8D38
    int Interpolate(int prev, float prevTime, int curr, float currTime, float time);
    // protected override System.Single get_unreliableUpdateFrequency()
    // Offset: 0xFC8CA4
    // Implemented from: MultiplayerSyncStateManager`4
    // Base method: System.Single MultiplayerSyncStateManager_4::get_unreliableUpdateFrequency()
    float get_unreliableUpdateFrequency();
    // protected override System.Single get_reliableUpdateFrequency()
    // Offset: 0xFC8CB0
    // Implemented from: MultiplayerSyncStateManager`4
    // Base method: System.Single MultiplayerSyncStateManager_4::get_reliableUpdateFrequency()
    float get_reliableUpdateFrequency();
    // protected override System.Int32 get_localBufferSize()
    // Offset: 0xFC8CB8
    // Implemented from: MultiplayerSyncStateManager`4
    // Base method: System.Int32 MultiplayerSyncStateManager_4::get_localBufferSize()
    int get_localBufferSize();
    // protected override System.Int32 get_remoteBufferSize()
    // Offset: 0xFC8CC0
    // Implemented from: MultiplayerSyncStateManager`4
    // Base method: System.Int32 MultiplayerSyncStateManager_4::get_remoteBufferSize()
    int get_remoteBufferSize();
    // protected override MultiplayerSessionManager/MessageType get_messageType()
    // Offset: 0xFC8D30
    // Implemented from: MultiplayerSyncStateManager`4
    // Base method: MultiplayerSessionManager/MessageType MultiplayerSyncStateManager_4::get_messageType()
    GlobalNamespace::MultiplayerSessionManager_MessageType get_messageType();
    // public System.Void .ctor()
    // Offset: 0xFC8E4C
    // Implemented from: MultiplayerSyncStateManager`4
    // Base method: System.Void MultiplayerSyncStateManager_4::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScoreSyncStateManager* New_ctor();
  }; // ScoreSyncStateManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ScoreSyncStateManager*, "", "ScoreSyncStateManager");
#pragma pack(pop)
