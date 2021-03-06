// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: HandleRef
  struct HandleRef;
  // Forward declaring type: SafeHandle
  class SafeHandle;
}
// Forward declaring namespace: Microsoft::Win32::SafeHandles
namespace Microsoft::Win32::SafeHandles {
  // Forward declaring type: SafeWaitHandle
  class SafeWaitHandle;
  // Forward declaring type: SafeProcessHandle
  class SafeProcessHandle;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Completed forward declares
// Type namespace: Microsoft.Win32
namespace Microsoft::Win32 {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Microsoft.Win32.NativeMethods
  // [] Offset: FFFFFFFF
  class NativeMethods : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: NativeMethods
    NativeMethods() noexcept {}
    // static public System.Boolean DuplicateHandle(System.Runtime.InteropServices.HandleRef hSourceProcessHandle, System.Runtime.InteropServices.SafeHandle hSourceHandle, System.Runtime.InteropServices.HandleRef hTargetProcess, out Microsoft.Win32.SafeHandles.SafeWaitHandle targetHandle, System.Int32 dwDesiredAccess, System.Boolean bInheritHandle, System.Int32 dwOptions)
    // Offset: 0x149BCFC
    static bool DuplicateHandle(System::Runtime::InteropServices::HandleRef hSourceProcessHandle, System::Runtime::InteropServices::SafeHandle* hSourceHandle, System::Runtime::InteropServices::HandleRef hTargetProcess, Microsoft::Win32::SafeHandles::SafeWaitHandle*& targetHandle, int dwDesiredAccess, bool bInheritHandle, int dwOptions);
    // static public System.Boolean DuplicateHandle(System.Runtime.InteropServices.HandleRef hSourceProcessHandle, System.Runtime.InteropServices.HandleRef hSourceHandle, System.Runtime.InteropServices.HandleRef hTargetProcess, out Microsoft.Win32.SafeHandles.SafeProcessHandle targetHandle, System.Int32 dwDesiredAccess, System.Boolean bInheritHandle, System.Int32 dwOptions)
    // Offset: 0x149BED0
    static bool DuplicateHandle(System::Runtime::InteropServices::HandleRef hSourceProcessHandle, System::Runtime::InteropServices::HandleRef hSourceHandle, System::Runtime::InteropServices::HandleRef hTargetProcess, Microsoft::Win32::SafeHandles::SafeProcessHandle*& targetHandle, int dwDesiredAccess, bool bInheritHandle, int dwOptions);
    // static public System.IntPtr GetCurrentProcess()
    // Offset: 0x149C048
    static System::IntPtr GetCurrentProcess();
    // static public System.Boolean GetExitCodeProcess(System.IntPtr processHandle, out System.Int32 exitCode)
    // Offset: 0x149C04C
    static bool GetExitCodeProcess(System::IntPtr processHandle, int& exitCode);
    // static public System.Boolean GetExitCodeProcess(Microsoft.Win32.SafeHandles.SafeProcessHandle processHandle, out System.Int32 exitCode)
    // Offset: 0x149C050
    static bool GetExitCodeProcess(Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, int& exitCode);
    // static public System.Boolean TerminateProcess(System.IntPtr processHandle, System.Int32 exitCode)
    // Offset: 0x149C114
    static bool TerminateProcess(System::IntPtr processHandle, int exitCode);
    // static public System.Boolean TerminateProcess(Microsoft.Win32.SafeHandles.SafeProcessHandle processHandle, System.Int32 exitCode)
    // Offset: 0x149C118
    static bool TerminateProcess(Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle, int exitCode);
    // static public System.Boolean GetProcessTimes(System.IntPtr handle, out System.Int64 creation, out System.Int64 exit, out System.Int64 kernel, out System.Int64 user)
    // Offset: 0x149C1DC
    static bool GetProcessTimes(System::IntPtr handle, int64_t& creation, int64_t& exit, int64_t& kernel, int64_t& user);
    // static public System.Boolean GetProcessTimes(Microsoft.Win32.SafeHandles.SafeProcessHandle handle, out System.Int64 creation, out System.Int64 exit, out System.Int64 kernel, out System.Int64 user)
    // Offset: 0x149C1E0
    static bool GetProcessTimes(Microsoft::Win32::SafeHandles::SafeProcessHandle* handle, int64_t& creation, int64_t& exit, int64_t& kernel, int64_t& user);
    // static public System.Int32 GetCurrentProcessId()
    // Offset: 0x149C2BC
    static int GetCurrentProcessId();
    // static public System.Boolean CloseProcess(System.IntPtr handle)
    // Offset: 0x149C2C0
    static bool CloseProcess(System::IntPtr handle);
  }; // Microsoft.Win32.NativeMethods
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Microsoft::Win32::NativeMethods*, "Microsoft.Win32", "NativeMethods");
