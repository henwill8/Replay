// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Forward declaring type: X9ECPoint
  class X9ECPoint;
  // Forward declaring type: X9ECParametersHolder
  class X9ECParametersHolder;
  // Forward declaring type: X9ECParameters
  class X9ECParameters;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IDictionary
  class IDictionary;
}
// Forward declaring namespace: Org::BouncyCastle::Math::EC
namespace Org::BouncyCastle::Math::EC {
  // Forward declaring type: ECCurve
  class ECCurve;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X962NamedCurves
  class X962NamedCurves : public ::Il2CppObject {
    public:
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::Prime192v1Holder
    class Prime192v1Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::Prime192v2Holder
    class Prime192v2Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::Prime192v3Holder
    class Prime192v3Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::Prime239v1Holder
    class Prime239v1Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::Prime239v2Holder
    class Prime239v2Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::Prime239v3Holder
    class Prime239v3Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::Prime256v1Holder
    class Prime256v1Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2pnb163v1Holder
    class C2pnb163v1Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2pnb163v2Holder
    class C2pnb163v2Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2pnb163v3Holder
    class C2pnb163v3Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2pnb176w1Holder
    class C2pnb176w1Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2tnb191v1Holder
    class C2tnb191v1Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2tnb191v2Holder
    class C2tnb191v2Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2tnb191v3Holder
    class C2tnb191v3Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2pnb208w1Holder
    class C2pnb208w1Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2tnb239v1Holder
    class C2tnb239v1Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2tnb239v2Holder
    class C2tnb239v2Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2tnb239v3Holder
    class C2tnb239v3Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2pnb272w1Holder
    class C2pnb272w1Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2pnb304w1Holder
    class C2pnb304w1Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2tnb359v1Holder
    class C2tnb359v1Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2pnb368w1Holder
    class C2pnb368w1Holder;
    // Nested type: Org::BouncyCastle::Asn1::X9::X962NamedCurves::C2tnb431r1Holder
    class C2tnb431r1Holder;
    // Get static field: static private readonly System.Collections.IDictionary objIds
    static System::Collections::IDictionary* _get_objIds();
    // Set static field: static private readonly System.Collections.IDictionary objIds
    static void _set_objIds(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary curves
    static System::Collections::IDictionary* _get_curves();
    // Set static field: static private readonly System.Collections.IDictionary curves
    static void _set_curves(System::Collections::IDictionary* value);
    // Get static field: static private readonly System.Collections.IDictionary names
    static System::Collections::IDictionary* _get_names();
    // Set static field: static private readonly System.Collections.IDictionary names
    static void _set_names(System::Collections::IDictionary* value);
    // static private Org.BouncyCastle.Asn1.X9.X9ECPoint ConfigureBasepoint(Org.BouncyCastle.Math.EC.ECCurve curve, System.String encoding)
    // Offset: 0x1585924
    static Org::BouncyCastle::Asn1::X9::X9ECPoint* ConfigureBasepoint(Org::BouncyCastle::Math::EC::ECCurve* curve, ::Il2CppString* encoding);
    // static private Org.BouncyCastle.Math.EC.ECCurve ConfigureCurve(Org.BouncyCastle.Math.EC.ECCurve curve)
    // Offset: 0x1585B64
    static Org::BouncyCastle::Math::EC::ECCurve* ConfigureCurve(Org::BouncyCastle::Math::EC::ECCurve* curve);
    // static private Org.BouncyCastle.Math.BigInteger FromHex(System.String hex)
    // Offset: 0x1585B68
    static Org::BouncyCastle::Math::BigInteger* FromHex(::Il2CppString* hex);
    // static private System.Void DefineCurve(System.String name, Org.BouncyCastle.Asn1.DerObjectIdentifier oid, Org.BouncyCastle.Asn1.X9.X9ECParametersHolder holder)
    // Offset: 0x1585C04
    static void DefineCurve(::Il2CppString* name, Org::BouncyCastle::Asn1::DerObjectIdentifier* oid, Org::BouncyCastle::Asn1::X9::X9ECParametersHolder* holder);
    // static private System.Void .cctor()
    // Offset: 0x1585E34
    static void _cctor();
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByName(System.String name)
    // Offset: 0x1585604
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByName(::Il2CppString* name);
    // static public Org.BouncyCastle.Asn1.X9.X9ECParameters GetByOid(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x15857FC
    static Org::BouncyCastle::Asn1::X9::X9ECParameters* GetByOid(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // static public Org.BouncyCastle.Asn1.DerObjectIdentifier GetOid(System.String name)
    // Offset: 0x15865F4
    static Org::BouncyCastle::Asn1::DerObjectIdentifier* GetOid(::Il2CppString* name);
  }; // Org.BouncyCastle.Asn1.X9.X962NamedCurves
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X962NamedCurves*, "Org.BouncyCastle.Asn1.X9", "X962NamedCurves");
#pragma pack(pop)