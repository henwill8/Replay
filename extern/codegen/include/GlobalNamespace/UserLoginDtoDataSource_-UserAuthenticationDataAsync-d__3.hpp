// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
// Forward declaring namespace: BeatSaberAPI::DataTransferObjects
namespace BeatSaberAPI::DataTransferObjects {
  // Forward declaring type: UserAuthenticationData
  class UserAuthenticationData;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: UserInfo
  class UserInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: UserLoginDtoDataSource/<UserAuthenticationDataAsync>d__3
  struct UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3 : public System::ValueType/*, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<BeatSaberAPI.DataTransferObjects.UserAuthenticationData> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatSaberAPI::DataTransferObjects::UserAuthenticationData*> $$t__builder;
    // public UserLoginDtoDataSource <>4__this
    // Offset: 0x20
    GlobalNamespace::UserLoginDtoDataSource* $$4__this;
    // private UserInfo <userInfo>5__2
    // Offset: 0x28
    GlobalNamespace::UserInfo* $userInfo$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<UserInfo> <>u__1
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.Collections.Generic.IReadOnlyList`1<System.String>> <>u__2
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String> <>u__3
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__3;
    // Creating value type constructor for type: $UserAuthenticationDataAsync$d__3
    constexpr $UserAuthenticationDataAsync$d__3(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<BeatSaberAPI::DataTransferObjects::UserAuthenticationData*> $$t__builder_ = {}, GlobalNamespace::UserLoginDtoDataSource* $$4__this_ = {}, GlobalNamespace::UserInfo* $userInfo$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::UserInfo*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<System::Collections::Generic::IReadOnlyList_1<::Il2CppString*>*> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Il2CppString*> $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $userInfo$5__2{$userInfo$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xC9318C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xC93194
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // UserLoginDtoDataSource/<UserAuthenticationDataAsync>d__3
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UserLoginDtoDataSource::$UserAuthenticationDataAsync$d__3, "", "UserLoginDtoDataSource/<UserAuthenticationDataAsync>d__3");
#pragma pack(pop)