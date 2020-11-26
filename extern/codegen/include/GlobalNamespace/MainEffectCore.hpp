// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MainEffectCore
  class MainEffectCore : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Int32 _baseColorBoostID
    static int _get__baseColorBoostID();
    // Set static field: static private readonly System.Int32 _baseColorBoostID
    static void _set__baseColorBoostID(int value);
    // Get static field: static private readonly System.Int32 _baseColorBoostThresholdID
    static int _get__baseColorBoostThresholdID();
    // Set static field: static private readonly System.Int32 _baseColorBoostThresholdID
    static void _set__baseColorBoostThresholdID(int value);
    // static public System.Void SetGlobalShaderValues(System.Single baseColorBoost, System.Single baseColorBoostThreshold)
    // Offset: 0x19899F0
    static void SetGlobalShaderValues(float baseColorBoost, float baseColorBoostThreshold);
    // static private System.Void .cctor()
    // Offset: 0x198A630
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x198A628
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static MainEffectCore* New_ctor();
  }; // MainEffectCore
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MainEffectCore*, "", "MainEffectCore");
#pragma pack(pop)
