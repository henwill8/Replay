// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PrefabBindingFinalizer
#include "Zenject/PrefabBindingFinalizer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabBindingFinalizer/<>c__DisplayClass6_0
  class PrefabBindingFinalizer::$$c__DisplayClass6_0 : public ::Il2CppObject {
    public:
    // public Zenject.PrefabBindingFinalizer <>4__this
    // Offset: 0x10
    Zenject::PrefabBindingFinalizer* $$4__this;
    // public Zenject.DiContainer container
    // Offset: 0x18
    Zenject::DiContainer* container;
    // Zenject.IProvider <FinalizeBindingSelf>b__0(Zenject.DiContainer _, System.Type contractType)
    // Offset: 0xFC6BF4
    Zenject::IProvider* $FinalizeBindingSelf$b__0(Zenject::DiContainer* _, System::Type* contractType);
    // public System.Void .ctor()
    // Offset: 0xFC6874
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabBindingFinalizer::$$c__DisplayClass6_0* New_ctor();
  }; // Zenject.PrefabBindingFinalizer/<>c__DisplayClass6_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_0*, "Zenject", "PrefabBindingFinalizer/<>c__DisplayClass6_0");
#pragma pack(pop)
