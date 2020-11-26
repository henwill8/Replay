// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScriptableObjectInstallerBase
#include "Zenject/ScriptableObjectInstallerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Autogenerated type: Zenject.ScriptableObjectInstaller`5
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TDerived>
  class ScriptableObjectInstaller_5 : public Zenject::ScriptableObjectInstallerBase {
    public:
    // static public TDerived InstallFromResource(Zenject.DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptableObjectInstaller_5<TParam1, TParam2, TParam3, TParam4, TDerived>*>::get(), "InstallFromResource", container, p1, p2, p3, p4)));
    }
    // static public TDerived InstallFromResource(System.String resourcePath, Zenject.DiContainer container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(::Il2CppString* resourcePath, Zenject::DiContainer* container, TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptableObjectInstaller_5<TParam1, TParam2, TParam3, TParam4, TDerived>*>::get(), "InstallFromResource", resourcePath, container, p1, p2, p3, p4)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.ScriptableObjectInstallerBase
    // Base method: System.Void ScriptableObjectInstallerBase::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScriptableObjectInstaller_5<TParam1, TParam2, TParam3, TParam4, TDerived>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<ScriptableObjectInstaller_5<TParam1, TParam2, TParam3, TParam4, TDerived>*>()));
    }
  }; // Zenject.ScriptableObjectInstaller`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ScriptableObjectInstaller_5, "Zenject", "ScriptableObjectInstaller`5");
#pragma pack(pop)
