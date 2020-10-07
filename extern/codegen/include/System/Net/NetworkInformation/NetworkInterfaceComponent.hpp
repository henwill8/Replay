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
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceComponent
  struct NetworkInterfaceComponent : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: NetworkInterfaceComponent
    constexpr NetworkInterfaceComponent(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceComponent IPv4
    static constexpr const int IPv4 = 0;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceComponent IPv4
    static System::Net::NetworkInformation::NetworkInterfaceComponent _get_IPv4();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceComponent IPv4
    static void _set_IPv4(System::Net::NetworkInformation::NetworkInterfaceComponent value);
    // static field const value: static public System.Net.NetworkInformation.NetworkInterfaceComponent IPv6
    static constexpr const int IPv6 = 1;
    // Get static field: static public System.Net.NetworkInformation.NetworkInterfaceComponent IPv6
    static System::Net::NetworkInformation::NetworkInterfaceComponent _get_IPv6();
    // Set static field: static public System.Net.NetworkInformation.NetworkInterfaceComponent IPv6
    static void _set_IPv6(System::Net::NetworkInformation::NetworkInterfaceComponent value);
  }; // System.Net.NetworkInformation.NetworkInterfaceComponent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceComponent, "System.Net.NetworkInformation", "NetworkInterfaceComponent");
#pragma pack(pop)
