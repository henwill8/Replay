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
  // Forward declaring type: HttpStatusCode
  struct HttpStatusCode;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.HttpStatusDescription
  class HttpStatusDescription : public ::Il2CppObject {
    public:
    // static System.String Get(System.Net.HttpStatusCode code)
    // Offset: 0x12B48B8
    static ::Il2CppString* Get(System::Net::HttpStatusCode code);
    // static System.String Get(System.Int32 code)
    // Offset: 0x12ACB0C
    static ::Il2CppString* Get(int code);
  }; // System.Net.HttpStatusDescription
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpStatusDescription*, "System.Net", "HttpStatusDescription");
#pragma pack(pop)