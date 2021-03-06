// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x4
  #pragma pack(push, 1)
  // WARNING Layout: Explicit may not be correctly taken into account!
  // Autogenerated type: UnityEngine.Color32
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CBE500
  // [UsedByNativeCodeAttribute] Offset: CBE500
  struct Color32/*, public System::ValueType*/ {
    public:
    // [IgnoreAttribute] Offset: 0xCC2434
    // Ignoring hidden field: private System.Int32 rgba
    // Offset: 0x0
    // public System.Byte r
    // Size: 0x1
    // Offset: 0x0
    uint8_t r;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte g
    // Size: 0x1
    // Offset: 0x1
    uint8_t g;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte b
    // Size: 0x1
    // Offset: 0x2
    uint8_t b;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // public System.Byte a
    // Size: 0x1
    // Offset: 0x3
    uint8_t a;
    // Field size check
    static_assert(sizeof(uint8_t) == 0x1);
    // Creating value type constructor for type: Color32
    constexpr Color32(uint8_t r_ = {}, uint8_t g_ = {}, uint8_t b_ = {}, uint8_t a_ = {}) noexcept : r{r_}, g{g_}, b{b_}, a{a_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // public System.Void .ctor(System.Byte r, System.Byte g, System.Byte b, System.Byte a)
    // Offset: 0xE12DC8
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  Color32(uint8_t r, uint8_t g, uint8_t b, uint8_t a)
    // static public UnityEngine.Color32 Lerp(UnityEngine.Color32 a, UnityEngine.Color32 b, System.Single t)
    // Offset: 0x1A19AA0
    static UnityEngine::Color32 Lerp(UnityEngine::Color32 a, UnityEngine::Color32 b, float t);
    // public override System.String ToString()
    // Offset: 0xE12DDC
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // UnityEngine.Color32
  #pragma pack(pop)
  static check_size<sizeof(Color32), 3 + sizeof(uint8_t)> __UnityEngine_Color32SizeCheck;
  static_assert(sizeof(Color32) == 0x4);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Color32, "UnityEngine", "Color32");
