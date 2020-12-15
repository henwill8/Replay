// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.BaseClientMessageHandler
#include "MasterServer/BaseClientMessageHandler.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Forward declaring type: HelloVerifyRequest
  class HelloVerifyRequest;
  // Forward declaring type: IMasterServerReliableRequest
  class IMasterServerReliableRequest;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IDiffieHellmanKeyPair
  class IDiffieHellmanKeyPair;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.BaseClientMessageHandler/<>c__DisplayClass27_0
  class BaseClientMessageHandler::$$c__DisplayClass27_0 : public ::Il2CppObject {
    public:
    // public MasterServer.BaseClientMessageHandler <>4__this
    // Offset: 0x10
    MasterServer::BaseClientMessageHandler* $$4__this;
    // public System.Byte[] serverPublicKey
    // Offset: 0x18
    ::Array<uint8_t>* serverPublicKey;
    // System.Threading.Tasks.Task`1<MasterServer.HelloVerifyRequest> <AuthenticateWithMasterServerAsyncInternal>b__0(System.UInt32 protocolVersion, System.Net.IPEndPoint ep, MasterServer.IMasterServerReliableRequest request, System.Threading.CancellationToken ct)
    // Offset: 0x1B53B58
    System::Threading::Tasks::Task_1<MasterServer::HelloVerifyRequest*>* $AuthenticateWithMasterServerAsyncInternal$b__0(uint protocolVersion, System::Net::IPEndPoint* ep, MasterServer::IMasterServerReliableRequest* request, System::Threading::CancellationToken ct);
    // System.Threading.Tasks.Task`1<System.Byte[]> <AuthenticateWithMasterServerAsyncInternal>b__1(System.Threading.Tasks.Task`1<IDiffieHellmanKeyPair> result)
    // Offset: 0x1B53BF8
    System::Threading::Tasks::Task_1<::Array<uint8_t>*>* $AuthenticateWithMasterServerAsyncInternal$b__1(System::Threading::Tasks::Task_1<GlobalNamespace::IDiffieHellmanKeyPair*>* result);
    // public System.Void .ctor()
    // Offset: 0x1B53B50
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BaseClientMessageHandler::$$c__DisplayClass27_0* New_ctor();
  }; // MasterServer.BaseClientMessageHandler/<>c__DisplayClass27_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseClientMessageHandler::$$c__DisplayClass27_0*, "MasterServer", "BaseClientMessageHandler/<>c__DisplayClass27_0");
#pragma pack(pop)