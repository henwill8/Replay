// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ScaleMode
  // [] Offset: FFFFFFFF
  struct ScaleMode/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: ScaleMode
    constexpr ScaleMode(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.ScaleMode StretchToFill
    static constexpr const int StretchToFill = 0;
    // Get static field: static public UnityEngine.ScaleMode StretchToFill
    static UnityEngine::ScaleMode _get_StretchToFill();
    // Set static field: static public UnityEngine.ScaleMode StretchToFill
    static void _set_StretchToFill(UnityEngine::ScaleMode value);
    // static field const value: static public UnityEngine.ScaleMode ScaleAndCrop
    static constexpr const int ScaleAndCrop = 1;
    // Get static field: static public UnityEngine.ScaleMode ScaleAndCrop
    static UnityEngine::ScaleMode _get_ScaleAndCrop();
    // Set static field: static public UnityEngine.ScaleMode ScaleAndCrop
    static void _set_ScaleAndCrop(UnityEngine::ScaleMode value);
    // static field const value: static public UnityEngine.ScaleMode ScaleToFit
    static constexpr const int ScaleToFit = 2;
    // Get static field: static public UnityEngine.ScaleMode ScaleToFit
    static UnityEngine::ScaleMode _get_ScaleToFit();
    // Set static field: static public UnityEngine.ScaleMode ScaleToFit
    static void _set_ScaleToFit(UnityEngine::ScaleMode value);
  }; // UnityEngine.ScaleMode
  #pragma pack(pop)
  static check_size<sizeof(ScaleMode), 0 + sizeof(int)> __UnityEngine_ScaleModeSizeCheck;
  static_assert(sizeof(ScaleMode) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ScaleMode, "UnityEngine", "ScaleMode");
