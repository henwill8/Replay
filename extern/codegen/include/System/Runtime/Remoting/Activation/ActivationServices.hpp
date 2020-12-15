// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IActivator
  class IActivator;
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: ConstructionCall
  class ConstructionCall;
}
// Forward declaring namespace: System::Runtime::Remoting::Proxies
namespace System::Runtime::Remoting::Proxies {
  // Forward declaring type: RemotingProxy
  class RemotingProxy;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Activation
namespace System::Runtime::Remoting::Activation {
  // Autogenerated type: System.Runtime.Remoting.Activation.ActivationServices
  class ActivationServices : public ::Il2CppObject {
    public:
    // Get static field: static private System.Runtime.Remoting.Activation.IActivator _constructionActivator
    static System::Runtime::Remoting::Activation::IActivator* _get__constructionActivator();
    // Set static field: static private System.Runtime.Remoting.Activation.IActivator _constructionActivator
    static void _set__constructionActivator(System::Runtime::Remoting::Activation::IActivator* value);
    // static private System.Runtime.Remoting.Activation.IActivator get_ConstructionActivator()
    // Offset: 0x11666B4
    static System::Runtime::Remoting::Activation::IActivator* get_ConstructionActivator();
    // static public System.Runtime.Remoting.Messaging.IMessage Activate(System.Runtime.Remoting.Proxies.RemotingProxy proxy, System.Runtime.Remoting.Messaging.ConstructionCall ctorCall)
    // Offset: 0x116674C
    static System::Runtime::Remoting::Messaging::IMessage* Activate(System::Runtime::Remoting::Proxies::RemotingProxy* proxy, System::Runtime::Remoting::Messaging::ConstructionCall* ctorCall);
    // static public System.Runtime.Remoting.Messaging.IMessage RemoteActivate(System.Runtime.Remoting.Activation.IConstructionCallMessage ctorCall)
    // Offset: 0x1166C0C
    static System::Runtime::Remoting::Messaging::IMessage* RemoteActivate(System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);
    // static public System.Runtime.Remoting.Messaging.ConstructionCall CreateConstructionCall(System.Type type, System.String activationUrl, System.Object[] activationAttributes)
    // Offset: 0x1166DEC
    static System::Runtime::Remoting::Messaging::ConstructionCall* CreateConstructionCall(System::Type* type, ::Il2CppString* activationUrl, ::Array<::Il2CppObject*>* activationAttributes);
    // static public System.Runtime.Remoting.Messaging.IMessage CreateInstanceFromMessage(System.Runtime.Remoting.Activation.IConstructionCallMessage ctorCall)
    // Offset: 0x116783C
    static System::Runtime::Remoting::Messaging::IMessage* CreateInstanceFromMessage(System::Runtime::Remoting::Activation::IConstructionCallMessage* ctorCall);
    // static public System.Object CreateProxyForType(System.Type type)
    // Offset: 0x1167C54
    static ::Il2CppObject* CreateProxyForType(System::Type* type);
    // static public System.Object AllocateUninitializedClassInstance(System.Type type)
    // Offset: 0x1167C3C
    static ::Il2CppObject* AllocateUninitializedClassInstance(System::Type* type);
    // static public System.Void EnableProxyActivation(System.Type type, System.Boolean enable)
    // Offset: 0x1167DC8
    static void EnableProxyActivation(System::Type* type, bool enable);
  }; // System.Runtime.Remoting.Activation.ActivationServices
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Activation::ActivationServices*, "System.Runtime.Remoting.Activation", "ActivationServices");
#pragma pack(pop)