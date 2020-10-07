// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
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
  // Autogenerated type: Oculus.Platform.Models.LaunchUnblockFlowResult
  class LaunchUnblockFlowResult : public ::Il2CppObject {
    public:
    // public readonly System.Boolean DidCancel
    // Offset: 0x10
    bool DidCancel;
    // public readonly System.Boolean DidUnblock
    // Offset: 0x11
    bool DidUnblock;
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xEA4334
    static LaunchUnblockFlowResult* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.LaunchUnblockFlowResult
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::LaunchUnblockFlowResult*, "Oculus.Platform.Models", "LaunchUnblockFlowResult");
#pragma pack(pop)
