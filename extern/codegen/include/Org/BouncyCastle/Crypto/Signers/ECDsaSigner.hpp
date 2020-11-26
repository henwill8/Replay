// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDsaExt
#include "Org/BouncyCastle/Crypto/IDsaExt.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Forward declaring type: IDsaKCalculator
  class IDsaKCalculator;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: ECKeyParameters
  class ECKeyParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.ECDsaSigner
  class ECDsaSigner : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDsaExt*/ {
    public:
    // protected readonly Org.BouncyCastle.Crypto.Signers.IDsaKCalculator kCalculator
    // Offset: 0x10
    Org::BouncyCastle::Crypto::Signers::IDsaKCalculator* kCalculator;
    // protected Org.BouncyCastle.Crypto.Parameters.ECKeyParameters key
    // Offset: 0x18
    Org::BouncyCastle::Crypto::Parameters::ECKeyParameters* key;
    // protected Org.BouncyCastle.Security.SecureRandom random
    // Offset: 0x20
    Org::BouncyCastle::Security::SecureRandom* random;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDsaExt
    operator Org::BouncyCastle::Crypto::IDsaExt() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDsaExt*>(this);
    }
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger Eight
    static Org::BouncyCastle::Math::BigInteger* _get_Eight();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger Eight
    static void _set_Eight(Org::BouncyCastle::Math::BigInteger* value);
    // protected Org.BouncyCastle.Math.BigInteger CalculateE(Org.BouncyCastle.Math.BigInteger n, System.Byte[] message)
    // Offset: 0x104CE10
    Org::BouncyCastle::Math::BigInteger* CalculateE(Org::BouncyCastle::Math::BigInteger* n, ::Array<uint8_t>* message);
    // protected Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier CreateBasePointMultiplier()
    // Offset: 0x104CEE4
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateBasePointMultiplier();
    // protected Org.BouncyCastle.Security.SecureRandom InitSecureRandom(System.Boolean needed, Org.BouncyCastle.Security.SecureRandom provided)
    // Offset: 0x104CF40
    Org::BouncyCastle::Security::SecureRandom* InitSecureRandom(bool needed, Org::BouncyCastle::Security::SecureRandom* provided);
    // static private System.Void .cctor()
    // Offset: 0x104CFC0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x104C68C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ECDsaSigner* New_ctor();
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x104C720
    // Implemented from: Org.BouncyCastle.Crypto.IDsa
    // Base method: System.Void IDsa::Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public Org.BouncyCastle.Math.BigInteger get_Order()
    // Offset: 0x104C95C
    // Implemented from: Org.BouncyCastle.Crypto.IDsaExt
    // Base method: Org.BouncyCastle.Math.BigInteger IDsaExt::get_Order()
    Org::BouncyCastle::Math::BigInteger* get_Order();
    // public Org.BouncyCastle.Math.BigInteger[] GenerateSignature(System.Byte[] message)
    // Offset: 0x104C984
    // Implemented from: Org.BouncyCastle.Crypto.IDsa
    // Base method: Org.BouncyCastle.Math.BigInteger[] IDsa::GenerateSignature(System.Byte[] message)
    ::Array<Org::BouncyCastle::Math::BigInteger*>* GenerateSignature(::Array<uint8_t>* message);
  }; // Org.BouncyCastle.Crypto.Signers.ECDsaSigner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::ECDsaSigner*, "Org.BouncyCastle.Crypto.Signers", "ECDsaSigner");
#pragma pack(pop)
