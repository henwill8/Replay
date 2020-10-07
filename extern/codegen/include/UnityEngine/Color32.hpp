// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.Color32
  struct Color32 : public System::ValueType {
    public:
    // private System.Int32 rgba
    // Offset: 0x0
    int rgba;
    // public System.Byte r
    // Offset: 0x0
    uint8_t r;
    // public System.Byte g
    // Offset: 0x1
    uint8_t g;
    // public System.Byte b
    // Offset: 0x2
    uint8_t b;
    // public System.Byte a
    // Offset: 0x3
    uint8_t a;
    // Creating value type constructor for type: Color32
    constexpr Color32(int rgba_ = {}, uint8_t r_ = {}, uint8_t g_ = {}, uint8_t b_ = {}, uint8_t a_ = {}) noexcept : rgba{rgba_}, r{r_}, g{g_}, b{b_}, a{a_} {}
    // public System.Void .ctor(System.Byte r, System.Byte g, System.Byte b, System.Byte a)
    // Offset: 0xA45900
    Color32(uint8_t r, uint8_t g, uint8_t b, uint8_t a);
    // public override System.String ToString()
    // Offset: 0xA45914
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Color32
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Color32, "UnityEngine", "Color32");
#pragma pack(pop)
