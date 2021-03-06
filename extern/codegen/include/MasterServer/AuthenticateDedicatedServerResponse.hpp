// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BaseMasterServerReliableResponse
#include "GlobalNamespace/BaseMasterServerReliableResponse.hpp"
// Including type: MasterServer.IDedicatedServerServerToClientMessage
#include "MasterServer/IDedicatedServerServerToClientMessage.hpp"
// Including type: MasterServer.IMasterServerAuthenticateResponse
#include "MasterServer/IMasterServerAuthenticateResponse.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PacketPool`1<T>
  template<typename T>
  class PacketPool_1;
}
// Forward declaring namespace: MasterServer
namespace MasterServer {
  // Skipping declaration: Result because it is already included!
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
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.AuthenticateDedicatedServerResponse
  // [] Offset: FFFFFFFF
  class AuthenticateDedicatedServerResponse : public GlobalNamespace::BaseMasterServerReliableResponse/*, public MasterServer::IDedicatedServerServerToClientMessage, public MasterServer::IMasterServerAuthenticateResponse*/ {
    public:
    // Nested type: MasterServer::AuthenticateDedicatedServerResponse::Result
    struct Result;
    // Size: 0x4
    #pragma pack(push, 1)
    // Autogenerated type: MasterServer.AuthenticateDedicatedServerResponse/Result
    // [] Offset: FFFFFFFF
    struct Result/*, public System::Enum*/ {
      public:
      // public System.Int32 value__
      // Size: 0x4
      // Offset: 0x0
      int value;
      // Field size check
      static_assert(sizeof(int) == 0x4);
      // Creating value type constructor for type: Result
      constexpr Result(int value_ = {}) noexcept : value{value_} {}
      // Creating interface conversion operator: operator System::Enum
      operator System::Enum() noexcept {
        return *reinterpret_cast<System::Enum*>(this);
      }
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public MasterServer.AuthenticateDedicatedServerResponse/Result Success
      static constexpr const int Success = 0;
      // Get static field: static public MasterServer.AuthenticateDedicatedServerResponse/Result Success
      static MasterServer::AuthenticateDedicatedServerResponse::Result _get_Success();
      // Set static field: static public MasterServer.AuthenticateDedicatedServerResponse/Result Success
      static void _set_Success(MasterServer::AuthenticateDedicatedServerResponse::Result value);
      // static field const value: static public MasterServer.AuthenticateDedicatedServerResponse/Result Failed
      static constexpr const int Failed = 1;
      // Get static field: static public MasterServer.AuthenticateDedicatedServerResponse/Result Failed
      static MasterServer::AuthenticateDedicatedServerResponse::Result _get_Failed();
      // Set static field: static public MasterServer.AuthenticateDedicatedServerResponse/Result Failed
      static void _set_Failed(MasterServer::AuthenticateDedicatedServerResponse::Result value);
      // static field const value: static public MasterServer.AuthenticateDedicatedServerResponse/Result UnknownError
      static constexpr const int UnknownError = 2;
      // Get static field: static public MasterServer.AuthenticateDedicatedServerResponse/Result UnknownError
      static MasterServer::AuthenticateDedicatedServerResponse::Result _get_UnknownError();
      // Set static field: static public MasterServer.AuthenticateDedicatedServerResponse/Result UnknownError
      static void _set_UnknownError(MasterServer::AuthenticateDedicatedServerResponse::Result value);
    }; // MasterServer.AuthenticateDedicatedServerResponse/Result
    #pragma pack(pop)
    static check_size<sizeof(AuthenticateDedicatedServerResponse::Result), 0 + sizeof(int)> __MasterServer_AuthenticateDedicatedServerResponse_ResultSizeCheck;
    static_assert(sizeof(AuthenticateDedicatedServerResponse::Result) == 0x4);
    // public MasterServer.AuthenticateDedicatedServerResponse/Result result
    // Size: 0x4
    // Offset: 0x18
    MasterServer::AuthenticateDedicatedServerResponse::Result result;
    // Field size check
    static_assert(sizeof(MasterServer::AuthenticateDedicatedServerResponse::Result) == 0x4);
    // Creating value type constructor for type: AuthenticateDedicatedServerResponse
    AuthenticateDedicatedServerResponse(MasterServer::AuthenticateDedicatedServerResponse::Result result_ = {}) noexcept : result{result_} {}
    // Creating interface conversion operator: operator MasterServer::IDedicatedServerServerToClientMessage
    operator MasterServer::IDedicatedServerServerToClientMessage() noexcept {
      return *reinterpret_cast<MasterServer::IDedicatedServerServerToClientMessage*>(this);
    }
    // Creating interface conversion operator: operator MasterServer::IMasterServerAuthenticateResponse
    operator MasterServer::IMasterServerAuthenticateResponse() noexcept {
      return *reinterpret_cast<MasterServer::IMasterServerAuthenticateResponse*>(this);
    }
    // Creating conversion operator: operator MasterServer::AuthenticateDedicatedServerResponse::Result
    constexpr operator MasterServer::AuthenticateDedicatedServerResponse::Result() const noexcept {
      return result;
    }
    // static public PacketPool`1<MasterServer.AuthenticateDedicatedServerResponse> get_pool()
    // Offset: 0x11D9B94
    static GlobalNamespace::PacketPool_1<MasterServer::AuthenticateDedicatedServerResponse*>* get_pool();
    // public MasterServer.AuthenticateDedicatedServerResponse Init(MasterServer.AuthenticateDedicatedServerResponse/Result result)
    // Offset: 0x11D9C84
    MasterServer::AuthenticateDedicatedServerResponse* Init(MasterServer::AuthenticateDedicatedServerResponse::Result result);
    // public override System.Byte get_resultCode()
    // Offset: 0x11D9BDC
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Byte BaseMasterServerReliableResponse::get_resultCode()
    uint8_t get_resultCode();
    // public override System.String get_resultCodeString()
    // Offset: 0x11D9BE4
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.String BaseMasterServerReliableResponse::get_resultCodeString()
    ::Il2CppString* get_resultCodeString();
    // public System.Boolean get_isAuthenticated()
    // Offset: 0x11D9C74
    // Implemented from: MasterServer.IMasterServerAuthenticateResponse
    // Base method: System.Boolean IMasterServerAuthenticateResponse::get_isAuthenticated()
    bool get_isAuthenticated();
    // public override System.Void Serialize(LiteNetLib.Utils.NetDataWriter writer)
    // Offset: 0x11D9C8C
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Serialize(LiteNetLib.Utils.NetDataWriter writer)
    void Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Serialize
    // Maps to method: Serialize
    void LiteNetLib_Utils_INetSerializable_Serialize(LiteNetLib::Utils::NetDataWriter* writer);
    // public override System.Void Deserialize(LiteNetLib.Utils.NetDataReader reader)
    // Offset: 0x11D9CC4
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Deserialize(LiteNetLib.Utils.NetDataReader reader)
    void Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // Creating proxy method: LiteNetLib_Utils_INetSerializable_Deserialize
    // Maps to method: Deserialize
    void LiteNetLib_Utils_INetSerializable_Deserialize(LiteNetLib::Utils::NetDataReader* reader);
    // public override System.Void Release()
    // Offset: 0x11D9D04
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::Release()
    void Release();
    // public System.Void .ctor()
    // Offset: 0x11D9D60
    // Implemented from: BaseMasterServerReliableResponse
    // Base method: System.Void BaseMasterServerReliableResponse::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AuthenticateDedicatedServerResponse* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::AuthenticateDedicatedServerResponse::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AuthenticateDedicatedServerResponse*, creationType>()));
    }
  }; // MasterServer.AuthenticateDedicatedServerResponse
  #pragma pack(pop)
  static check_size<sizeof(AuthenticateDedicatedServerResponse), 24 + sizeof(MasterServer::AuthenticateDedicatedServerResponse::Result)> __MasterServer_AuthenticateDedicatedServerResponseSizeCheck;
  static_assert(sizeof(AuthenticateDedicatedServerResponse) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateDedicatedServerResponse*, "MasterServer", "AuthenticateDedicatedServerResponse");
DEFINE_IL2CPP_ARG_TYPE(MasterServer::AuthenticateDedicatedServerResponse::Result, "MasterServer", "AuthenticateDedicatedServerResponse/Result");
