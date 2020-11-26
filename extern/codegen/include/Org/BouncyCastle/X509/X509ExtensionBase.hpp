// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1::X509
namespace Org::BouncyCastle::Asn1::X509 {
  // Forward declaring type: X509Extensions
  class X509Extensions;
}
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: Asn1OctetString
  class Asn1OctetString;
  // Forward declaring type: DerObjectIdentifier
  class DerObjectIdentifier;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.X509
namespace Org::BouncyCastle::X509 {
  // Autogenerated type: Org.BouncyCastle.X509.X509ExtensionBase
  class X509ExtensionBase : public ::Il2CppObject {
    public:
    // protected Org.BouncyCastle.Asn1.X509.X509Extensions GetX509Extensions()
    // Offset: 0xFFFFFFFF
    Org::BouncyCastle::Asn1::X509::X509Extensions* GetX509Extensions();
    // public Org.BouncyCastle.Asn1.Asn1OctetString GetExtensionValue(Org.BouncyCastle.Asn1.DerObjectIdentifier oid)
    // Offset: 0x18C5F18
    Org::BouncyCastle::Asn1::Asn1OctetString* GetExtensionValue(Org::BouncyCastle::Asn1::DerObjectIdentifier* oid);
    // protected System.Void .ctor()
    // Offset: 0x18C15F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static X509ExtensionBase* New_ctor();
  }; // Org.BouncyCastle.X509.X509ExtensionBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::X509::X509ExtensionBase*, "Org.BouncyCastle.X509", "X509ExtensionBase");
#pragma pack(pop)
