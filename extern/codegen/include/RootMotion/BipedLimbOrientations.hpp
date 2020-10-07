// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.BipedLimbOrientations
  class BipedLimbOrientations : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::BipedLimbOrientations::LimbOrientation
    class LimbOrientation;
    // public RootMotion.BipedLimbOrientations/LimbOrientation leftArm
    // Offset: 0x10
    RootMotion::BipedLimbOrientations::LimbOrientation* leftArm;
    // public RootMotion.BipedLimbOrientations/LimbOrientation rightArm
    // Offset: 0x18
    RootMotion::BipedLimbOrientations::LimbOrientation* rightArm;
    // public RootMotion.BipedLimbOrientations/LimbOrientation leftLeg
    // Offset: 0x20
    RootMotion::BipedLimbOrientations::LimbOrientation* leftLeg;
    // public RootMotion.BipedLimbOrientations/LimbOrientation rightLeg
    // Offset: 0x28
    RootMotion::BipedLimbOrientations::LimbOrientation* rightLeg;
    // public System.Void .ctor(RootMotion.BipedLimbOrientations/LimbOrientation leftArm, RootMotion.BipedLimbOrientations/LimbOrientation rightArm, RootMotion.BipedLimbOrientations/LimbOrientation leftLeg, RootMotion.BipedLimbOrientations/LimbOrientation rightLeg)
    // Offset: 0x13A34C4
    static BipedLimbOrientations* New_ctor(RootMotion::BipedLimbOrientations::LimbOrientation* leftArm, RootMotion::BipedLimbOrientations::LimbOrientation* rightArm, RootMotion::BipedLimbOrientations::LimbOrientation* leftLeg, RootMotion::BipedLimbOrientations::LimbOrientation* rightLeg);
    // static public RootMotion.BipedLimbOrientations get_UMA()
    // Offset: 0x13A3544
    static RootMotion::BipedLimbOrientations* get_UMA();
    // static public RootMotion.BipedLimbOrientations get_MaxBiped()
    // Offset: 0x13A3834
    static RootMotion::BipedLimbOrientations* get_MaxBiped();
  }; // RootMotion.BipedLimbOrientations
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::BipedLimbOrientations*, "RootMotion", "BipedLimbOrientations");
#pragma pack(pop)
