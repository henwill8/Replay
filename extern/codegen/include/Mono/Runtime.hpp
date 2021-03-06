// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: Mono
namespace Mono {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Runtime
  // [] Offset: FFFFFFFF
  class Runtime : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: Runtime
    Runtime() noexcept {}
    // static private System.Void mono_runtime_install_handlers()
    // Offset: 0x18942B4
    static void mono_runtime_install_handlers();
    // static public System.Void InstallSignalHandlers()
    // Offset: 0x18942B8
    static void InstallSignalHandlers();
    // static private System.Void mono_runtime_cleanup_handlers()
    // Offset: 0x18942BC
    static void mono_runtime_cleanup_handlers();
    // static public System.Void RemoveSignalHandlers()
    // Offset: 0x18942F0
    static void RemoveSignalHandlers();
    // static public System.String GetDisplayName()
    // Offset: 0x1894324
    static ::Il2CppString* GetDisplayName();
    // static private System.String GetNativeStackTrace(System.Exception exception)
    // Offset: 0x1894328
    static ::Il2CppString* GetNativeStackTrace(System::Exception* exception);
    // static public System.Boolean SetGCAllowSynchronousMajor(System.Boolean flag)
    // Offset: 0x189432C
    static bool SetGCAllowSynchronousMajor(bool flag);
  }; // Mono.Runtime
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Runtime*, "Mono", "Runtime");
