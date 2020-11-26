// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.NetworkInformation.UnixIPGlobalProperties
#include "System/Net/NetworkInformation/UnixIPGlobalProperties.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.MibIPGlobalProperties
  class MibIPGlobalProperties : public System::Net::NetworkInformation::UnixIPGlobalProperties {
    public:
    // public readonly System.String StatisticsFile
    // Offset: 0x10
    ::Il2CppString* StatisticsFile;
    // public readonly System.String StatisticsFileIPv6
    // Offset: 0x18
    ::Il2CppString* StatisticsFileIPv6;
    // public readonly System.String TcpFile
    // Offset: 0x20
    ::Il2CppString* TcpFile;
    // public readonly System.String Tcp6File
    // Offset: 0x28
    ::Il2CppString* Tcp6File;
    // public readonly System.String UdpFile
    // Offset: 0x30
    ::Il2CppString* UdpFile;
    // public readonly System.String Udp6File
    // Offset: 0x38
    ::Il2CppString* Udp6File;
    // Get static field: static private readonly System.Char[] wsChars
    static ::Array<::Il2CppChar>* _get_wsChars();
    // Set static field: static private readonly System.Char[] wsChars
    static void _set_wsChars(::Array<::Il2CppChar>* value);
    // public System.Void .ctor(System.String procDir)
    // Offset: 0x1199C54
    static MibIPGlobalProperties* New_ctor(::Il2CppString* procDir);
    // static private System.Void .cctor()
    // Offset: 0x119B218
    static void _cctor();
  }; // System.Net.NetworkInformation.MibIPGlobalProperties
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::MibIPGlobalProperties*, "System.Net.NetworkInformation", "MibIPGlobalProperties");
#pragma pack(pop)
