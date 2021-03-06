// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder
#include "Zenject/TransformScopeConcreteIdArgConditionCopyNonLazyBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D04164
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder : public Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder {
    public:
    // Creating value type constructor for type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
    NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder() noexcept {}
    // public Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder WithGameObjectName(System.String gameObjectName)
    // Offset: 0x15B4C5C
    Zenject::TransformScopeConcreteIdArgConditionCopyNonLazyBinder* WithGameObjectName(::Il2CppString* gameObjectName);
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.GameObjectCreationParameters gameObjectInfo)
    // Offset: 0x15B4BF4
    // Implemented from: Zenject.TransformScopeConcreteIdArgConditionCopyNonLazyBinder
    // Base method: System.Void TransformScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor(Zenject.BindInfo bindInfo, Zenject.GameObjectCreationParameters gameObjectInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* New_ctor(Zenject::BindInfo* bindInfo, Zenject::GameObjectCreationParameters* gameObjectInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, creationType>(bindInfo, gameObjectInfo)));
    }
  }; // Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, "Zenject", "NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder");
