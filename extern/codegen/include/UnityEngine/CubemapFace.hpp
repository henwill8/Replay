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
  // Autogenerated type: UnityEngine.CubemapFace
  struct CubemapFace : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: CubemapFace
    constexpr CubemapFace(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.CubemapFace Unknown
    static constexpr const int Unknown = -1;
    // Get static field: static public UnityEngine.CubemapFace Unknown
    static UnityEngine::CubemapFace _get_Unknown();
    // Set static field: static public UnityEngine.CubemapFace Unknown
    static void _set_Unknown(UnityEngine::CubemapFace value);
    // static field const value: static public UnityEngine.CubemapFace PositiveX
    static constexpr const int PositiveX = 0;
    // Get static field: static public UnityEngine.CubemapFace PositiveX
    static UnityEngine::CubemapFace _get_PositiveX();
    // Set static field: static public UnityEngine.CubemapFace PositiveX
    static void _set_PositiveX(UnityEngine::CubemapFace value);
    // static field const value: static public UnityEngine.CubemapFace NegativeX
    static constexpr const int NegativeX = 1;
    // Get static field: static public UnityEngine.CubemapFace NegativeX
    static UnityEngine::CubemapFace _get_NegativeX();
    // Set static field: static public UnityEngine.CubemapFace NegativeX
    static void _set_NegativeX(UnityEngine::CubemapFace value);
    // static field const value: static public UnityEngine.CubemapFace PositiveY
    static constexpr const int PositiveY = 2;
    // Get static field: static public UnityEngine.CubemapFace PositiveY
    static UnityEngine::CubemapFace _get_PositiveY();
    // Set static field: static public UnityEngine.CubemapFace PositiveY
    static void _set_PositiveY(UnityEngine::CubemapFace value);
    // static field const value: static public UnityEngine.CubemapFace NegativeY
    static constexpr const int NegativeY = 3;
    // Get static field: static public UnityEngine.CubemapFace NegativeY
    static UnityEngine::CubemapFace _get_NegativeY();
    // Set static field: static public UnityEngine.CubemapFace NegativeY
    static void _set_NegativeY(UnityEngine::CubemapFace value);
    // static field const value: static public UnityEngine.CubemapFace PositiveZ
    static constexpr const int PositiveZ = 4;
    // Get static field: static public UnityEngine.CubemapFace PositiveZ
    static UnityEngine::CubemapFace _get_PositiveZ();
    // Set static field: static public UnityEngine.CubemapFace PositiveZ
    static void _set_PositiveZ(UnityEngine::CubemapFace value);
    // static field const value: static public UnityEngine.CubemapFace NegativeZ
    static constexpr const int NegativeZ = 5;
    // Get static field: static public UnityEngine.CubemapFace NegativeZ
    static UnityEngine::CubemapFace _get_NegativeZ();
    // Set static field: static public UnityEngine.CubemapFace NegativeZ
    static void _set_NegativeZ(UnityEngine::CubemapFace value);
  }; // UnityEngine.CubemapFace
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::CubemapFace, "UnityEngine", "CubemapFace");
#pragma pack(pop)
