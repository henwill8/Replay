// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.IMECompositionMode
  struct IMECompositionMode : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: IMECompositionMode
    constexpr IMECompositionMode(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.IMECompositionMode Auto
    static constexpr const int Auto = 0;
    // Get static field: static public UnityEngine.IMECompositionMode Auto
    static UnityEngine::IMECompositionMode _get_Auto();
    // Set static field: static public UnityEngine.IMECompositionMode Auto
    static void _set_Auto(UnityEngine::IMECompositionMode value);
    // static field const value: static public UnityEngine.IMECompositionMode On
    static constexpr const int On = 1;
    // Get static field: static public UnityEngine.IMECompositionMode On
    static UnityEngine::IMECompositionMode _get_On();
    // Set static field: static public UnityEngine.IMECompositionMode On
    static void _set_On(UnityEngine::IMECompositionMode value);
    // static field const value: static public UnityEngine.IMECompositionMode Off
    static constexpr const int Off = 2;
    // Get static field: static public UnityEngine.IMECompositionMode Off
    static UnityEngine::IMECompositionMode _get_Off();
    // Set static field: static public UnityEngine.IMECompositionMode Off
    static void _set_Off(UnityEngine::IMECompositionMode value);
  }; // UnityEngine.IMECompositionMode
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::IMECompositionMode, "UnityEngine", "IMECompositionMode");
#pragma pack(pop)
