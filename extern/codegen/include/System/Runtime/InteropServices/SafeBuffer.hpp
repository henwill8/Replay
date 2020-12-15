// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Microsoft.Win32.SafeHandles.SafeHandleZeroOrMinusOneIsInvalid
#include "Microsoft/Win32/SafeHandles/SafeHandleZeroOrMinusOneIsInvalid.hpp"
// Completed includes
// Type namespace: System.Runtime.InteropServices
namespace System::Runtime::InteropServices {
  // Autogenerated type: System.Runtime.InteropServices.SafeBuffer
  class SafeBuffer : public Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
    public:
    // private System.Boolean inited
    // Offset: 0x1E
    bool inited;
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return inited;
    }
    // public System.Void AcquirePointer(ref System.Byte* pointer)
    // Offset: 0x1165D2C
    void AcquirePointer(uint8_t*& pointer);
    // public System.Void ReleasePointer()
    // Offset: 0x1165EC0
    void ReleasePointer();
  }; // System.Runtime.InteropServices.SafeBuffer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::InteropServices::SafeBuffer*, "System.Runtime.InteropServices", "SafeBuffer");
#pragma pack(pop)