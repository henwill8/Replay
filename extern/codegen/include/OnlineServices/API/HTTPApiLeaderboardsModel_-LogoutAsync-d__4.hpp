// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.API.HTTPApiLeaderboardsModel
#include "OnlineServices/API/HTTPApiLeaderboardsModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Type namespace: OnlineServices.API
namespace OnlineServices::API {
  // Autogenerated type: OnlineServices.API.HTTPApiLeaderboardsModel/<LogoutAsync>d__4
  struct HTTPApiLeaderboardsModel::$LogoutAsync$d__4 : public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // public OnlineServices.API.HTTPApiLeaderboardsModel <>4__this
    // Offset: 0x28
    OnlineServices::API::HTTPApiLeaderboardsModel* $$4__this;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // Creating value type constructor for type: $LogoutAsync$d__4
    constexpr $LogoutAsync$d__4(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, OnlineServices::API::HTTPApiLeaderboardsModel* $$4__this_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $$u__1{$$u__1_} {}
    // private System.Void MoveNext()
    // Offset: 0xA2C974
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xA2C97C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.API.HTTPApiLeaderboardsModel/<LogoutAsync>d__4
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::API::HTTPApiLeaderboardsModel::$LogoutAsync$d__4, "OnlineServices.API", "HTTPApiLeaderboardsModel/<LogoutAsync>d__4");
#pragma pack(pop)
