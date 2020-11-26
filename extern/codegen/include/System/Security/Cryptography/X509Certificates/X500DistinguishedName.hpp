// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.AsnEncodedData
#include "System/Security/Cryptography/AsnEncodedData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X500DistinguishedNameFlags
  struct X500DistinguishedNameFlags;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X500DistinguishedName
  class X500DistinguishedName : public System::Security::Cryptography::AsnEncodedData {
    public:
    // private System.String name
    // Offset: 0x20
    ::Il2CppString* name;
    // private System.Byte[] canonEncoding
    // Offset: 0x28
    ::Array<uint8_t>* canonEncoding;
    // public System.Void .ctor(System.Byte[] encodedDistinguishedName)
    // Offset: 0x145D39C
    static X500DistinguishedName* New_ctor(::Array<uint8_t>* encodedDistinguishedName);
    // public System.String Decode(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags flag)
    // Offset: 0x145D58C
    ::Il2CppString* Decode(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);
    // static private System.String GetSeparator(System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags flag)
    // Offset: 0x145D6C8
    static ::Il2CppString* GetSeparator(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags flag);
    // private System.Void DecodeRawData()
    // Offset: 0x145D4A8
    void DecodeRawData();
    // static private System.String Canonize(System.String s)
    // Offset: 0x145D7AC
    static ::Il2CppString* Canonize(::Il2CppString* s);
    // static System.Boolean AreEqual(System.Security.Cryptography.X509Certificates.X500DistinguishedName name1, System.Security.Cryptography.X509Certificates.X500DistinguishedName name2)
    // Offset: 0x145DA30
    static bool AreEqual(System::Security::Cryptography::X509Certificates::X500DistinguishedName* name1, System::Security::Cryptography::X509Certificates::X500DistinguishedName* name2);
    // public override System.String Format(System.Boolean multiLine)
    // Offset: 0x145D73C
    // Implemented from: System.Security.Cryptography.AsnEncodedData
    // Base method: System.String AsnEncodedData::Format(System.Boolean multiLine)
    ::Il2CppString* Format(bool multiLine);
  }; // System.Security.Cryptography.X509Certificates.X500DistinguishedName
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X500DistinguishedName*, "System.Security.Cryptography.X509Certificates", "X500DistinguishedName");
#pragma pack(pop)
