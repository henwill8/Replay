// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByMethodBase
#include "Zenject/SubContainerCreatorByMethodBase.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
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
  // Autogenerated type: Zenject.SubContainerCreatorByMethod
  class SubContainerCreatorByMethod : public Zenject::SubContainerCreatorByMethodBase {
    public:
    // private readonly System.Action`1<Zenject.DiContainer> _installMethod
    // Offset: 0x20
    System::Action_1<Zenject::DiContainer*>* installMethod;
    // Creating conversion operator: operator System::Action_1<Zenject::DiContainer*>*
    constexpr operator System::Action_1<Zenject::DiContainer*>*() const noexcept {
      return installMethod;
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.SubContainerCreatorBindInfo containerBindInfo, System.Action`1<Zenject.DiContainer> installMethod)
    // Offset: 0xFD089C
    static SubContainerCreatorByMethod* New_ctor(Zenject::DiContainer* container, Zenject::SubContainerCreatorBindInfo* containerBindInfo, System::Action_1<Zenject::DiContainer*>* installMethod);
    // public override Zenject.DiContainer CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    // Offset: 0xFD2120
    // Implemented from: Zenject.SubContainerCreatorByMethodBase
    // Base method: Zenject.DiContainer SubContainerCreatorByMethodBase::CreateSubContainer(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.InjectContext context)
    Zenject::DiContainer* CreateSubContainer(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::InjectContext* context);
  }; // Zenject.SubContainerCreatorByMethod
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByMethod*, "Zenject", "SubContainerCreatorByMethod");
#pragma pack(pop)
