// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.TaskContinuation
#include "System/Threading/Tasks/TaskContinuation.hpp"
// Including type: System.Threading.IThreadPoolWorkItem
#include "System/Threading/IThreadPoolWorkItem.hpp"
// Including type: System.Threading.StackCrawlMark
#include "System/Threading/StackCrawlMark.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
  // Forward declaring type: ContextCallback
  class ContextCallback;
  // Forward declaring type: ThreadAbortException
  class ThreadAbortException;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.Tasks.AwaitTaskContinuation
  // [] Offset: FFFFFFFF
  class AwaitTaskContinuation : public System::Threading::Tasks::TaskContinuation/*, public System::Threading::IThreadPoolWorkItem*/ {
    public:
    // Nested type: System::Threading::Tasks::AwaitTaskContinuation::$$c
    class $$c;
    // private readonly System.Threading.ExecutionContext m_capturedContext
    // Size: 0x8
    // Offset: 0x10
    System::Threading::ExecutionContext* m_capturedContext;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext*) == 0x8);
    // protected readonly System.Action m_action
    // Size: 0x8
    // Offset: 0x18
    System::Action* m_action;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // Creating value type constructor for type: AwaitTaskContinuation
    AwaitTaskContinuation(System::Threading::ExecutionContext* m_capturedContext_ = {}, System::Action* m_action_ = {}) noexcept : m_capturedContext{m_capturedContext_}, m_action{m_action_} {}
    // Creating interface conversion operator: operator System::Threading::IThreadPoolWorkItem
    operator System::Threading::IThreadPoolWorkItem() noexcept {
      return *reinterpret_cast<System::Threading::IThreadPoolWorkItem*>(this);
    }
    // Get static field: static private System.Threading.ContextCallback s_invokeActionCallback
    static System::Threading::ContextCallback* _get_s_invokeActionCallback();
    // Set static field: static private System.Threading.ContextCallback s_invokeActionCallback
    static void _set_s_invokeActionCallback(System::Threading::ContextCallback* value);
    // System.Void .ctor(System.Action action, System.Boolean flowExecutionContext, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0x17AE808
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AwaitTaskContinuation* New_ctor(System::Action* action, bool flowExecutionContext, System::Threading::StackCrawlMark& stackMark) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::AwaitTaskContinuation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AwaitTaskContinuation*, creationType>(action, flowExecutionContext, stackMark)));
    }
    // System.Void .ctor(System.Action action, System.Boolean flowExecutionContext)
    // Offset: 0x17AE8DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AwaitTaskContinuation* New_ctor(System::Action* action, bool flowExecutionContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::AwaitTaskContinuation::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AwaitTaskContinuation*, creationType>(action, flowExecutionContext)));
    }
    // protected System.Threading.Tasks.Task CreateTask(System.Action`1<System.Object> action, System.Object state, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0x17AE990
    System::Threading::Tasks::Task* CreateTask(System::Action_1<::Il2CppObject*>* action, ::Il2CppObject* state, System::Threading::Tasks::TaskScheduler* scheduler);
    // static System.Boolean get_IsValidLocationForInlining()
    // Offset: 0x17AECFC
    static bool get_IsValidLocationForInlining();
    // private System.Void ExecuteWorkItemHelper()
    // Offset: 0x17AF104
    void ExecuteWorkItemHelper();
    // static private System.Void InvokeAction(System.Object state)
    // Offset: 0x17AF2AC
    static void InvokeAction(::Il2CppObject* state);
    // static protected System.Threading.ContextCallback GetInvokeActionCallback()
    // Offset: 0x17AF318
    static System::Threading::ContextCallback* GetInvokeActionCallback();
    // protected System.Void RunCallback(System.Threading.ContextCallback callback, System.Object state, ref System.Threading.Tasks.Task currentTask)
    // Offset: 0x17AEE48
    void RunCallback(System::Threading::ContextCallback* callback, ::Il2CppObject* state, System::Threading::Tasks::Task*& currentTask);
    // static System.Void RunOrScheduleAction(System.Action action, System.Boolean allowInlining, ref System.Threading.Tasks.Task currentTask)
    // Offset: 0x17AF510
    static void RunOrScheduleAction(System::Action* action, bool allowInlining, System::Threading::Tasks::Task*& currentTask);
    // static System.Void UnsafeScheduleAction(System.Action action, System.Threading.Tasks.Task task)
    // Offset: 0x17AF6D8
    static void UnsafeScheduleAction(System::Action* action, System::Threading::Tasks::Task* task);
    // static protected System.Void ThrowAsyncIfNecessary(System.Exception exc)
    // Offset: 0x17AF3B0
    static void ThrowAsyncIfNecessary(System::Exception* exc);
    // override System.Void Run(System.Threading.Tasks.Task task, System.Boolean canInlineContinuationTask)
    // Offset: 0x17AEBD4
    // Implemented from: System.Threading.Tasks.TaskContinuation
    // Base method: System.Void TaskContinuation::Run(System.Threading.Tasks.Task task, System.Boolean canInlineContinuationTask)
    void Run(System::Threading::Tasks::Task* task, bool canInlineContinuationTask);
    // private System.Void System.Threading.IThreadPoolWorkItem.ExecuteWorkItem()
    // Offset: 0x17AF280
    // Implemented from: System.Threading.IThreadPoolWorkItem
    // Base method: System.Void IThreadPoolWorkItem::ExecuteWorkItem()
    void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem();
    // private System.Void System.Threading.IThreadPoolWorkItem.MarkAborted(System.Threading.ThreadAbortException tae)
    // Offset: 0x17AF2A8
    // Implemented from: System.Threading.IThreadPoolWorkItem
    // Base method: System.Void IThreadPoolWorkItem::MarkAborted(System.Threading.ThreadAbortException tae)
    void System_Threading_IThreadPoolWorkItem_MarkAborted(System::Threading::ThreadAbortException* tae);
  }; // System.Threading.Tasks.AwaitTaskContinuation
  #pragma pack(pop)
  static check_size<sizeof(AwaitTaskContinuation), 24 + sizeof(System::Action*)> __System_Threading_Tasks_AwaitTaskContinuationSizeCheck;
  static_assert(sizeof(AwaitTaskContinuation) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::AwaitTaskContinuation*, "System.Threading.Tasks", "AwaitTaskContinuation");
