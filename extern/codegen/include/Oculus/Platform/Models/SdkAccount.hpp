// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Oculus.Platform.SdkAccountType
#include "Oculus/Platform/SdkAccountType.hpp"
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
  // Autogenerated type: Oculus.Platform.Models.SdkAccount
  class SdkAccount : public ::Il2CppObject {
    public:
    // public readonly Oculus.Platform.SdkAccountType AccountType
    // Offset: 0x10
    Oculus::Platform::SdkAccountType AccountType;
    // public readonly System.UInt64 UserId
    // Offset: 0x18
    uint64_t UserId;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0x11E1CF4
    static SdkAccount* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.SdkAccount
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::SdkAccount*, "Oculus.Platform.Models", "SdkAccount");
#pragma pack(pop)
