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
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo
  class SubjectPublicKeyInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID;
    // private readonly Org.BouncyCastle.Asn1.DerBitString keyData
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerBitString* keyData;
    // static public Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo GetInstance(System.Object obj)
    // Offset: 0x157DE60
    static Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* GetInstance(::Il2CppObject* obj);
    // public System.Void .ctor(Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier algID, System.Byte[] publicKey)
    // Offset: 0x157E084
    static SubjectPublicKeyInfo* New_ctor(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* algID, ::Array<uint8_t>* publicKey);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x157DF04
    static SubjectPublicKeyInfo* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier get_AlgorithmID()
    // Offset: 0x157E11C
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* get_AlgorithmID();
    // public Org.BouncyCastle.Asn1.Asn1Object ParsePublicKey()
    // Offset: 0x157E124
    Org::BouncyCastle::Asn1::Asn1Object* ParsePublicKey();
    // public Org.BouncyCastle.Asn1.DerBitString get_PublicKeyData()
    // Offset: 0x157E150
    Org::BouncyCastle::Asn1::DerBitString* get_PublicKeyData();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x157E158
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*, "Org.BouncyCastle.Asn1.X509", "SubjectPublicKeyInfo");
#pragma pack(pop)