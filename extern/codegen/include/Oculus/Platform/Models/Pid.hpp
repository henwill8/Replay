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
  // Autogenerated type: Oculus.Platform.Models.Pid
  class Pid : public ::Il2CppObject {
    public:
    // public readonly System.String Id
    // Offset: 0x10
    ::Il2CppString* Id;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Id;
    }
    // public System.Void .ctor(System.IntPtr o)
    // Offset: 0xEAADEC
    static Pid* New_ctor(System::IntPtr o);
  }; // Oculus.Platform.Models.Pid
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Models::Pid*, "Oculus.Platform.Models", "Pid");
#pragma pack(pop)
