// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstallerBase
#include "Zenject/MonoInstallerBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.MonoInstaller`2
  // [] Offset: FFFFFFFF
  template<typename TParam1, typename TDerived>
  class MonoInstaller_2 : public Zenject::MonoInstallerBase {
    public:
    // Creating value type constructor for type: MonoInstaller_2
    MonoInstaller_2() noexcept {}
    // static public TDerived InstallFromResource(Zenject.DiContainer container, TParam1 p1)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(Zenject::DiContainer* container, TParam1 p1) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstaller_2::InstallFromResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_2<TParam1, TDerived>*>::get(), "InstallFromResource", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container, p1))));
      return ::il2cpp_utils::RunMethodThrow<TDerived, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, container, p1);
    }
    // static public TDerived InstallFromResource(System.String resourcePath, Zenject.DiContainer container, TParam1 p1)
    // Offset: 0xFFFFFFFF
    static TDerived InstallFromResource(::Il2CppString* resourcePath, Zenject::DiContainer* container, TParam1 p1) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstaller_2::InstallFromResource");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<MonoInstaller_2<TParam1, TDerived>*>::get(), "InstallFromResource", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(resourcePath, container, p1))));
      return ::il2cpp_utils::RunMethodThrow<TDerived, false>(static_cast<Il2CppClass*>(nullptr), ___internal__method, resourcePath, container, p1);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoInstaller_2<TParam1, TDerived>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::MonoInstaller_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoInstaller_2<TParam1, TDerived>*, creationType>()));
    }
  }; // Zenject.MonoInstaller`2
  // Could not write size check! Type: Zenject.MonoInstaller`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoInstaller_2, "Zenject", "MonoInstaller`2");
