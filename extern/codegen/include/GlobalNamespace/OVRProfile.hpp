// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Object
#include "UnityEngine/Object.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRProfile
  // [] Offset: FFFFFFFF
  class OVRProfile : public UnityEngine::Object {
    public:
    // Nested type: GlobalNamespace::OVRProfile::State
    struct State;
    // Creating value type constructor for type: OVRProfile
    OVRProfile() noexcept {}
    // public System.String get_id()
    // Offset: 0x1531600
    ::Il2CppString* get_id();
    // public System.String get_userName()
    // Offset: 0x1531648
    ::Il2CppString* get_userName();
    // public System.String get_locale()
    // Offset: 0x1531690
    ::Il2CppString* get_locale();
    // public System.Single get_ipd()
    // Offset: 0x15316D8
    float get_ipd();
    // public System.Single get_eyeHeight()
    // Offset: 0x153180C
    float get_eyeHeight();
    // public System.Single get_eyeDepth()
    // Offset: 0x153186C
    float get_eyeDepth();
    // public System.Single get_neckHeight()
    // Offset: 0x15318CC
    float get_neckHeight();
    // public OVRProfile/State get_state()
    // Offset: 0x15318EC
    GlobalNamespace::OVRProfile::State get_state();
    // public System.Void .ctor()
    // Offset: 0x15318F4
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OVRProfile* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::OVRProfile::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OVRProfile*, creationType>()));
    }
  }; // OVRProfile
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRProfile*, "", "OVRProfile");
