// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.DateTime
#include "System/DateTime.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Oculus.Platform.Models
namespace Oculus::Platform::Models {
  // Autogenerated type: Oculus.Platform.Models.Purchase
  class Purchase : public ::Il2CppObject {
    public:
    // public readonly System.DateTime ExpirationTime
    // Offset: 0x10
    System::DateTime ExpirationTime;
    // public readonly System.DateTime GrantTime
    // Offset: 0x18
    System::DateTime GrantTime;
    // public readonly System.UInt64 ID
    // Offset: 0x20
    uint64_t ID;
    // public readonly System.String Sku
    // Offset: 0x28
    ::Il2CppString* Sku;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11DE8D8
    static Purchase* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.Purchase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Purchase*, "Oculus.Platform.Models", "Purchase");
#pragma pack(pop)