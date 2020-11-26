// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IntSO
  class IntSO;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ShockwaveEffect
  class ShockwaveEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _shockwavePS
    // Offset: 0x18
    UnityEngine::ParticleSystem* shockwavePS;
    // private IntSO _maxShockwaveParticles
    // Offset: 0x20
    GlobalNamespace::IntSO* maxShockwaveParticles;
    // private UnityEngine.ParticleSystem/EmitParams _shockwavePSEmitParams
    // Offset: 0x28
    UnityEngine::ParticleSystem::EmitParams shockwavePSEmitParams;
    // private System.Single _prevShockwaveParticleSpawnTime
    // Offset: 0xB8
    float prevShockwaveParticleSpawnTime;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFCD710
    void Start();
    // public System.Void SpawnShockwave(UnityEngine.Vector3 pos)
    // Offset: 0xFCD824
    void SpawnShockwave(UnityEngine::Vector3 pos);
    // public System.Void .ctor()
    // Offset: 0xFCD8FC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ShockwaveEffect* New_ctor();
  }; // ShockwaveEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ShockwaveEffect*, "", "ShockwaveEffect");
#pragma pack(pop)
