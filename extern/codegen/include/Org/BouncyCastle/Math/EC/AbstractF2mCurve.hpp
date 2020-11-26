// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.ECCurve
#include "Org/BouncyCastle/Math/EC/ECCurve.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Math::Field
namespace Org::BouncyCastle::Math::Field {
  // Forward declaring type: IFiniteField
  class IFiniteField;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Security
namespace Org::BouncyCastle::Security {
  // Forward declaring type: SecureRandom
  class SecureRandom;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC
namespace Org::BouncyCastle::Math::EC {
  // Autogenerated type: Org.BouncyCastle.Math.EC.AbstractF2mCurve
  class AbstractF2mCurve : public Org::BouncyCastle::Math::EC::ECCurve {
    public:
    // private Org.BouncyCastle.Math.BigInteger[] si
    // Offset: 0x50
    ::Array<Org::BouncyCastle::Math::BigInteger*>* si;
    // Creating conversion operator: operator ::Array<Org::BouncyCastle::Math::BigInteger*>*
    constexpr operator ::Array<Org::BouncyCastle::Math::BigInteger*>*() const noexcept {
      return si;
    }
    // static private Org.BouncyCastle.Math.Field.IFiniteField BuildField(System.Int32 m, System.Int32 k1, System.Int32 k2, System.Int32 k3)
    // Offset: 0x176C020
    static Org::BouncyCastle::Math::Field::IFiniteField* BuildField(int m, int k1, int k2, int k3);
    // protected System.Void .ctor(System.Int32 m, System.Int32 k1, System.Int32 k2, System.Int32 k3)
    // Offset: 0x176C1EC
    static AbstractF2mCurve* New_ctor(int m, int k1, int k2, int k3);
    // Org.BouncyCastle.Math.EC.ECFieldElement SolveQuadraticEquation(Org.BouncyCastle.Math.EC.ECFieldElement beta)
    // Offset: 0x176C6E0
    Org::BouncyCastle::Math::EC::ECFieldElement* SolveQuadraticEquation(Org::BouncyCastle::Math::EC::ECFieldElement* beta);
    // Org.BouncyCastle.Math.BigInteger[] GetSi()
    // Offset: 0x176C9D0
    ::Array<Org::BouncyCastle::Math::BigInteger*>* GetSi();
    // public System.Boolean get_IsKoblitz()
    // Offset: 0x176CAB8
    bool get_IsKoblitz();
    // static private Org.BouncyCastle.Math.BigInteger ImplRandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r, System.Int32 m)
    // Offset: 0x176C474
    static Org::BouncyCastle::Math::BigInteger* ImplRandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r, int m);
    // public override Org.BouncyCastle.Math.EC.ECPoint CreatePoint(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger y, System.Boolean withCompression)
    // Offset: 0x176C254
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreatePoint(Org.BouncyCastle.Math.BigInteger x, Org.BouncyCastle.Math.BigInteger y, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreatePoint(Org::BouncyCastle::Math::BigInteger* x, Org::BouncyCastle::Math::BigInteger* y, bool withCompression);
    // public override Org.BouncyCastle.Math.EC.ECFieldElement RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    // Offset: 0x176C3DC
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECCurve::RandomFieldElementMult(Org.BouncyCastle.Security.SecureRandom r)
    Org::BouncyCastle::Math::EC::ECFieldElement* RandomFieldElementMult(Org::BouncyCastle::Security::SecureRandom* r);
    // protected override Org.BouncyCastle.Math.EC.ECPoint DecompressPoint(System.Int32 yTilde, Org.BouncyCastle.Math.BigInteger X1)
    // Offset: 0x176C4B8
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::DecompressPoint(System.Int32 yTilde, Org.BouncyCastle.Math.BigInteger X1)
    Org::BouncyCastle::Math::EC::ECPoint* DecompressPoint(int yTilde, Org::BouncyCastle::Math::BigInteger* X1);
  }; // Org.BouncyCastle.Math.EC.AbstractF2mCurve
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::AbstractF2mCurve*, "Org.BouncyCastle.Math.EC", "AbstractF2mCurve");
#pragma pack(pop)
