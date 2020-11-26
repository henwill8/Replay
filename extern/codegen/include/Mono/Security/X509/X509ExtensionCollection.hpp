// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.CollectionBase
#include "System/Collections/CollectionBase.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security
namespace Mono::Security {
  // Forward declaring type: ASN1
  class ASN1;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Extension
  class X509Extension;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Mono.Security.X509
namespace Mono::Security::X509 {
  // Autogenerated type: Mono.Security.X509.X509ExtensionCollection
  class X509ExtensionCollection : public System::Collections::CollectionBase {
    public:
    // private System.Boolean readOnly
    // Offset: 0x18
    bool readOnly;
    // Deleting conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept = delete;
    // public System.Void .ctor(Mono.Security.ASN1 asn1)
    // Offset: 0x19C2250
    static X509ExtensionCollection* New_ctor(Mono::Security::ASN1* asn1);
    // public System.Int32 IndexOf(System.String oid)
    // Offset: 0x19C5B20
    int IndexOf(::Il2CppString* oid);
    // public Mono.Security.X509.X509Extension get_Item(System.String oid)
    // Offset: 0x19C5C98
    Mono::Security::X509::X509Extension* get_Item(::Il2CppString* oid);
    // public System.Void .ctor()
    // Offset: 0x19C5B18
    // Implemented from: System.Collections.CollectionBase
    // Base method: System.Void CollectionBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static X509ExtensionCollection* New_ctor();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x19C5C6C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // Mono.Security.X509.X509ExtensionCollection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509ExtensionCollection*, "Mono.Security.X509", "X509ExtensionCollection");
#pragma pack(pop)
