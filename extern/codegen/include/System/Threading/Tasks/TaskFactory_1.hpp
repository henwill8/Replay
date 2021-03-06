// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Threading.Tasks.TaskCreationOptions
#include "System/Threading/Tasks/TaskCreationOptions.hpp"
// Including type: System.Threading.Tasks.TaskContinuationOptions
#include "System/Threading/Tasks/TaskContinuationOptions.hpp"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Skipping declaration: FromAsyncTrimPromise`1 because it is already included!
  // Skipping declaration: <>c__DisplayClass35_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass35_1 because it is already included!
  // Forward declaring type: TaskScheduler
  class TaskScheduler;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: AtomicBoolean
  class AtomicBoolean;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
  // Skipping declaration: IAsyncResult because it is already included!
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
  // Forward declaring type: Func`5<T1, T2, T3, T4, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename TResult>
  class Func_5;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Threading.Tasks.TaskFactory`1
  // [] Offset: FFFFFFFF
  template<typename TResult>
  class TaskFactory_1 : public ::Il2CppObject {
    public:
    // Nested type: System::Threading::Tasks::TaskFactory_1::FromAsyncTrimPromise_1<TResult, TInstance>
    template<typename TInstance>
    class FromAsyncTrimPromise_1;
    // Nested type: System::Threading::Tasks::TaskFactory_1::$$c__DisplayClass35_0<TResult>
    class $$c__DisplayClass35_0;
    // Nested type: System::Threading::Tasks::TaskFactory_1::$$c__DisplayClass35_1<TResult>
    class $$c__DisplayClass35_1;
    // WARNING Size may be invalid!
    // Autogenerated type: System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1
    // [] Offset: FFFFFFFF
    template<typename TInstance>
    class FromAsyncTrimPromise_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public System::Threading::Tasks::Task_1<TResult> {
      public:
      using declaring_type = TaskFactory_1<TResult>*;
      static constexpr std::string_view NESTED_NAME = "FromAsyncTrimPromise_1";
      // private TInstance m_thisRef
      // Size: 0xFFFFFFFF
      // Offset: 0x0
      TInstance m_thisRef;
      // private System.Func`3<TInstance,System.IAsyncResult,TResult> m_endMethod
      // Size: 0x8
      // Offset: 0x0
      System::Func_3<TInstance, System::IAsyncResult*, TResult>* m_endMethod;
      // Field size check
      static_assert(sizeof(System::Func_3<TInstance, System::IAsyncResult*, TResult>*) == 0x8);
      // Creating value type constructor for type: FromAsyncTrimPromise_1
      FromAsyncTrimPromise_1(TInstance m_thisRef_ = {}, System::Func_3<TInstance, System::IAsyncResult*, TResult>* m_endMethod_ = {}) noexcept : m_thisRef{m_thisRef_}, m_endMethod{m_endMethod_} {}
      // Autogenerated static field getter
      // Get static field: static readonly System.AsyncCallback s_completeFromAsyncResult
      static System::AsyncCallback* _get_s_completeFromAsyncResult() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::FromAsyncTrimPromise_1::_get_s_completeFromAsyncResult");
        return THROW_UNLESS(il2cpp_utils::GetFieldValue<System::AsyncCallback*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskFactory_1<TResult>::FromAsyncTrimPromise_1<TInstance>*>::get(), "s_completeFromAsyncResult"));
      }
      // Autogenerated static field setter
      // Set static field: static readonly System.AsyncCallback s_completeFromAsyncResult
      static void _set_s_completeFromAsyncResult(System::AsyncCallback* value) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::FromAsyncTrimPromise_1::_set_s_completeFromAsyncResult");
        THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskFactory_1<TResult>::FromAsyncTrimPromise_1<TInstance>*>::get(), "s_completeFromAsyncResult", value));
      }
      // System.Void .ctor(TInstance thisRef, System.Func`3<TInstance,System.IAsyncResult,TResult> endMethod)
      // Offset: 0xFFFFFFFF
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename TaskFactory_1<TResult>::FromAsyncTrimPromise_1<TInstance>* New_ctor(TInstance thisRef, System::Func_3<TInstance, System::IAsyncResult*, TResult>* endMethod) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::FromAsyncTrimPromise_1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename TaskFactory_1<TResult>::FromAsyncTrimPromise_1<TInstance>*, creationType>(thisRef, endMethod)));
      }
      // static System.Void CompleteFromAsyncResult(System.IAsyncResult asyncResult)
      // Offset: 0xFFFFFFFF
      static void CompleteFromAsyncResult(System::IAsyncResult* asyncResult) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::FromAsyncTrimPromise_1::CompleteFromAsyncResult");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskFactory_1<TResult>::FromAsyncTrimPromise_1<TInstance>*>::get(), "CompleteFromAsyncResult", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(asyncResult))));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, asyncResult);
      }
      // System.Void Complete(TInstance thisRef, System.Func`3<TInstance,System.IAsyncResult,TResult> endMethod, System.IAsyncResult asyncResult, System.Boolean requiresSynchronization)
      // Offset: 0xFFFFFFFF
      void Complete(TInstance thisRef, System::Func_3<TInstance, System::IAsyncResult*, TResult>* endMethod, System::IAsyncResult* asyncResult, bool requiresSynchronization) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::FromAsyncTrimPromise_1::Complete");
        static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Complete", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(thisRef, endMethod, asyncResult, requiresSynchronization)));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, thisRef, endMethod, asyncResult, requiresSynchronization);
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Threading.Tasks.Task`1
      // Base method: System.Void Task_1::.cctor()
      // Base method: System.Void Task::.cctor()
      static void _cctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::FromAsyncTrimPromise_1::.cctor");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TaskFactory_1<TResult>::FromAsyncTrimPromise_1<TInstance>*>::get(), ".cctor", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes())));
        ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method);
      }
    }; // System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1
    // Could not write size check! Type: System.Threading.Tasks.TaskFactory`1/FromAsyncTrimPromise`1 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_0
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: CAA9BC
    class $$c__DisplayClass35_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = TaskFactory_1<TResult>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass35_0";
      // public System.Func`2<System.IAsyncResult,TResult> endFunction
      // Size: 0x8
      // Offset: 0x0
      System::Func_2<System::IAsyncResult*, TResult>* endFunction;
      // Field size check
      static_assert(sizeof(System::Func_2<System::IAsyncResult*, TResult>*) == 0x8);
      // public System.Action`1<System.IAsyncResult> endAction
      // Size: 0x8
      // Offset: 0x0
      System::Action_1<System::IAsyncResult*>* endAction;
      // Field size check
      static_assert(sizeof(System::Action_1<System::IAsyncResult*>*) == 0x8);
      // public System.Threading.Tasks.Task`1<TResult> promise
      // Size: 0x8
      // Offset: 0x0
      System::Threading::Tasks::Task_1<TResult>* promise;
      // Field size check
      static_assert(sizeof(System::Threading::Tasks::Task_1<TResult>*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass35_0
      $$c__DisplayClass35_0(System::Func_2<System::IAsyncResult*, TResult>* endFunction_ = {}, System::Action_1<System::IAsyncResult*>* endAction_ = {}, System::Threading::Tasks::Task_1<TResult>* promise_ = {}) noexcept : endFunction{endFunction_}, endAction{endAction_}, promise{promise_} {}
      // System.Void <FromAsyncImpl>b__0(System.IAsyncResult iar)
      // Offset: 0xFFFFFFFF
      void $FromAsyncImpl$b__0(System::IAsyncResult* iar) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::$$c__DisplayClass35_0::<FromAsyncImpl>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromAsyncImpl>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(iar))));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, iar);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename TaskFactory_1<TResult>::$$c__DisplayClass35_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::$$c__DisplayClass35_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename TaskFactory_1<TResult>::$$c__DisplayClass35_0*, creationType>()));
      }
    }; // System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_0
    // Could not write size check! Type: System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: CAA9CC
    class $$c__DisplayClass35_1 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = TaskFactory_1<TResult>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass35_1";
      // public System.Threading.AtomicBoolean invoked
      // Size: 0x8
      // Offset: 0x0
      System::Threading::AtomicBoolean* invoked;
      // Field size check
      static_assert(sizeof(System::Threading::AtomicBoolean*) == 0x8);
      // public System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_0<TResult> CS$<>8__locals1
      // Size: 0x8
      // Offset: 0x0
      typename System::Threading::Tasks::TaskFactory_1<TResult>::$$c__DisplayClass35_0* CS$$$8__locals1;
      // Field size check
      static_assert(sizeof(typename System::Threading::Tasks::TaskFactory_1<TResult>::$$c__DisplayClass35_0*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass35_1
      $$c__DisplayClass35_1(System::Threading::AtomicBoolean* invoked_ = {}, typename System::Threading::Tasks::TaskFactory_1<TResult>::$$c__DisplayClass35_0* CS$$$8__locals1_ = {}) noexcept : invoked{invoked_}, CS$$$8__locals1{CS$$$8__locals1_} {}
      // System.Void <FromAsyncImpl>b__1(System.IAsyncResult iar)
      // Offset: 0xFFFFFFFF
      void $FromAsyncImpl$b__1(System::IAsyncResult* iar) {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::$$c__DisplayClass35_1::<FromAsyncImpl>b__1");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<FromAsyncImpl>b__1", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(iar))));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, iar);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename TaskFactory_1<TResult>::$$c__DisplayClass35_1* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::$$c__DisplayClass35_1::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename TaskFactory_1<TResult>::$$c__DisplayClass35_1*, creationType>()));
      }
    }; // System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1
    // Could not write size check! Type: System.Threading.Tasks.TaskFactory`1/<>c__DisplayClass35_1 is generic, or has no fields that are valid for size checks!
    // private System.Threading.CancellationToken m_defaultCancellationToken
    // Size: 0x8
    // Offset: 0x0
    System::Threading::CancellationToken m_defaultCancellationToken;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Threading.Tasks.TaskScheduler m_defaultScheduler
    // Size: 0x8
    // Offset: 0x0
    System::Threading::Tasks::TaskScheduler* m_defaultScheduler;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskScheduler*) == 0x8);
    // private System.Threading.Tasks.TaskCreationOptions m_defaultCreationOptions
    // Size: 0x4
    // Offset: 0x0
    System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskCreationOptions) == 0x4);
    // private System.Threading.Tasks.TaskContinuationOptions m_defaultContinuationOptions
    // Size: 0x4
    // Offset: 0x0
    System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::TaskContinuationOptions) == 0x4);
    // Creating value type constructor for type: TaskFactory_1
    TaskFactory_1(System::Threading::CancellationToken m_defaultCancellationToken_ = {}, System::Threading::Tasks::TaskScheduler* m_defaultScheduler_ = {}, System::Threading::Tasks::TaskCreationOptions m_defaultCreationOptions_ = {}, System::Threading::Tasks::TaskContinuationOptions m_defaultContinuationOptions_ = {}) noexcept : m_defaultCancellationToken{m_defaultCancellationToken_}, m_defaultScheduler{m_defaultScheduler_}, m_defaultCreationOptions{m_defaultCreationOptions_}, m_defaultContinuationOptions{m_defaultContinuationOptions_} {}
    // public System.Void .ctor(System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.TaskContinuationOptions continuationOptions, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskFactory_1<TResult>* New_ctor(System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskContinuationOptions continuationOptions, System::Threading::Tasks::TaskScheduler* scheduler) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskFactory_1<TResult>*, creationType>(cancellationToken, creationOptions, continuationOptions, scheduler)));
    }
    // public System.Threading.Tasks.Task`1<TResult> StartNew(System.Func`1<TResult> function, System.Threading.CancellationToken cancellationToken, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.TaskScheduler scheduler)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<TResult>* StartNew(System::Func_1<TResult>* function, System::Threading::CancellationToken cancellationToken, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::TaskScheduler* scheduler) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::StartNew");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "StartNew", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(function, cancellationToken, creationOptions, scheduler)));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal__method, function, cancellationToken, creationOptions, scheduler);
    }
    // static private System.Void FromAsyncCoreLogic(System.IAsyncResult iar, System.Func`2<System.IAsyncResult,TResult> endFunction, System.Action`1<System.IAsyncResult> endAction, System.Threading.Tasks.Task`1<TResult> promise, System.Boolean requiresSynchronization)
    // Offset: 0xFFFFFFFF
    static void FromAsyncCoreLogic(System::IAsyncResult* iar, System::Func_2<System::IAsyncResult*, TResult>* endFunction, System::Action_1<System::IAsyncResult*>* endAction, System::Threading::Tasks::Task_1<TResult>* promise, bool requiresSynchronization) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::FromAsyncCoreLogic");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TaskFactory_1<TResult>*>::get(), "FromAsyncCoreLogic", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(iar, endFunction, endAction, promise, requiresSynchronization))));
      ::il2cpp_utils::RunMethodThrow<void, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, iar, endFunction, endAction, promise, requiresSynchronization);
    }
    // public System.Threading.Tasks.Task`1<TResult> FromAsync(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult> beginMethod, System.Func`2<System.IAsyncResult,TResult> endMethod, System.Object state)
    // Offset: 0xFFFFFFFF
    System::Threading::Tasks::Task_1<TResult>* FromAsync(System::Func_3<System::AsyncCallback*, ::Il2CppObject*, System::IAsyncResult*>* beginMethod, System::Func_2<System::IAsyncResult*, TResult>* endMethod, ::Il2CppObject* state) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::FromAsync");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "FromAsync", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(beginMethod, endMethod, state)));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<TResult>*, false>(this, ___internal__method, beginMethod, endMethod, state);
    }
    // static System.Threading.Tasks.Task`1<TResult> FromAsyncImpl(System.Func`3<System.AsyncCallback,System.Object,System.IAsyncResult> beginMethod, System.Func`2<System.IAsyncResult,TResult> endFunction, System.Action`1<System.IAsyncResult> endAction, System.Object state, System.Threading.Tasks.TaskCreationOptions creationOptions)
    // Offset: 0xFFFFFFFF
    static System::Threading::Tasks::Task_1<TResult>* FromAsyncImpl(System::Func_3<System::AsyncCallback*, ::Il2CppObject*, System::IAsyncResult*>* beginMethod, System::Func_2<System::IAsyncResult*, TResult>* endFunction, System::Action_1<System::IAsyncResult*>* endAction, ::Il2CppObject* state, System::Threading::Tasks::TaskCreationOptions creationOptions) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::FromAsyncImpl");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TaskFactory_1<TResult>*>::get(), "FromAsyncImpl", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(beginMethod, endFunction, endAction, state, creationOptions))));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<TResult>*, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, beginMethod, endFunction, endAction, state, creationOptions);
    }
    // static System.Threading.Tasks.Task`1<TResult> FromAsyncTrim(TInstance thisRef, TArgs args, System.Func`5<TInstance,TArgs,System.AsyncCallback,System.Object,System.IAsyncResult> beginMethod, System.Func`3<TInstance,System.IAsyncResult,TResult> endMethod)
    // Offset: 0xFFFFFFFF
    template<class TInstance, class TArgs>
    static System::Threading::Tasks::Task_1<TResult>* FromAsyncTrim(TInstance thisRef, TArgs args, System::Func_5<TInstance, TArgs, System::AsyncCallback*, ::Il2CppObject*, System::IAsyncResult*>* beginMethod, System::Func_3<TInstance, System::IAsyncResult*, TResult>* endMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::FromAsyncTrim");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TaskFactory_1<TResult>*>::get(), "FromAsyncTrim", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()}, ::il2cpp_utils::ExtractTypes(thisRef, args, beginMethod, endMethod))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstance>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TArgs>::get()})));
      return ::il2cpp_utils::RunMethodThrow<System::Threading::Tasks::Task_1<TResult>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, thisRef, args, beginMethod, endMethod);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TaskFactory_1<TResult>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::Tasks::TaskFactory_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TaskFactory_1<TResult>*, creationType>()));
    }
  }; // System.Threading.Tasks.TaskFactory`1
  // Could not write size check! Type: System.Threading.Tasks.TaskFactory`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::Tasks::TaskFactory_1, "System.Threading.Tasks", "TaskFactory`1");
