// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass56_0
  class FromBinder::$$c__DisplayClass56_0 : public ::Il2CppObject {
    public:
    // public System.String resourcePath
    // Offset: 0x10
    ::Il2CppString* resourcePath;
    // public Zenject.FromBinder <>4__this
    // Offset: 0x18
    Zenject::FromBinder* $$4__this;
    // public System.Boolean createNew
    // Offset: 0x20
    bool createNew;
    // Zenject.IProvider <FromScriptableObjectResourceInternal>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x129B2BC
    Zenject::IProvider* $FromScriptableObjectResourceInternal$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x129979C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass56_0* New_ctor();
  }; // Zenject.FromBinder/<>c__DisplayClass56_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass56_0*, "Zenject", "FromBinder/<>c__DisplayClass56_0");
#pragma pack(pop)
