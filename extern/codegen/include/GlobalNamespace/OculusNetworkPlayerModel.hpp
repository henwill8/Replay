// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlatformNetworkPlayerModel
#include "GlobalNamespace/PlatformNetworkPlayerModel.hpp"
// Including type: Oculus.Platform.RoomJoinPolicy
#include "Oculus/Platform/RoomJoinPolicy.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IPlatformUserModel
  class IPlatformUserModel;
  // Skipping declaration: INetworkPlayerModel because it is already included!
  // Forward declaring type: INetworkPlayer
  class INetworkPlayer;
  // Forward declaring type: OculusConnectionManager
  class OculusConnectionManager;
  // Forward declaring type: INetworkPlayerModelPartyConfig`1<T>
  template<typename T>
  class INetworkPlayerModelPartyConfig_1;
  // Forward declaring type: ConnectionFailedReason
  struct ConnectionFailedReason;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: RoomInviteNotification
  class RoomInviteNotification;
  // Forward declaring type: Room
  class Room;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusNetworkPlayerModel
  class OculusNetworkPlayerModel : public GlobalNamespace::PlatformNetworkPlayerModel {
    public:
    // Nested type: GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer
    class OculusNetworkPlayer;
    // Nested type: GlobalNamespace::OculusNetworkPlayerModel::$Start$d__37
    struct $Start$d__37;
    // Nested type: GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass45_0
    class $$c__DisplayClass45_0;
    // Nested type: GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass46_0
    class $$c__DisplayClass46_0;
    // Nested type: GlobalNamespace::OculusNetworkPlayerModel::$HandleRoomInviteReceived$d__46
    struct $HandleRoomInviteReceived$d__46;
    // Nested type: GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass50_0
    class $$c__DisplayClass50_0;
    // Nested type: GlobalNamespace::OculusNetworkPlayerModel::$$c__DisplayClass61_0
    class $$c__DisplayClass61_0;
    // private readonly IPlatformUserModel _platformUserModel
    // Offset: 0x78
    GlobalNamespace::IPlatformUserModel* platformUserModel;
    // private System.Single _lastRefreshTime
    // Offset: 0x80
    float lastRefreshTime;
    // private System.Boolean _isRefreshing
    // Offset: 0x84
    bool isRefreshing;
    // private OculusNetworkPlayerModel/OculusNetworkPlayer _localPlayer
    // Offset: 0x88
    GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer* localPlayer;
    // private Oculus.Platform.RoomJoinPolicy _joinPolicy
    // Offset: 0x90
    Oculus::Platform::RoomJoinPolicy joinPolicy;
    // private System.Boolean _partyEnabled
    // Offset: 0x94
    bool partyEnabled;
    // private System.Boolean _waitingOnRoomCreate
    // Offset: 0x95
    bool waitingOnRoomCreate;
    // private readonly System.Collections.Generic.Dictionary`2<System.String,System.String> _roomDataStore
    // Offset: 0x98
    System::Collections::Generic::Dictionary_2<::Il2CppString*, ::Il2CppString*>* roomDataStore;
    // private readonly System.Collections.Generic.List`1<OculusNetworkPlayerModel/OculusNetworkPlayer> _partyPlayers
    // Offset: 0xA0
    System::Collections::Generic::List_1<GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*>* partyPlayers;
    // private readonly System.Collections.Generic.List`1<OculusNetworkPlayerModel/OculusNetworkPlayer> _otherPlayers
    // Offset: 0xA8
    System::Collections::Generic::List_1<GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer*>* otherPlayers;
    // private System.Action`1<System.Int32> partySizeChangedEvent
    // Offset: 0xB0
    System::Action_1<int>* partySizeChangedEvent;
    // private System.Action`1<INetworkPlayerModel> partyChangedEvent
    // Offset: 0xB8
    System::Action_1<GlobalNamespace::INetworkPlayerModel*>* partyChangedEvent;
    // private System.Action`1<INetworkPlayer> inviteRequestedEvent
    // Offset: 0xC0
    System::Action_1<GlobalNamespace::INetworkPlayer*>* inviteRequestedEvent;
    // static field const value: static private System.String kConnectionTypeKey
    static constexpr const char* kConnectionTypeKey = "connection";
    // Get static field: static private System.String kConnectionTypeKey
    static ::Il2CppString* _get_kConnectionTypeKey();
    // Set static field: static private System.String kConnectionTypeKey
    static void _set_kConnectionTypeKey(::Il2CppString* value);
    // static field const value: static private System.String kConnectionTypeOculus
    static constexpr const char* kConnectionTypeOculus = "oculus";
    // Get static field: static private System.String kConnectionTypeOculus
    static ::Il2CppString* _get_kConnectionTypeOculus();
    // Set static field: static private System.String kConnectionTypeOculus
    static void _set_kConnectionTypeOculus(::Il2CppString* value);
    // static field const value: static private System.String kConnectionTypeLiteNetLib
    static constexpr const char* kConnectionTypeLiteNetLib = "litenetlib";
    // Get static field: static private System.String kConnectionTypeLiteNetLib
    static ::Il2CppString* _get_kConnectionTypeLiteNetLib();
    // Set static field: static private System.String kConnectionTypeLiteNetLib
    static void _set_kConnectionTypeLiteNetLib(::Il2CppString* value);
    // static field const value: static private System.String kCurrentPartySizeKey
    static constexpr const char* kCurrentPartySizeKey = "currentPartySize";
    // Get static field: static private System.String kCurrentPartySizeKey
    static ::Il2CppString* _get_kCurrentPartySizeKey();
    // Set static field: static private System.String kCurrentPartySizeKey
    static void _set_kCurrentPartySizeKey(::Il2CppString* value);
    // static field const value: static private System.String kMaxPartySizeKey
    static constexpr const char* kMaxPartySizeKey = "maxPartySize";
    // Get static field: static private System.String kMaxPartySizeKey
    static ::Il2CppString* _get_kMaxPartySizeKey();
    // Set static field: static private System.String kMaxPartySizeKey
    static void _set_kMaxPartySizeKey(::Il2CppString* value);
    // static field const value: static private System.String kDifficultiesKey
    static constexpr const char* kDifficultiesKey = "difficulties";
    // Get static field: static private System.String kDifficultiesKey
    static ::Il2CppString* _get_kDifficultiesKey();
    // Set static field: static private System.String kDifficultiesKey
    static void _set_kDifficultiesKey(::Il2CppString* value);
    // static field const value: static private System.String kModifiersKey
    static constexpr const char* kModifiersKey = "modifiers";
    // Get static field: static private System.String kModifiersKey
    static ::Il2CppString* _get_kModifiersKey();
    // Set static field: static private System.String kModifiersKey
    static void _set_kModifiersKey(::Il2CppString* value);
    // static field const value: static private System.String kSongPacksKey
    static constexpr const char* kSongPacksKey = "songPacks";
    // Get static field: static private System.String kSongPacksKey
    static ::Il2CppString* _get_kSongPacksKey();
    // Set static field: static private System.String kSongPacksKey
    static void _set_kSongPacksKey(::Il2CppString* value);
    // static field const value: static private System.Single kAutoRefreshRate
    static constexpr const float kAutoRefreshRate = 30;
    // Get static field: static private System.Single kAutoRefreshRate
    static float _get_kAutoRefreshRate();
    // Set static field: static private System.Single kAutoRefreshRate
    static void _set_kAutoRefreshRate(float value);
    // protected OculusConnectionManager get_oculusConnectionManager()
    // Offset: 0x100B248
    GlobalNamespace::OculusConnectionManager* get_oculusConnectionManager();
    // private OculusNetworkPlayerModel/OculusNetworkPlayer GetPlayer(System.UInt64 id)
    // Offset: 0x100B5CC
    GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer* GetPlayer(uint64_t id);
    // private OculusNetworkPlayerModel/OculusNetworkPlayer GetPlayer(System.String userId)
    // Offset: 0x100B6FC
    GlobalNamespace::OculusNetworkPlayerModel::OculusNetworkPlayer* GetPlayer(::Il2CppString* userId);
    // private System.Void TryCreateRoom()
    // Offset: 0x100B83C
    void TryCreateRoom();
    // public System.String GetUserName(System.UInt64 id)
    // Offset: 0x1009698
    ::Il2CppString* GetUserName(uint64_t id);
    // private System.Threading.Tasks.Task`1<System.String> GetUserNameAsync(System.UInt64 id)
    // Offset: 0x100BA60
    System::Threading::Tasks::Task_1<::Il2CppString*>* GetUserNameAsync(uint64_t id);
    // private System.Void HandleRoomInviteReceived(Oculus.Platform.Message`1<Oculus.Platform.Models.RoomInviteNotification> message)
    // Offset: 0x100BB80
    void HandleRoomInviteReceived(Oculus::Platform::Message_1<Oculus::Platform::Models::RoomInviteNotification*>* message);
    // private System.Void HandleRoomInviteAccepted(Oculus.Platform.Message`1<System.String> message)
    // Offset: 0x100BC6C
    void HandleRoomInviteAccepted(Oculus::Platform::Message_1<::Il2CppString*>* message);
    // private System.Void HandleRoomUpdate(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> message)
    // Offset: 0x100BC70
    void HandleRoomUpdate(Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>* message);
    // private System.Void HandlePlayersChanged()
    // Offset: 0x100C114
    void HandlePlayersChanged();
    // public System.Void Refresh()
    // Offset: 0x100B3F0
    void Refresh();
    // private System.Void UpdateRoomDataStore()
    // Offset: 0x100C97C
    void UpdateRoomDataStore();
    // private System.Void TryLeaveRoom()
    // Offset: 0x100C3DC
    void TryLeaveRoom();
    // private System.Void TryConnectToServer()
    // Offset: 0x100C2A8
    void TryConnectToServer();
    // public System.Threading.Tasks.Task`1<System.Boolean> ShouldAcceptConnectionFromPlayer(System.UInt64 userId)
    // Offset: 0x1009BC8
    System::Threading::Tasks::Task_1<bool>* ShouldAcceptConnectionFromPlayer(uint64_t userId);
    // private System.Void <TryCreateRoom>b__43_0(Oculus.Platform.Message`1<Oculus.Platform.Models.Room> result)
    // Offset: 0x100CAD4
    void $TryCreateRoom$b__43_0(Oculus::Platform::Message_1<Oculus::Platform::Models::Room*>* result);
    // public override System.Boolean get_localPlayerIsPartyOwner()
    // Offset: 0x100ADDC
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Boolean BaseNetworkPlayerModel::get_localPlayerIsPartyOwner()
    bool get_localPlayerIsPartyOwner();
    // public override INetworkPlayer get_localPlayer()
    // Offset: 0x100AE18
    // Implemented from: BaseNetworkPlayerModel
    // Base method: INetworkPlayer BaseNetworkPlayerModel::get_localPlayer()
    GlobalNamespace::INetworkPlayer* get_localPlayer();
    // public override System.Int32 get_currentPartySize()
    // Offset: 0x100AE20
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Int32 BaseNetworkPlayerModel::get_currentPartySize()
    int get_currentPartySize();
    // public override System.Void add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x100AE70
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::add_partySizeChangedEvent(System.Action`1<System.Int32> value)
    void add_partySizeChangedEvent(System::Action_1<int>* value);
    // public override System.Void remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    // Offset: 0x100AF14
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::remove_partySizeChangedEvent(System.Action`1<System.Int32> value)
    void remove_partySizeChangedEvent(System::Action_1<int>* value);
    // public override System.Void add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x100AFB8
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::add_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    void add_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public override System.Void remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    // Offset: 0x100B05C
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::remove_partyChangedEvent(System.Action`1<INetworkPlayerModel> value)
    void remove_partyChangedEvent(System::Action_1<GlobalNamespace::INetworkPlayerModel*>* value);
    // public override System.Void add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x100B100
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::add_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    void add_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // public override System.Void remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    // Offset: 0x100B1A4
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::remove_inviteRequestedEvent(System.Action`1<INetworkPlayer> value)
    void remove_inviteRequestedEvent(System::Action_1<GlobalNamespace::INetworkPlayer*>* value);
    // protected override System.Void Start()
    // Offset: 0x100B2A0
    // Implemented from: StandaloneMonobehavior
    // Base method: System.Void StandaloneMonobehavior::Start()
    void Start();
    // protected override System.Void Update()
    // Offset: 0x100B37C
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::Update()
    void Update();
    // protected override System.Collections.Generic.IEnumerable`1<INetworkPlayer> GetPartyPlayers()
    // Offset: 0x100B5BC
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> BaseNetworkPlayerModel::GetPartyPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GetPartyPlayers();
    // protected override System.Collections.Generic.IEnumerable`1<INetworkPlayer> GetOtherPlayers()
    // Offset: 0x100B5C4
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Collections.Generic.IEnumerable`1<INetworkPlayer> BaseNetworkPlayerModel::GetOtherPlayers()
    System::Collections::Generic::IEnumerable_1<GlobalNamespace::INetworkPlayer*>* GetOtherPlayers();
    // public override System.Boolean CreateParty(INetworkPlayerModelPartyConfig`1<T> createConfig)
    // Offset: 0xFFFFFFFF
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Boolean BaseNetworkPlayerModel::CreateParty(INetworkPlayerModelPartyConfig`1<T> createConfig)
    template<class T>
    bool CreateParty(GlobalNamespace::INetworkPlayerModelPartyConfig_1<T>* createConfig) {
      static_assert(std::is_base_of_v<GlobalNamespace::INetworkPlayerModel, std::remove_pointer_t<T>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<bool>(this, "CreateParty", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, createConfig)));
    }
    // public override System.Void DestroyParty()
    // Offset: 0x100C37C
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::DestroyParty()
    void DestroyParty();
    // public override System.Void Disconnect()
    // Offset: 0x100C3B4
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::Disconnect()
    void Disconnect();
    // protected override System.Void ConnectionFailed(ConnectionFailedReason reason)
    // Offset: 0x100C590
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::ConnectionFailed(ConnectionFailedReason reason)
    void ConnectionFailed(GlobalNamespace::ConnectionFailedReason reason);
    // protected override System.Void PlayerConnected(IConnectedPlayer connectedPlayer)
    // Offset: 0x100C5A0
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::PlayerConnected(IConnectedPlayer connectedPlayer)
    void PlayerConnected(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // protected override System.Void PlayerDisconnected(IConnectedPlayer connectedPlayer)
    // Offset: 0x100C7F0
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::PlayerDisconnected(IConnectedPlayer connectedPlayer)
    void PlayerDisconnected(GlobalNamespace::IConnectedPlayer* connectedPlayer);
    // protected override System.Void PartySizeChanged(System.Int32 currentPartySize)
    // Offset: 0x100C8D4
    // Implemented from: BaseNetworkPlayerModel
    // Base method: System.Void BaseNetworkPlayerModel::PartySizeChanged(System.Int32 currentPartySize)
    void PartySizeChanged(int currentPartySize);
    // public System.Void .ctor()
    // Offset: 0x100C9E8
    // Implemented from: PlatformNetworkPlayerModel
    // Base method: System.Void PlatformNetworkPlayerModel::.ctor()
    // Base method: System.Void BaseNetworkPlayerModel::.ctor()
    // Base method: System.Void StandaloneMonobehavior::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static OculusNetworkPlayerModel* New_ctor();
  }; // OculusNetworkPlayerModel
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusNetworkPlayerModel*, "", "OculusNetworkPlayerModel");
#pragma pack(pop)
