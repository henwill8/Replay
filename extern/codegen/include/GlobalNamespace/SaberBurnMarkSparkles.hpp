// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Plane
#include "UnityEngine/Plane.hpp"
// Including type: UnityEngine.ParticleSystem
#include "UnityEngine/ParticleSystem.hpp"
// Including type: UnityEngine.ParticleSystem/EmitParams
#include "UnityEngine/ParticleSystem_EmitParams.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: BoxCollider
  class BoxCollider;
  // Skipping declaration: Vector3 because it is already included!
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorManager
  class ColorManager;
  // Forward declaring type: SaberManager
  class SaberManager;
  // Forward declaring type: Saber
  class Saber;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberBurnMarkSparkles
  class SaberBurnMarkSparkles : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _sparklesPS
    // Offset: 0x18
    UnityEngine::ParticleSystem* sparklesPS;
    // private UnityEngine.ParticleSystem _burnMarksPSPrefab
    // Offset: 0x20
    UnityEngine::ParticleSystem* burnMarksPSPrefab;
    // private UnityEngine.BoxCollider _boxCollider
    // Offset: 0x28
    UnityEngine::BoxCollider* boxCollider;
    // private readonly ColorManager _colorManager
    // Offset: 0x30
    GlobalNamespace::ColorManager* colorManager;
    // private readonly SaberManager _saberManager
    // Offset: 0x38
    GlobalNamespace::SaberManager* saberManager;
    // private Saber[] _sabers
    // Offset: 0x40
    ::Array<GlobalNamespace::Saber*>* sabers;
    // private UnityEngine.Plane _plane
    // Offset: 0x48
    UnityEngine::Plane plane;
    // private UnityEngine.Vector3[] _prevBurnMarkPos
    // Offset: 0x58
    ::Array<UnityEngine::Vector3>* prevBurnMarkPos;
    // private System.Boolean[] _prevBurnMarkPosValid
    // Offset: 0x60
    ::Array<bool>* prevBurnMarkPosValid;
    // private UnityEngine.ParticleSystem[] _burnMarksPS
    // Offset: 0x68
    ::Array<UnityEngine::ParticleSystem*>* burnMarksPS;
    // private UnityEngine.ParticleSystem/EmissionModule[] _burnMarksEmissionModules
    // Offset: 0x70
    ::Array<UnityEngine::ParticleSystem::EmissionModule>* burnMarksEmissionModules;
    // private UnityEngine.ParticleSystem/EmitParams _sparklesEmitParams
    // Offset: 0x78
    UnityEngine::ParticleSystem::EmitParams sparklesEmitParams;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFBEF48
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFBF454
    void OnDestroy();
    // protected System.Void OnEnable()
    // Offset: 0xFBF560
    void OnEnable();
    // protected System.Void OnDisable()
    // Offset: 0xFBF650
    void OnDisable();
    // private System.Boolean GetBurnMarkPos(UnityEngine.Vector3 bladeBottomPos, UnityEngine.Vector3 bladeTopPos, out UnityEngine.Vector3 burnMarkPos)
    // Offset: 0xFBF740
    bool GetBurnMarkPos(UnityEngine::Vector3 bladeBottomPos, UnityEngine::Vector3 bladeTopPos, UnityEngine::Vector3& burnMarkPos);
    // protected System.Void LateUpdate()
    // Offset: 0xFBF9D8
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xFBFE6C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaberBurnMarkSparkles* New_ctor();
  }; // SaberBurnMarkSparkles
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberBurnMarkSparkles*, "", "SaberBurnMarkSparkles");
#pragma pack(pop)