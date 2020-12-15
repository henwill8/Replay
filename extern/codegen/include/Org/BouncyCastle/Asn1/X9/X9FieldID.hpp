// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: Asn1Object
  class Asn1Object;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
}
// Forward declaring namespace: Org::BouncyCastle::Math
namespace Org::BouncyCastle::Math {
  // Forward declaring type: BigInteger
  class BigInteger;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X9
namespace Org::BouncyCastle::Asn1::X9 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X9.X9FieldID
  class X9FieldID : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.DerObjectIdentifier id
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerObjectIdentifier* id;
    // private readonly Org.BouncyCastle.Asn1.Asn1Object parameters
    // Offset: 0x18
    Org::BouncyCastle::Asn1::Asn1Object* parameters;
    // public System.Void .ctor(Org.BouncyCastle.Math.BigInteger primeP)
    // Offset: 0x158ADE4
    static X9FieldID* New_ctor(Org::BouncyCastle::Math::BigInteger* primeP);
    // public System.Void .ctor(System.Int32 m, System.Int32 k1)
    // Offset: 0x158AEA0
    static X9FieldID* New_ctor(int m, int k1);
    // public System.Void .ctor(System.Int32 m, System.Int32 k1, System.Int32 k2, System.Int32 k3)
    // Offset: 0x158AEAC
    static X9FieldID* New_ctor(int m, int k1, int k2, int k3);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x158B8B4
    static X9FieldID* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // static public Org.BouncyCastle.Asn1.X9.X9FieldID GetInstance(System.Object obj)
    // Offset: 0x158ACFC
    static Org::BouncyCastle::Asn1::X9::X9FieldID* GetInstance(::Il2CppObject* obj);
    // public Org.BouncyCastle.Asn1.DerObjectIdentifier get_Identifier()
    // Offset: 0x158B99C
    Org::BouncyCastle::Asn1::DerObjectIdentifier* get_Identifier();
    // public Org.BouncyCastle.Asn1.Asn1Object get_Parameters()
    // Offset: 0x158B9A4
    Org::BouncyCastle::Asn1::Asn1Object* get_Parameters();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x158B9AC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X9.X9FieldID
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X9::X9FieldID*, "Org.BouncyCastle.Asn1.X9", "X9FieldID");
#pragma pack(pop)