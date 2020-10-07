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
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IntPtr because it is already included!
}
// Completed forward declares
// Type namespace: Microsoft.Win32.SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Autogenerated type: Microsoft.Win32.SafeHandles.SafeFileHandle
  class SafeFileHandle : public Microsoft::Win32::SafeHandles::SafeHandleZeroOrMinusOneIsInvalid {
    public:
    // public System.Void .ctor(System.IntPtr preexistingHandle, System.Boolean ownsHandle)
    // Offset: 0x10AE2C8
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Void SafeHandle::.ctor(System.IntPtr preexistingHandle, System.Boolean ownsHandle)
    static SafeFileHandle* New_ctor(System::IntPtr preexistingHandle, bool ownsHandle);
    // protected override System.Boolean ReleaseHandle()
    // Offset: 0x10AE350
    // Implemented from: System.Runtime.InteropServices.SafeHandle
    // Base method: System.Boolean SafeHandle::ReleaseHandle()
    bool ReleaseHandle();
  }; // Microsoft.Win32.SafeHandles.SafeFileHandle
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::SafeHandles::SafeFileHandle*, "Microsoft.Win32.SafeHandles", "SafeFileHandle");
#pragma pack(pop)
