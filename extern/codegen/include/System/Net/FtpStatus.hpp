// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.FtpStatusCode
#include "System/Net/FtpStatusCode.hpp"
// Completed includes
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.FtpStatus
  class FtpStatus : public ::Il2CppObject {
    public:
    // private readonly System.Net.FtpStatusCode statusCode
    // Offset: 0x10
    System::Net::FtpStatusCode statusCode;
    // private readonly System.String statusDescription
    // Offset: 0x18
    ::Il2CppString* statusDescription;
    // public System.Void .ctor(System.Net.FtpStatusCode statusCode, System.String statusDescription)
    // Offset: 0x1320D4C
    static FtpStatus* New_ctor(System::Net::FtpStatusCode statusCode, ::Il2CppString* statusDescription);
    // public System.Net.FtpStatusCode get_StatusCode()
    // Offset: 0x1320D90
    System::Net::FtpStatusCode get_StatusCode();
    // public System.String get_StatusDescription()
    // Offset: 0x1320D98
    ::Il2CppString* get_StatusDescription();
  }; // System.Net.FtpStatus
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::FtpStatus*, "System.Net", "FtpStatus");
#pragma pack(pop)