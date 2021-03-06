// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MasterServer.BaseClientMessageHandler
#include "MasterServer/BaseClientMessageHandler.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: MasterServer
namespace MasterServer {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: MasterServer.BaseClientMessageHandler/<>c__DisplayClass30_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D1B83C
  class BaseClientMessageHandler::$$c__DisplayClass30_0 : public ::Il2CppObject {
    public:
    // public System.Byte[] clientRandom
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* clientRandom;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] serverRandom
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* serverRandom;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[] serverKey
    // Size: 0x8
    // Offset: 0x20
    ::Array<uint8_t>* serverKey;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // public System.Byte[][] certData
    // Size: 0x8
    // Offset: 0x28
    ::Array<::Array<uint8_t>*>* certData;
    // Field size check
    static_assert(sizeof(::Array<::Array<uint8_t>*>*) == 0x8);
    // public MasterServer.BaseClientMessageHandler <>4__this
    // Size: 0x8
    // Offset: 0x30
    MasterServer::BaseClientMessageHandler* $$4__this;
    // Field size check
    static_assert(sizeof(MasterServer::BaseClientMessageHandler*) == 0x8);
    // public System.Byte[] signature
    // Size: 0x8
    // Offset: 0x38
    ::Array<uint8_t>* signature;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass30_0
    $$c__DisplayClass30_0(::Array<uint8_t>* clientRandom_ = {}, ::Array<uint8_t>* serverRandom_ = {}, ::Array<uint8_t>* serverKey_ = {}, ::Array<::Array<uint8_t>*>* certData_ = {}, MasterServer::BaseClientMessageHandler* $$4__this_ = {}, ::Array<uint8_t>* signature_ = {}) noexcept : clientRandom{clientRandom_}, serverRandom{serverRandom_}, serverKey{serverKey_}, certData{certData_}, $$4__this{$$4__this_}, signature{signature_} {}
    // System.Boolean <VerifySignature>b__0()
    // Offset: 0x11DAF4C
    bool $VerifySignature$b__0();
    // public System.Void .ctor()
    // Offset: 0x11DAD38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BaseClientMessageHandler::$$c__DisplayClass30_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("MasterServer::BaseClientMessageHandler::$$c__DisplayClass30_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BaseClientMessageHandler::$$c__DisplayClass30_0*, creationType>()));
    }
  }; // MasterServer.BaseClientMessageHandler/<>c__DisplayClass30_0
  #pragma pack(pop)
  static check_size<sizeof(BaseClientMessageHandler::$$c__DisplayClass30_0), 56 + sizeof(::Array<uint8_t>*)> __MasterServer_BaseClientMessageHandler_$$c__DisplayClass30_0SizeCheck;
  static_assert(sizeof(BaseClientMessageHandler::$$c__DisplayClass30_0) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(MasterServer::BaseClientMessageHandler::$$c__DisplayClass30_0*, "MasterServer", "BaseClientMessageHandler/<>c__DisplayClass30_0");
