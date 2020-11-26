// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusConnectionManager
#include "GlobalNamespace/OculusConnectionManager.hpp"
// Including type: IConnection
#include "GlobalNamespace/IConnection.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
}
// Forward declaring namespace: LiteNetLib
namespace LiteNetLib {
  // Forward declaring type: DeliveryMethod
  struct DeliveryMethod;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusConnectionManager/OculusConnection
  class OculusConnectionManager::OculusConnection : public ::Il2CppObject/*, public GlobalNamespace::IConnection, public System::IEquatable_1<GlobalNamespace::OculusConnectionManager::OculusConnection*>*/ {
    public:
    // Nested type: GlobalNamespace::OculusConnectionManager::OculusConnection::$$c__DisplayClass15_0
    class $$c__DisplayClass15_0;
    // private readonly System.UInt64 _id
    // Offset: 0x10
    uint64_t id;
    // private readonly System.String _userId
    // Offset: 0x18
    ::Il2CppString* userId;
    // private readonly System.String _userName
    // Offset: 0x20
    ::Il2CppString* userName;
    // private readonly System.Boolean _isConnectionOwner
    // Offset: 0x28
    bool isConnectionOwner;
    // Creating interface conversion operator: operator GlobalNamespace::IConnection
    operator GlobalNamespace::IConnection() noexcept {
      return *reinterpret_cast<GlobalNamespace::IConnection*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<GlobalNamespace::OculusConnectionManager::OculusConnection*>
    operator System::IEquatable_1<GlobalNamespace::OculusConnectionManager::OculusConnection*>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<GlobalNamespace::OculusConnectionManager::OculusConnection*>*>(this);
    }
    // public System.UInt64 get_id()
    // Offset: 0x1009D80
    uint64_t get_id();
    // public System.Void .ctor(System.UInt64 id, System.String userName, System.Boolean isConnectionOwner)
    // Offset: 0x10096B4
    static OculusConnectionManager::OculusConnection* New_ctor(uint64_t id, ::Il2CppString* userName, bool isConnectionOwner);
    // public System.Void Ping(System.Action`2<OculusConnectionManager/OculusConnection,System.Single> onPingResult)
    // Offset: 0x1008F98
    void Ping(System::Action_2<GlobalNamespace::OculusConnectionManager::OculusConnection*, float>* onPingResult);
    // public System.String get_userId()
    // Offset: 0x1009D88
    // Implemented from: IConnection
    // Base method: System.String IConnection::get_userId()
    ::Il2CppString* get_userId();
    // public System.String get_userName()
    // Offset: 0x1009D90
    // Implemented from: IConnection
    // Base method: System.String IConnection::get_userName()
    ::Il2CppString* get_userName();
    // public System.Boolean get_isConnectionOwner()
    // Offset: 0x1009D98
    // Implemented from: IConnection
    // Base method: System.Boolean IConnection::get_isConnectionOwner()
    bool get_isConnectionOwner();
    // public System.Void Send(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    // Offset: 0x1008A4C
    // Implemented from: IConnection
    // Base method: System.Void IConnection::Send(LiteNetLib.Utils.NetDataWriter writer, LiteNetLib.DeliveryMethod deliveryMethod)
    void Send(LiteNetLib::Utils::NetDataWriter* writer, LiteNetLib::DeliveryMethod deliveryMethod);
    // public System.Void Disconnect()
    // Offset: 0x10092D4
    // Implemented from: IConnection
    // Base method: System.Void IConnection::Disconnect()
    void Disconnect();
    // public System.Boolean Equals(OculusConnectionManager/OculusConnection other)
    // Offset: 0x1009DA8
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(OculusConnectionManager/OculusConnection other)
    bool Equals(GlobalNamespace::OculusConnectionManager::OculusConnection* other);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1009DD8
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1009EEC
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.String ToString()
    // Offset: 0x1009F18
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // OculusConnectionManager/OculusConnection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusConnectionManager::OculusConnection*, "", "OculusConnectionManager/OculusConnection");
#pragma pack(pop)
