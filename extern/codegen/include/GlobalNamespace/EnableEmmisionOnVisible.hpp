// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmissionModule
#include "UnityEngine/ParticleSystem_EmissionModule.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: EnableEmmisionOnVisible
  // [] Offset: FFFFFFFF
  class EnableEmmisionOnVisible : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem[] _particleSystems
    // Size: 0x8
    // Offset: 0x18
    ::Array<UnityEngine::ParticleSystem*>* particleSystems;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem*>*) == 0x8);
    // private UnityEngine.ParticleSystem/EmissionModule[] _emmisionModules
    // Size: 0x8
    // Offset: 0x20
    ::Array<UnityEngine::ParticleSystem::EmissionModule>* emmisionModules;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::ParticleSystem::EmissionModule>*) == 0x8);
    // Creating value type constructor for type: EnableEmmisionOnVisible
    EnableEmmisionOnVisible(::Array<UnityEngine::ParticleSystem*>* particleSystems_ = {}, ::Array<UnityEngine::ParticleSystem::EmissionModule>* emmisionModules_ = {}) noexcept : particleSystems{particleSystems_}, emmisionModules{emmisionModules_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x110814C
    void Awake();
    // protected System.Void OnBecameVisible()
    // Offset: 0x110826C
    void OnBecameVisible();
    // protected System.Void OnBecameInvisible()
    // Offset: 0x11082F4
    void OnBecameInvisible();
    // public System.Void .ctor()
    // Offset: 0x110837C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnableEmmisionOnVisible* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnableEmmisionOnVisible::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnableEmmisionOnVisible*, creationType>()));
    }
  }; // EnableEmmisionOnVisible
  #pragma pack(pop)
  static check_size<sizeof(EnableEmmisionOnVisible), 32 + sizeof(::Array<UnityEngine::ParticleSystem::EmissionModule>*)> __GlobalNamespace_EnableEmmisionOnVisibleSizeCheck;
  static_assert(sizeof(EnableEmmisionOnVisible) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableEmmisionOnVisible*, "", "EnableEmmisionOnVisible");
