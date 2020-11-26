// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Math.EC.AbstractF2mCurve
#include "Org/BouncyCastle/Math/EC/AbstractF2mCurve.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Custom::Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Forward declaring type: SecT409K1Point
  class SecT409K1Point;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECFieldElement
  class ECFieldElement;
  // Skipping declaration: ECCurve because it is already included!
  // Forward declaring type: ECPoint
  class ECPoint;
  // Forward declaring type: ECLookupTable
  class ECLookupTable;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC::Multiplier
namespace Org::BouncyCastle::Math::EC::Multiplier {
  // Forward declaring type: ECMultiplier
  class ECMultiplier;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Math.EC.Custom.Sec
namespace Org::BouncyCastle::Math::EC::Custom::Sec {
  // Autogenerated type: Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve
  class SecT409K1Curve : public Org::BouncyCastle::Math::EC::AbstractF2mCurve {
    public:
    // Nested type: Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve::SecT409K1LookupTable
    class SecT409K1LookupTable;
    // protected readonly Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Point m_infinity
    // Offset: 0x58
    Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Point* m_infinity;
    // Deleting conversion operator: operator ::Array<Org::BouncyCastle::Math::BigInteger*>*
    constexpr operator ::Array<Org::BouncyCastle::Math::BigInteger*>*() const noexcept = delete;
    // Get static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECT409K1_AFFINE_ZS
    static ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* _get_SECT409K1_AFFINE_ZS();
    // Set static field: static private readonly Org.BouncyCastle.Math.EC.ECFieldElement[] SECT409K1_AFFINE_ZS
    static void _set_SECT409K1_AFFINE_ZS(::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1852D7C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1852694
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SecT409K1Curve* New_ctor();
    // protected override Org.BouncyCastle.Math.EC.ECCurve CloneCurve()
    // Offset: 0x1852844
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECCurve ECCurve::CloneCurve()
    Org::BouncyCastle::Math::EC::ECCurve* CloneCurve();
    // public override System.Boolean SupportsCoordinateSystem(System.Int32 coord)
    // Offset: 0x185289C
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Boolean ECCurve::SupportsCoordinateSystem(System.Int32 coord)
    bool SupportsCoordinateSystem(int coord);
    // protected override Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier CreateDefaultMultiplier()
    // Offset: 0x18528A8
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.Multiplier.ECMultiplier ECCurve::CreateDefaultMultiplier()
    Org::BouncyCastle::Math::EC::Multiplier::ECMultiplier* CreateDefaultMultiplier();
    // public override Org.BouncyCastle.Math.EC.ECPoint get_Infinity()
    // Offset: 0x1852904
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::get_Infinity()
    Org::BouncyCastle::Math::EC::ECPoint* get_Infinity();
    // public override System.Int32 get_FieldSize()
    // Offset: 0x185290C
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: System.Int32 ECCurve::get_FieldSize()
    int get_FieldSize();
    // public override Org.BouncyCastle.Math.EC.ECFieldElement FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    // Offset: 0x1852914
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECFieldElement ECCurve::FromBigInteger(Org.BouncyCastle.Math.BigInteger x)
    Org::BouncyCastle::Math::EC::ECFieldElement* FromBigInteger(Org::BouncyCastle::Math::BigInteger* x);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    // Offset: 0x1852974
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, bool withCompression);
    // protected internal override Org.BouncyCastle.Math.EC.ECPoint CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    // Offset: 0x1852ACC
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECPoint ECCurve::CreateRawPoint(Org.BouncyCastle.Math.EC.ECFieldElement x, Org.BouncyCastle.Math.EC.ECFieldElement y, Org.BouncyCastle.Math.EC.ECFieldElement[] zs, System.Boolean withCompression)
    Org::BouncyCastle::Math::EC::ECPoint* CreateRawPoint(Org::BouncyCastle::Math::EC::ECFieldElement* x, Org::BouncyCastle::Math::EC::ECFieldElement* y, ::Array<Org::BouncyCastle::Math::EC::ECFieldElement*>* zs, bool withCompression);
    // public override System.Boolean get_IsKoblitz()
    // Offset: 0x1852B6C
    // Implemented from: Org.BouncyCastle.Math.EC.AbstractF2mCurve
    // Base method: System.Boolean AbstractF2mCurve::get_IsKoblitz()
    bool get_IsKoblitz();
    // public override Org.BouncyCastle.Math.EC.ECLookupTable CreateCacheSafeLookupTable(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    // Offset: 0x1852B74
    // Implemented from: Org.BouncyCastle.Math.EC.ECCurve
    // Base method: Org.BouncyCastle.Math.EC.ECLookupTable ECCurve::CreateCacheSafeLookupTable(Org.BouncyCastle.Math.EC.ECPoint[] points, System.Int32 off, System.Int32 len)
    Org::BouncyCastle::Math::EC::ECLookupTable* CreateCacheSafeLookupTable(::Array<Org::BouncyCastle::Math::EC::ECPoint*>* points, int off, int len);
  }; // Org.BouncyCastle.Math.EC.Custom.Sec.SecT409K1Curve
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Math::EC::Custom::Sec::SecT409K1Curve*, "Org.BouncyCastle.Math.EC.Custom.Sec", "SecT409K1Curve");
#pragma pack(pop)
