// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IInstaller
#include "Zenject/IInstaller.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.InstallerBase
  class InstallerBase : public ::Il2CppObject/*, public Zenject::IInstaller*/ {
    public:
    // private Zenject.DiContainer _container
    // Offset: 0x10
    Zenject::DiContainer* container;
    // Creating interface conversion operator: operator Zenject::IInstaller
    operator Zenject::IInstaller() noexcept {
      return *reinterpret_cast<Zenject::IInstaller*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return container;
    }
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x12A22D4
    Zenject::DiContainer* get_Container();
    // public System.Boolean get_IsEnabled()
    // Offset: 0x12A22DC
    // Implemented from: Zenject.IInstaller
    // Base method: System.Boolean IInstaller::get_IsEnabled()
    bool get_IsEnabled();
    // Creating proxy method: Zenject_IInstaller_get_IsEnabled
    // Maps to method: get_IsEnabled
    bool Zenject_IInstaller_get_IsEnabled();
    // public System.Void InstallBindings()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IInstaller
    // Base method: System.Void IInstaller::InstallBindings()
    void InstallBindings();
    // protected System.Void .ctor()
    // Offset: 0x12A22CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static InstallerBase* New_ctor();
  }; // Zenject.InstallerBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::InstallerBase*, "Zenject", "InstallerBase");
#pragma pack(pop)