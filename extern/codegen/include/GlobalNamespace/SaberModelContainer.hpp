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
  // Forward declaring type: Saber
  class Saber;
  // Forward declaring type: SaberModelController
  class SaberModelController;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: SaberModelContainer
  class SaberModelContainer : public UnityEngine::MonoBehaviour {
    public:
    // private Saber _saber
    // Offset: 0x18
    GlobalNamespace::Saber* saber;
    // private SaberModelController _saberModelControllerPrefab
    // Offset: 0x20
    GlobalNamespace::SaberModelController* saberModelControllerPrefab;
    // private readonly Zenject.DiContainer _container
    // Offset: 0x28
    Zenject::DiContainer* container;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFC0EF4
    void Start();
    // public System.Void .ctor()
    // Offset: 0xFC1268
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static SaberModelContainer* New_ctor();
  }; // SaberModelContainer
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberModelContainer*, "", "SaberModelContainer");
#pragma pack(pop)