// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebExceptionStatus
  struct WebExceptionStatus;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.NetRes
  class NetRes : public ::Il2CppObject {
    public:
    // static public System.String GetWebStatusString(System.String Res, System.Net.WebExceptionStatus Status)
    // Offset: 0x12C07B8
    static ::Il2CppString* GetWebStatusString(::Il2CppString* Res, System::Net::WebExceptionStatus Status);
    // static public System.String GetWebStatusString(System.Net.WebExceptionStatus Status)
    // Offset: 0x12C0884
    static ::Il2CppString* GetWebStatusString(System::Net::WebExceptionStatus Status);
  }; // System.Net.NetRes
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetRes*, "System.Net", "NetRes");
#pragma pack(pop)
