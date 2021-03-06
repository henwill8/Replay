// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRPlugin
#include "GlobalNamespace/OVRPlugin.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: OVRPlugin/Bool
#include "GlobalNamespace/OVRPlugin_Bool.hpp"
// Including type: OVRPlugin/CameraStatus
#include "GlobalNamespace/OVRPlugin_CameraStatus.hpp"
// Including type: OVRPlugin/Node
#include "GlobalNamespace/OVRPlugin_Node.hpp"
// Including type: OVRPlugin/Posef
// Already included the same include: GlobalNamespace/OVRPlugin.hpp
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x34
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: OVRPlugin/CameraExtrinsics
  // [] Offset: FFFFFFFF
  struct OVRPlugin::CameraExtrinsics/*, public System::ValueType*/ {
    public:
    // public OVRPlugin/Bool IsValid
    // Size: 0x4
    // Offset: 0x0
    GlobalNamespace::OVRPlugin::Bool IsValid;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Bool) == 0x4);
    // Padding between fields: IsValid and: LastChangedTimeSeconds
    char __padding0[0x4] = {};
    // public System.Double LastChangedTimeSeconds
    // Size: 0x8
    // Offset: 0x8
    double LastChangedTimeSeconds;
    // Field size check
    static_assert(sizeof(double) == 0x8);
    // public OVRPlugin/CameraStatus CameraStatusData
    // Size: 0x4
    // Offset: 0x10
    GlobalNamespace::OVRPlugin::CameraStatus CameraStatusData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::CameraStatus) == 0x4);
    // public OVRPlugin/Node AttachedToNode
    // Size: 0x4
    // Offset: 0x14
    GlobalNamespace::OVRPlugin::Node AttachedToNode;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Node) == 0x4);
    // public OVRPlugin/Posef RelativePose
    // Size: 0x1C
    // Offset: 0x18
    GlobalNamespace::OVRPlugin::Posef RelativePose;
    // Field size check
    static_assert(sizeof(GlobalNamespace::OVRPlugin::Posef) == 0x1C);
    // Creating value type constructor for type: CameraExtrinsics
    constexpr CameraExtrinsics(GlobalNamespace::OVRPlugin::Bool IsValid_ = {}, double LastChangedTimeSeconds_ = {}, GlobalNamespace::OVRPlugin::CameraStatus CameraStatusData_ = {}, GlobalNamespace::OVRPlugin::Node AttachedToNode_ = {}, GlobalNamespace::OVRPlugin::Posef RelativePose_ = {}) noexcept : IsValid{IsValid_}, LastChangedTimeSeconds{LastChangedTimeSeconds_}, CameraStatusData{CameraStatusData_}, AttachedToNode{AttachedToNode_}, RelativePose{RelativePose_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // OVRPlugin/CameraExtrinsics
  #pragma pack(pop)
  static check_size<sizeof(OVRPlugin::CameraExtrinsics), 24 + sizeof(GlobalNamespace::OVRPlugin::Posef)> __GlobalNamespace_OVRPlugin_CameraExtrinsicsSizeCheck;
  static_assert(sizeof(OVRPlugin::CameraExtrinsics) == 0x34);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRPlugin::CameraExtrinsics, "", "OVRPlugin/CameraExtrinsics");
