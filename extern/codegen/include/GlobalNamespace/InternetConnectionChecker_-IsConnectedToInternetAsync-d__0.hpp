// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: InternetConnectionChecker
#include "GlobalNamespace/InternetConnectionChecker.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: InternetConnectionChecker/<IsConnectedToInternetAsync>d__0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1F2BC
  struct InternetConnectionChecker::$IsConnectedToInternetAsync$d__0/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.Boolean> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Boolean> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x20
    System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1;
    // Creating value type constructor for type: $IsConnectedToInternetAsync$d__0
    constexpr $IsConnectedToInternetAsync$d__0(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> $$t__builder_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<bool> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xE301DC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE301E4
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // InternetConnectionChecker/<IsConnectedToInternetAsync>d__0
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::InternetConnectionChecker::$IsConnectedToInternetAsync$d__0, "", "InternetConnectionChecker/<IsConnectedToInternetAsync>d__0");
