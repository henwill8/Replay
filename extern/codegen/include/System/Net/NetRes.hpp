// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.NetRes
  // [] Offset: FFFFFFFF
  class NetRes : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NetRes
    NetRes() noexcept {}
    // static public System.String GetWebStatusString(System.String Res, System.Net.WebExceptionStatus Status)
    // Offset: 0x150F54C
    static ::Il2CppString* GetWebStatusString(::Il2CppString* Res, System::Net::WebExceptionStatus Status);
    // static public System.String GetWebStatusString(System.Net.WebExceptionStatus Status)
    // Offset: 0x150F618
    static ::Il2CppString* GetWebStatusString(System::Net::WebExceptionStatus Status);
  }; // System.Net.NetRes
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetRes*, "System.Net", "NetRes");
