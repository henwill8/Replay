// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSkeleton/BoneId
#include "GlobalNamespace/OVRSkeleton_BoneId.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Transform
  class Transform;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRBone
  class OVRBone : public ::Il2CppObject {
    public:
    // private OVRSkeleton/BoneId <Id>k__BackingField
    // Offset: 0x10
    GlobalNamespace::OVRSkeleton::BoneId Id;
    // private System.Int16 <ParentBoneIndex>k__BackingField
    // Offset: 0x14
    int16_t ParentBoneIndex;
    // private UnityEngine.Transform <Transform>k__BackingField
    // Offset: 0x18
    UnityEngine::Transform* Transform;
    // public OVRSkeleton/BoneId get_Id()
    // Offset: 0x1068DE0
    GlobalNamespace::OVRSkeleton::BoneId get_Id();
    // private System.Void set_Id(OVRSkeleton/BoneId value)
    // Offset: 0x1068DE8
    void set_Id(GlobalNamespace::OVRSkeleton::BoneId value);
    // public System.Int16 get_ParentBoneIndex()
    // Offset: 0x1068DF0
    int16_t get_ParentBoneIndex();
    // private System.Void set_ParentBoneIndex(System.Int16 value)
    // Offset: 0x1068DF8
    void set_ParentBoneIndex(int16_t value);
    // public UnityEngine.Transform get_Transform()
    // Offset: 0x1068E00
    UnityEngine::Transform* get_Transform();
    // private System.Void set_Transform(UnityEngine.Transform value)
    // Offset: 0x1068E08
    void set_Transform(UnityEngine::Transform* value);
    // public System.Void .ctor(OVRSkeleton/BoneId id, System.Int16 parentBoneIndex, UnityEngine.Transform trans)
    // Offset: 0x1068E10
    static OVRBone* New_ctor(GlobalNamespace::OVRSkeleton::BoneId id, int16_t parentBoneIndex, UnityEngine::Transform* trans);
  }; // OVRBone
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRBone*, "", "OVRBone");
#pragma pack(pop)
