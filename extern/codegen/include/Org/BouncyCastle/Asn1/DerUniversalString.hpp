// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Asn1.DerStringBase
#include "Org/BouncyCastle/Asn1/DerStringBase.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Asn1
namespace Org::BouncyCastle::Asn1 {
  // Forward declaring type: DerOutputStream
  class DerOutputStream;
  // Skipping declaration: Asn1Object because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Asn1
namespace Org::BouncyCastle::Asn1 {
  // Autogenerated type: Org.BouncyCastle.Asn1.DerUniversalString
  class DerUniversalString : public Org::BouncyCastle::Asn1::DerStringBase {
    public:
    // private readonly System.Byte[] str
    // Offset: 0x10
    ::Array<uint8_t>* str;
    // Creating conversion operator: operator ::Array<uint8_t>*
    constexpr operator ::Array<uint8_t>*() const noexcept {
      return str;
    }
    // Get static field: static private readonly System.Char[] table
    static ::Array<::Il2CppChar>* _get_table();
    // Set static field: static private readonly System.Char[] table
    static void _set_table(::Array<::Il2CppChar>* value);
    // public System.Void .ctor(System.Byte[] str)
    // Offset: 0x137469C
    static DerUniversalString* New_ctor(::Array<uint8_t>* str);
    // static private System.Void .cctor()
    // Offset: 0x13857E8
    static void _cctor();
    // public override System.String GetString()
    // Offset: 0x1385580
    // Implemented from: Org.BouncyCastle.Asn1.DerStringBase
    // Base method: System.String DerStringBase::GetString()
    ::Il2CppString* GetString();
    // override System.Void Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    // Offset: 0x13856EC
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Void Asn1Object::Encode(Org.BouncyCastle.Asn1.DerOutputStream derOut)
    void Encode(Org::BouncyCastle::Asn1::DerOutputStream* derOut);
    // protected override System.Boolean Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    // Offset: 0x1385710
    // Implemented from: Org.BouncyCastle.Asn1.Asn1Object
    // Base method: System.Boolean Asn1Object::Asn1Equals(Org.BouncyCastle.Asn1.Asn1Object asn1Object)
    bool Asn1Equals(Org::BouncyCastle::Asn1::Asn1Object* asn1Object);
  }; // Org.BouncyCastle.Asn1.DerUniversalString
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Asn1::DerUniversalString*, "Org.BouncyCastle.Asn1", "DerUniversalString");
#pragma pack(pop)
