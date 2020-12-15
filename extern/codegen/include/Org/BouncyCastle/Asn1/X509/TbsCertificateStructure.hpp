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
  // Forward declaring type: Asn1Sequence
  class Asn1Sequence;
  // Forward declaring type: DerInteger
  class DerInteger;
  // Forward declaring type: DerBitString
  class DerBitString;
  // Forward declaring type: Asn1Object
  class Asn1Object;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AlgorithmIdentifier
  class AlgorithmIdentifier;
  // Forward declaring type: X509Name
  class X509Name;
  // Forward declaring type: Time
  class Time;
  // Forward declaring type: SubjectPublicKeyInfo
  class SubjectPublicKeyInfo;
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.TbsCertificateStructure
  class TbsCertificateStructure : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // Org.BouncyCastle.Asn1.Asn1Sequence seq
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Sequence* seq;
    // Org.BouncyCastle.Asn1.DerInteger version
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* version;
    // Org.BouncyCastle.Asn1.DerInteger serialNumber
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerInteger* serialNumber;
    // Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier signature
    // Offset: 0x28
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;
    // Org.BouncyCastle.Asn1.X509.X509Name issuer
    // Offset: 0x30
    Org::BouncyCastle::Asn1::X509::X509Name* issuer;
    // Org.BouncyCastle.Asn1.X509.Time startDate
    // Offset: 0x38
    Org::BouncyCastle::Asn1::X509::Time* startDate;
    // Org.BouncyCastle.Asn1.X509.Time endDate
    // Offset: 0x40
    Org::BouncyCastle::Asn1::X509::Time* endDate;
    // Org.BouncyCastle.Asn1.X509.X509Name subject
    // Offset: 0x48
    Org::BouncyCastle::Asn1::X509::X509Name* subject;
    // Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo subjectPublicKeyInfo
    // Offset: 0x50
    Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPublicKeyInfo;
    // Org.BouncyCastle.Asn1.DerBitString issuerUniqueID
    // Offset: 0x58
    Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID;
    // Org.BouncyCastle.Asn1.DerBitString subjectUniqueID
    // Offset: 0x60
    Org::BouncyCastle::Asn1::DerBitString* subjectUniqueID;
    // Org.BouncyCastle.Asn1.X509.X509Extensions extensions
    // Offset: 0x68
    Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;
    // static public Org.BouncyCastle.Asn1.X509.TbsCertificateStructure GetInstance(System.Object obj)
    // Offset: 0x157EB50
    static Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* GetInstance(::Il2CppObject* obj);
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x157EBF4
    static TbsCertificateStructure* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq);
    // public System.Int32 get_Version()
    // Offset: 0x157F28C
    int get_Version();
    // public Org.BouncyCastle.Asn1.DerInteger get_SerialNumber()
    // Offset: 0x157F2B4
    Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Issuer()
    // Offset: 0x157F2BC
    Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();
    // public Org.BouncyCastle.Asn1.X509.Time get_StartDate()
    // Offset: 0x157F2C4
    Org::BouncyCastle::Asn1::X509::Time* get_StartDate();
    // public Org.BouncyCastle.Asn1.X509.Time get_EndDate()
    // Offset: 0x157F2CC
    Org::BouncyCastle::Asn1::X509::Time* get_EndDate();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Subject()
    // Offset: 0x157F2D4
    Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();
    // public Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo get_SubjectPublicKeyInfo()
    // Offset: 0x157F2DC
    Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKeyInfo();
    // public Org.BouncyCastle.Asn1.X509.X509Extensions get_Extensions()
    // Offset: 0x157F2E4
    Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x157F2EC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.TbsCertificateStructure
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*, "Org.BouncyCastle.Asn1.X509", "TbsCertificateStructure");
#pragma pack(pop)