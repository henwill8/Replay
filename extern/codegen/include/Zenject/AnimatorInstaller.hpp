// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Installer`2
#include "Zenject/Installer_2.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Animator
  class Animator;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.AnimatorInstaller
  class AnimatorInstaller : public Zenject::Installer_2<UnityEngine::Animator*, Zenject::AnimatorInstaller*> {
    public:
    // private readonly UnityEngine.Animator _animator
    // Offset: 0x18
    UnityEngine::Animator* animator;
    // Deleting conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept = delete;
    // public System.Void .ctor(UnityEngine.Animator animator)
    // Offset: 0xD682BC
    static AnimatorInstaller* New_ctor(UnityEngine::Animator* animator);
    // public override System.Void InstallBindings()
    // Offset: 0xD68328
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
  }; // Zenject.AnimatorInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::AnimatorInstaller*, "Zenject", "AnimatorInstaller");
#pragma pack(pop)
