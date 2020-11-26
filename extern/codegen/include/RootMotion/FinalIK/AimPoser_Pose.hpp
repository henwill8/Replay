// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.FinalIK.AimPoser
#include "RootMotion/FinalIK/AimPoser.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Completed includes
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.AimPoser/Pose
  class AimPoser::Pose : public ::Il2CppObject {
    public:
    // public System.Boolean visualize
    // Offset: 0x10
    bool visualize;
    // public System.String name
    // Offset: 0x18
    ::Il2CppString* name;
    // public UnityEngine.Vector3 direction
    // Offset: 0x20
    UnityEngine::Vector3 direction;
    // public System.Single yaw
    // Offset: 0x2C
    float yaw;
    // public System.Single pitch
    // Offset: 0x30
    float pitch;
    // private System.Single angleBuffer
    // Offset: 0x34
    float angleBuffer;
    // public System.Boolean IsInDirection(UnityEngine.Vector3 d)
    // Offset: 0x174AC9C
    bool IsInDirection(UnityEngine::Vector3 d);
    // public System.Void SetAngleBuffer(System.Single value)
    // Offset: 0x174B014
    void SetAngleBuffer(float value);
    // public System.Void .ctor()
    // Offset: 0x174B01C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AimPoser::Pose* New_ctor();
  }; // RootMotion.FinalIK.AimPoser/Pose
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::AimPoser::Pose*, "RootMotion.FinalIK", "AimPoser/Pose");
#pragma pack(pop)
