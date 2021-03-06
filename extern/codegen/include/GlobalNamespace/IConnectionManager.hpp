// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: DisconnectedReason
#include "GlobalNamespace/DisconnectedReason.hpp"
// Including type: ConnectionFailedReason
#include "GlobalNamespace/ConnectionFailedReason.hpp"
// Including type: LiteNetLib.DeliveryMethod
#include "LiteNetLib/DeliveryMethod.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnection
  class IConnection;
  // Forward declaring type: IConnectionInitParams`1<T>
  template<typename T>
  class IConnectionInitParams_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataReader
  class NetDataReader;
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: IConnectionManager
  // [] Offset: FFFFFFFF
  class IConnectionManager/*, public System::IDisposable*/ {
    public:
    // Creating value type constructor for type: IConnectionManager
    IConnectionManager() noexcept {}
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void add_onConnectedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void add_onConnectedEvent(System::Action* value);
    // public System.Void remove_onConnectedEvent(System.Action value)
    // Offset: 0xFFFFFFFF
    void remove_onConnectedEvent(System::Action* value);
    // public System.Void add_onDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0xFFFFFFFF
    void add_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_onDisconnectedEvent(System.Action`1<DisconnectedReason> value)
    // Offset: 0xFFFFFFFF
    void remove_onDisconnectedEvent(System::Action_1<GlobalNamespace::DisconnectedReason>* value);
    // public System.Void add_onConnectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0xFFFFFFFF
    void add_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void remove_onConnectionFailedEvent(System.Action`1<ConnectionFailedReason> value)
    // Offset: 0xFFFFFFFF
    void remove_onConnectionFailedEvent(System::Action_1<GlobalNamespace::ConnectionFailedReason>* value);
    // public System.Void add_onConnectionConnectedEvent(System.Action`1<IConnection> value)
    // Offset: 0xFFFFFFFF
    void add_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection*>* value);
    // public System.Void remove_onConnectionConnectedEvent(System.Action`1<IConnection> value)
    // Offset: 0xFFFFFFFF
    void remove_onConnectionConnectedEvent(System::Action_1<GlobalNamespace::IConnection*>* value);
    // public System.Void add_onConnectionDisconnectedEvent(System.Action`2<IConnection,DisconnectedReason> value)
    // Offset: 0xFFFFFFFF
    void add_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection*, GlobalNamespace::DisconnectedReason>* value);
    // public System.Void remove_onConnectionDisconnectedEvent(System.Action`2<IConnection,DisconnectedReason> value)
    // Offset: 0xFFFFFFFF
    void remove_onConnectionDisconnectedEvent(System::Action_2<GlobalNamespace::IConnection*, GlobalNamespace::DisconnectedReason>* value);
    // public System.Void add_onLatencyUpdatedEvent(System.Action`2<IConnection,System.Single> value)
    // Offset: 0xFFFFFFFF
    void add_onLatencyUpdatedEvent(System::Action_2<GlobalNamespace::IConnection*, float>* value);
    // public System.Void remove_onLatencyUpdatedEvent(System.Action`2<IConnection,System.Single> value)
    // Offset: 0xFFFFFFFF
    void remove_onLatencyUpdatedEvent(System::Action_2<GlobalNamespace::IConnection*, float>* value);
    // public System.Void add_onReceivedDataEvent(System.Action`3<IConnection,LiteNetLib.Utils.NetDataReader,LiteNetLib.DeliveryMethod> value)
    // Offset: 0xFFFFFFFF
    void add_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection*, LiteNetLib::Utils::NetDataReader*, LiteNetLib::DeliveryMethod>* value);
    // public System.Void remove_onReceivedDataEvent(System.Action`3<IConnection,LiteNetLib.Utils.NetDataReader,LiteNetLib.DeliveryMethod> value)
    // Offset: 0xFFFFFFFF
    void remove_onReceivedDataEvent(System::Action_3<GlobalNamespace::IConnection*, LiteNetLib::Utils::NetDataReader*, LiteNetLib::DeliveryMethod>* value);
    // public System.String get_userId()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_userName();
    // public System.Boolean get_isConnected()
    // Offset: 0xFFFFFFFF
    bool get_isConnected();
    // public System.Boolean get_isConnecting()
    // Offset: 0xFFFFFFFF
    bool get_isConnecting();
    // public System.Boolean get_isDisconnecting()
    // Offset: 0xFFFFFFFF
    bool get_isDisconnecting();
    // public System.Int32 get_connectionCount()
    // Offset: 0xFFFFFFFF
    int get_connectionCount();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0xFFFFFFFF
    bool get_isConnectionOwner();
    // public System.Boolean get_isDisposed()
    // Offset: 0xFFFFFFFF
    bool get_isDisposed();
    // public System.Void SendToAll(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0xFFFFFFFF
    void SendToAll(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Void SendToAll(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod, IConnection excludingConnection)
    // Offset: 0xFFFFFFFF
    void SendToAll(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod, GlobalNamespace::IConnection* excludingConnection);
    // public System.Void PollUpdate()
    // Offset: 0xFFFFFFFF
    void PollUpdate();
    // public System.Boolean Init(IConnectionInitParams`1<T> initParams)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool Init(GlobalNamespace::IConnectionInitParams_1<T>* initParams) {
      static_assert(std::is_base_of_v<GlobalNamespace::IConnectionManager, std::remove_pointer_t<T>>);
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::IConnectionManager::Init");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Init", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(initParams)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, initParams);
    }
    // public System.Void Disconnect(DisconnectedReason disconnectedReason)
    // Offset: 0xFFFFFFFF
    void Disconnect(GlobalNamespace::DisconnectedReason disconnectedReason);
    // public IConnection GetConnection(System.Int32 index)
    // Offset: 0xFFFFFFFF
    GlobalNamespace::IConnection* GetConnection(int index);
  }; // IConnectionManager
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IConnectionManager*, "", "IConnectionManager");
