// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: RootMotion.Baker
#include "RootMotion/Baker.hpp"
// Including type: UnityEngine.HumanPose
#include "UnityEngine/HumanPose.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: RootMotion
namespace RootMotion {
  // Forward declaring type: BakerMuscle
  class BakerMuscle;
  // Forward declaring type: BakerHumanoidQT
  class BakerHumanoidQT;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: HumanPoseHandler
  class HumanPoseHandler;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Completed forward declares
// Type namespace: RootMotion
namespace RootMotion {
  // Autogenerated type: RootMotion.HumanoidBaker
  class HumanoidBaker : public RootMotion::Baker {
    public:
    // public System.Boolean bakeHandIK
    // Offset: 0x74
    bool bakeHandIK;
    // public System.Single IKKeyReductionError
    // Offset: 0x78
    float IKKeyReductionError;
    // public System.Int32 muscleFrameRateDiv
    // Offset: 0x7C
    int muscleFrameRateDiv;
    // private RootMotion.BakerMuscle[] bakerMuscles
    // Offset: 0x80
    ::Array<RootMotion::BakerMuscle*>* bakerMuscles;
    // private RootMotion.BakerHumanoidQT rootQT
    // Offset: 0x88
    RootMotion::BakerHumanoidQT* rootQT;
    // private RootMotion.BakerHumanoidQT leftFootQT
    // Offset: 0x90
    RootMotion::BakerHumanoidQT* leftFootQT;
    // private RootMotion.BakerHumanoidQT rightFootQT
    // Offset: 0x98
    RootMotion::BakerHumanoidQT* rightFootQT;
    // private RootMotion.BakerHumanoidQT leftHandQT
    // Offset: 0xA0
    RootMotion::BakerHumanoidQT* leftHandQT;
    // private RootMotion.BakerHumanoidQT rightHandQT
    // Offset: 0xA8
    RootMotion::BakerHumanoidQT* rightHandQT;
    // private System.Single[] muscles
    // Offset: 0xB0
    ::Array<float>* muscles;
    // private UnityEngine.HumanPose pose
    // Offset: 0xB8
    UnityEngine::HumanPose pose;
    // private UnityEngine.HumanPoseHandler handler
    // Offset: 0xE0
    UnityEngine::HumanPoseHandler* handler;
    // private UnityEngine.Vector3 bodyPosition
    // Offset: 0xE8
    UnityEngine::Vector3 bodyPosition;
    // private UnityEngine.Quaternion bodyRotation
    // Offset: 0xF4
    UnityEngine::Quaternion bodyRotation;
    // private System.Int32 mN
    // Offset: 0x104
    int mN;
    // private UnityEngine.Quaternion lastBodyRotation
    // Offset: 0x108
    UnityEngine::Quaternion lastBodyRotation;
    // private System.Void Awake()
    // Offset: 0x15F10D4
    void Awake();
    // private System.Void UpdateHumanPose()
    // Offset: 0x15F1CC8
    void UpdateHumanPose();
    // protected override UnityEngine.Transform GetCharacterRoot()
    // Offset: 0x15F15B8
    // Implemented from: RootMotion.Baker
    // Base method: UnityEngine.Transform Baker::GetCharacterRoot()
    UnityEngine::Transform* GetCharacterRoot();
    // protected override System.Void OnStartBaking()
    // Offset: 0x15F15D4
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnStartBaking()
    void OnStartBaking();
    // protected override System.Void OnSetLoopFrame(System.Single time)
    // Offset: 0x15F16F4
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetLoopFrame(System.Single time)
    void OnSetLoopFrame(float time);
    // protected override System.Void OnSetCurves(ref UnityEngine.AnimationClip clip)
    // Offset: 0x15F17D0
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetCurves(ref UnityEngine.AnimationClip clip)
    void OnSetCurves(UnityEngine::AnimationClip*& clip);
    // protected override System.Void OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    // Offset: 0x15F19A0
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::OnSetKeyframes(System.Single time, System.Boolean lastFrame)
    void OnSetKeyframes(float time, bool lastFrame);
    // public System.Void .ctor()
    // Offset: 0x15F1DA4
    // Implemented from: RootMotion.Baker
    // Base method: System.Void Baker::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static HumanoidBaker* New_ctor();
  }; // RootMotion.HumanoidBaker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::HumanoidBaker*, "RootMotion", "HumanoidBaker");
#pragma pack(pop)
