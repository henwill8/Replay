// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.IMasterServerResponse
#include "MasterServer/IMasterServerResponse.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: LiteNetLib::Utils
namespace LiteNetLib::Utils {
  // Forward declaring type: NetDataWriter
  class NetDataWriter;
  // Forward declaring type: NetDataReader
  class NetDataReader;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x14
  #pragma pack(push, 1)
  // Autogenerated type: BaseMasterServerResponse
  // [] Offset: FFFFFFFF
  class BaseMasterServerResponse : public ::Il2CppObject/*, public MasterServer::IMasterServerResponse*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD1BCDC
    // private System.UInt32 <responseId>k__BackingField
    // Size: 0x4
    // Offset: 0x10
    uint responseId;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Creating value type constructor for type: BaseMasterServerResponse
    BaseMasterServerResponse(uint responseId_ = {}) noexcept : responseId{responseId_} {}
    // Creating interface conversion operator: operator MasterServer::IMasterServerResponse
    operator MasterServer::IMasterServerResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerResponse*>(this);
    }
    // Creating conversion operator: operator uint
    constexpr operator uint() const noexcept {
      return responseId;
    }
    // private System.Void set_responseId(System.UInt32 value)
    // Offset: 0x11CAA24
    void set_responseId(uint value);
    // public System.UInt32 get_responseId()
    // Offset: 0x11CAA1C
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: System.UInt32 IMasterServerResponse::get_responseId()
    uint get_responseId();
    // public System.Byte get_resultCode()
    // Offset: 0x11CAA2C
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: System.Byte IMasterServerResponse::get_resultCode()
    uint8_t get_resultCode();
    // public System.String get_resultCodeString()
    // Offset: 0x11CAA34
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: System.String IMasterServerResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x11CA7D4
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x11CA844
    // Implemented from: LiteNetLib.Utils.INetSerializable
    // Base method: System.Void INetSerializable::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public System.Void Release()
    // Offset: 0xFFFFFFFF
    // Implemented from: IPoolablePacket
    // Base method: System.Void IPoolablePacket::Release()
    void Release();
    // private MasterServer.IMasterServerResponse MasterServer.IMasterServerResponse.WithResponseId(System.UInt32 responseId)
    // Offset: 0x11CAA7C
    // Implemented from: MasterServer.IMasterServerResponse
    // Base method: MasterServer.IMasterServerResponse IMasterServerResponse::WithResponseId(System.UInt32 responseId)
    MasterServer::IMasterServerResponse* MasterServer_IMasterServerResponse_WithResponseId(uint responseId);
    // protected System.Void .ctor()
    // Offset: 0x11CA880
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseMasterServerResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BaseMasterServerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseMasterServerResponse*, creationType>()));
    }
  }; // BaseMasterServerResponse
  #pragma pack(pop)
  static check_size<sizeof(BaseMasterServerResponse), 16 + sizeof(uint)> __GlobalNamespace_BaseMasterServerResponseSizeCheck;
  static_assert(sizeof(BaseMasterServerResponse) == 0x14);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BaseMasterServerResponse*, "", "BaseMasterServerResponse");
