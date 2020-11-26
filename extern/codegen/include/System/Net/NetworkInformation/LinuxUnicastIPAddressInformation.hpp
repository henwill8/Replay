// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnicastIPAddressInformation
#include "System/Net/NetworkInformation/UnicastIPAddressInformation.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: IPAddress
  class IPAddress;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.LinuxUnicastIPAddressInformation
  class LinuxUnicastIPAddressInformation : public System::Net::NetworkInformation::UnicastIPAddressInformation {
    public:
    // private System.Net.IPAddress address
    // Offset: 0x10
    System::Net::IPAddress* address;
    // Creating conversion operator: operator System::Net::IPAddress*
    constexpr operator System::Net::IPAddress*() const noexcept {
      return address;
    }
    // public System.Void .ctor(System.Net.IPAddress address)
    // Offset: 0x119ACC0
    static LinuxUnicastIPAddressInformation* New_ctor(System::Net::IPAddress* address);
    // public override System.Net.IPAddress get_Address()
    // Offset: 0x119ACFC
    // Implemented from: System.Net.NetworkInformation.IPAddressInformation
    // Base method: System.Net.IPAddress IPAddressInformation::get_Address()
    System::Net::IPAddress* get_Address();
  }; // System.Net.NetworkInformation.LinuxUnicastIPAddressInformation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::LinuxUnicastIPAddressInformation*, "System.Net.NetworkInformation", "LinuxUnicastIPAddressInformation");
#pragma pack(pop)
