// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Security.CipherUtilities
#include "Org/BouncyCastle/Security/CipherUtilities.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.CipherUtilities/CipherMode
  // [] Offset: FFFFFFFF
  struct CipherUtilities::CipherMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: CipherMode
    constexpr CipherMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode ECB
    static constexpr const int ECB = 0;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode ECB
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_ECB();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode ECB
    static void _set_ECB(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode NONE
    static constexpr const int NONE = 1;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode NONE
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_NONE();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode NONE
    static void _set_NONE(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CBC
    static constexpr const int CBC = 2;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CBC
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_CBC();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CBC
    static void _set_CBC(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CCM
    static constexpr const int CCM = 3;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CCM
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_CCM();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CCM
    static void _set_CCM(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CFB
    static constexpr const int CFB = 4;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CFB
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_CFB();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CFB
    static void _set_CFB(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CTR
    static constexpr const int CTR = 5;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CTR
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_CTR();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CTR
    static void _set_CTR(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CTS
    static constexpr const int CTS = 6;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CTS
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_CTS();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode CTS
    static void _set_CTS(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode EAX
    static constexpr const int EAX = 7;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode EAX
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_EAX();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode EAX
    static void _set_EAX(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode GCM
    static constexpr const int GCM = 8;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode GCM
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_GCM();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode GCM
    static void _set_GCM(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode GOFB
    static constexpr const int GOFB = 9;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode GOFB
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_GOFB();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode GOFB
    static void _set_GOFB(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode OCB
    static constexpr const int OCB = 10;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode OCB
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_OCB();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode OCB
    static void _set_OCB(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode OFB
    static constexpr const int OFB = 11;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode OFB
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_OFB();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode OFB
    static void _set_OFB(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode OPENPGPCFB
    static constexpr const int OPENPGPCFB = 12;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode OPENPGPCFB
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_OPENPGPCFB();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode OPENPGPCFB
    static void _set_OPENPGPCFB(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
    // static field const value: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode SIC
    static constexpr const int SIC = 13;
    // Get static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode SIC
    static Org::BouncyCastle::Security::CipherUtilities::CipherMode _get_SIC();
    // Set static field: static public Org.BouncyCastle.Security.CipherUtilities/CipherMode SIC
    static void _set_SIC(Org::BouncyCastle::Security::CipherUtilities::CipherMode value);
  }; // Org.BouncyCastle.Security.CipherUtilities/CipherMode
  #pragma pack(pop)
  static check_size<sizeof(CipherUtilities::CipherMode), 0 + sizeof(int)> __Org_BouncyCastle_Security_CipherUtilities_CipherModeSizeCheck;
  static_assert(sizeof(CipherUtilities::CipherMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::CipherUtilities::CipherMode, "Org.BouncyCastle.Security", "CipherUtilities/CipherMode");
