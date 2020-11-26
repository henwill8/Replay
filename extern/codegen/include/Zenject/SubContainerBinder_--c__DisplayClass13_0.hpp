// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerBinder
#include "Zenject/SubContainerBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: ISubContainerCreator
  class ISubContainerCreator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.SubContainerBinder/<>c__DisplayClass13_0
  class SubContainerBinder::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    // public UnityEngine.Object prefab
    // Offset: 0x10
    UnityEngine::Object* prefab;
    // public Zenject.GameObjectCreationParameters gameObjectInfo
    // Offset: 0x18
    Zenject::GameObjectCreationParameters* gameObjectInfo;
    // public System.Action`1<Zenject.DiContainer> installerMethod
    // Offset: 0x20
    System::Action_1<Zenject::DiContainer*>* installerMethod;
    // Zenject.ISubContainerCreator <ByNewPrefabMethod>b__0(Zenject.DiContainer container)
    // Offset: 0x1354930
    Zenject::ISubContainerCreator* $ByNewPrefabMethod$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x1353BF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SubContainerBinder::$$c__DisplayClass13_0* New_ctor();
  }; // Zenject.SubContainerBinder/<>c__DisplayClass13_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::SubContainerBinder::$$c__DisplayClass13_0*, "Zenject", "SubContainerBinder/<>c__DisplayClass13_0");
#pragma pack(pop)
