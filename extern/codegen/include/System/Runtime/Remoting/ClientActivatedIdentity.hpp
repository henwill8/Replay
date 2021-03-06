// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.ServerIdentity
#include "System/Runtime/Remoting/ServerIdentity.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
  // Forward declaring type: IMessageSink
  class IMessageSink;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Size: 0x78
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.ClientActivatedIdentity
  // [] Offset: FFFFFFFF
  class ClientActivatedIdentity : public System::Runtime::Remoting::ServerIdentity {
    public:
    // private System.MarshalByRefObject _targetThis
    // Size: 0x8
    // Offset: 0x70
    System::MarshalByRefObject* targetThis;
    // Field size check
    static_assert(sizeof(System::MarshalByRefObject*) == 0x8);
    // Creating value type constructor for type: ClientActivatedIdentity
    ClientActivatedIdentity(System::MarshalByRefObject* targetThis_ = {}) noexcept : targetThis{targetThis_} {}
    // Creating conversion operator: operator System::MarshalByRefObject*
    constexpr operator System::MarshalByRefObject*() const noexcept {
      return targetThis;
    }
    // public System.Void .ctor(System.String objectUri, System.Type objectType)
    // Offset: 0x1314DD8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ClientActivatedIdentity* New_ctor(::Il2CppString* objectUri, System::Type* objectType) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::ClientActivatedIdentity::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ClientActivatedIdentity*, creationType>(objectUri, objectType)));
    }
    // public System.MarshalByRefObject GetServerObject()
    // Offset: 0x1314DE8
    System::MarshalByRefObject* GetServerObject();
    // public System.Void SetClientProxy(System.MarshalByRefObject obj)
    // Offset: 0x1314DF0
    void SetClientProxy(System::MarshalByRefObject* obj);
    // public override System.Void OnLifetimeExpired()
    // Offset: 0x1314DF8
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Void ServerIdentity::OnLifetimeExpired()
    void OnLifetimeExpired();
    // public override System.Runtime.Remoting.Messaging.IMessage SyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x1314E6C
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Runtime.Remoting.Messaging.IMessage ServerIdentity::SyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public override System.Runtime.Remoting.Messaging.IMessageCtrl AsyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x1315108
    // Implemented from: System.Runtime.Remoting.ServerIdentity
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl ServerIdentity::AsyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.ClientActivatedIdentity
  #pragma pack(pop)
  static check_size<sizeof(ClientActivatedIdentity), 112 + sizeof(System::MarshalByRefObject*)> __System_Runtime_Remoting_ClientActivatedIdentitySizeCheck;
  static_assert(sizeof(ClientActivatedIdentity) == 0x78);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ClientActivatedIdentity*, "System.Runtime.Remoting", "ClientActivatedIdentity");
