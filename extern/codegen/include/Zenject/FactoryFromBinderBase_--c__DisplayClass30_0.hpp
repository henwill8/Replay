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
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinderBase/<>c__DisplayClass30_0
  class FactoryFromBinderBase::$$c__DisplayClass30_0 : public ::Il2CppObject {
    public:
    // public Zenject.FactoryFromBinderBase <>4__this
    // Offset: 0x10
    Zenject::FactoryFromBinderBase* $$4__this;
    // public Zenject.GameObjectCreationParameters gameObjectInfo
    // Offset: 0x18
    Zenject::GameObjectCreationParameters* gameObjectInfo;
    // public System.String resourcePath
    // Offset: 0x20
    ::Il2CppString* resourcePath;
    // Zenject.IProvider <FromComponentInNewPrefabResource>b__0(Zenject.DiContainer container)
    // Offset: 0x1296E18
    Zenject::IProvider* $FromComponentInNewPrefabResource$b__0(Zenject::DiContainer* container);
    // public System.Void .ctor()
    // Offset: 0x1295FA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinderBase::$$c__DisplayClass30_0* New_ctor();
  }; // Zenject.FactoryFromBinderBase/<>c__DisplayClass30_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinderBase::$$c__DisplayClass30_0*, "Zenject", "FactoryFromBinderBase/<>c__DisplayClass30_0");
#pragma pack(pop)
