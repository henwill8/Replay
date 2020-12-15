// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: MasterServer.BaseClientMessageHandler
#include "MasterServer/BaseClientMessageHandler.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Runtime.CompilerServices.IAsyncStateMachine
#include "System/Runtime/CompilerServices/IAsyncStateMachine.hpp"
// Including type: System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1
#include "System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter
#include "System/Runtime/CompilerServices/TaskAwaiter.hpp"
// Including type: System.Runtime.CompilerServices.TaskAwaiter`1
#include "System/Runtime/CompilerServices/TaskAwaiter_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: IMasterServerReliableResponse
  class IMasterServerReliableResponse;
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.BaseClientMessageHandler/<OnSendFailedAwaitResponse>d__21`1
  template<typename T>
  struct BaseClientMessageHandler::$OnSendFailedAwaitResponse$d__21_1 : public System::ValueType/*, public System::Runtime::CompilerServices::IAsyncStateMachine*/ {
    public:
    // public System.Int32 <>1__state
    // Offset: 0x0
    int $$1__state;
    // public System.Runtime.CompilerServices.AsyncTaskMethodBuilder`1<T> <>t__builder
    // Offset: 0x0
    System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> $$t__builder;
    // public MasterServer.BaseClientMessageHandler <>4__this
    // Offset: 0x0
    MasterServer::BaseClientMessageHandler* $$4__this;
    // public MasterServer.IMasterServerReliableRequest message
    // Offset: 0x0
    MasterServer::IMasterServerReliableRequest* message;
    // public System.UInt32 protocolVersion
    // Offset: 0x0
    uint protocolVersion;
    // public System.Net.IPEndPoint remoteEndPoint
    // Offset: 0x0
    System::Net::IPEndPoint* remoteEndPoint;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x0
    System::Threading::CancellationToken cancellationToken;
    // private System.Runtime.CompilerServices.TaskAwaiter <>u__1
    // Offset: 0x0
    System::Runtime::CompilerServices::TaskAwaiter $$u__1;
    // private System.Runtime.CompilerServices.TaskAwaiter`1<T> <>u__2
    // Offset: 0x0
    System::Runtime::CompilerServices::TaskAwaiter_1<T> $$u__2;
    // Creating value type constructor for type: $OnSendFailedAwaitResponse$d__21_1
    constexpr $OnSendFailedAwaitResponse$d__21_1(int $$1__state_ = {}, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> $$t__builder_ = {}, MasterServer::BaseClientMessageHandler* $$4__this_ = {}, MasterServer::IMasterServerReliableRequest* message_ = {}, uint protocolVersion_ = {}, System::Net::IPEndPoint* remoteEndPoint_ = {}, System::Threading::CancellationToken cancellationToken_ = {}, System::Runtime::CompilerServices::TaskAwaiter $$u__1_ = {}, System::Runtime::CompilerServices::TaskAwaiter_1<T> $$u__2_ = {}) noexcept : $$1__state{$$1__state_}, $$t__builder{$$t__builder_}, $$4__this{$$4__this_}, message{message_}, protocolVersion{protocolVersion_}, remoteEndPoint{remoteEndPoint_}, cancellationToken{cancellationToken_}, $$u__1{$$u__1_}, $$u__2{$$u__2_} {}
    // Creating interface conversion operator: operator System::Runtime::CompilerServices::IAsyncStateMachine
    operator System::Runtime::CompilerServices::IAsyncStateMachine() noexcept {
      return *reinterpret_cast<System::Runtime::CompilerServices::IAsyncStateMachine*>(this);
    }
    // private System.Void MoveNext()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::MoveNext()
    void MoveNext() {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "MoveNext"));
    }
    // private System.Void SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Runtime.CompilerServices.IAsyncStateMachine
    // Base method: System.Void IAsyncStateMachine::SetStateMachine(System.Runtime.CompilerServices.IAsyncStateMachine stateMachine)
    void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "SetStateMachine", stateMachine));
    }
  }; // MasterServer.BaseClientMessageHandler/<OnSendFailedAwaitResponse>d__21`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(MasterServer::BaseClientMessageHandler::$OnSendFailedAwaitResponse$d__21_1, "MasterServer", "BaseClientMessageHandler/<OnSendFailedAwaitResponse>d__21`1");
#pragma pack(pop)