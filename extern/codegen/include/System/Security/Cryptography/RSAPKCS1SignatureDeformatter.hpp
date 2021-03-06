// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.AsymmetricSignatureDeformatter
#include "System/Security/Cryptography/AsymmetricSignatureDeformatter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
  // Forward declaring type: AsymmetricAlgorithm
  class AsymmetricAlgorithm;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.RSAPKCS1SignatureDeformatter
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAB278
  class RSAPKCS1SignatureDeformatter : public System::Security::Cryptography::AsymmetricSignatureDeformatter {
    public:
    // private System.Security.Cryptography.RSA rsa
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::RSA* rsa;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::RSA*) == 0x8);
    // private System.String hashName
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* hashName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: RSAPKCS1SignatureDeformatter
    RSAPKCS1SignatureDeformatter(System::Security::Cryptography::RSA* rsa_ = {}, ::Il2CppString* hashName_ = {}) noexcept : rsa{rsa_}, hashName{hashName_} {}
    // public System.Void .ctor(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x1A4D8C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1SignatureDeformatter* New_ctor(System::Security::Cryptography::AsymmetricAlgorithm* key) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RSAPKCS1SignatureDeformatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1SignatureDeformatter*, creationType>(key)));
    }
    // public System.Void .ctor()
    // Offset: 0x1A4D8BC
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Void AsymmetricSignatureDeformatter::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RSAPKCS1SignatureDeformatter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::RSAPKCS1SignatureDeformatter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RSAPKCS1SignatureDeformatter*, creationType>()));
    }
    // public override System.Void SetHashAlgorithm(System.String strName)
    // Offset: 0x1A4D8FC
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Void AsymmetricSignatureDeformatter::SetHashAlgorithm(System.String strName)
    void SetHashAlgorithm(::Il2CppString* strName);
    // public override System.Void SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    // Offset: 0x1A4D994
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Void AsymmetricSignatureDeformatter::SetKey(System.Security.Cryptography.AsymmetricAlgorithm key)
    void SetKey(System::Security::Cryptography::AsymmetricAlgorithm* key);
    // public override System.Boolean VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    // Offset: 0x1A4DA68
    // Implemented from: System.Security.Cryptography.AsymmetricSignatureDeformatter
    // Base method: System.Boolean AsymmetricSignatureDeformatter::VerifySignature(System.Byte[] rgbHash, System.Byte[] rgbSignature)
    bool VerifySignature(::Array<uint8_t>* rgbHash, ::Array<uint8_t>* rgbSignature);
  }; // System.Security.Cryptography.RSAPKCS1SignatureDeformatter
  #pragma pack(pop)
  static check_size<sizeof(RSAPKCS1SignatureDeformatter), 24 + sizeof(::Il2CppString*)> __System_Security_Cryptography_RSAPKCS1SignatureDeformatterSizeCheck;
  static_assert(sizeof(RSAPKCS1SignatureDeformatter) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSAPKCS1SignatureDeformatter*, "System.Security.Cryptography", "RSAPKCS1SignatureDeformatter");
