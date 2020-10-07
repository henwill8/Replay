// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.MessageDictionary
#include "System/Runtime/Remoting/Messaging/MessageDictionary.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Activation
namespace System::Runtime::Remoting::Activation {
  // Forward declaring type: IConstructionCallMessage
  class IConstructionCallMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.ConstructionCallDictionary
  class ConstructionCallDictionary : public System::Runtime::Remoting::Messaging::MessageDictionary {
    public:
    // Get static field: static public System.String[] InternalKeys
    static ::Array<::Il2CppString*>* _get_InternalKeys();
    // Set static field: static public System.String[] InternalKeys
    static void _set_InternalKeys(::Array<::Il2CppString*>* value);
    // public System.Void .ctor(System.Runtime.Remoting.Activation.IConstructionCallMessage message)
    // Offset: 0x1067974
    static ConstructionCallDictionary* New_ctor(System::Runtime::Remoting::Activation::IConstructionCallMessage* message);
    // static private System.Void .cctor()
    // Offset: 0x10695A8
    static void _cctor();
    // protected override System.Object GetMethodProperty(System.String key)
    // Offset: 0x106874C
    // Implemented from: System.Runtime.Remoting.Messaging.MessageDictionary
    // Base method: System.Object MessageDictionary::GetMethodProperty(System.String key)
    ::Il2CppObject* GetMethodProperty(::Il2CppString* key);
    // protected override System.Void SetMethodProperty(System.String key, System.Object value)
    // Offset: 0x10690F4
    // Implemented from: System.Runtime.Remoting.Messaging.MessageDictionary
    // Base method: System.Void MessageDictionary::SetMethodProperty(System.String key, System.Object value)
    void SetMethodProperty(::Il2CppString* key, ::Il2CppObject* value);
  }; // System.Runtime.Remoting.Messaging.ConstructionCallDictionary
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ConstructionCallDictionary*, "System.Runtime.Remoting.Messaging", "ConstructionCallDictionary");
#pragma pack(pop)
