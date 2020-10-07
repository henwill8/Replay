// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Identity
#include "System/Runtime/Remoting/Identity.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: Context
  class Context;
}
// Forward declaring namespace: System::Runtime::Remoting::Lifetime
namespace System::Runtime::Remoting::Lifetime {
  // Forward declaring type: Lease
  class Lease;
  // Forward declaring type: ILease
  class ILease;
}
// Forward declaring namespace: System::Runtime::Remoting
namespace System::Runtime::Remoting {
  // Forward declaring type: ObjRef
  class ObjRef;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting
namespace System::Runtime::Remoting {
  // Autogenerated type: System.Runtime.Remoting.ServerIdentity
  class ServerIdentity : public System::Runtime::Remoting::Identity {
    public:
    // protected System.Type _objectType
    // Offset: 0x48
    System::Type* objectType;
    // protected System.MarshalByRefObject _serverObject
    // Offset: 0x50
    System::MarshalByRefObject* serverObject;
    // protected System.Runtime.Remoting.Messaging.IMessageSink _serverSink
    // Offset: 0x58
    System::Runtime::Remoting::Messaging::IMessageSink* serverSink;
    // protected System.Runtime.Remoting.Contexts.Context _context
    // Offset: 0x60
    System::Runtime::Remoting::Contexts::Context* context;
    // protected System.Runtime.Remoting.Lifetime.Lease _lease
    // Offset: 0x68
    System::Runtime::Remoting::Lifetime::Lease* lease;
    // public System.Void .ctor(System.String objectUri, System.Runtime.Remoting.Contexts.Context context, System.Type objectType)
    // Offset: 0xE1FB8C
    static ServerIdentity* New_ctor(::Il2CppString* objectUri, System::Runtime::Remoting::Contexts::Context* context, System::Type* objectType);
    // public System.Type get_ObjectType()
    // Offset: 0xE1FBDC
    System::Type* get_ObjectType();
    // public System.Void StartTrackingLifetime(System.Runtime.Remoting.Lifetime.ILease lease)
    // Offset: 0xE1DD04
    void StartTrackingLifetime(System::Runtime::Remoting::Lifetime::ILease* lease);
    // public System.Void OnLifetimeExpired()
    // Offset: 0xE1FBE4
    void OnLifetimeExpired();
    // public System.Void AttachServerObject(System.MarshalByRefObject serverObject, System.Runtime.Remoting.Contexts.Context context)
    // Offset: 0xE1F62C
    void AttachServerObject(System::MarshalByRefObject* serverObject, System::Runtime::Remoting::Contexts::Context* context);
    // public System.Runtime.Remoting.Lifetime.Lease get_Lease()
    // Offset: 0xE1FE44
    System::Runtime::Remoting::Lifetime::Lease* get_Lease();
    // public System.Runtime.Remoting.Contexts.Context get_Context()
    // Offset: 0xE1FE4C
    System::Runtime::Remoting::Contexts::Context* get_Context();
    // public System.Void set_Context(System.Runtime.Remoting.Contexts.Context value)
    // Offset: 0xE1FE54
    void set_Context(System::Runtime::Remoting::Contexts::Context* value);
    // public System.Runtime.Remoting.Messaging.IMessage SyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::IMessage* SyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncObjectProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0xFFFFFFFF
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncObjectProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
    // protected System.Void DisposeServerObject()
    // Offset: 0xE1FBE8
    void DisposeServerObject();
    // public override System.Runtime.Remoting.ObjRef CreateObjRef(System.Type requestedType)
    // Offset: 0xE1FCA0
    // Implemented from: System.Runtime.Remoting.Identity
    // Base method: System.Runtime.Remoting.ObjRef Identity::CreateObjRef(System.Type requestedType)
    System::Runtime::Remoting::ObjRef* CreateObjRef(System::Type* requestedType);
  }; // System.Runtime.Remoting.ServerIdentity
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::ServerIdentity*, "System.Runtime.Remoting", "ServerIdentity");
#pragma pack(pop)
