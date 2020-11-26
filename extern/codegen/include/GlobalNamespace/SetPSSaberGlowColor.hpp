// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: SaberTypeObject
  class SaberTypeObject;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ParticleSystem
  class ParticleSystem;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SetPSSaberGlowColor
  class SetPSSaberGlowColor : public UnityEngine::MonoBehaviour {
    public:
    // private SaberTypeObject _saber
    // Offset: 0x18
    GlobalNamespace::SaberTypeObject* saber;
    // private ColorManager _colorManager
    // Offset: 0x20
    GlobalNamespace::ColorManager* colorManager;
    // private UnityEngine.ParticleSystem _particleSystem
    // Offset: 0x28
    UnityEngine::ParticleSystem* particleSystem;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFCC130
    void Start();
    // public System.Void .ctor()
    // Offset: 0xFCC1C4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SetPSSaberGlowColor* New_ctor();
  }; // SetPSSaberGlowColor
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SetPSSaberGlowColor*, "", "SetPSSaberGlowColor");
#pragma pack(pop)
