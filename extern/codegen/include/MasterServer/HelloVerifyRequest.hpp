// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IHandshakeServerToClientMessage
#include "MasterServer/IHandshakeServerToClientMessage.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
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
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.HelloVerifyRequest
  // [] Offset: FFFFFFFF
  class HelloVerifyRequest : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IHandshakeServerToClientMessage*/ {
    public:
    // public readonly ByteArrayNetSerializable cookie
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ByteArrayNetSerializable* cookie;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ByteArrayNetSerializable*) == 0x8);
    // Creating value type constructor for type: HelloVerifyRequest
    HelloVerifyRequest(GlobalNamespace::ByteArrayNetSerializable* cookie_ = {}) noexcept : cookie{cookie_} {}
    // Creating interface conversion operator: operator MasterServer::IHandshakeServerToClientMessage
    operator MasterServer::IHandshakeServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IHandshakeServerToClientMessage*>(this);
    }
    // Creating conversion operator: operator GlobalNamespace::ByteArrayNetSerializable*
    constexpr operator GlobalNamespace::ByteArrayNetSerializable*() const noexcept {
      return cookie;
    }
    // static public PacketPool`1<MasterServer.HelloVerifyRequest> get_pool()
    // Offset: 0x111D3E4
    static GlobalNamespace::PacketPool_1<MasterServer::HelloVerifyRequest*>* get_pool();
    // public MasterServer.HelloVerifyRequest Init(System.Byte[] cookie)
    // Offset: 0x111D42C
    MasterServer::HelloVerifyRequest* Init(::Array<uint8_t>* cookie);
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x111D460
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x111D49C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x111D4D8
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x111D544
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static HelloVerifyRequest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::HelloVerifyRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<HelloVerifyRequest*, creationType>()));
    }
  }; // MasterServer.HelloVerifyRequest
  #pragma pack(pop)
  static check_size<sizeof(HelloVerifyRequest), 24 + sizeof(GlobalNamespace::ByteArrayNetSerializable*)> __MasterServer_HelloVerifyRequestSizeCheck;
  static_assert(sizeof(HelloVerifyRequest) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::HelloVerifyRequest*, "MasterServer", "HelloVerifyRequest");
