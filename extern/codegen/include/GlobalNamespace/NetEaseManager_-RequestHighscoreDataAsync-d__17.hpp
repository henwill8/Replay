// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NetEaseManager
#include "GlobalNamespace/NetEaseManager.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: NetEase.Docker.ReceivedHighscoreData
#include "NetEase/Docker/ReceivedHighscoreData.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
// Completed includes
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NetEaseManager/<RequestHighscoreDataAsync>d__17
  struct NetEaseManager::$RequestHighscoreDataAsync$d__17 : public System::ValueType/*, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<NetEase.Docker.ReceivedHighscoreData> <>t__builder
    // Offset: 0x8
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<NetEase::Docker::ReceivedHighscoreData> $$t__builder;
    // public NetEaseManager <>4__this
    // Offset: 0x20
    GlobalNamespace::NetEaseManager* $$4__this;
    // public System.String leaderboardId
    // Offset: 0x28
    ::Il2CppString* leaderboardId;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<NetEase.Docker.ReceivedHighscoreData> <>u__1
    // Offset: 0x30
    System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::ReceivedHighscoreData> $$u__1;
    // Creating value type constructor for type: $RequestHighscoreDataAsync$d__17
    constexpr $RequestHighscoreDataAsync$d__17(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<NetEase::Docker::ReceivedHighscoreData> $$t__builder_ = {}, GlobalNamespace::NetEaseManager* $$4__this_ = {}, ::Il2CppString* leaderboardId_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<NetEase::Docker::ReceivedHighscoreData> $$u__1_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, leaderboardId{leaderboardId_}, $$u__1{$$u__1_} {}
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xC92F9C
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext();
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xC92FA4
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine);
  }; // NetEaseManager/<RequestHighscoreDataAsync>d__17
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetEaseManager::$RequestHighscoreDataAsync$d__17, "", "NetEaseManager/<RequestHighscoreDataAsync>d__17");
#pragma pack(pop)
