// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/ConcreteIdArgConditionCopyNonLazyBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
  class ScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // public Zenject.ConcreteIdArgConditionCopyNonLazyBinder AsCached()
    // Offset: 0xFCE64C
    Zenject::ConcreteIdArgConditionCopyNonLazyBinder* AsCached();
    // public Zenject.ConcreteIdArgConditionCopyNonLazyBinder AsSingle()
    // Offset: 0xFC9AF4
    Zenject::ConcreteIdArgConditionCopyNonLazyBinder* AsSingle();
    // public Zenject.ConcreteIdArgConditionCopyNonLazyBinder AsTransient()
    // Offset: 0xFCE66C
    Zenject::ConcreteIdArgConditionCopyNonLazyBinder* AsTransient();
    // public System.Void .ctor(Zenject.BindInfo bindInfo)
    // Offset: 0xFCE644
    // Implemented from: Zenject.ConcreteIdArgConditionCopyNonLazyBinder
    // Base method: System.Void ConcreteIdArgConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void ArgConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void InstantiateCallbackConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void ConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void CopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void NonLazyBinder::.ctor(Zenject.BindInfo bindInfo)
    // Base method: System.Void IfNotBoundBinder::.ctor(Zenject.BindInfo bindInfo)
    static ScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo);
  }; // Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "ScopeConcreteIdArgConditionCopyNonLazyBinder");
#pragma pack(pop)
