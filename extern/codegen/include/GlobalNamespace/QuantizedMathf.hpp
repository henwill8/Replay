// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Single
#include "System/Single.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: QuantizedMathf
  class QuantizedMathf : public ::Il2CppObject {
    public:
    // static field const value: static private System.Single kEpsilon
    static constexpr const float kEpsilon = 3.051851e-05;
    // Get static field: static private System.Single kEpsilon
    static float _get_kEpsilon();
    // Set static field: static private System.Single kEpsilon
    static void _set_kEpsilon(float value);
    // static public System.Boolean Approximately(System.Single a, System.Single b)
    // Offset: 0x19A74A8
    static bool Approximately(float a, float b);
    // static public System.Boolean RoughlyApproximately(System.Single a, System.Single b)
    // Offset: 0x19A7528
    static bool RoughlyApproximately(float a, float b);
  }; // QuantizedMathf
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::QuantizedMathf*, "", "QuantizedMathf");
#pragma pack(pop)
