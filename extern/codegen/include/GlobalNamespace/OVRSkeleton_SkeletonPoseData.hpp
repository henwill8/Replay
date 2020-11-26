// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSkeleton
#include "GlobalNamespace/OVRSkeleton.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Posef
#include "GlobalNamespace/OVRPlugin.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OVRSkeleton/SkeletonPoseData
  struct OVRSkeleton::SkeletonPoseData : public System::ValueType {
    public:
    // private OVRPlugin/Posef <RootPose>k__BackingField
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::Posef RootPose;
    // private System.Single <RootScale>k__BackingField
    // Offset: 0x1C
    float RootScale;
    // private OVRPlugin/Quatf[] <BoneRotations>k__BackingField
    // Offset: 0x20
    ::Array<GlobalNamespace::OVRPlugin::Quatf>* BoneRotations;
    // private System.Boolean <IsDataValid>k__BackingField
    // Offset: 0x28
    bool IsDataValid;
    // private System.Boolean <IsDataHighConfidence>k__BackingField
    // Offset: 0x29
    bool IsDataHighConfidence;
    // Creating value type constructor for type: SkeletonPoseData
    constexpr SkeletonPoseData(GlobalNamespace::OVRPlugin::Posef RootPose_ = {}, float RootScale_ = {}, ::Array<GlobalNamespace::OVRPlugin::Quatf>* BoneRotations_ = {}, bool IsDataValid_ = {}, bool IsDataHighConfidence_ = {}) noexcept : RootPose{RootPose_}, RootScale{RootScale_}, BoneRotations{BoneRotations_}, IsDataValid{IsDataValid_}, IsDataHighConfidence{IsDataHighConfidence_} {}
    // public OVRPlugin/Posef get_RootPose()
    // Offset: 0xC9C574
    GlobalNamespace::OVRPlugin::Posef get_RootPose();
    // public System.Void set_RootPose(OVRPlugin/Posef value)
    // Offset: 0xC9C588
    void set_RootPose(GlobalNamespace::OVRPlugin::Posef value);
    // public System.Single get_RootScale()
    // Offset: 0xC9C5A4
    float get_RootScale();
    // public System.Void set_RootScale(System.Single value)
    // Offset: 0xC9C5AC
    void set_RootScale(float value);
    // public OVRPlugin/Quatf[] get_BoneRotations()
    // Offset: 0xC9C5B4
    ::Array<GlobalNamespace::OVRPlugin::Quatf>* get_BoneRotations();
    // public System.Void set_BoneRotations(OVRPlugin/Quatf[] value)
    // Offset: 0xC9C5BC
    void set_BoneRotations(::Array<GlobalNamespace::OVRPlugin::Quatf>* value);
    // public System.Boolean get_IsDataValid()
    // Offset: 0xC9C5C4
    bool get_IsDataValid();
    // public System.Void set_IsDataValid(System.Boolean value)
    // Offset: 0xC9C5CC
    void set_IsDataValid(bool value);
    // public System.Boolean get_IsDataHighConfidence()
    // Offset: 0xC9C5D8
    bool get_IsDataHighConfidence();
    // public System.Void set_IsDataHighConfidence(System.Boolean value)
    // Offset: 0xC9C5E0
    void set_IsDataHighConfidence(bool value);
  }; // OVRSkeleton/SkeletonPoseData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRSkeleton::SkeletonPoseData, "", "OVRSkeleton/SkeletonPoseData");
#pragma pack(pop)
