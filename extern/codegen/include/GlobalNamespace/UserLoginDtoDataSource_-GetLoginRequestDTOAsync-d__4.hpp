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
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: PlatformUserModelSO
#include "GlobalNamespace/PlatformUserModelSO.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LeaderboardsDTO
namespace LeaderboardsDTO {
  // Forward declaring type: LoginRequestDTO
  class LoginRequestDTO;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PlatformTokenInfo
  class PlatformTokenInfo;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: UserLoginDtoDataSource/<GetLoginRequestDTOAsync>d__4
  struct UserLoginDtoDataSource::$GetLoginRequestDTOAsync$d__4 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<LeaderboardsDTO.LoginRequestDTO> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<LeaderboardsDTO::LoginRequestDTO*> $$t__builder;
    // public UserLoginDtoDataSource <>4__this
    // Offset: 0x20
    GlobalNamespace::UserLoginDtoDataSource* $$4__this;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x28
    System::Threading::CancellationToken cancellationToken;
    // private PlatformUserModelSO/UserInfo <userInfo>5__2
    // Offset: 0x30
    GlobalNamespace::PlatformUserModelSO::UserInfo* $userInfo$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<PlatformUserModelSO/UserInfo> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::PlatformUserModelSO::UserInfo*> $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<System.String[]> <>u__2
    // Offset: 0x40
    System::Runtime::CompilerServices::TaskAwaiter_1<::Array<::Il2CppString*>*> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<PlatformTokenInfo> <>u__3
    // Offset: 0x48
    System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::PlatformTokenInfo*> $$u__3;
    // Creating value type constructor for type: $GetLoginRequestDTOAsync$d__4
    constexpr $GetLoginRequestDTOAsync$d__4(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<LeaderboardsDTO::LoginRequestDTO*> $$t__builder_ = {}, GlobalNamespace::UserLoginDtoDataSource* $$4__this_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, GlobalNamespace::PlatformUserModelSO::UserInfo* $userInfo$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::PlatformUserModelSO::UserInfo*> $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<::Array<::Il2CppString*>*> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<GlobalNamespace::PlatformTokenInfo*> $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, cancellationToken{cancellationToken_}, $userInfo$5__2{$userInfo$5__2_}, $$u__1{$$u__1_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2CBA4
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2CBAC
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // UserLoginDtoDataSource/<GetLoginRequestDTOAsync>d__4
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UserLoginDtoDataSource::$GetLoginRequestDTOAsync$d__4, "", "UserLoginDtoDataSource/<GetLoginRequestDTOAsync>d__4");
#pragma pack(pop)
