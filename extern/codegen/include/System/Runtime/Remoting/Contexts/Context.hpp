// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.UIntPtr
#include "System/UIntPtr.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessageSink
  class IMessageSink;
  // Forward declaring type: IMessage
  class IMessage;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Runtime::Remoting::Contexts
namespace System::Runtime::Remoting::Contexts {
  // Forward declaring type: IContextProperty
  class IContextProperty;
  // Forward declaring type: DynamicPropertyCollection
  class DynamicPropertyCollection;
  // Forward declaring type: ContextCallbackObject
  class ContextCallbackObject;
  // Forward declaring type: IDynamicProperty
  class IDynamicProperty;
  // Forward declaring type: CrossContextDelegate
  class CrossContextDelegate;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: LocalDataStoreHolder
  class LocalDataStoreHolder;
  // Forward declaring type: LocalDataStoreMgr
  class LocalDataStoreMgr;
  // Forward declaring type: ContextBoundObject
  class ContextBoundObject;
  // Forward declaring type: MarshalByRefObject
  class MarshalByRefObject;
  // Forward declaring type: LocalDataStore
  class LocalDataStore;
  // Forward declaring type: LocalDataStoreSlot
  class LocalDataStoreSlot;
}
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Autogenerated type: System.Runtime.Remoting.Contexts.Context
  class Context : public ::Il2CppObject {
    public:
    // private System.Int32 domain_id
    // Offset: 0x10
    int domain_id;
    // private System.Int32 context_id
    // Offset: 0x14
    int context_id;
    // private System.UIntPtr static_data
    // Offset: 0x18
    System::UIntPtr static_data;
    // private System.UIntPtr data
    // Offset: 0x20
    System::UIntPtr data;
    // private System.Runtime.Remoting.Messaging.IMessageSink server_context_sink_chain
    // Offset: 0x28
    System::Runtime::Remoting::Messaging::IMessageSink* server_context_sink_chain;
    // private System.Runtime.Remoting.Messaging.IMessageSink client_context_sink_chain
    // Offset: 0x30
    System::Runtime::Remoting::Messaging::IMessageSink* client_context_sink_chain;
    // private System.Collections.Generic.List`1<System.Runtime.Remoting.Contexts.IContextProperty> context_properties
    // Offset: 0x38
    System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty*>* context_properties;
    // private System.LocalDataStoreHolder _localDataStore
    // Offset: 0x40
    System::LocalDataStoreHolder* localDataStore;
    // private System.Runtime.Remoting.Contexts.DynamicPropertyCollection context_dynamic_properties
    // Offset: 0x48
    System::Runtime::Remoting::Contexts::DynamicPropertyCollection* context_dynamic_properties;
    // private System.Runtime.Remoting.Contexts.ContextCallbackObject callback_object
    // Offset: 0x50
    System::Runtime::Remoting::Contexts::ContextCallbackObject* callback_object;
    // Get static field: static private System.Object[] local_slots
    static ::Array<::Il2CppObject*>* _get_local_slots();
    // Set static field: static private System.Object[] local_slots
    static void _set_local_slots(::Array<::Il2CppObject*>* value);
    // Get static field: static private System.Runtime.Remoting.Messaging.IMessageSink default_server_context_sink
    static System::Runtime::Remoting::Messaging::IMessageSink* _get_default_server_context_sink();
    // Set static field: static private System.Runtime.Remoting.Messaging.IMessageSink default_server_context_sink
    static void _set_default_server_context_sink(System::Runtime::Remoting::Messaging::IMessageSink* value);
    // Get static field: static private System.Int32 global_count
    static int _get_global_count();
    // Set static field: static private System.Int32 global_count
    static void _set_global_count(int value);
    // Get static field: static private System.LocalDataStoreMgr _localDataStoreMgr
    static System::LocalDataStoreMgr* _get__localDataStoreMgr();
    // Set static field: static private System.LocalDataStoreMgr _localDataStoreMgr
    static void _set__localDataStoreMgr(System::LocalDataStoreMgr* value);
    // Get static field: static private System.Runtime.Remoting.Contexts.DynamicPropertyCollection global_dynamic_properties
    static System::Runtime::Remoting::Contexts::DynamicPropertyCollection* _get_global_dynamic_properties();
    // Set static field: static private System.Runtime.Remoting.Contexts.DynamicPropertyCollection global_dynamic_properties
    static void _set_global_dynamic_properties(System::Runtime::Remoting::Contexts::DynamicPropertyCollection* value);
    // static private System.Void RegisterContext(System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x117214C
    static void RegisterContext(System::Runtime::Remoting::Contexts::Context* ctx);
    // static private System.Void ReleaseContext(System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x1172150
    static void ReleaseContext(System::Runtime::Remoting::Contexts::Context* ctx);
    // static public System.Runtime.Remoting.Contexts.Context get_DefaultContext()
    // Offset: 0x1172298
    static System::Runtime::Remoting::Contexts::Context* get_DefaultContext();
    // public System.Int32 get_ContextID()
    // Offset: 0x11722A0
    int get_ContextID();
    // public System.Runtime.Remoting.Contexts.IContextProperty[] get_ContextProperties()
    // Offset: 0x11722A8
    ::Array<System::Runtime::Remoting::Contexts::IContextProperty*>* get_ContextProperties();
    // System.Boolean get_IsDefaultContext()
    // Offset: 0x1172318
    bool get_IsDefaultContext();
    // System.Boolean get_NeedsContextSink()
    // Offset: 0x1172328
    bool get_NeedsContextSink();
    // static public System.Boolean RegisterDynamicProperty(System.Runtime.Remoting.Contexts.IDynamicProperty prop, System.ContextBoundObject obj, System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x1172454
    static bool RegisterDynamicProperty(System::Runtime::Remoting::Contexts::IDynamicProperty* prop, System::ContextBoundObject* obj, System::Runtime::Remoting::Contexts::Context* ctx);
    // static public System.Boolean UnregisterDynamicProperty(System.String name, System.ContextBoundObject obj, System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x11729B4
    static bool UnregisterDynamicProperty(::Il2CppString* name, System::ContextBoundObject* obj, System::Runtime::Remoting::Contexts::Context* ctx);
    // static private System.Runtime.Remoting.Contexts.DynamicPropertyCollection GetDynamicPropertyCollection(System.ContextBoundObject obj, System.Runtime.Remoting.Contexts.Context ctx)
    // Offset: 0x11724DC
    static System::Runtime::Remoting::Contexts::DynamicPropertyCollection* GetDynamicPropertyCollection(System::ContextBoundObject* obj, System::Runtime::Remoting::Contexts::Context* ctx);
    // static System.Void NotifyGlobalDynamicSinks(System.Boolean start, System.Runtime.Remoting.Messaging.IMessage req_msg, System.Boolean client_site, System.Boolean async)
    // Offset: 0x1172C8C
    static void NotifyGlobalDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
    // static System.Boolean get_HasGlobalDynamicSinks()
    // Offset: 0x1173374
    static bool get_HasGlobalDynamicSinks();
    // System.Void NotifyDynamicSinks(System.Boolean start, System.Runtime.Remoting.Messaging.IMessage req_msg, System.Boolean client_site, System.Boolean async)
    // Offset: 0x1173430
    void NotifyDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage* req_msg, bool client_site, bool async);
    // System.Boolean get_HasDynamicSinks()
    // Offset: 0x11734C4
    bool get_HasDynamicSinks();
    // System.Boolean get_HasExitSinks()
    // Offset: 0x1166980
    bool get_HasExitSinks();
    // public System.Runtime.Remoting.Contexts.IContextProperty GetProperty(System.String name)
    // Offset: 0x1173508
    System::Runtime::Remoting::Contexts::IContextProperty* GetProperty(::Il2CppString* name);
    // public System.Void SetProperty(System.Runtime.Remoting.Contexts.IContextProperty prop)
    // Offset: 0x117368C
    void SetProperty(System::Runtime::Remoting::Contexts::IContextProperty* prop);
    // public System.Void Freeze()
    // Offset: 0x11737CC
    void Freeze();
    // System.Runtime.Remoting.Messaging.IMessageSink GetServerContextSinkChain()
    // Offset: 0x11683B8
    System::Runtime::Remoting::Messaging::IMessageSink* GetServerContextSinkChain();
    // System.Runtime.Remoting.Messaging.IMessageSink GetClientContextSinkChain()
    // Offset: 0x1166A3C
    System::Runtime::Remoting::Messaging::IMessageSink* GetClientContextSinkChain();
    // System.Runtime.Remoting.Messaging.IMessageSink CreateServerObjectSinkChain(System.MarshalByRefObject obj, System.Boolean forceInternalExecute)
    // Offset: 0x116E568
    System::Runtime::Remoting::Messaging::IMessageSink* CreateServerObjectSinkChain(System::MarshalByRefObject* obj, bool forceInternalExecute);
    // System.Runtime.Remoting.Messaging.IMessageSink CreateEnvoySink(System.MarshalByRefObject serverObject)
    // Offset: 0x1173A18
    System::Runtime::Remoting::Messaging::IMessageSink* CreateEnvoySink(System::MarshalByRefObject* serverObject);
    // static System.Runtime.Remoting.Contexts.Context SwitchToContext(System.Runtime.Remoting.Contexts.Context newContext)
    // Offset: 0x116907C
    static System::Runtime::Remoting::Contexts::Context* SwitchToContext(System::Runtime::Remoting::Contexts::Context* newContext);
    // static System.Runtime.Remoting.Contexts.Context CreateNewContext(System.Runtime.Remoting.Activation.IConstructionCallMessage msg)
    // Offset: 0x11688C0
    static System::Runtime::Remoting::Contexts::Context* CreateNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage* msg);
    // public System.Void DoCallBack(System.Runtime.Remoting.Contexts.CrossContextDelegate deleg)
    // Offset: 0x1173BC8
    void DoCallBack(System::Runtime::Remoting::Contexts::CrossContextDelegate* deleg);
    // private System.LocalDataStore get_MyLocalStore()
    // Offset: 0x1173D18
    System::LocalDataStore* get_MyLocalStore();
    // static public System.LocalDataStoreSlot AllocateDataSlot()
    // Offset: 0x1173E88
    static System::LocalDataStoreSlot* AllocateDataSlot();
    // static public System.LocalDataStoreSlot AllocateNamedDataSlot(System.String name)
    // Offset: 0x1173EFC
    static System::LocalDataStoreSlot* AllocateNamedDataSlot(::Il2CppString* name);
    // static public System.Void FreeNamedDataSlot(System.String name)
    // Offset: 0x1173F78
    static void FreeNamedDataSlot(::Il2CppString* name);
    // static public System.LocalDataStoreSlot GetNamedDataSlot(System.String name)
    // Offset: 0x1173FF4
    static System::LocalDataStoreSlot* GetNamedDataSlot(::Il2CppString* name);
    // static public System.Object GetData(System.LocalDataStoreSlot slot)
    // Offset: 0x1174070
    static ::Il2CppObject* GetData(System::LocalDataStoreSlot* slot);
    // static public System.Void SetData(System.LocalDataStoreSlot slot, System.Object data)
    // Offset: 0x11740AC
    static void SetData(System::LocalDataStoreSlot* slot, ::Il2CppObject* data);
    // static private System.Void .cctor()
    // Offset: 0x11740F0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1172154
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Context* New_ctor();
    // protected override System.Void Finalize()
    // Offset: 0x11721E8
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
    // public override System.String ToString()
    // Offset: 0x1173930
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Runtime.Remoting.Contexts.Context
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::Context*, "System.Runtime.Remoting.Contexts", "Context");
#pragma pack(pop)
