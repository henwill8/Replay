// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UserLoginDtoDataSource
#include "GlobalNamespace/UserLoginDtoDataSource.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UserInfo
  class UserInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: UserLoginDtoDataSource/<GetPlatformUserIdAsync>d__2
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D31060
  struct UserLoginDtoDataSource::$GetPlatformUserIdAsync$d__2/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<System.String> <>t__builder
    // Size: 0xFFFFFFFF
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder;
    // public UserLoginDtoDataSource <>4__this
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::UserLoginDtoDataSource* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::UserLoginDtoDataSource*) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<UserInfo> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo*> $$u__1;
    // Creating value type constructor for type: $GetPlatformUserIdAsync$d__2
    constexpr $GetPlatformUserIdAsync$d__2(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Il2CppString*> $$t__builder_ = {}, GlobalNamespace::UserLoginDtoDataSource* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo*> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xE0D124
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xE0D12C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // UserLoginDtoDataSource/<GetPlatformUserIdAsync>d__2
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UserLoginDtoDataSource::$GetPlatformUserIdAsync$d__2, "", "UserLoginDtoDataSource/<GetPlatformUserIdAsync>d__2");
