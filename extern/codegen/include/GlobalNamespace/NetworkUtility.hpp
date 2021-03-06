// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AuthenticationToken
#include "GlobalNamespace/AuthenticationToken.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: NetworkUtility
  // [] Offset: FFFFFFFF
  class NetworkUtility : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NetworkUtility
    NetworkUtility() noexcept {}
    // Get static field: static private System.Byte[] _nameEncryptionKey
    static ::Array<uint8_t>* _get__nameEncryptionKey();
    // Set static field: static private System.Byte[] _nameEncryptionKey
    static void _set__nameEncryptionKey(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] _nameEncryptionIv
    static ::Array<uint8_t>* _get__nameEncryptionIv();
    // Set static field: static private System.Byte[] _nameEncryptionIv
    static void _set__nameEncryptionIv(::Array<uint8_t>* value);
    // static private System.Void .cctor()
    // Offset: 0x1C15210
    static void _cctor();
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x1C15214
    static void NoDomainReloadInit();
    // static public System.String GetHashedUserId(System.String userId, AuthenticationToken/Platform platform)
    // Offset: 0x1C152EC
    static ::Il2CppString* GetHashedUserId(::Il2CppString* userId, GlobalNamespace::AuthenticationToken::Platform platform);
    // static public System.String EncryptName(System.String text)
    // Offset: 0x1C15540
    static ::Il2CppString* EncryptName(::Il2CppString* text);
    // static public System.String DecryptName(System.String text)
    // Offset: 0x1C15880
    static ::Il2CppString* DecryptName(::Il2CppString* text);
    // static public System.String GenerateId()
    // Offset: 0x1C15BC4
    static ::Il2CppString* GenerateId();
    // static public System.String GetHashBase64(System.String input)
    // Offset: 0x1C1539C
    static ::Il2CppString* GetHashBase64(::Il2CppString* input);
  }; // NetworkUtility
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NetworkUtility*, "", "NetworkUtility");
