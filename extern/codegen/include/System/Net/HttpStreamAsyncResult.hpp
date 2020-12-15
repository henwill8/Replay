// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.HttpStreamAsyncResult
  class HttpStreamAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    // private System.Object locker
    // Offset: 0x10
    ::Il2CppObject* locker;
    // private System.Threading.ManualResetEvent handle
    // Offset: 0x18
    System::Threading::ManualResetEvent* handle;
    // private System.Boolean completed
    // Offset: 0x20
    bool completed;
    // System.Byte[] Buffer
    // Offset: 0x28
    ::Array<uint8_t>* Buffer;
    // System.Int32 Offset
    // Offset: 0x30
    int Offset;
    // System.Int32 Count
    // Offset: 0x34
    int Count;
    // System.AsyncCallback Callback
    // Offset: 0x38
    System::AsyncCallback* Callback;
    // System.Object State
    // Offset: 0x40
    ::Il2CppObject* State;
    // System.Int32 SynchRead
    // Offset: 0x48
    int SynchRead;
    // System.Exception Error
    // Offset: 0x50
    System::Exception* Error;
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // public System.Void Complete(System.Exception e)
    // Offset: 0x12B48BC
    void Complete(System::Exception* e);
    // public System.Void Complete()
    // Offset: 0x12B48E4
    void Complete();
    // public System.Object get_AsyncState()
    // Offset: 0x12B49DC
    // Implemented from: System.IAsyncResult
    // Base method: System.Object IAsyncResult::get_AsyncState()
    ::Il2CppObject* get_AsyncState();
    // Creating proxy method: System_IAsyncResult_get_AsyncState
    // Maps to method: get_AsyncState
    ::Il2CppObject* System_IAsyncResult_get_AsyncState();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x12B49E4
    // Implemented from: System.IAsyncResult
    // Base method: System.Threading.WaitHandle IAsyncResult::get_AsyncWaitHandle()
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // Creating proxy method: System_IAsyncResult_get_AsyncWaitHandle
    // Maps to method: get_AsyncWaitHandle
    System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x12B4AEC
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_CompletedSynchronously()
    bool get_CompletedSynchronously();
    // Creating proxy method: System_IAsyncResult_get_CompletedSynchronously
    // Maps to method: get_CompletedSynchronously
    bool System_IAsyncResult_get_CompletedSynchronously();
    // public System.Boolean get_IsCompleted()
    // Offset: 0x12B4B00
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_IsCompleted()
    bool get_IsCompleted();
    // Creating proxy method: System_IAsyncResult_get_IsCompleted
    // Maps to method: get_IsCompleted
    bool System_IAsyncResult_get_IsCompleted();
    // public System.Void .ctor()
    // Offset: 0x12B4BAC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HttpStreamAsyncResult* New_ctor();
  }; // System.Net.HttpStreamAsyncResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpStreamAsyncResult*, "System.Net", "HttpStreamAsyncResult");
#pragma pack(pop)