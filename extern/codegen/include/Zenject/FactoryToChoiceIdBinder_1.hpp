// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryArgumentsToChoiceBinder`1
#include "Zenject/FactoryArgumentsToChoiceBinder_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactoryToChoiceIdBinder`1
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D04054
  template<typename TContract>
  class FactoryToChoiceIdBinder_1 : public Zenject::FactoryArgumentsToChoiceBinder_1<TContract> {
    public:
    // Creating value type constructor for type: FactoryToChoiceIdBinder_1
    FactoryToChoiceIdBinder_1() noexcept {}
    // public Zenject.FactoryArgumentsToChoiceBinder`1<TContract> WithId(System.Object identifier)
    // Offset: 0xFFFFFFFF
    Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* WithId(::Il2CppObject* identifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceIdBinder_1::WithId");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WithId", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(identifier)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*, false>(this, ___internal__method, identifier);
    }
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactoryArgumentsToChoiceBinder`1
    // Base method: System.Void FactoryArgumentsToChoiceBinder_1::.ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Base method: System.Void FactoryToChoiceBinder_1::.ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Base method: System.Void FactoryFromBinder_1::.ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactoryToChoiceIdBinder_1<TContract>* New_ctor(Zenject::DiContainer* container, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryToChoiceIdBinder_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactoryToChoiceIdBinder_1<TContract>*, creationType>(container, bindInfo, factoryBindInfo)));
    }
  }; // Zenject.FactoryToChoiceIdBinder`1
  // Could not write size check! Type: Zenject.FactoryToChoiceIdBinder`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryToChoiceIdBinder_1, "Zenject", "FactoryToChoiceIdBinder`1");
