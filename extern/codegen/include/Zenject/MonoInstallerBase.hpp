// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
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
  // Autogenerated type: Zenject.MonoInstallerBase
  class MonoInstallerBase : public UnityEngine::MonoBehaviour/*, public Zenject::IInstaller*/ {
    public:
    // private Zenject.DiContainer <Container>k__BackingField
    // Offset: 0x18
    Zenject::DiContainer* Container;
    // Creating interface conversion operator: operator Zenject::IInstaller
    operator Zenject::IInstaller() noexcept {
      return *reinterpret_cast<Zenject::IInstaller*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected Zenject.DiContainer get_Container()
    // Offset: 0x13485B4
    Zenject::DiContainer* get_Container();
    // protected System.Void set_Container(Zenject.DiContainer value)
    // Offset: 0x13485BC
    void set_Container(Zenject::DiContainer* value);
    // public System.Void Start()
    // Offset: 0x13485CC
    void Start();
    // public System.Boolean get_IsEnabled()
    // Offset: 0x13485C4
    // Implemented from: Zenject.IInstaller
    // Base method: System.Boolean IInstaller::get_IsEnabled()
    bool get_IsEnabled();
    // Creating proxy method: Zenject_IInstaller_get_IsEnabled
    // Maps to method: get_IsEnabled
    bool Zenject_IInstaller_get_IsEnabled();
    // public System.Void InstallBindings()
    // Offset: 0x13485D0
    // Implemented from: Zenject.IInstaller
    // Base method: System.Void IInstaller::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0x13485AC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MonoInstallerBase* New_ctor();
  }; // Zenject.MonoInstallerBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::MonoInstallerBase*, "Zenject", "MonoInstallerBase");
#pragma pack(pop)