// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConditionCopyNonLazyBinder
#include "Zenject/ConditionCopyNonLazyBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ConditionCopyNonLazyBinder/<>c__DisplayClass3_1
  class ConditionCopyNonLazyBinder::$$c__DisplayClass3_1 : public ::Il2CppObject {
    public:
    // public Zenject.InjectContext r
    // Offset: 0x10
    Zenject::InjectContext* r;
    // Creating conversion operator: operator Zenject::InjectContext*
    constexpr operator Zenject::InjectContext*() const noexcept {
      return r;
    }
    // System.Boolean <WhenInjectedInto>b__1(System.Type x)
    // Offset: 0xD6CFA8
    bool $WhenInjectedInto$b__1(System::Type* x);
    // public System.Void .ctor()
    // Offset: 0xD6CFA0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ConditionCopyNonLazyBinder::$$c__DisplayClass3_1* New_ctor();
  }; // Zenject.ConditionCopyNonLazyBinder/<>c__DisplayClass3_1
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConditionCopyNonLazyBinder::$$c__DisplayClass3_1*, "Zenject", "ConditionCopyNonLazyBinder/<>c__DisplayClass3_1");
#pragma pack(pop)
