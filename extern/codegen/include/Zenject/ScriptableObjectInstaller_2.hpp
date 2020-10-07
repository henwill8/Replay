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
  // Autogenerated type: Zenject.ScriptableObjectInstaller`2
  template<typename TParam1, typename TDerived>
  class ScriptableObjectInstaller_2 : public Zenject::ScriptableObjectInstallerBase {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TDerived>> || std::is_convertible_v<TDerived, Zenject::ScriptableObjectInstaller_2<TParam1, TDerived>*>));
    public:
    // static public TDerived InstallFromResource(Zenject.DiContainer container, TParam1 p1)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(Zenject::DiContainer* container, TParam1 p1) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptableObjectInstaller_2<TParam1, TDerived>*>::get(), "InstallFromResource", container, p1)));
    }
    // static public TDerived InstallFromResource(System.String resourcePath, Zenject.DiContainer container, TParam1 p1)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(::Il2CppString* resourcePath, Zenject::DiContainer* container, TParam1 p1) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<TDerived>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<ScriptableObjectInstaller_2<TParam1, TDerived>*>::get(), "InstallFromResource", resourcePath, container, p1)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.ScriptableObjectInstallerBase
    // Base method: System.Void ScriptableObjectInstallerBase::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ScriptableObjectInstaller_2<TParam1, TDerived>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<ScriptableObjectInstaller_2<TParam1, TDerived>*>()));
    }
  }; // Zenject.ScriptableObjectInstaller`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::ScriptableObjectInstaller_2, "Zenject", "ScriptableObjectInstaller`2");
#pragma pack(pop)
