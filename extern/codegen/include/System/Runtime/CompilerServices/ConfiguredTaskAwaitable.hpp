// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.ICriticalNotifyCompletion
#include "System/Runtime/CompilerServices/ICriticalNotifyCompletion.hpp"
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
  // Size: 0x9
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable
  // [] Offset: FFFFFFFF
  struct ConfiguredTaskAwaitable/*, public System::ValueType*/ {
    public:
    // Nested type: System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
    struct ConfiguredTaskAwaiter;
    // Size: 0x9
    #pragma pack(push, 1)
    // WARNING Layout: Sequential may not be correctly taken into account!
    // Autogenerated type: System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
    // [] Offset: FFFFFFFF
    struct ConfiguredTaskAwaiter/*, public System::ValueType, public System::Runtime::CompilerServices::ICriticalNotifyCompletion*/ {
      public:
      // private readonly System.Threading.Tasks.Task m_task
      // Size: 0x8
      // Offset: 0x0
      System::Threading::Tasks::Task* m_task;
      // Field size check
      static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
      // private readonly System.Boolean m_continueOnCapturedContext
      // Size: 0x1
      // Offset: 0x8
      bool m_continueOnCapturedContext;
      // Field size check
      static_assert(sizeof(bool) == 0x1);
      // Creating value type constructor for type: ConfiguredTaskAwaiter
      constexpr ConfiguredTaskAwaiter(System::Threading::Tasks::Task* m_task_ = {}, bool m_continueOnCapturedContext_ = {}) noexcept : m_task{m_task_}, m_continueOnCapturedContext{m_continueOnCapturedContext_} {}
      // Creating interface conversion operator: operator System::ValueType
      operator System::ValueType() noexcept {
        return *reinterpret_cast<System::ValueType*>(this);
      }
      // Creating interface conversion operator: operator System::Runtime::CompilerServices::ICriticalNotifyCompletion
      operator System::Runtime::CompilerServices::ICriticalNotifyCompletion() noexcept {
        return *reinterpret_cast<System::Runtime::CompilerServices::ICriticalNotifyCompletion*>(this);
      }
      // System.Void .ctor(System.Threading.Tasks.Task task, System.Boolean continueOnCapturedContext)
      // Offset: 0xDF94F0
      // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      // ABORTED: conflicts with another method.  ConfiguredTaskAwaiter(System::Threading::Tasks::Task* task, bool continueOnCapturedContext)
      // public System.Boolean get_IsCompleted()
      // Offset: 0xDF9524
      bool get_IsCompleted();
      // public System.Void GetResult()
      // Offset: 0xDF9568
      void GetResult();
      // public System.Void OnCompleted(System.Action continuation)
      // Offset: 0xDF9540
      // Implemented from: System.Runtime.CompilerServices.INotifyCompletion
      // Base method: System.Void INotifyCompletion::OnCompleted(System.Action continuation)
      void OnCompleted(System::Action* continuation);
      // public System.Void UnsafeOnCompleted(System.Action continuation)
      // Offset: 0xDF9554
      // Implemented from: System.Runtime.CompilerServices.ICriticalNotifyCompletion
      // Base method: System.Void ICriticalNotifyCompletion::UnsafeOnCompleted(System.Action continuation)
      void UnsafeOnCompleted(System::Action* continuation);
    }; // System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter
    #pragma pack(pop)
    static check_size<sizeof(ConfiguredTaskAwaitable::ConfiguredTaskAwaiter), 8 + sizeof(bool)> __System_Runtime_CompilerServices_ConfiguredTaskAwaitable_ConfiguredTaskAwaiterSizeCheck;
    static_assert(sizeof(ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    // private readonly System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter m_configuredTaskAwaiter
    // Size: 0x9
    // Offset: 0x0
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter m_configuredTaskAwaiter;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter) == 0x9);
    // Creating value type constructor for type: ConfiguredTaskAwaitable
    constexpr ConfiguredTaskAwaitable(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter m_configuredTaskAwaiter_ = {}) noexcept : m_configuredTaskAwaiter{m_configuredTaskAwaiter_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating conversion operator: operator System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter
    constexpr operator System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter() const noexcept {
      return m_configuredTaskAwaiter;
    }
    // System.Void .ctor(System.Threading.Tasks.Task task, System.Boolean continueOnCapturedContext)
    // Offset: 0xDF949C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    ConfiguredTaskAwaitable(System::Threading::Tasks::Task* task, bool continueOnCapturedContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::ConfiguredTaskAwaitable::.ctor");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, ".ctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(task, continueOnCapturedContext)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, task, continueOnCapturedContext);
    }
    // public System.Runtime.CompilerServices.ConfiguredTaskAwaitable/ConfiguredTaskAwaiter GetAwaiter()
    // Offset: 0xDF94A8
    System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter GetAwaiter();
  }; // System.Runtime.CompilerServices.ConfiguredTaskAwaitable
  #pragma pack(pop)
  static check_size<sizeof(ConfiguredTaskAwaitable), 0 + sizeof(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter)> __System_Runtime_CompilerServices_ConfiguredTaskAwaitableSizeCheck;
  static_assert(sizeof(ConfiguredTaskAwaitable) == 0x9);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::ConfiguredTaskAwaitable, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable");
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::ConfiguredTaskAwaitable::ConfiguredTaskAwaiter, "System.Runtime.CompilerServices", "ConfiguredTaskAwaitable/ConfiguredTaskAwaiter");
