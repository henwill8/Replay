// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
  // Autogenerated type: OnlineServices.LevelScoreUploader/<SendLevelScoreResultAsync>d__13
  struct LevelScoreUploader::$SendLevelScoreResultAsync$d__13 : public System::ValueType/*, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncVoidMethodBuilder <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder;
    // public OnlineServices.LevelScoreUploader <>4__this
    // Offset: 0x28
    OnlineServices::LevelScoreUploader* $$4__this;
    // private System.Threading.CancellationToken <cancellationToken>5__2
    // Offset: 0x30
    System::Threading::CancellationToken $cancellationToken$5__2;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.PlatformServicesAvailabilityInfo> <>u__1
    // Offset: 0x38
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1;
    // private OnlineServices.LevelScoreUploader/LevelScoreResultsDataUploadInfo <levelScoreResultsDataUploadInfo>5__3
    // Offset: 0x40
    OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo* $levelScoreResultsDataUploadInfo$5__3;
    // private OnlineServices.LevelScoreResultsData <levelScoreResultToUpload>5__4
    // Offset: 0x48
    OnlineServices::LevelScoreResultsData $levelScoreResultToUpload$5__4;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<OnlineServices.SendLeaderboardEntryResult> <>u__2
    // Offset: 0x78
    System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::SendLeaderboardEntryResult> $$u__2;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__3
    // Offset: 0x80
    System::Runtime::CompilerServices::TaskAwaiter $$u__3;
    // Creating value type constructor for type: $SendLevelScoreResultAsync$d__13
    constexpr $SendLevelScoreResultAsync$d__13(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncVoidMethodBuilder $$t__builder_ = {}, OnlineServices::LevelScoreUploader* $$4__this_ = {}, System::Threading::CancellationToken $cancellationToken$5__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::PlatformServicesAvailabilityInfo*> $$u__1_ = {}, OnlineServices::LevelScoreUploader::LevelScoreResultsDataUploadInfo* $levelScoreResultsDataUploadInfo$5__3_ = {}, OnlineServices::LevelScoreResultsData $levelScoreResultToUpload$5__4_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<OnlineServices::SendLeaderboardEntryResult> $$u__2_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__3_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, $cancellationToken$5__2{$cancellationToken$5__2_}, $$u__1{$$u__1_}, $levelScoreResultsDataUploadInfo$5__3{$levelScoreResultsDataUploadInfo$5__3_}, $levelScoreResultToUpload$5__4{$levelScoreResultToUpload$5__4_}, $$u__2{$$u__2_}, $$u__3{$$u__3_} {}
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xC91F68
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xC91F70
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // OnlineServices.LevelScoreUploader/<SendLevelScoreResultAsync>d__13
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(OnlineServices::LevelScoreUploader::$SendLevelScoreResultAsync$d__13, "OnlineServices", "LevelScoreUploader/<SendLevelScoreResultAsync>d__13");
#pragma pack(pop)
