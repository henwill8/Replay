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
  // Forward declaring type: DerEnumerated
  class DerEnumerated;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1TaggedObject
  class Asn1TaggedObject;
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.ObjectDigestInfo
  class ObjectDigestInfo : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // readonly Org.BouncyCastle.Asn1.DerEnumerated digestedObjectType
    // Offset: 0x10
    Org::BouncyCastle::Asn1::DerEnumerated* digestedObjectType;
    // readonly Org.BouncyCastle.Asn1.DerObjectIdentifier otherObjectTypeID
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerObjectIdentifier* otherObjectTypeID;
    // readonly Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier digestAlgorithm
    // Offset: 0x20
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* digestAlgorithm;
    // readonly Org.BouncyCastle.Asn1.DerBitString objectDigest
    // Offset: 0x28
    Org::BouncyCastle::Asn1::DerBitString* objectDigest;
    // static public Org.BouncyCastle.Asn1.X509.ObjectDigestInfo GetInstance(System.Object obj)
    // Offset: 0x157D44C
    static Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* GetInstance(::Il2CppObject* obj);
    // static public Org.BouncyCastle.Asn1.X509.ObjectDigestInfo GetInstance(Org.BouncyCastle.Asn1.Asn1TaggedObject obj, System.Boolean isExplicit)
    // Offset: 0x157C3E0
    static Org::BouncyCastle::Asn1::X509::ObjectDigestInfo* GetInstance(Org::BouncyCastle::Asn1::Asn1TaggedObject* obj, bool isExplicit);
    // private System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x157D5CC
    static ObjectDigestInfo* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x157D838
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.ObjectDigestInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::ObjectDigestInfo*, "Org.BouncyCastle.Asn1.X509", "ObjectDigestInfo");
#pragma pack(pop)
