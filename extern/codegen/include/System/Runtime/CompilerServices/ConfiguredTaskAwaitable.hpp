// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Skipping declaration: ConfiguredTaskAwaiter because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable
  struct ConfiguredTaskAwaitable : public System::ValueType {
    public:
    // Nested type: System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
    struct ConfiguredTaskAwaiter;
    // Autogenerated type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
    struct ConfiguredTaskAwaiter : public System::ValueType/*, public System::Runtime::CompilerServices::ICriticalNotifyCompletion*/ {
      public:
      // private readonly System.Threading.Tasks.Task m_task
      // Offset: 0x0
      System::Threading::Tasks::Task* m_task;
      // private readonly System.Boolean m_continueOnCapturedContext
      // Offset: 0x8
      bool m_continueOnCapturedContext;
      // Creating value type constructor for type: ConfiguredTaskAwaiter
      constexpr ConfiguredTaskAwaiter(System::Threading::Tasks::Task* m_task_ = {}, bool m_continueOnCapturedContext_ = {}) noexcept : m_task{m_task_}, m_continueOnCapturedContext{m_continueOnCapturedContext_} {}
      // Creating interface conversion operator: operator System::Runtime::CompilerServices::ICriticalNotifyCompletion
      operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() noexcept {
        return *reinterpret_cast<System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(this);
      }
      // System.Void .ctor(System.Threading.Tasks.Task task, System.Boolean continueOnCapturedContext)
      // Offset: 0xC94580
      // ABORTED: conflicts with another method.  ConfiguredTaskAwaiter(System::Threading::Tasks::Task* task, bool continueOnCapturedContext);
      // public System.Boolean get_IsCompleted()
      // Offset: 0xC945B4
      bool get_IsCompleted();
      // public System.Void GetResult()
      // Offset: 0xC945F8
      void GetResult();
      // public System.Void OnCompleted(System.Action continuation)
      // Offset: 0xC945D0
      // Implemented from: System.Runtime.CompilerServices.INotifyCompletion
      // Base method: System.Void INotifyCompletion::OnCompleted(System.Action continuation)
      void OnCompleted(System::Action* continuation);
      // public System.Void UnsafeOnCompleted(System.Action continuation)
      // Offset: 0xC945E4
      // Implemented from: System.Runtime.CompilerServices.ICriticalNotifyCompletion
      // Base method: System.Void ICriticalNotifyCompletion::UnsafeOnCompleted(System.Action continuation)
      void UnsafeOnCompleted(System::Action* continuation);
    }; // System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
    // private readonly System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter m_configuredTaskAwaiter
    // Offset: 0x0
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter m_configuredTaskAwaiter;
    // Creating value type constructor for type: ConfiguredTaskAwaitable
    constexpr ConfiguredTaskAwaitable(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter m_configuredTaskAwaiter_ = {}) noexcept : m_configuredTaskAwaiter{m_configuredTaskAwaiter_} {}
    // Creating conversion operator: operator System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
    constexpr operator System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter() const noexcept {
      return m_configuredTaskAwaiter;
    }
    // System.Void .ctor(System.Threading.Tasks.Task task, System.Boolean continueOnCapturedContext)
    // Offset: 0xC9452C
    ConfiguredTaskAwaitable(System::Threading::Tasks::Task* task, bool continueOnCapturedContext);
    // public System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter GetAwaiter()
    // Offset: 0xC94538
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter GetAwaiter();
  }; // System.Runtime.CompilerServices.ConfiguredTaskAwaitable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::ConfiguredTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable");
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable/ConfiguredTaskAwaiter");
#pragma pack(pop)