// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Quaternion
#include "UnityEngine/Quaternion.hpp"
// Including type: UnityEngine.Vector3
#include "UnityEngine/Vector3.hpp"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: RootMotion::FinalIK
namespace RootMotion::FinalIK {
  // Forward declaring type: IKSolverLimb
  class IKSolverLimb;
}
// Completed forward declares
// Type namespace: RootMotion.FinalIK
namespace RootMotion::FinalIK {
  // Autogenerated type: RootMotion.FinalIK.Finger
  class Finger : public ::Il2CppObject {
    public:
    // Nested type: RootMotion::FinalIK::Finger::DOF
    struct DOF;
    // Autogenerated type: RootMotion.FinalIK.Finger/DOF
    struct DOF : public System::Enum {
      public:
      // public System.Int32 value__
      // Offset: 0x0
      int value;
      // Creating value type constructor for type: DOF
      constexpr DOF(int value_ = {}) noexcept : value{value_} {}
      // Creating conversion operator: operator int
      constexpr operator int() const noexcept {
        return value;
      }
      // static field const value: static public RootMotion.FinalIK.Finger/DOF One
      static constexpr const int One = 0;
      // Get static field: static public RootMotion.FinalIK.Finger/DOF One
      static RootMotion::FinalIK::Finger::DOF _get_One();
      // Set static field: static public RootMotion.FinalIK.Finger/DOF One
      static void _set_One(RootMotion::FinalIK::Finger::DOF value);
      // static field const value: static public RootMotion.FinalIK.Finger/DOF Three
      static constexpr const int Three = 1;
      // Get static field: static public RootMotion.FinalIK.Finger/DOF Three
      static RootMotion::FinalIK::Finger::DOF _get_Three();
      // Set static field: static public RootMotion.FinalIK.Finger/DOF Three
      static void _set_Three(RootMotion::FinalIK::Finger::DOF value);
    }; // RootMotion.FinalIK.Finger/DOF
    // public System.Single weight
    // Offset: 0x10
    float weight;
    // public System.Single rotationWeight
    // Offset: 0x14
    float rotationWeight;
    // public RootMotion.FinalIK.Finger/DOF rotationDOF
    // Offset: 0x18
    RootMotion::FinalIK::Finger::DOF rotationDOF;
    // public System.Boolean fixBone1Twist
    // Offset: 0x1C
    bool fixBone1Twist;
    // public UnityEngine.Transform bone1
    // Offset: 0x20
    UnityEngine::Transform* bone1;
    // public UnityEngine.Transform bone2
    // Offset: 0x28
    UnityEngine::Transform* bone2;
    // public UnityEngine.Transform bone3
    // Offset: 0x30
    UnityEngine::Transform* bone3;
    // public UnityEngine.Transform tip
    // Offset: 0x38
    UnityEngine::Transform* tip;
    // public UnityEngine.Transform target
    // Offset: 0x40
    UnityEngine::Transform* target;
    // private System.Boolean <initiated>k__BackingField
    // Offset: 0x48
    bool initiated;
    // private RootMotion.FinalIK.IKSolverLimb solver
    // Offset: 0x50
    RootMotion::FinalIK::IKSolverLimb* solver;
    // private UnityEngine.Quaternion bone3RelativeToTarget
    // Offset: 0x58
    UnityEngine::Quaternion bone3RelativeToTarget;
    // private UnityEngine.Vector3 bone3DefaultLocalPosition
    // Offset: 0x68
    UnityEngine::Vector3 bone3DefaultLocalPosition;
    // private UnityEngine.Quaternion bone3DefaultLocalRotation
    // Offset: 0x74
    UnityEngine::Quaternion bone3DefaultLocalRotation;
    // private UnityEngine.Vector3 bone1Axis
    // Offset: 0x84
    UnityEngine::Vector3 bone1Axis;
    // private UnityEngine.Vector3 tipAxis
    // Offset: 0x90
    UnityEngine::Vector3 tipAxis;
    // private UnityEngine.Vector3 bone1TwistAxis
    // Offset: 0x9C
    UnityEngine::Vector3 bone1TwistAxis;
    // public System.Boolean get_initiated()
    // Offset: 0x13B6A70
    bool get_initiated();
    // private System.Void set_initiated(System.Boolean value)
    // Offset: 0x13B6A78
    void set_initiated(bool value);
    // public UnityEngine.Vector3 get_IKPosition()
    // Offset: 0x13B6A84
    UnityEngine::Vector3 get_IKPosition();
    // public System.Void set_IKPosition(UnityEngine.Vector3 value)
    // Offset: 0x13B6AA4
    void set_IKPosition(UnityEngine::Vector3 value);
    // public UnityEngine.Quaternion get_IKRotation()
    // Offset: 0x13B6AC4
    UnityEngine::Quaternion get_IKRotation();
    // public System.Void set_IKRotation(UnityEngine.Quaternion value)
    // Offset: 0x13B6AE4
    void set_IKRotation(UnityEngine::Quaternion value);
    // public System.Boolean IsValid(ref System.String errorMessage)
    // Offset: 0x13B6B04
    bool IsValid(::Il2CppString*& errorMessage);
    // public System.Void Initiate(UnityEngine.Transform hand, System.Int32 index)
    // Offset: 0x13B6C10
    void Initiate(UnityEngine::Transform* hand, int index);
    // public System.Void FixTransforms()
    // Offset: 0x13B71C4
    void FixTransforms();
    // public System.Void StoreDefaultLocalState()
    // Offset: 0x13B72A0
    void StoreDefaultLocalState();
    // public System.Void Update(System.Single masterWeight)
    // Offset: 0x13B7368
    void Update(float masterWeight);
    // public System.Void .ctor()
    // Offset: 0x13B7AB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Finger* New_ctor();
  }; // RootMotion.FinalIK.Finger
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Finger*, "RootMotion.FinalIK", "Finger");
DEFINE_IL2CPP_ARG_TYPE(RootMotion::FinalIK::Finger::DOF, "RootMotion.FinalIK", "Finger/DOF");
#pragma pack(pop)
