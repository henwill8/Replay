// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LightWithIds
#include "GlobalNamespace/LightWithIds.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: PointLight
  class PointLight;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PointLightWithIds
  class PointLightWithIds : public GlobalNamespace::LightWithIds {
    public:
    // private PointLight _pointLight
    // Offset: 0x38
    GlobalNamespace::PointLight* pointLight;
    // protected override System.Void ColorWasSet(UnityEngine.Color color)
    // Offset: 0x1880790
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::ColorWasSet(UnityEngine.Color color)
    void ColorWasSet(UnityEngine::Color color);
    // public System.Void .ctor()
    // Offset: 0x18807B0
    // Implemented from: LightWithIds
    // Base method: System.Void LightWithIds::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PointLightWithIds* New_ctor();
  }; // PointLightWithIds
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PointLightWithIds*, "", "PointLightWithIds");
#pragma pack(pop)
