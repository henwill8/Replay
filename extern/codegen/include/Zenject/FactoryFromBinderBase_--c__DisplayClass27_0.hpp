// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinderBase/<>c__DisplayClass27_0
  class FactoryFromBinderBase::$$c__DisplayClass27_0 : public ::Il2CppObject {
    public:
    // public System.Func`2<Zenject.InjectContext,UnityEngine.GameObject> gameObjectGetter
    // Offset: 0x10
    System::Func_2<Zenject::InjectContext*, UnityEngine::GameObject*>* gameObjectGetter;
    // public Zenject.FactoryFromBinderBase <>4__this
    // Offset: 0x18
    Zenject::FactoryFromBinderBase* $$4__this;
    // Zenject.IProvider <FromNewComponentOn>b__0(Zenject.DiContainer container)
    // Offset: 0xF32ABC
    Zenject::IProvider* $FromNewComponentOn$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0xF31CF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinderBase::$$c__DisplayClass27_0* New_ctor();
  }; // Zenject.FactoryFromBinderBase/<>c__DisplayClass27_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase::$$c__DisplayClass27_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass27_0");
#pragma pack(pop)
