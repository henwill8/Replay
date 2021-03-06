// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: System.Security
namespace System::Security {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.SecurityManager
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAAC20
  class SecurityManager : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: SecurityManager
    SecurityManager() noexcept {}
    // static System.Boolean CheckElevatedPermissions()
    // Offset: 0x14D53F8
    static bool CheckElevatedPermissions();
    // static System.Void EnsureElevatedPermissions()
    // Offset: 0x14D5400
    static void EnsureElevatedPermissions();
  }; // System.Security.SecurityManager
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::SecurityManager*, "System.Security", "SecurityManager");
