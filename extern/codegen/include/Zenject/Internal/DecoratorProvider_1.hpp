// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.Internal.IDecoratorProvider
#include "Zenject/Internal/IDecoratorProvider.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IFactory`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class IFactory_2;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Completed forward declares
// Type namespace: Zenject.Internal
namespace Zenject::Internal {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.Internal.DecoratorProvider`1
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D04C4C
  template<typename TContract>
  class DecoratorProvider_1 : public ::Il2CppObject/*, public Zenject::Internal::IDecoratorProvider*/ {
    public:
    // private readonly System.Collections.Generic.Dictionary`2<Zenject.IProvider,System.Collections.Generic.List`1<System.Object>> _cachedInstances
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<Zenject::IProvider*, System::Collections::Generic::List_1<::Il2CppObject*>*>* cachedInstances;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<Zenject::IProvider*, System::Collections::Generic::List_1<::Il2CppObject*>*>*) == 0x8);
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // private readonly System.Collections.Generic.List`1<System.Guid> _factoryBindIds
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<System::Guid>* factoryBindIds;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<System::Guid>*) == 0x8);
    // private System.Collections.Generic.List`1<Zenject.IFactory`2<TContract,TContract>> _decoratorFactories
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::List_1<Zenject::IFactory_2<TContract, TContract>*>* decoratorFactories;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<Zenject::IFactory_2<TContract, TContract>*>*) == 0x8);
    // Creating value type constructor for type: DecoratorProvider_1
    DecoratorProvider_1(System::Collections::Generic::Dictionary_2<Zenject::IProvider*, System::Collections::Generic::List_1<::Il2CppObject*>*>* cachedInstances_ = {}, Zenject::DiContainer* container_ = {}, System::Collections::Generic::List_1<System::Guid>* factoryBindIds_ = {}, System::Collections::Generic::List_1<Zenject::IFactory_2<TContract, TContract>*>* decoratorFactories_ = {}) noexcept : cachedInstances{cachedInstances_}, container{container_}, factoryBindIds{factoryBindIds_}, decoratorFactories{decoratorFactories_} {}
    // Creating interface conversion operator: operator Zenject::Internal::IDecoratorProvider
    operator Zenject::Internal::IDecoratorProvider() noexcept {
      return *reinterpret_cast<Zenject::Internal::IDecoratorProvider*>(this);
    }
    // public System.Void .ctor(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DecoratorProvider_1<TContract>* New_ctor(Zenject::DiContainer* container) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::DecoratorProvider_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DecoratorProvider_1<TContract>*, creationType>(container)));
    }
    // public System.Void AddFactoryId(System.Guid factoryBindId)
    // Offset: 0xFFFFFFFF
    void AddFactoryId(System::Guid factoryBindId) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::DecoratorProvider_1::AddFactoryId");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddFactoryId", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(factoryBindId)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, factoryBindId);
    }
    // private System.Void LazyInitializeDecoratorFactories()
    // Offset: 0xFFFFFFFF
    void LazyInitializeDecoratorFactories() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::DecoratorProvider_1::LazyInitializeDecoratorFactories");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "LazyInitializeDecoratorFactories", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
    // private System.Void WrapProviderInstances(Zenject.IProvider provider, Zenject.InjectContext context, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    void WrapProviderInstances(Zenject::IProvider* provider, Zenject::InjectContext* context, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::DecoratorProvider_1::WrapProviderInstances");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "WrapProviderInstances", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider, context, buffer)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, provider, context, buffer);
    }
    // private System.Object DecorateInstance(System.Object instance, Zenject.InjectContext context)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* DecorateInstance(::Il2CppObject* instance, Zenject::InjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::DecoratorProvider_1::DecorateInstance");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "DecorateInstance", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(instance, context)));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppObject*, false>(this, ___internal__method, instance, context);
    }
    // public System.Void GetAllInstances(Zenject.IProvider provider, Zenject.InjectContext context, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.Internal.IDecoratorProvider
    // Base method: System.Void IDecoratorProvider::GetAllInstances(Zenject.IProvider provider, Zenject.InjectContext context, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstances(Zenject::IProvider* provider, Zenject::InjectContext* context, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::Internal::DecoratorProvider_1::GetAllInstances");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetAllInstances", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(provider, context, buffer)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, provider, context, buffer);
    }
  }; // Zenject.Internal.DecoratorProvider`1
  // Could not write size check! Type: Zenject.Internal.DecoratorProvider`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Internal::DecoratorProvider_1, "Zenject.Internal", "DecoratorProvider`1");
