// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/ScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: SubContainerCreatorBindInfo
  class SubContainerCreatorBindInfo;
  // Forward declaring type: BindInfo
  class BindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
  class DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // private Zenject.SubContainerCreatorBindInfo <SubContainerCreatorBindInfo>k__BackingField
    // Offset: 0x20
    Zenject::SubContainerCreatorBindInfo* SubContainerCreatorBindInfo;
    // public System.Void .ctor(Zenject.SubContainerCreatorBindInfo subContainerBindInfo, Zenject.BindInfo bindInfo)
    // Offset: 0xD70FB8
    static DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(Zenject::SubContainerCreatorBindInfo* subContainerBindInfo, Zenject::BindInfo* bindInfo);
    // protected Zenject.SubContainerCreatorBindInfo get_SubContainerCreatorBindInfo()
    // Offset: 0xD70FF0
    Zenject::SubContainerCreatorBindInfo* get_SubContainerCreatorBindInfo();
    // private System.Void set_SubContainerCreatorBindInfo(Zenject.SubContainerCreatorBindInfo value)
    // Offset: 0xD70FF8
    void set_SubContainerCreatorBindInfo(Zenject::SubContainerCreatorBindInfo* value);
    // public Zenject.ScopeConcreteIdArgConditionCopyNonLazyBinder WithDefaultGameObjectParent(System.String defaultParentName)
    // Offset: 0xD71000
    Zenject::ScopeConcreteIdArgConditionCopyNonLazyBinder* WithDefaultGameObjectParent(::Il2CppString* defaultParentName);
  }; // Zenject.DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "DefaultParentScopeConcreteIdArgConditionCopyNonLazyBinder");
#pragma pack(pop)
