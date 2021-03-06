// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Cryptography.PKCS8
#include "Mono/Security/Cryptography/PKCS8.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Mono.Security.Cryptography
namespace Mono::Security::Cryptography {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
  // [] Offset: FFFFFFFF
  class PKCS8::EncryptedPrivateKeyInfo : public ::Il2CppObject {
    public:
    // private System.String _algorithm
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* algorithm;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Byte[] _salt
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* salt;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 _iterations
    // Size: 0x4
    // Offset: 0x20
    int iterations;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: iterations and: data
    char __padding2[0x4] = {};
    // private System.Byte[] _data
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* data;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: EncryptedPrivateKeyInfo
    EncryptedPrivateKeyInfo(::Il2CppString* algorithm_ = {}, ::Array<uint8_t>* salt_ = {}, int iterations_ = {}, ::Array<uint8_t>* data_ = {}) noexcept : algorithm{algorithm_}, salt{salt_}, iterations{iterations_}, data{data_} {}
    // public System.Void .ctor(System.Byte[] data)
    // Offset: 0x1BED934
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS8::EncryptedPrivateKeyInfo* New_ctor(::Array<uint8_t>* data) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS8::EncryptedPrivateKeyInfo*, creationType>(data)));
    }
    // public System.String get_Algorithm()
    // Offset: 0x1BEDC04
    ::Il2CppString* get_Algorithm();
    // public System.Byte[] get_EncryptedData()
    // Offset: 0x1BEDC0C
    ::Array<uint8_t>* get_EncryptedData();
    // public System.Byte[] get_Salt()
    // Offset: 0x1BEDC88
    ::Array<uint8_t>* get_Salt();
    // public System.Int32 get_IterationCount()
    // Offset: 0x1BEDD58
    int get_IterationCount();
    // private System.Void Decode(System.Byte[] data)
    // Offset: 0x1BED964
    void Decode(::Array<uint8_t>* data);
    // public System.Void .ctor()
    // Offset: 0x1BED92C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PKCS8::EncryptedPrivateKeyInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PKCS8::EncryptedPrivateKeyInfo*, creationType>()));
    }
  }; // Mono.Security.Cryptography.PKCS8/EncryptedPrivateKeyInfo
  #pragma pack(pop)
  static check_size<sizeof(PKCS8::EncryptedPrivateKeyInfo), 40 + sizeof(::Array<uint8_t>*)> __Mono_Security_Cryptography_PKCS8_EncryptedPrivateKeyInfoSizeCheck;
  static_assert(sizeof(PKCS8::EncryptedPrivateKeyInfo) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Cryptography::PKCS8::EncryptedPrivateKeyInfo*, "Mono.Security.Cryptography", "PKCS8/EncryptedPrivateKeyInfo");
