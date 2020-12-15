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
// Forward declaring namespace: Zenject
namespace Zenject {
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.DefaultGameObjectParentInstaller
  class DefaultGameObjectParentInstaller : public Zenject::Installer_2<::Il2CppString*, Zenject::DefaultGameObjectParentInstaller*> {
    public:
    // Nested type: Zenject::DefaultGameObjectParentInstaller::DefaultParentObjectDestroyer
    class DefaultParentObjectDestroyer;
    // private readonly System.String _name
    // Offset: 0x18
    ::Il2CppString* name;
    // Deleting conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept = delete;
    // public System.Void .ctor(System.String name)
    // Offset: 0x10F3568
    static DefaultGameObjectParentInstaller* New_ctor(::Il2CppString* name);
    // public override System.Void InstallBindings()
    // Offset: 0x10F35D4
    // Implemented from: Zenject.InstallerBase
    // Base method: System.Void InstallerBase::InstallBindings()
    void InstallBindings();
  }; // Zenject.DefaultGameObjectParentInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::DefaultGameObjectParentInstaller*, "Zenject", "DefaultGameObjectParentInstaller");
#pragma pack(pop)