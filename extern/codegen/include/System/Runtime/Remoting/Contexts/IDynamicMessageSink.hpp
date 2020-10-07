// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Contexts
namespace System::Runtime::Remoting::Contexts {
  // Autogenerated type: System.Runtime.Remoting.Contexts.IDynamicMessageSink
  class IDynamicMessageSink {
    public:
    // public System.Void ProcessMessageFinish(System.Runtime.Remoting.Messaging.IMessage replyMsg, System.Boolean bCliSide, System.Boolean bAsync)
    // Offset: 0xFFFFFFFF
    void ProcessMessageFinish(System::Runtime::Remoting::Messaging::IMessage* replyMsg, bool bCliSide, bool bAsync);
    // public System.Void ProcessMessageStart(System.Runtime.Remoting.Messaging.IMessage reqMsg, System.Boolean bCliSide, System.Boolean bAsync)
    // Offset: 0xFFFFFFFF
    void ProcessMessageStart(System::Runtime::Remoting::Messaging::IMessage* reqMsg, bool bCliSide, bool bAsync);
  }; // System.Runtime.Remoting.Contexts.IDynamicMessageSink
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::IDynamicMessageSink*, "System.Runtime.Remoting.Contexts", "IDynamicMessageSink");
#pragma pack(pop)
