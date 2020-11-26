// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.ParticleSystem/EmissionModule
#include "UnityEngine/ParticleSystem_EmissionModule.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: ParticleSystem because it is already included!
}
// Forward declaring namespace: Libraries::HM::HMLib::VR
namespace Libraries::HM::HMLib::VR {
  // Forward declaring type: HapticPresetSO
  class HapticPresetSO;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberClashChecker
  class SaberClashChecker;
  // Forward declaring type: HapticFeedbackController
  class HapticFeedbackController;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberClashEffect
  class SaberClashEffect : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.ParticleSystem _sparkleParticleSystem
    // Offset: 0x18
    UnityEngine::ParticleSystem* sparkleParticleSystem;
    // private UnityEngine.ParticleSystem _glowParticleSystem
    // Offset: 0x20
    UnityEngine::ParticleSystem* glowParticleSystem;
    // private Libraries.HM.HMLib.VR.HapticPresetSO _rumblePreset
    // Offset: 0x28
    Libraries::HM::HMLib::VR::HapticPresetSO* rumblePreset;
    // private SaberClashChecker _saberClashChecker
    // Offset: 0x30
    GlobalNamespace::SaberClashChecker* saberClashChecker;
    // private HapticFeedbackController _hapticFeedbackController
    // Offset: 0x38
    GlobalNamespace::HapticFeedbackController* hapticFeedbackController;
    // private ColorManager _colorManager
    // Offset: 0x40
    GlobalNamespace::ColorManager* colorManager;
    // private UnityEngine.ParticleSystem/EmissionModule _sparkleParticleSystemEmmisionModule
    // Offset: 0x48
    UnityEngine::ParticleSystem::EmissionModule sparkleParticleSystemEmmisionModule;
    // private UnityEngine.ParticleSystem/EmissionModule _glowParticleSystemEmmisionModule
    // Offset: 0x50
    UnityEngine::ParticleSystem::EmissionModule glowParticleSystemEmmisionModule;
    // private System.Boolean _sabersAreClashing
    // Offset: 0x58
    bool sabersAreClashing;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFC054C
    void Start();
    // protected System.Void OnDisable()
    // Offset: 0xFC0728
    void OnDisable();
    // protected System.Void LateUpdate()
    // Offset: 0xFC0738
    void LateUpdate();
    // public System.Void .ctor()
    // Offset: 0xFC083C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaberClashEffect* New_ctor();
  }; // SaberClashEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberClashEffect*, "", "SaberClashEffect");
#pragma pack(pop)
