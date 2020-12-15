// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRTrackersRecorder/SavedData
#include "GlobalNamespace/VRTrackersRecorder_SavedData.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRTrackersRecorder/SavedData/KeyframeSerializable
  class VRTrackersRecorder::SavedData::KeyframeSerializable : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable
    class TransformSerializable;
    // public VRTrackersRecorder/SavedData/KeyframeSerializable/TransformSerializable[] _transforms
    // Offset: 0x10
    ::Array<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable::TransformSerializable*>* transforms;
    // public System.Single _time
    // Offset: 0x18
    float time;
    // public System.Void .ctor()
    // Offset: 0x1976988
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VRTrackersRecorder::SavedData::KeyframeSerializable* New_ctor();
  }; // VRTrackersRecorder/SavedData/KeyframeSerializable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*, "", "VRTrackersRecorder/SavedData/KeyframeSerializable");
#pragma pack(pop)