// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.InvalidBindResponses
  // [] Offset: FFFFFFFF
  struct InvalidBindResponses/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: InvalidBindResponses
    constexpr InvalidBindResponses(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Zenject.InvalidBindResponses Assert
    static constexpr const int _Assert = 0;
    // Get static field: static public Zenject.InvalidBindResponses Assert
    static Zenject::InvalidBindResponses _get_Assert();
    // Set static field: static public Zenject.InvalidBindResponses Assert
    static void _set_Assert(Zenject::InvalidBindResponses value);
    // static field const value: static public Zenject.InvalidBindResponses Skip
    static constexpr const int Skip = 1;
    // Get static field: static public Zenject.InvalidBindResponses Skip
    static Zenject::InvalidBindResponses _get_Skip();
    // Set static field: static public Zenject.InvalidBindResponses Skip
    static void _set_Skip(Zenject::InvalidBindResponses value);
  }; // Zenject.InvalidBindResponses
  #pragma pack(pop)
  static check_size<sizeof(InvalidBindResponses), 0 + sizeof(int)> __Zenject_InvalidBindResponsesSizeCheck;
  static_assert(sizeof(InvalidBindResponses) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::InvalidBindResponses, "Zenject", "InvalidBindResponses");
