// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TestPlatformAdditionalContentModel
#include "GlobalNamespace/TestPlatformAdditionalContentModel.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter
#include "System/Runtime/CompilerServices/YieldAwaitable_YieldAwaiter.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TestPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__5
  struct TestPlatformAdditionalContentModel::$GetLevelEntitlementStatusInternalAsync$d__5 : public System::ValueType/*, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<AdditionalContentModel/EntitlementStatus> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$t__builder;
    // public System.Threading.CancellationToken token
    // Offset: 0x20
    System::Threading::CancellationToken token;
    // public TestPlatformAdditionalContentModel <>4__this
    // Offset: 0x28
    GlobalNamespace::TestPlatformAdditionalContentModel* $$4__this;
    // public System.String levelId
    // Offset: 0x30
    ::Il2CppString* levelId;
    // private System.Runtime.CompilerServices.YieldAwaitable/YieldAwaiter <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1;
    // Creating value type constructor for type: $GetLevelEntitlementStatusInternalAsync$d__5
    constexpr $GetLevelEntitlementStatusInternalAsync$d__5(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus> $$t__builder_ = {}, System::Threading::CancellationToken token_ = {}, GlobalNamespace::TestPlatformAdditionalContentModel* $$4__this_ = {}, ::Il2CppString* levelId_ = {}, System::Runtime::CompilerServices::YieldAwaitable::YieldAwaiter $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, token{token_}, $$4__this{$$4__this_}, levelId{levelId_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xC930C8
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xC930D0
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // TestPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__5
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TestPlatformAdditionalContentModel::$GetLevelEntitlementStatusInternalAsync$d__5, "", "TestPlatformAdditionalContentModel/<GetLevelEntitlementStatusInternalAsync>d__5");
#pragma pack(pop)