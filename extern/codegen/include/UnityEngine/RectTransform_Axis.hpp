// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.RectTransform
#include "UnityEngine/RectTransform.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.RectTransform/Axis
  // [] Offset: FFFFFFFF
  struct RectTransform::Axis/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Axis
    constexpr Axis(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.RectTransform/Axis Horizontal
    static constexpr const int Horizontal = 0;
    // Get static field: static public UnityEngine.RectTransform/Axis Horizontal
    static UnityEngine::RectTransform::Axis _get_Horizontal();
    // Set static field: static public UnityEngine.RectTransform/Axis Horizontal
    static void _set_Horizontal(UnityEngine::RectTransform::Axis value);
    // static field const value: static public UnityEngine.RectTransform/Axis Vertical
    static constexpr const int Vertical = 1;
    // Get static field: static public UnityEngine.RectTransform/Axis Vertical
    static UnityEngine::RectTransform::Axis _get_Vertical();
    // Set static field: static public UnityEngine.RectTransform/Axis Vertical
    static void _set_Vertical(UnityEngine::RectTransform::Axis value);
  }; // UnityEngine.RectTransform/Axis
  #pragma pack(pop)
  static check_size<sizeof(RectTransform::Axis), 0 + sizeof(int)> __UnityEngine_RectTransform_AxisSizeCheck;
  static_assert(sizeof(RectTransform::Axis) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RectTransform::Axis, "UnityEngine", "RectTransform/Axis");
