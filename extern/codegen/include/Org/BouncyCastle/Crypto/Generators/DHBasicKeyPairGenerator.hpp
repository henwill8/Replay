// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: DHKeyGenerationParameters
  class DHKeyGenerationParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: KeyGenerationParameters
  class KeyGenerationParameters;
  // Forward declaring type: AsymmetricCipherKeyPair
  class AsymmetricCipherKeyPair;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Generators
namespace Org::BouncyCastle::Crypto::Generators {
  // Autogenerated type: Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator
  class DHBasicKeyPairGenerator : public ::Il2CppObject {
    public:
    // private Org.BouncyCastle.Crypto.Parameters.DHKeyGenerationParameters param
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters* param;
    // Creating conversion operator: operator Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*
    constexpr operator Org::BouncyCastle::Crypto::Parameters::DHKeyGenerationParameters*() const noexcept {
      return param;
    }
    // public System.Void Init(Org.BouncyCastle.Crypto.KeyGenerationParameters parameters)
    // Offset: 0x1497D1C
    void Init(Org::BouncyCastle::Crypto::KeyGenerationParameters* parameters);
    // public Org.BouncyCastle.Crypto.AsymmetricCipherKeyPair GenerateKeyPair()
    // Offset: 0x1497DB4
    Org::BouncyCastle::Crypto::AsymmetricCipherKeyPair* GenerateKeyPair();
    // public System.Void .ctor()
    // Offset: 0x1498100
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static DHBasicKeyPairGenerator* New_ctor();
  }; // Org.BouncyCastle.Crypto.Generators.DHBasicKeyPairGenerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Generators::DHBasicKeyPairGenerator*, "Org.BouncyCastle.Crypto.Generators", "DHBasicKeyPairGenerator");
#pragma pack(pop)
