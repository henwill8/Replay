// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
#include "Org/BouncyCastle/Crypto/AsymmetricKeyParameter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
  class RsaKeyParameters : public Org::BouncyCastle::Crypto::AsymmetricKeyParameter {
    public:
    // private readonly Org.BouncyCastle.Math.BigInteger modulus
    // Offset: 0x18
    Org::BouncyCastle::Math::BigInteger* modulus;
    // private readonly Org.BouncyCastle.Math.BigInteger exponent
    // Offset: 0x20
    Org::BouncyCastle::Math::BigInteger* exponent;
    // Deleting conversion operator: operator bool
    constexpr operator bool() const noexcept = delete;
    // Get static field: static private readonly Org.BouncyCastle.Math.BigInteger SmallPrimesProduct
    static Org::BouncyCastle::Math::BigInteger* _get_SmallPrimesProduct();
    // Set static field: static private readonly Org.BouncyCastle.Math.BigInteger SmallPrimesProduct
    static void _set_SmallPrimesProduct(Org::BouncyCastle::Math::BigInteger* value);
    // static private Org.BouncyCastle.Math.BigInteger Validate(Org.BouncyCastle.Math.BigInteger modulus)
    // Offset: 0x104901C
    static Org::BouncyCastle::Math::BigInteger* Validate(Org::BouncyCastle::Math::BigInteger* modulus);
    // public System.Void .ctor(System.Boolean isPrivate, Org.BouncyCastle.Math.BigInteger modulus, Org.BouncyCastle.Math.BigInteger exponent)
    // Offset: 0x104924C
    static RsaKeyParameters* New_ctor(bool isPrivate, Org::BouncyCastle::Math::BigInteger* modulus, Org::BouncyCastle::Math::BigInteger* exponent);
    // public Org.BouncyCastle.Math.BigInteger get_Modulus()
    // Offset: 0x10493FC
    Org::BouncyCastle::Math::BigInteger* get_Modulus();
    // public Org.BouncyCastle.Math.BigInteger get_Exponent()
    // Offset: 0x1049404
    Org::BouncyCastle::Math::BigInteger* get_Exponent();
    // static private System.Void .cctor()
    // Offset: 0x104957C
    static void _cctor();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x104940C
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Boolean AsymmetricKeyParameter::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1049500
    // Implemented from: Org.BouncyCastle.Crypto.AsymmetricKeyParameter
    // Base method: System.Int32 AsymmetricKeyParameter::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.RsaKeyParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::RsaKeyParameters*, "Org.BouncyCastle.Crypto.Parameters", "RsaKeyParameters");
#pragma pack(pop)
