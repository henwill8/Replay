// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OnlineServices.LevelScoreUploader
#include "OnlineServices/LevelScoreUploader.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncVoidMethodBuilder
#include "System/Runtime/CompilerServices/AsyncVoidMethodBuilder.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Including type: OnlineServices.LevelScoreResultsData
#include "OnlineServices/LevelScoreResultsData.hpp"
// Including type: OnlineServices.SendLeaderboardEntryResult
#include "OnlineServices/SendLeaderboardEntryResult.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OnlineServices
namespace OnlineServices {
  // Forward declaring type: PlatformServicesAvailabilityInfo
  class PlatformServicesAvailabilityInfo;
}
// Completed forward declares
// Type namespace: OnlineServices
namespace OnlineServices {
  // WARNING Size may be invalid!
  // Autogenerated type: OnlineServices.LevelScoreUploader/<SendLevelScoreResultAsync>d__13
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D31B70
  struct LevelScoreUploader::$SendLevelScoreResultAsync$d__13/*, public System::ValueType, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x0
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Size: 0x20
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::AsyncVoidMethodBuilder) == 0x20);
    // public OnlineServices.LevelScoreUploader <>4__this
    // Size: 0x8
    // Offset: 0x28
    OnlineServices::LevelScoreUploader* $$4__this;
    // Field size check
    static_assert(sizeof(OnlineServices::LevelScoreUploader*) == 0x8);
    // private System.Threading.CancellationToken <cancellationToken>5__2
    // Size: 0x8
    // Offset: 0x30
    System::Threading::CancellationToken $cancellationToken$5__2;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationToken) == 0x8);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.PlatformServicesAvailabilityInfo> <>u__1
    // Size: 0xFFFFFFFF
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1;
    // private OnlineServices.LevelScoreUploader/LevelScoreResultsDataUploadInfo <levelScoreResultsDataUploadInfo>5__3
    // Size: 0x8
    // Offset: 0x40
    OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo* $levelScoreResultsDataUploadInfo$5__3;
    // Field size check
    static_assert(sizeof(OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo*) == 0x8);
    // private OnlineServices.LevelScoreResultsData <levelScoreResultToUpload>5__4
    // Size: 0x30
    // Offset: 0x48
    OnlineServices::LevelScoreResultsData $levelScoreResultToUpload$5__4;
    // Field size check
    static_assert(sizeof(OnlineServices::LevelScoreResultsData) == 0x30);
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.SendLeaderboardEntryResult> <>u__2
    // Size: 0xFFFFFFFF
    // Offset: 0x78
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::SendLeaderboardEntryResult> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__3
    // Size: 0x8
    // Offset: 0x80
    System::Runtime::CompilerServices::TaskAwaiter $$u__3;
    // Field size check
    static_assert(sizeof(System::Runtime::CompilerServices::TaskAwaiter) == 0x8);
    // Creating value type constructor for type: $SendLevelScoreResultAsync$d__13
    constexpr $SendLevelScoreResultAsync$d__13(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, OnlineServices::LevelScoreUploader* $$4__this_ = {}, System::Threading::CancellationToken $cancellationToken$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1_ = {}, OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo* $levelScoreResultsDataUploadInfo$5__3_ = {}, OnlineServices::LevelScoreResultsData $levelScoreResultToUpload$5__4_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::SendLeaderboardEntryResult> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $cancellationToken$5__2{$cancellationToken$5__2_}, $$u__1{$$u__1_}, $levelScoreResultsDataUploadInfo$5__3{$levelScoreResultsDataUploadInfo$5__3_}, $levelScoreResultToUpload$5__4{$levelScoreResultToUpload$5__4_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xDF234C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xDF2354
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.LevelScoreUploader/<SendLevelScoreResultAsync>d__13
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13, "OnlineServices", "LevelScoreUploader/<SendLevelScoreResultAsync>d__13");
