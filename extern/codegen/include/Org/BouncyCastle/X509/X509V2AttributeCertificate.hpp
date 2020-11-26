// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.X509.X509ExtensionBase
#include "Org/BouncyCastle/X509/X509ExtensionBase.hpp"
// Including type: Org.BouncyCastle.X509.IX509AttributeCertificate
#include "Org/BouncyCastle/X509/IX509AttributeCertificate.hpp"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: AttributeCertificate
  class AttributeCertificate;
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Autogenerated type: Org.BouncyCastle.X509.X509V2AttributeCertificate
  class X509V2AttributeCertificate : public Org::BouncyCastle::X509::X509ExtensionBase/*, public Org::BouncyCastle::X509::IX509AttributeCertificate*/ {
    public:
    // private readonly Org.BouncyCastle.Asn1.X509.AttributeCertificate cert
    // Offset: 0x10
    Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert;
    // private readonly System.DateTime notBefore
    // Offset: 0x18
    System::DateTime notBefore;
    // private readonly System.DateTime notAfter
    // Offset: 0x20
    System::DateTime notAfter;
    // Creating interface conversion operator: operator Org::BouncyCastle::X509::IX509AttributeCertificate
    operator Org::BouncyCastle::X509::IX509AttributeCertificate() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::X509::IX509AttributeCertificate*>(this);
    }
    // static private Org.BouncyCastle.Asn1.X509.AttributeCertificate GetObject(System.IO.Stream input)
    // Offset: 0x18C62F8
    static Org::BouncyCastle::Asn1::X509::AttributeCertificate* GetObject(System::IO::Stream* input);
    // public System.Void .ctor(System.IO.Stream encIn)
    // Offset: 0x18C6430
    static X509V2AttributeCertificate* New_ctor(System::IO::Stream* encIn);
    // public System.Void .ctor(System.Byte[] encoded)
    // Offset: 0x18C65F8
    static X509V2AttributeCertificate* New_ctor(::Array<uint8_t>* encoded);
    // System.Void .ctor(Org.BouncyCastle.Asn1.X509.AttributeCertificate cert)
    // Offset: 0x18C645C
    static X509V2AttributeCertificate* New_ctor(Org::BouncyCastle::Asn1::X509::AttributeCertificate* cert);
    // protected override Org.BouncyCastle.Asn1.X509.X509Extensions GetX509Extensions()
    // Offset: 0x18C6678
    // Implemented from: Org.BouncyCastle.X509.X509ExtensionBase
    // Base method: Org.BouncyCastle.Asn1.X509.X509Extensions X509ExtensionBase::GetX509Extensions()
    Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x18C66A0
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x18C6764
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // Org.BouncyCastle.X509.X509V2AttributeCertificate
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509V2AttributeCertificate*, "Org.BouncyCastle.X509", "X509V2AttributeCertificate");
#pragma pack(pop)
