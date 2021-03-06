// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: ColorType
  // [] Offset: FFFFFFFF
  struct ColorType/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ColorType
    constexpr ColorType(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public ColorType ColorA
    static constexpr const int ColorA = 0;
    // Get static field: static public ColorType ColorA
    static GlobalNamespace::ColorType _get_ColorA();
    // Set static field: static public ColorType ColorA
    static void _set_ColorA(GlobalNamespace::ColorType value);
    // static field const value: static public ColorType ColorB
    static constexpr const int ColorB = 1;
    // Get static field: static public ColorType ColorB
    static GlobalNamespace::ColorType _get_ColorB();
    // Set static field: static public ColorType ColorB
    static void _set_ColorB(GlobalNamespace::ColorType value);
    // static field const value: static public ColorType None
    static constexpr const int None = -1;
    // Get static field: static public ColorType None
    static GlobalNamespace::ColorType _get_None();
    // Set static field: static public ColorType None
    static void _set_None(GlobalNamespace::ColorType value);
  }; // ColorType
  #pragma pack(pop)
  static check_size<sizeof(ColorType), 0 + sizeof(int)> __GlobalNamespace_ColorTypeSizeCheck;
  static_assert(sizeof(ColorType) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorType, "", "ColorType");
