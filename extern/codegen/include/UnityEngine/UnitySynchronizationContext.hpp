// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.SynchronizationContext
#include "System/Threading/SynchronizationContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: SendOrPostCallback
  class SendOrPostCallback;
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.UnitySynchronizationContext
  class UnitySynchronizationContext : public System::Threading::SynchronizationContext {
    public:
    // Nested type: UnityEngine::UnitySynchronizationContext::WorkRequest
    struct WorkRequest;
    // Autogenerated type: UnityEngine.UnitySynchronizationContext/WorkRequest
    struct WorkRequest : public System::ValueType {
      public:
      // private readonly System.Threading.SendOrPostCallback m_DelagateCallback
      // Offset: 0x0
      System::Threading::SendOrPostCallback* m_DelagateCallback;
      // private readonly System.Object m_DelagateState
      // Offset: 0x8
      ::Il2CppObject* m_DelagateState;
      // private readonly System.Threading.ManualResetEvent m_WaitHandle
      // Offset: 0x10
      System::Threading::ManualResetEvent* m_WaitHandle;
      // Creating value type constructor for type: WorkRequest
      constexpr WorkRequest(System::Threading::SendOrPostCallback* m_DelagateCallback_ = {}, ::Il2CppObject* m_DelagateState_ = {}, System::Threading::ManualResetEvent* m_WaitHandle_ = {}) noexcept : m_DelagateCallback{m_DelagateCallback_}, m_DelagateState{m_DelagateState_}, m_WaitHandle{m_WaitHandle_} {}
      // public System.Void .ctor(System.Threading.SendOrPostCallback callback, System.Object state, System.Threading.ManualResetEvent waitHandle)
      // Offset: 0xCA64FC
      // ABORTED: conflicts with another method.  WorkRequest(System::Threading::SendOrPostCallback* callback, ::Il2CppObject* state, System::Threading::ManualResetEvent* waitHandle);
      // public System.Void Invoke()
      // Offset: 0xCA6504
      void Invoke();
    }; // UnityEngine.UnitySynchronizationContext/WorkRequest
    // private readonly System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest> m_AsyncWorkQueue
    // Offset: 0x18
    System::Collections::Generic::List_1<UnityEngine::UnitySynchronizationContext::WorkRequest>* m_AsyncWorkQueue;
    // private readonly System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest> m_CurrentFrameWork
    // Offset: 0x20
    System::Collections::Generic::List_1<UnityEngine::UnitySynchronizationContext::WorkRequest>* m_CurrentFrameWork;
    // private readonly System.Int32 m_MainThreadID
    // Offset: 0x28
    int m_MainThreadID;
    // private System.Int32 m_TrackedCount
    // Offset: 0x2C
    int m_TrackedCount;
    // Deleting conversion operator: operator System::Threading::SynchronizationContextProperties
    constexpr operator System::Threading::SynchronizationContextProperties() const noexcept = delete;
    // private System.Void .ctor(System.Int32 mainThreadID)
    // Offset: 0x16C98B0
    static UnitySynchronizationContext* New_ctor(int mainThreadID);
    // private System.Void .ctor(System.Collections.Generic.List`1<UnityEngine.UnitySynchronizationContext/WorkRequest> queue, System.Int32 mainThreadID)
    // Offset: 0x16C9978
    static UnitySynchronizationContext* New_ctor(System::Collections::Generic::List_1<UnityEngine::UnitySynchronizationContext::WorkRequest>* queue, int mainThreadID);
    // private System.Void Exec()
    // Offset: 0x16C9E80
    void Exec();
    // private System.Boolean HasPendingTasks()
    // Offset: 0x16CA0F0
    bool HasPendingTasks();
    // static private System.Void InitializeSynchronizationContext()
    // Offset: 0x16CA158
    static void InitializeSynchronizationContext();
    // static private System.Void ExecuteTasks()
    // Offset: 0x16CA1D8
    static void ExecuteTasks();
    // static private System.Boolean ExecutePendingTasks(System.Int64 millisecondsTimeout)
    // Offset: 0x16CA250
    static bool ExecutePendingTasks(int64_t millisecondsTimeout);
    // public override System.Void Send(System.Threading.SendOrPostCallback callback, System.Object state)
    // Offset: 0x16C9A24
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::Send(System.Threading.SendOrPostCallback callback, System.Object state)
    void Send(System::Threading::SendOrPostCallback* callback, ::Il2CppObject* state);
    // public override System.Void OperationStarted()
    // Offset: 0x16C9CFC
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::OperationStarted()
    void OperationStarted();
    // public override System.Void OperationCompleted()
    // Offset: 0x16C9D08
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::OperationCompleted()
    void OperationCompleted();
    // public override System.Void Post(System.Threading.SendOrPostCallback callback, System.Object state)
    // Offset: 0x16C9D14
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Void SynchronizationContext::Post(System.Threading.SendOrPostCallback callback, System.Object state)
    void Post(System::Threading::SendOrPostCallback* callback, ::Il2CppObject* state);
    // public override System.Threading.SynchronizationContext CreateCopy()
    // Offset: 0x16C9E0C
    // Implemented from: System.Threading.SynchronizationContext
    // Base method: System.Threading.SynchronizationContext SynchronizationContext::CreateCopy()
    System::Threading::SynchronizationContext* CreateCopy();
  }; // UnityEngine.UnitySynchronizationContext
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnitySynchronizationContext*, "UnityEngine", "UnitySynchronizationContext");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnitySynchronizationContext::WorkRequest, "UnityEngine", "UnitySynchronizationContext/WorkRequest");
#pragma pack(pop)
