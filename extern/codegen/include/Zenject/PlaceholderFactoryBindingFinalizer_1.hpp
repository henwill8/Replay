// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ProviderBindingFinalizer
#include "Zenject/ProviderBindingFinalizer.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PlaceholderFactoryBindingFinalizer`1
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D040D4
  template<typename TContract>
  class PlaceholderFactoryBindingFinalizer_1 : public Zenject::ProviderBindingFinalizer {
    public:
    // private readonly Zenject.FactoryBindInfo _factoryBindInfo
    // Size: 0x8
    // Offset: 0x0
    Zenject::FactoryBindInfo* factoryBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::FactoryBindInfo*) == 0x8);
    // Creating value type constructor for type: PlaceholderFactoryBindingFinalizer_1
    PlaceholderFactoryBindingFinalizer_1(Zenject::FactoryBindInfo* factoryBindInfo_ = {}) noexcept : factoryBindInfo{factoryBindInfo_} {}
    // Deleting conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept = delete;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlaceholderFactoryBindingFinalizer_1<TContract>* New_ctor(Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactoryBindingFinalizer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlaceholderFactoryBindingFinalizer_1<TContract>*, creationType>(bindInfo, factoryBindInfo)));
    }
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PlaceholderFactoryBindingFinalizer_1::OnFinalizeBinding");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "OnFinalizeBinding", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, container);
    }
  }; // Zenject.PlaceholderFactoryBindingFinalizer`1
  // Could not write size check! Type: Zenject.PlaceholderFactoryBindingFinalizer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PlaceholderFactoryBindingFinalizer_1, "Zenject", "PlaceholderFactoryBindingFinalizer`1");
