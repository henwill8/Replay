// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.X509.TbsCertificateList/RevokedCertificatesEnumeration
#include "Org/BouncyCastle/Asn1/X509/TbsCertificateList_RevokedCertificatesEnumeration.hpp"
// Including type: System.Collections.IEnumerator
#include "System/Collections/IEnumerator.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Asn1.X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Autogenerated type: Org.BouncyCastle.Asn1.X509.TbsCertificateList/RevokedCertificatesEnumeration/RevokedCertificatesEnumerator
  class TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator : public ::Il2CppObject/*, public System::Collections::IEnumerator*/ {
    public:
    // private readonly System.Collections.IEnumerator e
    // Offset: 0x10
    System::Collections::IEnumerator* e;
    // Creating interface conversion operator: operator System::Collections::IEnumerator
    operator System::Collections::IEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IEnumerator*>(this);
    }
    // Creating conversion operator: operator System::Collections::IEnumerator*
    constexpr operator System::Collections::IEnumerator*() const noexcept {
      return e;
    }
    // System.Void .ctor(System.Collections.IEnumerator e)
    // Offset: 0x157E8D0
    static TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator* New_ctor(System::Collections::IEnumerator* e);
    // public System.Boolean MoveNext()
    // Offset: 0x157E904
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Void Reset()
    // Offset: 0x157E9B4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
    // public System.Object get_Current()
    // Offset: 0x157EA68
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // Org.BouncyCastle.Asn1.X509.TbsCertificateList/RevokedCertificatesEnumeration/RevokedCertificatesEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::X509::TbsCertificateList::RevokedCertificatesEnumeration::RevokedCertificatesEnumerator*, "Org.BouncyCastle.Asn1.X509", "TbsCertificateList/RevokedCertificatesEnumeration/RevokedCertificatesEnumerator");
#pragma pack(pop)
