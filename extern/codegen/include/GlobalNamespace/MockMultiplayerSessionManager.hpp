// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IMultiplayerSessionManager
#include "GlobalNamespace/IMultiplayerSessionManager.hpp"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MockPlayer
  class MockPlayer;
  // Forward declaring type: MultiplayerMockSettings
  class MultiplayerMockSettings;
  // Forward declaring type: AvatarPartsModel
  class AvatarPartsModel;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: ConnectedPlayerManager
  class ConnectedPlayerManager;
  // Forward declaring type: INetworkPacketSubSerializer`1<TData>
  template<typename TData>
  class INetworkPacketSubSerializer_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: INetSerializable
  class INetSerializable;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MockMultiplayerSessionManager
  class MockMultiplayerSessionManager : public ::Il2CppObject/*, public GlobalNamespace::IMultiplayerSessionManager, public System::IDisposable*/ {
    public:
    // Nested type: GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager
    class MockedPlayerMultiplayerSessionManager;
    // Nested type: GlobalNamespace::MockMultiplayerSessionManager::$$c__DisplayClass60_0
    class $$c__DisplayClass60_0;
    // Nested type: GlobalNamespace::MockMultiplayerSessionManager::$PerformAtSyncTime$d__74
    struct $PerformAtSyncTime$d__74;
    // private readonly System.Collections.Generic.Dictionary`2<MockPlayer,MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager> _playerSessionManagers
    // Offset: 0x10
    System::Collections::Generic::Dictionary_2<GlobalNamespace::MockPlayer*, GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager*>* playerSessionManagers;
    // private MockMultiplayerSessionManager/MockedPlayerMultiplayerSessionManager _localPlayerSessionManager
    // Offset: 0x18
    GlobalNamespace::MockMultiplayerSessionManager::MockedPlayerMultiplayerSessionManager* localPlayerSessionManager;
    // private readonly MultiplayerMockSettings _settings
    // Offset: 0x20
    GlobalNamespace::MultiplayerMockSettings* settings;
    // private readonly AvatarPartsModel _avatarPartsModel
    // Offset: 0x28
    GlobalNamespace::AvatarPartsModel* avatarPartsModel;
    // private System.Single <syncTimeDelay>k__BackingField
    // Offset: 0x30
    float syncTimeDelay;
    // private readonly System.Collections.Generic.List`1<IConnectedPlayer> _connectedPlayers
    // Offset: 0x38
    System::Collections::Generic::List_1<GlobalNamespace::IConnectedPlayer*>* connectedPlayers;
    // private System.Action`1<IConnectedPlayer> playerConnectedEvent
    // Offset: 0x40
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerConnectedEvent;
    // private System.Action connectedEvent
    // Offset: 0x48
    System::Action* connectedEvent;
    // private System.Action`1<ConnectionFailedReason> connectionFailedEvent
    // Offset: 0x50
    System::Action_1<GlobalNamespace::ConnectionFailedReason>* connectionFailedEvent;
    // private System.Action`1<IConnectedPlayer> playerDisconnectedEvent
    // Offset: 0x58
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerDisconnectedEvent;
    // private System.Action`1<IConnectedPlayer> playerStateChangedEvent
    // Offset: 0x60
    System::Action_1<GlobalNamespace::IConnectedPlayer*>* playerStateChangedEvent;
    // private System.Action`1<DisconnectedReason> disconnectedEvent
    // Offset: 0x68
    System::Action_1<GlobalNamespace::DisconnectedReason>* disconnectedEvent;
    // Creating interface conversion operator: operator GlobalNamespace::IMultiplayerSessionManager
    operator GlobalNamespace::IMultiplayerSessionManager() noexcept {
      return *reinterpret_cast<GlobalNamespace::IMultiplayerSessionManager*>(this);
    }
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // private System.Void Init()
    // Offset: 0x10226E0
    void Init();
    // private System.Void set_syncTimeDelay(System.Single value)
    // Offset: 0x102314C
    void set_syncTimeDelay(float value);
    // public System.Void HandlePlayerStateChanged(MockPlayer player)
    // Offset: 0x1023DC8
    void HandlePlayerStateChanged(GlobalNamespace::MockPlayer* player);
    // public System.Void InvokeConnected()
    // Offset: 0x1023F7C
    void InvokeConnected();
    // private System.Void HandlePlayerConnected(MockPlayer connectedPlayer)
    // Offset: 0x1022C8C
    void HandlePlayerConnected(GlobalNamespace::MockPlayer* connectedPlayer);
    // private System.Void HandlePlayerDisconnected(MockPlayer connectedPlayer)
    // Offset: 0x1022AFC
    void HandlePlayerDisconnected(GlobalNamespace::MockPlayer* connectedPlayer);
    // private System.Void HandleJoinMockServer()
    // Offset: 0x1024100
    void HandleJoinMockServer();
    // private System.Void HandlePartyCreated()
    // Offset: 0x1024308
    void HandlePartyCreated();
    // public IMultiplayerSessionManager GetMultiplayerSessionManager(MockPlayer player)
    // Offset: 0x10246D0
    GlobalNamespace::IMultiplayerSessionManager* GetMultiplayerSessionManager(GlobalNamespace::MockPlayer* player);
    // private System.Void SendToOthers(MockPlayer player, LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1024894
    void SendToOthers(GlobalNamespace::MockPlayer* player, LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Dispose()
    // Offset: 0x1022E38
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public IConnectedPlayer get_localPlayer()
    // Offset: 0x1023078
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::get_localPlayer()
    GlobalNamespace::IConnectedPlayer* get_localPlayer();
    // public IConnectedPlayer get_connectionOwner()
    // Offset: 0x1023094
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::get_connectionOwner()
    GlobalNamespace::IConnectedPlayer* get_connectionOwner();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x10230EC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isConnectionOwner()
    bool get_isConnectionOwner();
    // public System.Single get_syncTime()
    // Offset: 0x1023118
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Single IMultiplayerSessionManager::get_syncTime()
    float get_syncTime();
    // public System.Single get_syncTimeDelay()
    // Offset: 0x1023144
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Single IMultiplayerSessionManager::get_syncTimeDelay()
    float get_syncTimeDelay();
    // public System.Boolean get_isSyncTimeInitialized()
    // Offset: 0x1023154
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isSyncTimeInitialized()
    bool get_isSyncTimeInitialized();
    // public System.Int32 get_maxPlayerCount()
    // Offset: 0x102315C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Int32 IMultiplayerSessionManager::get_maxPlayerCount()
    int get_maxPlayerCount();
    // public System.Int32 get_connectedPlayerCount()
    // Offset: 0x1023184
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Int32 IMultiplayerSessionManager::get_connectedPlayerCount()
    int get_connectedPlayerCount();
    // public System.Boolean get_isConnectingOrConnected()
    // Offset: 0x10231DC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isConnectingOrConnected()
    bool get_isConnectingOrConnected();
    // public System.Boolean get_isConnected()
    // Offset: 0x10231E4
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isConnected()
    bool get_isConnected();
    // public System.Boolean get_isConnecting()
    // Offset: 0x10231EC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isConnecting()
    bool get_isConnecting();
    // public System.Boolean get_isDisconnecting()
    // Offset: 0x10231F4
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isDisconnecting()
    bool get_isDisconnecting();
    // public System.Boolean get_isSpectating()
    // Offset: 0x10231FC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::get_isSpectating()
    bool get_isSpectating();
    // public System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> get_connectedPlayers()
    // Offset: 0x1023204
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Collections.Generic.IReadOnlyList`1<IConnectedPlayer> IMultiplayerSessionManager::get_connectedPlayers()
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::IConnectedPlayer*>* get_connectedPlayers();
    // public System.Void add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x102320C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    void add_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x10232B0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_playerConnectedEvent(System.Action`1<IConnectedPlayer> value)
    void remove_playerConnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_connectedEvent(System.Action value)
    // Offset: 0x1023354
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_connectedEvent(System.Action value)
    void add_connectedEvent(System::Action* value);
    // public System.Void remove_connectedEvent(System.Action value)
    // Offset: 0x10233F8
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_connectedEvent(System.Action value)
    void remove_connectedEvent(System::Action* value);
    // public System.Void add_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0x102349C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    void add_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void remove_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0x1023540
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_connectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    void remove_connectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x10235E4
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    void add_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x1023688
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_playerDisconnectedEvent(System.Action`1<IConnectedPlayer> value)
    void remove_playerDisconnectedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x102372C
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    void add_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void remove_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    // Offset: 0x10237D0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_playerStateChangedEvent(System.Action`1<IConnectedPlayer> value)
    void remove_playerStateChangedEvent(System::Action_1<GlobalNamespace::IConnectedPlayer*>* value);
    // public System.Void add_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x1023874
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::add_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    void add_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0x1023918
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::remove_disconnectedEvent(System.Action`1<DisconnectedReason> value)
    void remove_disconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void SetMaxPlayerCount(System.Int32 maxPlayerCount)
    // Offset: 0x10239BC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::SetMaxPlayerCount(System.Int32 maxPlayerCount)
    void SetMaxPlayerCount(int maxPlayerCount);
    // public System.Void StartSession(ConnectedPlayerManager connectedPlayerManager)
    // Offset: 0x10239C0
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::StartSession(ConnectedPlayerManager connectedPlayerManager)
    void StartSession(GlobalNamespace::ConnectedPlayerManager* connectedPlayerManager);
    // public System.Void EndSession()
    // Offset: 0x10239C4
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::EndSession()
    void EndSession();
    // public IConnectedPlayer GetPlayerByUserId(System.String userId)
    // Offset: 0x10239C8
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::GetPlayerByUserId(System.String userId)
    GlobalNamespace::IConnectedPlayer* GetPlayerByUserId(::Il2CppString* userId);
    // public IConnectedPlayer GetConnectedPlayer(System.Int32 index)
    // Offset: 0x1023B0C
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::GetConnectedPlayer(System.Int32 index)
    GlobalNamespace::IConnectedPlayer* GetConnectedPlayer(int index);
    // public IConnectedPlayer GetConnectedPlayerByUserId(System.String userId)
    // Offset: 0x1023A34
    // Implemented from: IMultiplayerSessionManager
    // Base method: IConnectedPlayer IMultiplayerSessionManager::GetConnectedPlayerByUserId(System.String userId)
    GlobalNamespace::IConnectedPlayer* GetConnectedPlayerByUserId(::Il2CppString* userId);
    // public System.Void Disconnect()
    // Offset: 0x1023B94
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::Disconnect()
    void Disconnect();
    // public System.Void Send(T message)
    // Offset: 0xFFFFFFFF
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::Send(T message)
    template<class T>
    void Send(T message) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "Send", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, message));
    }
    // public System.Void SendUnreliable(T message)
    // Offset: 0xFFFFFFFF
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::SendUnreliable(T message)
    template<class T>
    void SendUnreliable(T message) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "SendUnreliable", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, message));
    }
    // public System.Void RegisterCallback(MultiplayerSessionManager/MessageType serializerType, System.Action`2<T,IConnectedPlayer> callback, System.Func`1<T> constructor)
    // Offset: 0xFFFFFFFF
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::RegisterCallback(MultiplayerSessionManager/MessageType serializerType, System.Action`2<T,IConnectedPlayer> callback, System.Func`1<T> constructor)
    template<class T>
    void RegisterCallback(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, System::Action_2<T, GlobalNamespace::IConnectedPlayer*>* callback, System::Func_1<T>* constructor) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "RegisterCallback", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, serializerType, callback, constructor));
    }
    // public System.Void UnregisterCallback(MultiplayerSessionManager/MessageType serializerType)
    // Offset: 0xFFFFFFFF
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::UnregisterCallback(MultiplayerSessionManager/MessageType serializerType)
    template<class T>
    void UnregisterCallback(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType) {
      static_assert(std::is_base_of_v<LiteNetLib::Utils::INetSerializable, std::remove_pointer_t<T>>);
      THROW_UNLESS(il2cpp_utils::RunGenericMethod(this, "UnregisterCallback", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, serializerType));
    }
    // public System.Void RegisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    // Offset: 0x1023CB8
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::RegisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    void RegisterSerializer(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer);
    // public System.Void UnregisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    // Offset: 0x1023D40
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::UnregisterSerializer(MultiplayerSessionManager/MessageType serializerType, INetworkPacketSubSerializer`1<IConnectedPlayer> subSerializer)
    void UnregisterSerializer(GlobalNamespace::MultiplayerSessionManager_MessageType serializerType, GlobalNamespace::INetworkPacketSubSerializer_1<GlobalNamespace::IConnectedPlayer*>* subSerializer);
    // public System.Void PerformAtSyncTime(System.Single syncTime, System.Action action)
    // Offset: 0x10244EC
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::PerformAtSyncTime(System.Single syncTime, System.Action action)
    void PerformAtSyncTime(float syncTime, System::Action* action);
    // public System.Void SetLocalPlayerState(System.String state, System.Boolean hasState)
    // Offset: 0x10245E8
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Void IMultiplayerSessionManager::SetLocalPlayerState(System.String state, System.Boolean hasState)
    void SetLocalPlayerState(::Il2CppString* state, bool hasState);
    // public System.Boolean LocalPlayerHasState(System.String state)
    // Offset: 0x1024694
    // Implemented from: IMultiplayerSessionManager
    // Base method: System.Boolean IMultiplayerSessionManager::LocalPlayerHasState(System.String state)
    bool LocalPlayerHasState(::Il2CppString* state);
    // public System.Void .ctor()
    // Offset: 0x1024A38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MockMultiplayerSessionManager* New_ctor();
  }; // MockMultiplayerSessionManager
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockMultiplayerSessionManager*, "", "MockMultiplayerSessionManager");
#pragma pack(pop)