// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
#include "System/Runtime/ConstrainedExecution/CriticalFinalizerObject.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Threading.ThreadState
#include "System/Threading/ThreadState.hpp"
// Including type: System.UIntPtr
#include "System/UIntPtr.hpp"
// Completed includes
// Type namespace: System.Threading
namespace System::Threading {
  // Autogenerated type: System.Threading.InternalThread
  class InternalThread : public System::Runtime::ConstrainedExecution::CriticalFinalizerObject {
    public:
    // private System.Int32 lock_thread_id
    // Offset: 0x10
    int lock_thread_id;
    // private System.IntPtr handle
    // Offset: 0x18
    System::IntPtr handle;
    // private System.IntPtr native_handle
    // Offset: 0x20
    System::IntPtr native_handle;
    // private System.IntPtr unused3
    // Offset: 0x28
    System::IntPtr unused3;
    // private System.IntPtr name
    // Offset: 0x30
    System::IntPtr name;
    // private System.Int32 name_len
    // Offset: 0x38
    int name_len;
    // private System.Threading.ThreadState state
    // Offset: 0x3C
    System::Threading::ThreadState state;
    // private System.Object abort_exc
    // Offset: 0x40
    ::Il2CppObject* abort_exc;
    // private System.Int32 abort_state_handle
    // Offset: 0x48
    int abort_state_handle;
    // System.Int64 thread_id
    // Offset: 0x50
    int64_t thread_id;
    // private System.IntPtr debugger_thread
    // Offset: 0x58
    System::IntPtr debugger_thread;
    // private System.UIntPtr static_data
    // Offset: 0x60
    System::UIntPtr static_data;
    // private System.IntPtr runtime_thread_info
    // Offset: 0x68
    System::IntPtr runtime_thread_info;
    // private System.Object current_appcontext
    // Offset: 0x70
    ::Il2CppObject* current_appcontext;
    // private System.Object root_domain_thread
    // Offset: 0x78
    ::Il2CppObject* root_domain_thread;
    // System.Byte[] _serialized_principal
    // Offset: 0x80
    ::Array<uint8_t>* serialized_principal;
    // System.Int32 _serialized_principal_version
    // Offset: 0x88
    int serialized_principal_version;
    // private System.IntPtr appdomain_refs
    // Offset: 0x90
    System::IntPtr appdomain_refs;
    // private System.Int32 interruption_requested
    // Offset: 0x98
    int interruption_requested;
    // private System.IntPtr synch_cs
    // Offset: 0xA0
    System::IntPtr synch_cs;
    // System.Boolean threadpool_thread
    // Offset: 0xA8
    bool threadpool_thread;
    // private System.Boolean thread_interrupt_requested
    // Offset: 0xA9
    bool thread_interrupt_requested;
    // System.Int32 stack_size
    // Offset: 0xAC
    int stack_size;
    // System.Byte apartment_state
    // Offset: 0xB0
    uint8_t apartment_state;
    // System.Int32 critical_region_level
    // Offset: 0xB4
    int critical_region_level;
    // System.Int32 managed_id
    // Offset: 0xB8
    int managed_id;
    // private System.Int32 small_id
    // Offset: 0xBC
    int small_id;
    // private System.IntPtr manage_callback
    // Offset: 0xC0
    System::IntPtr manage_callback;
    // private System.IntPtr unused4
    // Offset: 0xC8
    System::IntPtr unused4;
    // private System.IntPtr flags
    // Offset: 0xD0
    System::IntPtr flags;
    // private System.IntPtr thread_pinning_ref
    // Offset: 0xD8
    System::IntPtr thread_pinning_ref;
    // private System.IntPtr abort_protected_block_count
    // Offset: 0xE0
    System::IntPtr abort_protected_block_count;
    // private System.Int32 priority
    // Offset: 0xE8
    int priority;
    // private System.IntPtr owned_mutex
    // Offset: 0xF0
    System::IntPtr owned_mutex;
    // private System.IntPtr suspended_event
    // Offset: 0xF8
    System::IntPtr suspended_event;
    // private System.Int32 self_suspended
    // Offset: 0x100
    int self_suspended;
    // private System.IntPtr unused1
    // Offset: 0x108
    System::IntPtr unused1;
    // private System.IntPtr unused2
    // Offset: 0x110
    System::IntPtr unused2;
    // private System.IntPtr last
    // Offset: 0x118
    System::IntPtr last;
    // private System.Void Thread_free_internal()
    // Offset: 0x13DE8A0
    void Thread_free_internal();
    // protected override System.Void Finalize()
    // Offset: 0x13DE8A4
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::Finalize()
    void Finalize();
    // public System.Void .ctor()
    // Offset: 0x13DE90C
    // Implemented from: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
    // Base method: System.Void CriticalFinalizerObject::.ctor()
    // Base method: System.Void Object::.ctor()
    static InternalThread* New_ctor();
  }; // System.Threading.InternalThread
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::InternalThread*, "System.Threading", "InternalThread");
#pragma pack(pop)
