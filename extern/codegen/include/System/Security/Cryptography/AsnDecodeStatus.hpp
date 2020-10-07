// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.AsnDecodeStatus
  struct AsnDecodeStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: AsnDecodeStatus
    constexpr AsnDecodeStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Cryptography.AsnDecodeStatus NotDecoded
    static constexpr const int NotDecoded = -1;
    // Get static field: static public System.Security.Cryptography.AsnDecodeStatus NotDecoded
    static System::Security::Cryptography::AsnDecodeStatus _get_NotDecoded();
    // Set static field: static public System.Security.Cryptography.AsnDecodeStatus NotDecoded
    static void _set_NotDecoded(System::Security::Cryptography::AsnDecodeStatus value);
    // static field const value: static public System.Security.Cryptography.AsnDecodeStatus Ok
    static constexpr const int Ok = 0;
    // Get static field: static public System.Security.Cryptography.AsnDecodeStatus Ok
    static System::Security::Cryptography::AsnDecodeStatus _get_Ok();
    // Set static field: static public System.Security.Cryptography.AsnDecodeStatus Ok
    static void _set_Ok(System::Security::Cryptography::AsnDecodeStatus value);
    // static field const value: static public System.Security.Cryptography.AsnDecodeStatus BadAsn
    static constexpr const int BadAsn = 1;
    // Get static field: static public System.Security.Cryptography.AsnDecodeStatus BadAsn
    static System::Security::Cryptography::AsnDecodeStatus _get_BadAsn();
    // Set static field: static public System.Security.Cryptography.AsnDecodeStatus BadAsn
    static void _set_BadAsn(System::Security::Cryptography::AsnDecodeStatus value);
    // static field const value: static public System.Security.Cryptography.AsnDecodeStatus BadTag
    static constexpr const int BadTag = 2;
    // Get static field: static public System.Security.Cryptography.AsnDecodeStatus BadTag
    static System::Security::Cryptography::AsnDecodeStatus _get_BadTag();
    // Set static field: static public System.Security.Cryptography.AsnDecodeStatus BadTag
    static void _set_BadTag(System::Security::Cryptography::AsnDecodeStatus value);
    // static field const value: static public System.Security.Cryptography.AsnDecodeStatus BadLength
    static constexpr const int BadLength = 3;
    // Get static field: static public System.Security.Cryptography.AsnDecodeStatus BadLength
    static System::Security::Cryptography::AsnDecodeStatus _get_BadLength();
    // Set static field: static public System.Security.Cryptography.AsnDecodeStatus BadLength
    static void _set_BadLength(System::Security::Cryptography::AsnDecodeStatus value);
    // static field const value: static public System.Security.Cryptography.AsnDecodeStatus InformationNotAvailable
    static constexpr const int InformationNotAvailable = 4;
    // Get static field: static public System.Security.Cryptography.AsnDecodeStatus InformationNotAvailable
    static System::Security::Cryptography::AsnDecodeStatus _get_InformationNotAvailable();
    // Set static field: static public System.Security.Cryptography.AsnDecodeStatus InformationNotAvailable
    static void _set_InformationNotAvailable(System::Security::Cryptography::AsnDecodeStatus value);
  }; // System.Security.Cryptography.AsnDecodeStatus
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AsnDecodeStatus, "System.Security.Cryptography", "AsnDecodeStatus");
#pragma pack(pop)
