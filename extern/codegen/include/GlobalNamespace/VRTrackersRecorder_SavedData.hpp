// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: VRTrackersRecorder
#include "GlobalNamespace/VRTrackersRecorder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: VRTrackersRecorder/SavedData
  class VRTrackersRecorder::SavedData : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable
    class KeyframeSerializable;
    // public VRTrackersRecorder/SavedData/KeyframeSerializable[] _keyframes
    // Offset: 0x10
    ::Array<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>* keyframes;
    // Creating conversion operator: operator ::Array<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>*
    constexpr operator ::Array<GlobalNamespace::VRTrackersRecorder::SavedData::KeyframeSerializable*>*() const noexcept {
      return keyframes;
    }
    // public System.Void .ctor()
    // Offset: 0x1976980
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static VRTrackersRecorder::SavedData* New_ctor();
  }; // VRTrackersRecorder/SavedData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::VRTrackersRecorder::SavedData*, "", "VRTrackersRecorder/SavedData");
#pragma pack(pop)
