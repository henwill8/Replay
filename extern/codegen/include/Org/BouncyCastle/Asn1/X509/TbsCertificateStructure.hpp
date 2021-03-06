// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.Asn1Encodable
#include "Org/BouncyCastle/Asn1/Asn1Encodable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.TbsCertificateStructure
  // [] Offset: FFFFFFFF
  class TbsCertificateStructure : public Org::BouncyCastle::Asn1::Asn1Encodable {
    public:
    // Org.BouncyCastle.Asn1.Asn1Sequence seq
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Asn1::Asn1Sequence* seq;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::Asn1Sequence*) == 0x8);
    // Org.BouncyCastle.Asn1.DerInteger version
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Asn1::DerInteger* version;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Org.BouncyCastle.Asn1.DerInteger serialNumber
    // Size: 0x8
    // Offset: 0x20
    Org::BouncyCastle::Asn1::DerInteger* serialNumber;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerInteger*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.AlgorithmIdentifier signature
    // Size: 0x8
    // Offset: 0x28
    Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.X509Name issuer
    // Size: 0x8
    // Offset: 0x30
    Org::BouncyCastle::Asn1::X509::X509Name* issuer;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::X509Name*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.Time startDate
    // Size: 0x8
    // Offset: 0x38
    Org::BouncyCastle::Asn1::X509::Time* startDate;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::Time*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.Time endDate
    // Size: 0x8
    // Offset: 0x40
    Org::BouncyCastle::Asn1::X509::Time* endDate;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::Time*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.X509Name subject
    // Size: 0x8
    // Offset: 0x48
    Org::BouncyCastle::Asn1::X509::X509Name* subject;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::X509Name*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo subjectPublicKeyInfo
    // Size: 0x8
    // Offset: 0x50
    Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPublicKeyInfo;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo*) == 0x8);
    // Org.BouncyCastle.Asn1.DerBitString issuerUniqueID
    // Size: 0x8
    // Offset: 0x58
    Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // Org.BouncyCastle.Asn1.DerBitString subjectUniqueID
    // Size: 0x8
    // Offset: 0x60
    Org::BouncyCastle::Asn1::DerBitString* subjectUniqueID;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::DerBitString*) == 0x8);
    // Org.BouncyCastle.Asn1.X509.X509Extensions extensions
    // Size: 0x8
    // Offset: 0x68
    Org::BouncyCastle::Asn1::X509::X509Extensions* extensions;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Asn1::X509::X509Extensions*) == 0x8);
    // Creating value type constructor for type: TbsCertificateStructure
    TbsCertificateStructure(Org::BouncyCastle::Asn1::Asn1Sequence* seq_ = {}, Org::BouncyCastle::Asn1::DerInteger* version_ = {}, Org::BouncyCastle::Asn1::DerInteger* serialNumber_ = {}, Org::BouncyCastle::Asn1::X509::AlgorithmIdentifier* signature_ = {}, Org::BouncyCastle::Asn1::X509::X509Name* issuer_ = {}, Org::BouncyCastle::Asn1::X509::Time* startDate_ = {}, Org::BouncyCastle::Asn1::X509::Time* endDate_ = {}, Org::BouncyCastle::Asn1::X509::X509Name* subject_ = {}, Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* subjectPublicKeyInfo_ = {}, Org::BouncyCastle::Asn1::DerBitString* issuerUniqueID_ = {}, Org::BouncyCastle::Asn1::DerBitString* subjectUniqueID_ = {}, Org::BouncyCastle::Asn1::X509::X509Extensions* extensions_ = {}) noexcept : seq{seq_}, version{version_}, serialNumber{serialNumber_}, signature{signature_}, issuer{issuer_}, startDate{startDate_}, endDate{endDate_}, subject{subject_}, subjectPublicKeyInfo{subjectPublicKeyInfo_}, issuerUniqueID{issuerUniqueID_}, subjectUniqueID{subjectUniqueID_}, extensions{extensions_} {}
    // static public Org.BouncyCastle.Asn1.X509.TbsCertificateStructure GetInstance(System.Object obj)
    // Offset: 0x18FF6D4
    static Org::BouncyCastle::Asn1::X509::TbsCertificateStructure* GetInstance(::Il2CppObject* obj);
    // System.Void .ctor(Org.BouncyCastle.Asn1.Asn1Sequence seq)
    // Offset: 0x18FF778
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TbsCertificateStructure* New_ctor(Org::BouncyCastle::Asn1::Asn1Sequence* seq) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Asn1::X509::TbsCertificateStructure::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TbsCertificateStructure*, creationType>(seq)));
    }
    // public System.Int32 get_Version()
    // Offset: 0x18FFE10
    int get_Version();
    // public Org.BouncyCastle.Asn1.DerInteger get_SerialNumber()
    // Offset: 0x18FFE38
    Org::BouncyCastle::Asn1::DerInteger* get_SerialNumber();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Issuer()
    // Offset: 0x18FFE40
    Org::BouncyCastle::Asn1::X509::X509Name* get_Issuer();
    // public Org.BouncyCastle.Asn1.X509.Time get_StartDate()
    // Offset: 0x18FFE48
    Org::BouncyCastle::Asn1::X509::Time* get_StartDate();
    // public Org.BouncyCastle.Asn1.X509.Time get_EndDate()
    // Offset: 0x18FFE50
    Org::BouncyCastle::Asn1::X509::Time* get_EndDate();
    // public Org.BouncyCastle.Asn1.X509.X509Name get_Subject()
    // Offset: 0x18FFE58
    Org::BouncyCastle::Asn1::X509::X509Name* get_Subject();
    // public Org.BouncyCastle.Asn1.X509.SubjectPublicKeyInfo get_SubjectPublicKeyInfo()
    // Offset: 0x18FFE60
    Org::BouncyCastle::Asn1::X509::SubjectPublicKeyInfo* get_SubjectPublicKeyInfo();
    // public Org.BouncyCastle.Asn1.X509.X509Extensions get_Extensions()
    // Offset: 0x18FFE68
    Org::BouncyCastle::Asn1::X509::X509Extensions* get_Extensions();
    // public override Org.BouncyCastle.Asn1.Asn1Object ToAsn1Object()
    // Offset: 0x18FFE70
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Encodable
    // Base method: Org.BouncyCastle.Asn1.Asn1Object Asn1Encodable::ToAsn1Object()
    Org::BouncyCastle::Asn1::Asn1Object* ToAsn1Object();
  }; // Org.BouncyCastle.Asn1.X509.TbsCertificateStructure
  #pragma pack(pop)
  static check_size<sizeof(TbsCertificateStructure), 104 + sizeof(Org::BouncyCastle::Asn1::X509::X509Extensions*)> __Org_BouncyCastle_Asn1_X509_TbsCertificateStructureSizeCheck;
  static_assert(sizeof(TbsCertificateStructure) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::TbsCertificateStructure*, "Org.BouncyCastle.Asn1.X509", "TbsCertificateStructure");
