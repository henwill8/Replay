// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: UnityEngine.ProBuilder
namespace UnityEngine::ProBuilder {
  // Autogenerated type: UnityEngine.ProBuilder.RaycastHit
  class RaycastHit : public ::Il2CppObject {
    public:
    // public System.Single distance
    // Offset: 0x10
    float distance;
    // public UnityEngine.Vector3 point
    // Offset: 0x14
    UnityEngine::Vector3 point;
    // public UnityEngine.Vector3 normal
    // Offset: 0x20
    UnityEngine::Vector3 normal;
    // public System.Int32 face
    // Offset: 0x2C
    int face;
    // public System.Void .ctor(System.Single distance, UnityEngine.Vector3 point, UnityEngine.Vector3 normal, System.Int32 face)
    // Offset: 0x13C5680
    static RaycastHit* New_ctor(float distance, UnityEngine::Vector3 point, UnityEngine::Vector3 normal, int face);
  }; // UnityEngine.ProBuilder.RaycastHit
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::RaycastHit*, "UnityEngine.ProBuilder", "RaycastHit");
#pragma pack(pop)