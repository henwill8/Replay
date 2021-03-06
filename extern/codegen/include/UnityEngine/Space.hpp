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
  // Autogenerated type: UnityEngine.Space
  // [] Offset: FFFFFFFF
  struct Space/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Space
    constexpr Space(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Space World
    static constexpr const int World = 0;
    // Get static field: static public UnityEngine.Space World
    static UnityEngine::Space _get_World();
    // Set static field: static public UnityEngine.Space World
    static void _set_World(UnityEngine::Space value);
    // static field const value: static public UnityEngine.Space Self
    static constexpr const int Self = 1;
    // Get static field: static public UnityEngine.Space Self
    static UnityEngine::Space _get_Self();
    // Set static field: static public UnityEngine.Space Self
    static void _set_Self(UnityEngine::Space value);
  }; // UnityEngine.Space
  #pragma pack(pop)
  static check_size<sizeof(Space), 0 + sizeof(int)> __UnityEngine_SpaceSizeCheck;
  static_assert(sizeof(Space) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Space, "UnityEngine", "Space");
