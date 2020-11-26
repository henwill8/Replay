// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NetworkPlayerEntitlementChecker
#include "GlobalNamespace/NetworkPlayerEntitlementChecker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: EntitlementsStatus
#include "GlobalNamespace/EntitlementsStatus.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NetworkPlayerEntitlementChecker/<GetCanPlayLevelAsync>d__18
  struct NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18 : public System::ValueType/*, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder;
    // public NetworkPlayerEntitlementChecker <>4__this
    // Offset: 0x20
    GlobalNamespace::NetworkPlayerEntitlementChecker* $$4__this;
    // public System.String levelId
    // Offset: 0x28
    ::Il2CppString* levelId;
    // public System.Threading.CancellationToken token
    // Offset: 0x30
    System::Threading::CancellationToken token;
    // private System.Collections.Generic.List`1<System.Threading.Tasks.Task`1<EntitlementsStatus>> <subTasks>5__2
    // Offset: 0x38
    System::Collections::Generic::List_1<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*>* $subTasks$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EntitlementsStatus> <>u__1
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<EntitlementsStatus[]> <>u__2
    // Offset: 0x48
    System::Runtime::CompilerServices::TaskAwaiter_1<::Array<GlobalNamespace::EntitlementsStatus>*> $$u__2;
    // Creating value type constructor for type: $GetCanPlayLevelAsync$d__18
    constexpr $GetCanPlayLevelAsync$d__18(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder_ = {}, GlobalNamespace::NetworkPlayerEntitlementChecker* $$4__this_ = {}, ::Il2CppString* levelId_ = {}, System::Threading::CancellationToken token_ = {}, System::Collections::Generic::List_1<System::Threading::Tasks::Task_1<GlobalNamespace::EntitlementsStatus>*>* $subTasks$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::EntitlementsStatus> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Array<GlobalNamespace::EntitlementsStatus>*> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, levelId{levelId_}, token{token_}, $subTasks$5__2{$subTasks$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xC92FAC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xC92FB4
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetworkPlayerEntitlementChecker/<GetCanPlayLevelAsync>d__18
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkPlayerEntitlementChecker::$GetCanPlayLevelAsync$d__18, "", "NetworkPlayerEntitlementChecker/<GetCanPlayLevelAsync>d__18");
#pragma pack(pop)
