// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScriptableObjectInstaller
#include "Zenject/ScriptableObjectInstaller.hpp"
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
  // Autogenerated type: Zenject.ScriptableObjectInstaller`1
  template<typename TDerived>
  class ScriptableObjectInstaller_1 : public Zenject::ScriptableObjectInstaller {
    public:
    // static public TDerived InstallFromResource(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(Zenject::DiContainer* container) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptableObjectInstaller_1<TDerived>*>::get(), "InstallFromResource", container));
    }
    // static public TDerived InstallFromResource(System.String resourcePath, Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(::Il2CppString* resourcePath, Zenject::DiContainer* container) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptableObjectInstaller_1<TDerived>*>::get(), "InstallFromResource", resourcePath, container));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.ScriptableObjectInstaller
    // Base method: System.Void ScriptableObjectInstaller::.ctor()
    // Base method: System.Void ScriptableObjectInstallerBase::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScriptableObjectInstaller_1<TDerived>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<ScriptableObjectInstaller_1<TDerived>*>());
    }
  }; // Zenject.ScriptableObjectInstaller`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ScriptableObjectInstaller_1, "Zenject", "ScriptableObjectInstaller`1");
#pragma pack(pop)