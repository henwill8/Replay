// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRPlugin/Frustumf
  struct OVRPlugin::Frustumf : public System::ValueType {
    public:
    // public System.Single zNear
    // Offset: 0x0
    float zNear;
    // public System.Single zFar
    // Offset: 0x4
    float zFar;
    // public System.Single fovX
    // Offset: 0x8
    float fovX;
    // public System.Single fovY
    // Offset: 0xC
    float fovY;
    // Creating value type constructor for type: Frustumf
    constexpr Frustumf(float zNear_ = {}, float zFar_ = {}, float fovX_ = {}, float fovY_ = {}) noexcept : zNear{zNear_}, zFar{zFar_}, fovX{fovX_}, fovY{fovY_} {}
  }; // OVRPlugin/Frustumf
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::Frustumf, "", "OVRPlugin/Frustumf");
#pragma pack(pop)
