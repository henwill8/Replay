// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ISubContainerCreator
#include "Zenject/ISubContainerCreator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerCreatorByInstance
  class SubContainerCreatorByInstance : public ::Il2CppObject, public Zenject::ISubContainerCreator {
    public:
    // private readonly Zenject.DiContainer _subcontainer
    // Offset: 0x10
    Zenject::DiContainer* subcontainer;
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return subcontainer;
    }
    // public System.Void .ctor(Zenject.DiContainer subcontainer)
    // Offset: 0xFD112C
    static SubContainerCreatorByInstance* New_ctor(Zenject::DiContainer* subcontainer);
    // public Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0xFD1FD4
    // Implemented from: Zenject.ISubContainerCreator
    // Base method: Zenject.DiContainer ISubContainerCreator::CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context);
  }; // Zenject.SubContainerCreatorByInstance
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByInstance*, "Zenject", "SubContainerCreatorByInstance");
#pragma pack(pop)
