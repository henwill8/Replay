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
  // Forward declaring type: NetworkInterface
  class NetworkInterface;
}
// Completed forward declares
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.NetworkInterfaceFactory
  class NetworkInterfaceFactory : public ::Il2CppObject {
    public:
    // Nested type: System::Net::NetworkInformation::NetworkInterfaceFactory::UnixNetworkInterfaceAPI
    class UnixNetworkInterfaceAPI;
    // Nested type: System::Net::NetworkInformation::NetworkInterfaceFactory::MacOsNetworkInterfaceAPI
    class MacOsNetworkInterfaceAPI;
    // Nested type: System::Net::NetworkInformation::NetworkInterfaceFactory::LinuxNetworkInterfaceAPI
    class LinuxNetworkInterfaceAPI;
    // Nested type: System::Net::NetworkInformation::NetworkInterfaceFactory::Win32NetworkInterfaceAPI
    class Win32NetworkInterfaceAPI;
    // public System.Net.NetworkInformation.NetworkInterface[] GetAllNetworkInterfaces()
    // Offset: 0xFFFFFFFF
    ::Array<System::Net::NetworkInformation::NetworkInterface*>* GetAllNetworkInterfaces();
    // static public System.Net.NetworkInformation.NetworkInterfaceFactory Create()
    // Offset: 0x119B744
    static System::Net::NetworkInformation::NetworkInterfaceFactory* Create();
    // protected System.Void .ctor()
    // Offset: 0x119B874
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static NetworkInterfaceFactory* New_ctor();
  }; // System.Net.NetworkInformation.NetworkInterfaceFactory
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetworkInterfaceFactory*, "System.Net.NetworkInformation", "NetworkInterfaceFactory");
#pragma pack(pop)
