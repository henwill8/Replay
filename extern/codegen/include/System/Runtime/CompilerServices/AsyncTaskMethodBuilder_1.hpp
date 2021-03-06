// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.AsyncMethodBuilderCore
#include "System/Runtime/CompilerServices/AsyncMethodBuilderCore.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Runtime::CompilerServices
namespace System::Runtime::CompilerServices {
  // Forward declaring type: IAsyncStateMachine
  class IAsyncStateMachine;
  // Forward declaring type: INotifyCompletion
  class INotifyCompletion;
  // Forward declaring type: ICriticalNotifyCompletion
  class ICriticalNotifyCompletion;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
  // [] Offset: FFFFFFFF
  template<typename TResult>
  struct AsyncTaskMethodBuilder_1/*, public System::ValueType*/ {
    public:
    // private System.Runtime.CompilerServices.AsyncMethodBuilderCore m_coreState
    // Size: 0x10
    // Offset: 0x0
    System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncMethodBuilderCore) == 0x10);
    // private System.Threading.Tasks.Task`1<TResult> m_task
    // Size: 0x8
    // Offset: 0x0
    System::Threading::Tasks::Task_1<TResult>* m_task;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<TResult>*) == 0x8);
    // Creating value type constructor for type: AsyncTaskMethodBuilder_1
    constexpr AsyncTaskMethodBuilder_1(System::Runtime::CompilerServices::AsyncMethodBuilderCore m_coreState_ = {}, System::Threading::Tasks::Task_1<TResult>* m_task_ = {}) noexcept : m_coreState{m_coreState_}, m_task{m_task_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static readonly System.Threading.Tasks.Task`1<TResult> s_defaultResultTask
    static System::Threading::Tasks::Task_1<TResult>* _get_s_defaultResultTask() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::_get_s_defaultResultTask");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::Threading::Tasks::Task_1<TResult>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AsyncTaskMethodBuilder_1<TResult>>::get(), "s_defaultResultTask"));
    }
    // Autogenerated static field setter
    // Set static field: static readonly System.Threading.Tasks.Task`1<TResult> s_defaultResultTask
    static void _set_s_defaultResultTask(System::Threading::Tasks::Task_1<TResult>* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::_set_s_defaultResultTask");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AsyncTaskMethodBuilder_1<TResult>>::get(), "s_defaultResultTask", value));
    }
    // static public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<TResult> Create()
    // Offset: 0xFFFFFFFF
    static System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult> Create() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::Create");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AsyncTaskMethodBuilder_1<TResult>>::get(), "Create", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      return ::il2cpp_utils::RunMethodThrow<System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<TResult>, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
    // public System.Void Start(ref TStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    template<class TStateMachine>
    void Start(TStateMachine& stateMachine) {
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::IAsyncStateMachine, std::remove_pointer_t<TStateMachine>>);
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::Start");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Start", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}, ::il2cpp_utils::ExtractTypes(stateMachine)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___generic__method, stateMachine);
    }
    // public System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::SetStateMachine");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "SetStateMachine", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(stateMachine)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, stateMachine);
    }
    // public System.Void AwaitOnCompleted(ref TAwaiter awaiter, ref TStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    template<class TAwaiter, class TStateMachine>
    void AwaitOnCompleted(TAwaiter& awaiter, TStateMachine& stateMachine) {
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::INotifyCompletion, std::remove_pointer_t<TAwaiter>>);
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::IAsyncStateMachine, std::remove_pointer_t<TStateMachine>>);
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::AwaitOnCompleted");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "AwaitOnCompleted", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}, ::il2cpp_utils::ExtractTypes(awaiter, stateMachine))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___generic__method, awaiter, stateMachine);
    }
    // public System.Void AwaitUnsafeOnCompleted(ref TAwaiter awaiter, ref TStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    template<class TAwaiter, class TStateMachine>
    void AwaitUnsafeOnCompleted(TAwaiter& awaiter, TStateMachine& stateMachine) {
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::ICriticalNotifyCompletion, std::remove_pointer_t<TAwaiter>>);
      static_assert(std::is_base_of_v<System::Runtime::CompilerServices::IAsyncStateMachine, std::remove_pointer_t<TStateMachine>>);
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::AwaitUnsafeOnCompleted");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(*this, "AwaitUnsafeOnCompleted", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()}, ::il2cpp_utils::ExtractTypes(awaiter, stateMachine))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TAwaiter>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TStateMachine>::get()})));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___generic__method, awaiter, stateMachine);
    }
    // public System.Threading.Tasks.Task`1<TResult> get_Task()
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<TResult>* get_Task() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::get_Task");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "get_Task", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<TResult>*, false>(*this, ___internal__method);
    }
    // public System.Void SetResult(TResult result)
    // Offset: 0xFFFFFFFF
    void SetResult(TResult result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::SetResult");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "SetResult", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(result)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, result);
    }
    // System.Void SetResult(System.Threading.Tasks.Task`1<TResult> completedTask)
    // Offset: 0xFFFFFFFF
    void SetResult(System::Threading::Tasks::Task_1<TResult>* completedTask) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::SetResult");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "SetResult", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(completedTask)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, completedTask);
    }
    // public System.Void SetException(System.Exception exception)
    // Offset: 0xFFFFFFFF
    void SetException(System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::SetException");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "SetException", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(exception)));
      ::il2cpp_utils::RunMethodThrow<void, false>(*this, ___internal__method, exception);
    }
    // private System.Threading.Tasks.Task`1<TResult> GetTaskForResult(TResult result)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<TResult>* GetTaskForResult(TResult result) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::GetTaskForResult");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "GetTaskForResult", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(result)));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<TResult>*, false>(*this, ___internal__method, result);
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1::.cctor");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AsyncTaskMethodBuilder_1<TResult>>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
    }
  }; // System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
  // Could not write size check! Type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1, "System.Runtime.CompilerServices", "AsyncTaskMethodBuilder`1");
