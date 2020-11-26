// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ColorSpace
  struct ColorSpace;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.QualitySettings
  class QualitySettings : public UnityEngine::Object {
    public:
    // static public System.Void set_vSyncCount(System.Int32 value)
    // Offset: 0x173631C
    static void set_vSyncCount(int value);
    // static public System.Int32 get_antiAliasing()
    // Offset: 0x173635C
    static int get_antiAliasing();
    // static public System.Void set_antiAliasing(System.Int32 value)
    // Offset: 0x1736390
    static void set_antiAliasing(int value);
    // static public System.Void set_maxQueuedFrames(System.Int32 value)
    // Offset: 0x17363D0
    static void set_maxQueuedFrames(int value);
    // static public UnityEngine.ColorSpace get_activeColorSpace()
    // Offset: 0x1736410
    static UnityEngine::ColorSpace get_activeColorSpace();
  }; // UnityEngine.QualitySettings
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::QualitySettings*, "UnityEngine", "QualitySettings");
#pragma pack(pop)
