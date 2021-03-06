// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDerivationParameters
#include "Org/BouncyCastle/Crypto/IDerivationParameters.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.KdfParameters
  // [] Offset: FFFFFFFF
  class KdfParameters : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDerivationParameters*/ {
    public:
    // private System.Byte[] iv
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint8_t>* iv;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] shared
    // Size: 0x8
    // Offset: 0x18
    ::Array<uint8_t>* shared;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: KdfParameters
    KdfParameters(::Array<uint8_t>* iv_ = {}, ::Array<uint8_t>* shared_ = {}) noexcept : iv{iv_}, shared{shared_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDerivationParameters
    operator Org::BouncyCastle::Crypto::IDerivationParameters() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDerivationParameters*>(this);
    }
    // public System.Void .ctor(System.Byte[] shared, System.Byte[] iv)
    // Offset: 0x1183828
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static KdfParameters* New_ctor(::Array<uint8_t>* shared, ::Array<uint8_t>* iv) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Parameters::KdfParameters::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<KdfParameters*, creationType>(shared, iv)));
    }
    // public System.Byte[] GetSharedSecret()
    // Offset: 0x1183878
    ::Array<uint8_t>* GetSharedSecret();
    // public System.Byte[] GetIV()
    // Offset: 0x1183880
    ::Array<uint8_t>* GetIV();
  }; // Org.BouncyCastle.Crypto.Parameters.KdfParameters
  #pragma pack(pop)
  static check_size<sizeof(KdfParameters), 24 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Parameters_KdfParametersSizeCheck;
  static_assert(sizeof(KdfParameters) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::KdfParameters*, "Org.BouncyCastle.Crypto.Parameters", "KdfParameters");
