// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: EntitlementsStatus
#include "GlobalNamespace/EntitlementsStatus.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IMultiplayerSessionManager
  class IMultiplayerSessionManager;
  // Forward declaring type: IMenuRpcManager
  class IMenuRpcManager;
  // Forward declaring type: AdditionalContentModel
  class AdditionalContentModel;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NetworkPlayerEntitlementChecker
  class NetworkPlayerEntitlementChecker : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::NetworkPlayerEntitlementChecker::CachedTcs
    class CachedTcs;
    // Nested type: GlobalNamespace::NetworkPlayerEntitlementChecker::$HandleGetIsEntitledToLevel$d__15
    struct $HandleGetIsEntitledToLevel$d__15;
    // Nested type: GlobalNamespace::NetworkPlayerEntitlementChecker::$GetPlayerLevelEntitlementsAsync$d__17
    struct $GetPlayerLevelEntitlementsAsync$d__17;
    // Nested type: GlobalNamespace::NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18
    struct $GetCanPlayLevelAsync$d__18;
    // Nested type: GlobalNamespace::NetworkPlayerEntitlementChecker::$GetEntitlementStatus$d__20
    struct $GetEntitlementStatus$d__20;
    // private readonly IMultiplayerSessionManager _multiplayerSessionManager
    // Offset: 0x18
    GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager;
    // private readonly IMenuRpcManager _rpcManager
    // Offset: 0x20
    GlobalNamespace::IMenuRpcManager* rpcManager;
    // private readonly AdditionalContentModel _additionalContentModel
    // Offset: 0x28
    GlobalNamespace::AdditionalContentModel* additionalContentModel;
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.Dictionary`2<System.String,NetworkPlayerEntitlementChecker/CachedTcs>> _cachedTasks
    // Offset: 0x30
    System::Collections::Generic::Dictionary_2<::Il2CppString*, System::Collections::Generic::Dictionary_2<::Il2CppString*, GlobalNamespace::NetworkPlayerEntitlementChecker::CachedTcs*>*>* cachedTasks;
    // private System.Action didInvalidateDataEvent
    // Offset: 0x38
    System::Action* didInvalidateDataEvent;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didInvalidateDataEvent(System.Action value)
    // Offset: 0xFDA048
    void add_didInvalidateDataEvent(System::Action* value);
    // public System.Void remove_didInvalidateDataEvent(System.Action value)
    // Offset: 0xFDA0EC
    void remove_didInvalidateDataEvent(System::Action* value);
    // protected System.Void Start()
    // Offset: 0xFDA190
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFDA558
    void OnDestroy();
    // private System.Void InvalidateData()
    // Offset: 0xFDA96C
    void InvalidateData();
    // private System.Void HandleDataInvalidated()
    // Offset: 0xFDA980
    void HandleDataInvalidated();
    // private System.Void HandleLevelEntitlementStatusesInvalidated(System.String userId)
    // Offset: 0xFDAA50
    void HandleLevelEntitlementStatusesInvalidated(::Il2CppString* userId);
    // private System.Void HandlePlayerDisconnected(IConnectedPlayer player)
    // Offset: 0xFDAC50
    void HandlePlayerDisconnected(GlobalNamespace::IConnectedPlayer* player);
    // private System.Void HandlePlayerConnected(IConnectedPlayer player)
    // Offset: 0xFDAE94
    void HandlePlayerConnected(GlobalNamespace::IConnectedPlayer* player);
    // private System.Void HandleGetIsEntitledToLevel(System.String userId, System.String levelId)
    // Offset: 0xFDAEA8
    void HandleGetIsEntitledToLevel(::Il2CppString* userId, ::Il2CppString* levelId);
    // private System.Void HandleSetIsEntitledToLevel(System.String userId, System.String levelId, EntitlementsStatus status)
    // Offset: 0xFDAFA4
    void HandleSetIsEntitledToLevel(::Il2CppString* userId, ::Il2CppString* levelId, GlobalNamespace::EntitlementsStatus status);
    // public System.Threading.Tasks.Task`1<EntitlementsStatus> GetPlayerLevelEntitlementsAsync(IConnectedPlayer player, System.String levelId, System.Threading.CancellationToken token)
    // Offset: 0xFDB184
    System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>* GetPlayerLevelEntitlementsAsync(GlobalNamespace::IConnectedPlayer* player, ::Il2CppString* levelId, System::Threading::CancellationToken token);
    // public System.Threading.Tasks.Task`1<System.Boolean> GetCanPlayLevelAsync(System.String levelId, System.Threading.CancellationToken token)
    // Offset: 0xFDB2EC
    System::Threading::Tasks::Task_1<bool>* GetCanPlayLevelAsync(::Il2CppString* levelId, System::Threading::CancellationToken token);
    // private System.Threading.Tasks.Task`1<EntitlementsStatus> GetTcsTaskCanPlayerPlayLevel(IConnectedPlayer player, System.String levelId, System.Threading.CancellationToken token, out System.Boolean rpcRequired)
    // Offset: 0xFDB440
    System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>* GetTcsTaskCanPlayerPlayLevel(GlobalNamespace::IConnectedPlayer* player, ::Il2CppString* levelId, System::Threading::CancellationToken token, bool& rpcRequired);
    // private System.Threading.Tasks.Task`1<EntitlementsStatus> GetEntitlementStatus(System.String levelId)
    // Offset: 0xFDB768
    System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>* GetEntitlementStatus(::Il2CppString* levelId);
    // public System.Void .ctor()
    // Offset: 0xFDB8B8
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static NetworkPlayerEntitlementChecker* New_ctor();
  }; // NetworkPlayerEntitlementChecker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayerEntitlementChecker*, "", "NetworkPlayerEntitlementChecker");
#pragma pack(pop)