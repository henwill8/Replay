// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.OSSpecificSynchronizationContext
#include "System/Threading/OSSpecificSynchronizationContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.OSSpecificSynchronizationContext/InvocationContext
  class OSSpecificSynchronizationContext::InvocationContext : public ::Il2CppObject {
    public:
    // private System.Threading.SendOrPostCallback m_Delegate
    // Offset: 0x10
    System::Threading::SendOrPostCallback* m_Delegate;
    // private System.Object m_State
    // Offset: 0x18
    ::Il2CppObject* m_State;
    // public System.Void .ctor(System.Threading.SendOrPostCallback d, System.Object state)
    // Offset: 0x13E0648
    static OSSpecificSynchronizationContext::InvocationContext* New_ctor(System::Threading::SendOrPostCallback* d, ::Il2CppObject* state);
    // public System.Void Invoke()
    // Offset: 0x13E069C
    void Invoke();
  }; // System.Threading.OSSpecificSynchronizationContext/InvocationContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::OSSpecificSynchronizationContext::InvocationContext*, "System.Threading", "OSSpecificSynchronizationContext/InvocationContext");
#pragma pack(pop)
