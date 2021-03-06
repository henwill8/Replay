// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Security.Principal
namespace System::Security::Principal {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Principal.WindowsAccountType
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAAD10
  struct WindowsAccountType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: WindowsAccountType
    constexpr WindowsAccountType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Security.Principal.WindowsAccountType Normal
    static constexpr const int Normal = 0;
    // Get static field: static public System.Security.Principal.WindowsAccountType Normal
    static System::Security::Principal::WindowsAccountType _get_Normal();
    // Set static field: static public System.Security.Principal.WindowsAccountType Normal
    static void _set_Normal(System::Security::Principal::WindowsAccountType value);
    // static field const value: static public System.Security.Principal.WindowsAccountType Guest
    static constexpr const int Guest = 1;
    // Get static field: static public System.Security.Principal.WindowsAccountType Guest
    static System::Security::Principal::WindowsAccountType _get_Guest();
    // Set static field: static public System.Security.Principal.WindowsAccountType Guest
    static void _set_Guest(System::Security::Principal::WindowsAccountType value);
    // static field const value: static public System.Security.Principal.WindowsAccountType System
    static constexpr const int System = 2;
    // Get static field: static public System.Security.Principal.WindowsAccountType System
    static System::Security::Principal::WindowsAccountType _get_System();
    // Set static field: static public System.Security.Principal.WindowsAccountType System
    static void _set_System(System::Security::Principal::WindowsAccountType value);
    // static field const value: static public System.Security.Principal.WindowsAccountType Anonymous
    static constexpr const int Anonymous = 3;
    // Get static field: static public System.Security.Principal.WindowsAccountType Anonymous
    static System::Security::Principal::WindowsAccountType _get_Anonymous();
    // Set static field: static public System.Security.Principal.WindowsAccountType Anonymous
    static void _set_Anonymous(System::Security::Principal::WindowsAccountType value);
  }; // System.Security.Principal.WindowsAccountType
  #pragma pack(pop)
  static check_size<sizeof(WindowsAccountType), 0 + sizeof(int)> __System_Security_Principal_WindowsAccountTypeSizeCheck;
  static_assert(sizeof(WindowsAccountType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Principal::WindowsAccountType, "System.Security.Principal", "WindowsAccountType");
