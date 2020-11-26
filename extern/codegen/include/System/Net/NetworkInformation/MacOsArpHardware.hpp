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
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.MacOsArpHardware
  struct MacOsArpHardware : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: MacOsArpHardware
    constexpr MacOsArpHardware(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.NetworkInformation.MacOsArpHardware ETHER
    static constexpr const int ETHER = 6;
    // Get static field: static public System.Net.NetworkInformation.MacOsArpHardware ETHER
    static System::Net::NetworkInformation::MacOsArpHardware _get_ETHER();
    // Set static field: static public System.Net.NetworkInformation.MacOsArpHardware ETHER
    static void _set_ETHER(System::Net::NetworkInformation::MacOsArpHardware value);
    // static field const value: static public System.Net.NetworkInformation.MacOsArpHardware ATM
    static constexpr const int ATM = 37;
    // Get static field: static public System.Net.NetworkInformation.MacOsArpHardware ATM
    static System::Net::NetworkInformation::MacOsArpHardware _get_ATM();
    // Set static field: static public System.Net.NetworkInformation.MacOsArpHardware ATM
    static void _set_ATM(System::Net::NetworkInformation::MacOsArpHardware value);
    // static field const value: static public System.Net.NetworkInformation.MacOsArpHardware SLIP
    static constexpr const int SLIP = 28;
    // Get static field: static public System.Net.NetworkInformation.MacOsArpHardware SLIP
    static System::Net::NetworkInformation::MacOsArpHardware _get_SLIP();
    // Set static field: static public System.Net.NetworkInformation.MacOsArpHardware SLIP
    static void _set_SLIP(System::Net::NetworkInformation::MacOsArpHardware value);
    // static field const value: static public System.Net.NetworkInformation.MacOsArpHardware PPP
    static constexpr const int PPP = 23;
    // Get static field: static public System.Net.NetworkInformation.MacOsArpHardware PPP
    static System::Net::NetworkInformation::MacOsArpHardware _get_PPP();
    // Set static field: static public System.Net.NetworkInformation.MacOsArpHardware PPP
    static void _set_PPP(System::Net::NetworkInformation::MacOsArpHardware value);
    // static field const value: static public System.Net.NetworkInformation.MacOsArpHardware LOOPBACK
    static constexpr const int LOOPBACK = 24;
    // Get static field: static public System.Net.NetworkInformation.MacOsArpHardware LOOPBACK
    static System::Net::NetworkInformation::MacOsArpHardware _get_LOOPBACK();
    // Set static field: static public System.Net.NetworkInformation.MacOsArpHardware LOOPBACK
    static void _set_LOOPBACK(System::Net::NetworkInformation::MacOsArpHardware value);
    // static field const value: static public System.Net.NetworkInformation.MacOsArpHardware FDDI
    static constexpr const int FDDI = 15;
    // Get static field: static public System.Net.NetworkInformation.MacOsArpHardware FDDI
    static System::Net::NetworkInformation::MacOsArpHardware _get_FDDI();
    // Set static field: static public System.Net.NetworkInformation.MacOsArpHardware FDDI
    static void _set_FDDI(System::Net::NetworkInformation::MacOsArpHardware value);
  }; // System.Net.NetworkInformation.MacOsArpHardware
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MacOsArpHardware, "System.Net.NetworkInformation", "MacOsArpHardware");
#pragma pack(pop)
