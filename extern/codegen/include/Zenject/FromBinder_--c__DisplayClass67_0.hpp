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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Type
  class Type;
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
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass67_0
  class FromBinder::$$c__DisplayClass67_0 : public ::Il2CppObject {
    public:
    // public System.Func`2<Zenject.InjectContext,System.Object> method
    // Offset: 0x10
    System::Func_2<Zenject::InjectContext*, ::Il2CppObject*>* method;
    // Creating conversion operator: operator System::Func_2<Zenject::InjectContext*, ::Il2CppObject*>*
    constexpr operator System::Func_2<Zenject::InjectContext*, ::Il2CppObject*>*() const noexcept {
      return method;
    }
    // Zenject.IProvider <FromMethodUntyped>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x129D11C
    Zenject::IProvider* $FromMethodUntyped$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x129A4D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FromBinder::$$c__DisplayClass67_0* New_ctor();
  }; // Zenject.FromBinder/<>c__DisplayClass67_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass67_0*, "Zenject", "FromBinder/<>c__DisplayClass67_0");
#pragma pack(pop)
