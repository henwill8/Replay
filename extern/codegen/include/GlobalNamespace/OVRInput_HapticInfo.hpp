// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRInput
#include "GlobalNamespace/OVRInput.hpp"
// Including type: UnityEngine.XR.XRNode
#include "UnityEngine/XR/XRNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x24
  #pragma pack(push, 1)
  // Autogenerated type: OVRInput/HapticInfo
  // [] Offset: FFFFFFFF
  class OVRInput::HapticInfo : public ::Il2CppObject {
    public:
    // public System.Boolean playingHaptics
    // Size: 0x1
    // Offset: 0x10
    bool playingHaptics;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: playingHaptics and: hapticsDurationPlayed
    char __padding0[0x3] = {};
    // public System.Single hapticsDurationPlayed
    // Size: 0x4
    // Offset: 0x14
    float hapticsDurationPlayed;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single hapticsDuration
    // Size: 0x4
    // Offset: 0x18
    float hapticsDuration;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Single hapticAmplitude
    // Size: 0x4
    // Offset: 0x1C
    float hapticAmplitude;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public UnityEngine.XR.XRNode node
    // Size: 0x4
    // Offset: 0x20
    UnityEngine::XR::XRNode node;
    // Field size check
    static_assert(sizeof(UnityEngine::XR::XRNode) == 0x4);
    // Creating value type constructor for type: HapticInfo
    HapticInfo(bool playingHaptics_ = {}, float hapticsDurationPlayed_ = {}, float hapticsDuration_ = {}, float hapticAmplitude_ = {}, UnityEngine::XR::XRNode node_ = {}) noexcept : playingHaptics{playingHaptics_}, hapticsDurationPlayed{hapticsDurationPlayed_}, hapticsDuration{hapticsDuration_}, hapticAmplitude{hapticAmplitude_}, node{node_} {}
    // public System.Void .ctor()
    // Offset: 0x13AB4D8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRInput::HapticInfo* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRInput::HapticInfo::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRInput::HapticInfo*, creationType>()));
    }
  }; // OVRInput/HapticInfo
  #pragma pack(pop)
  static check_size<sizeof(OVRInput::HapticInfo), 32 + sizeof(UnityEngine::XR::XRNode)> __GlobalNamespace_OVRInput_HapticInfoSizeCheck;
  static_assert(sizeof(OVRInput::HapticInfo) == 0x24);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRInput::HapticInfo*, "", "OVRInput/HapticInfo");
