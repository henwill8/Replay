// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::NetworkInformation
namespace System::Net::NetworkInformation {
  // Forward declaring type: UnicastIPAddressInformationCollection
  class UnicastIPAddressInformationCollection;
  // Forward declaring type: GatewayIPAddressInformationCollection
  class GatewayIPAddressInformationCollection;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.IPInterfaceProperties
  class IPInterfaceProperties : public ::Il2CppObject {
    public:
    // public System.Net.NetworkInformation.UnicastIPAddressInformationCollection get_UnicastAddresses()
    // Offset: 0xFFFFFFFF
    System::Net::NetworkInformation::UnicastIPAddressInformationCollection* get_UnicastAddresses();
    // public System.Net.NetworkInformation.GatewayIPAddressInformationCollection get_GatewayAddresses()
    // Offset: 0xFFFFFFFF
    System::Net::NetworkInformation::GatewayIPAddressInformationCollection* get_GatewayAddresses();
    // protected System.Void .ctor()
    // Offset: 0x1199DD4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static IPInterfaceProperties* New_ctor();
  }; // System.Net.NetworkInformation.IPInterfaceProperties
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::IPInterfaceProperties*, "System.Net.NetworkInformation", "IPInterfaceProperties");
#pragma pack(pop)
