// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.KeyGenerationParameters
#include "Org/BouncyCastle/Crypto/KeyGenerationParameters.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECDomainParameters
  class ECDomainParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters
  class ECKeyGenerationParameters : public Org::BouncyCastle::Crypto::KeyGenerationParameters {
    public:
    // private readonly Org.BouncyCastle.Crypto.Parameters.ECDomainParameters domainParams
    // Offset: 0x20
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* domainParams;
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier publicKeyParamSet
    // Offset: 0x28
    Org::BouncyCastle::Asn1::DerObjectIdentifier* publicKeyParamSet;
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Parameters.ECDomainParameters domainParameters, Org.BouncyCastle.Security.SecureRandom random)
    // Offset: 0x1046174
    static ECKeyGenerationParameters* New_ctor(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* domainParameters, Org::BouncyCastle::Security::SecureRandom* random);
    // public Org.BouncyCastle.Crypto.Parameters.ECDomainParameters get_DomainParameters()
    // Offset: 0x10461D4
    Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* get_DomainParameters();
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_PublicKeyParamSet()
    // Offset: 0x10461DC
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_PublicKeyParamSet();
  }; // Org.BouncyCastle.Crypto.Parameters.ECKeyGenerationParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECKeyGenerationParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECKeyGenerationParameters");
#pragma pack(pop)
