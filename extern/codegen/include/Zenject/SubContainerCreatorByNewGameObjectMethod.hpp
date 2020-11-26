// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByNewGameObjectDynamicContext
#include "Zenject/SubContainerCreatorByNewGameObjectDynamicContext.hpp"
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
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: GameObjectContext
  class GameObjectContext;
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
  // Autogenerated type: Zenject.SubContainerCreatorByNewGameObjectMethod
  class SubContainerCreatorByNewGameObjectMethod : public Zenject::SubContainerCreatorByNewGameObjectDynamicContext {
    public:
    // private readonly System.Action`1<Zenject.DiContainer> _installerMethod
    // Offset: 0x20
    System::Action_1<Zenject::DiContainer*>* installerMethod;
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.Action`1<Zenject.DiContainer> installerMethod)
    // Offset: 0x1354900
    static SubContainerCreatorByNewGameObjectMethod* New_ctor(Zenject::DiContainer* container, Zenject::GameObjectCreationParameters* gameObjectBindInfo, System::Action_1<Zenject::DiContainer*>* installerMethod);
    // protected override System.Void AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    // Offset: 0x13564F0
    // Implemented from: Zenject.SubContainerCreatorDynamicContext
    // Base method: System.Void SubContainerCreatorDynamicContext::AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::GameObjectContext* context);
  }; // Zenject.SubContainerCreatorByNewGameObjectMethod
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerCreatorByNewGameObjectMethod*, "Zenject", "SubContainerCreatorByNewGameObjectMethod");
#pragma pack(pop)
