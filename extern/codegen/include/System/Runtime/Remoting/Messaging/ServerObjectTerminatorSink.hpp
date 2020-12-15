// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Messaging.IMessageSink
#include "System/Runtime/Remoting/Messaging/IMessageSink.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Remoting::Messaging
namespace System::Runtime::Remoting::Messaging {
  // Forward declaring type: IMessage
  class IMessage;
  // Forward declaring type: IMessageCtrl
  class IMessageCtrl;
}
// Completed forward declares
// Type namespace: System.Runtime.Remoting.Messaging
namespace System::Runtime::Remoting::Messaging {
  // Autogenerated type: System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
  class ServerObjectTerminatorSink : public ::Il2CppObject/*, public System::Runtime::Remoting::Messaging::IMessageSink*/ {
    public:
    // private System.Runtime.Remoting.Messaging.IMessageSink _nextSink
    // Offset: 0x10
    System::Runtime::Remoting::Messaging::IMessageSink* nextSink;
    // Creating interface conversion operator: operator System::Runtime::Remoting::Messaging::IMessageSink
    operator System::Runtime::Remoting::Messaging::IMessageSink() noexcept {
      return *reinterpret_cast<System::Runtime::Remoting::Messaging::IMessageSink*>(this);
    }
    // Creating conversion operator: operator System::Runtime::Remoting::Messaging::IMessageSink*
    constexpr operator System::Runtime::Remoting::Messaging::IMessageSink*() const noexcept {
      return nextSink;
    }
    // public System.Void .ctor(System.Runtime.Remoting.Messaging.IMessageSink nextSink)
    // Offset: 0x132EE78
    static ServerObjectTerminatorSink* New_ctor(System::Runtime::Remoting::Messaging::IMessageSink* nextSink);
    // public System.Runtime.Remoting.Messaging.IMessage SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    // Offset: 0x132EEAC
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessage IMessageSink::SyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg)
    System::Runtime::Remoting::Messaging::IMessage* SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg);
    // public System.Runtime.Remoting.Messaging.IMessageCtrl AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    // Offset: 0x132F01C
    // Implemented from: System.Runtime.Remoting.Messaging.IMessageSink
    // Base method: System.Runtime.Remoting.Messaging.IMessageCtrl IMessageSink::AsyncProcessMessage(System.Runtime.Remoting.Messaging.IMessage msg, System.Runtime.Remoting.Messaging.IMessageSink replySink)
    System::Runtime::Remoting::Messaging::IMessageCtrl* AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage* msg, System::Runtime::Remoting::Messaging::IMessageSink* replySink);
  }; // System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink*, "System.Runtime.Remoting.Messaging", "ServerObjectTerminatorSink");
#pragma pack(pop)