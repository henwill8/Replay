// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Camera
#include "UnityEngine/Camera.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Camera/StereoscopicEye
  // [] Offset: FFFFFFFF
  struct Camera::StereoscopicEye/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: StereoscopicEye
    constexpr StereoscopicEye(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.Camera/StereoscopicEye Left
    static constexpr const int Left = 0;
    // Get static field: static public UnityEngine.Camera/StereoscopicEye Left
    static UnityEngine::Camera::StereoscopicEye _get_Left();
    // Set static field: static public UnityEngine.Camera/StereoscopicEye Left
    static void _set_Left(UnityEngine::Camera::StereoscopicEye value);
    // static field const value: static public UnityEngine.Camera/StereoscopicEye Right
    static constexpr const int Right = 1;
    // Get static field: static public UnityEngine.Camera/StereoscopicEye Right
    static UnityEngine::Camera::StereoscopicEye _get_Right();
    // Set static field: static public UnityEngine.Camera/StereoscopicEye Right
    static void _set_Right(UnityEngine::Camera::StereoscopicEye value);
  }; // UnityEngine.Camera/StereoscopicEye
  #pragma pack(pop)
  static check_size<sizeof(Camera::StereoscopicEye), 0 + sizeof(int)> __UnityEngine_Camera_StereoscopicEyeSizeCheck;
  static_assert(sizeof(Camera::StereoscopicEye) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Camera::StereoscopicEye, "UnityEngine", "Camera/StereoscopicEye");
