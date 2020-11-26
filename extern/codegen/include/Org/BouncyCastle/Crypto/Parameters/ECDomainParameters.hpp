// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
  // Forward declaring type: ECPoint
  class ECPoint;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Autogenerated type: Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
  class ECDomainParameters : public ::Il2CppObject {
    public:
    // private readonly Org.BouncyCastle.Math.EC.ECCurve curve
    // Offset: 0x10
    Org::BouncyCastle::Math::EC::ECCurve* curve;
    // private readonly System.Byte[] seed
    // Offset: 0x18
    ::Array<uint8_t>* seed;
    // private readonly Org.BouncyCastle.Math.EC.ECPoint g
    // Offset: 0x20
    Org::BouncyCastle::Math::EC::ECPoint* g;
    // private readonly Org.BouncyCastle.Math.BigInteger n
    // Offset: 0x28
    Org::BouncyCastle::Math::BigInteger* n;
    // private readonly Org.BouncyCastle.Math.BigInteger h
    // Offset: 0x30
    Org::BouncyCastle::Math::BigInteger* h;
    // private Org.BouncyCastle.Math.BigInteger hInv
    // Offset: 0x38
    Org::BouncyCastle::Math::BigInteger* hInv;
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X9.X9ECParameters x9)
    // Offset: 0x10457F0
    static ECDomainParameters* New_ctor(Org::BouncyCastle::Asn1::X9::X9ECParameters* x9);
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECPoint g, Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger h)
    // Offset: 0x10459C0
    static ECDomainParameters* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECPoint* g, Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* h);
    // public System.Void .ctor(Org.BouncyCastle.Math.EC.ECCurve curve, Org.BouncyCastle.Math.EC.ECPoint g, Org.BouncyCastle.Math.BigInteger n, Org.BouncyCastle.Math.BigInteger h, System.Byte[] seed)
    // Offset: 0x1045844
    static ECDomainParameters* New_ctor(Org::BouncyCastle::Math::EC::ECCurve* curve, Org::BouncyCastle::Math::EC::ECPoint* g, Org::BouncyCastle::Math::BigInteger* n, Org::BouncyCastle::Math::BigInteger* h, ::Array<uint8_t>* seed);
    // public Org.BouncyCastle.Math.EC.ECCurve get_Curve()
    // Offset: 0x1045B04
    Org::BouncyCastle::Math::EC::ECCurve* get_Curve();
    // public Org.BouncyCastle.Math.EC.ECPoint get_G()
    // Offset: 0x1045B0C
    Org::BouncyCastle::Math::EC::ECPoint* get_G();
    // public Org.BouncyCastle.Math.BigInteger get_N()
    // Offset: 0x1045B14
    Org::BouncyCastle::Math::BigInteger* get_N();
    // public Org.BouncyCastle.Math.BigInteger get_H()
    // Offset: 0x1045B1C
    Org::BouncyCastle::Math::BigInteger* get_H();
    // public Org.BouncyCastle.Math.BigInteger get_HInv()
    // Offset: 0x1045B24
    Org::BouncyCastle::Math::BigInteger* get_HInv();
    // public System.Byte[] GetSeed()
    // Offset: 0x1045D24
    ::Array<uint8_t>* GetSeed();
    // protected System.Boolean Equals(Org.BouncyCastle.Crypto.Parameters.ECDomainParameters other)
    // Offset: 0x1045E48
    bool Equals(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters* other);
    // public Org.BouncyCastle.Math.BigInteger ValidatePrivateScalar(Org.BouncyCastle.Math.BigInteger d)
    // Offset: 0x1045F54
    Org::BouncyCastle::Math::BigInteger* ValidatePrivateScalar(Org::BouncyCastle::Math::BigInteger* d);
    // static Org.BouncyCastle.Math.EC.ECPoint ValidatePublicPoint(Org.BouncyCastle.Math.EC.ECCurve c, Org.BouncyCastle.Math.EC.ECPoint q)
    // Offset: 0x10459C8
    static Org::BouncyCastle::Math::EC::ECPoint* ValidatePublicPoint(Org::BouncyCastle::Math::EC::ECCurve* c, Org::BouncyCastle::Math::EC::ECPoint* q);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1045D90
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x1045ED4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.Crypto.Parameters.ECDomainParameters
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Parameters::ECDomainParameters*, "Org.BouncyCastle.Crypto.Parameters", "ECDomainParameters");
#pragma pack(pop)
