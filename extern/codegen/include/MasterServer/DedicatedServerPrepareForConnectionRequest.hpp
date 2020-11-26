// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableRequest
#include "GlobalNamespace/BaseMasterServerReliableRequest.hpp"
// Including type: MasterServer.IDedicatedServerServerToClientMessage
#include "MasterServer/IDedicatedServerServerToClientMessage.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ByteArrayNetSerializable
  class ByteArrayNetSerializable;
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: MasterServer
namespace MasterServer {
  // Autogenerated type: MasterServer.DedicatedServerPrepareForConnectionRequest
  class DedicatedServerPrepareForConnectionRequest : public GlobalNamespace::BaseMasterServerReliableRequest/*, public MasterServer::IDedicatedServerServerToClientMessage*/ {
    public:
    // public System.String id
    // Offset: 0x18
    ::Il2CppString* id;
    // public System.String userId
    // Offset: 0x20
    ::Il2CppString* userId;
    // public System.String userName
    // Offset: 0x28
    ::Il2CppString* userName;
    // public System.Net.IPEndPoint remoteEndPoint
    // Offset: 0x30
    System::Net::IPEndPoint* remoteEndPoint;
    // public readonly ByteArrayNetSerializable random
    // Offset: 0x38
    GlobalNamespace::ByteArrayNetSerializable* random;
    // public readonly ByteArrayNetSerializable publicKey
    // Offset: 0x40
    GlobalNamespace::ByteArrayNetSerializable* publicKey;
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerServerToClientMessage
    operator MasterServer::IDedicatedServerServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerServerToClientMessage*>(this);
    }
    // Deleting conversion operator: operator uint
    constexpr operator uint() const noexcept = delete;
    // static public PacketPool`1<MasterServer.DedicatedServerPrepareForConnectionRequest> get_pool()
    // Offset: 0x1AD55B8
    static GlobalNamespace::PacketPool_1<MasterServer::DedicatedServerPrepareForConnectionRequest*>* get_pool();
    // public MasterServer.DedicatedServerPrepareForConnectionRequest Init(System.String id, System.String userId, System.String userName, System.Net.IPEndPoint remoteEndPoint, System.Byte[] random, System.Byte[] publicKey)
    // Offset: 0x1AD5600
    MasterServer::DedicatedServerPrepareForConnectionRequest* Init(::Il2CppString* id, ::Il2CppString* userId, ::Il2CppString* userName, System::Net::IPEndPoint* remoteEndPoint, ::Array<uint8_t>* random, ::Array<uint8_t>* publicKey);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x1AD56AC
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x1AD5774
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x1AD5844
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x1AD58C0
    // Implemented from: BaseMasterServerReliableRequest
    // Base method: System.Void BaseMasterServerReliableRequest::.ctor()
    // Base method: System.Void Object::.ctor()
    static DedicatedServerPrepareForConnectionRequest* New_ctor();
  }; // MasterServer.DedicatedServerPrepareForConnectionRequest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(MasterServer::DedicatedServerPrepareForConnectionRequest*, "MasterServer", "DedicatedServerPrepareForConnectionRequest");
#pragma pack(pop)
