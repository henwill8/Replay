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
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: IPrefabInstantiator
  class IPrefabInstantiator;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`3<T1, T2, TResult>
  template<typename T1, typename T2, typename TResult>
  class Func_3;
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.PrefabBindingFinalizer
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D04224
  class PrefabBindingFinalizer : public Zenject::ProviderBindingFinalizer {
    public:
    // Nested type: Zenject::PrefabBindingFinalizer::$$c__DisplayClass5_0
    class $$c__DisplayClass5_0;
    // Nested type: Zenject::PrefabBindingFinalizer::$$c__DisplayClass5_1
    class $$c__DisplayClass5_1;
    // Nested type: Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_0
    class $$c__DisplayClass6_0;
    // Nested type: Zenject::PrefabBindingFinalizer::$$c__DisplayClass6_1
    class $$c__DisplayClass6_1;
    // private readonly Zenject.GameObjectCreationParameters _gameObjectBindInfo
    // Size: 0x8
    // Offset: 0x18
    Zenject::GameObjectCreationParameters* gameObjectBindInfo;
    // Field size check
    static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
    // private readonly UnityEngine.Object _prefab
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Object* prefab;
    // Field size check
    static_assert(sizeof(UnityEngine::Object*) == 0x8);
    // private readonly System.Func`3<System.Type,Zenject.IPrefabInstantiator,Zenject.IProvider> _providerFactory
    // Size: 0x8
    // Offset: 0x28
    System::Func_3<System::Type*, Zenject::IPrefabInstantiator*, Zenject::IProvider*>* providerFactory;
    // Field size check
    static_assert(sizeof(System::Func_3<System::Type*, Zenject::IPrefabInstantiator*, Zenject::IProvider*>*) == 0x8);
    // Creating value type constructor for type: PrefabBindingFinalizer
    PrefabBindingFinalizer(Zenject::GameObjectCreationParameters* gameObjectBindInfo_ = {}, UnityEngine::Object* prefab_ = {}, System::Func_3<System::Type*, Zenject::IPrefabInstantiator*, Zenject::IProvider*>* providerFactory_ = {}) noexcept : gameObjectBindInfo{gameObjectBindInfo_}, prefab{prefab_}, providerFactory{providerFactory_} {}
    // Deleting conversion operator: operator Zenject::BindInfo*
    constexpr operator Zenject::BindInfo*() const noexcept = delete;
    // public System.Void .ctor(Zenject.BindInfo bindInfo, Zenject.GameObjectCreationParameters gameObjectBindInfo, UnityEngine.Object prefab, System.Func`3<System.Type,Zenject.IPrefabInstantiator,Zenject.IProvider> providerFactory)
    // Offset: 0x15B5C84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabBindingFinalizer* New_ctor(Zenject::BindInfo* bindInfo, Zenject::GameObjectCreationParameters* gameObjectBindInfo, UnityEngine::Object* prefab, System::Func_3<System::Type*, Zenject::IPrefabInstantiator*, Zenject::IProvider*>* providerFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabBindingFinalizer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabBindingFinalizer*, creationType>(bindInfo, gameObjectBindInfo, prefab, providerFactory)));
    }
    // private System.Void FinalizeBindingConcrete(Zenject.DiContainer container, System.Collections.Generic.List`1<System.Type> concreteTypes)
    // Offset: 0x15B60BC
    void FinalizeBindingConcrete(Zenject::DiContainer* container, System::Collections::Generic::List_1<System::Type*>* concreteTypes);
    // private System.Void FinalizeBindingSelf(Zenject.DiContainer container)
    // Offset: 0x15B5DD0
    void FinalizeBindingSelf(Zenject::DiContainer* container);
    // protected override System.Void OnFinalizeBinding(Zenject.DiContainer container)
    // Offset: 0x15B5D38
    // Implemented from: Zenject.ProviderBindingFinalizer
    // Base method: System.Void ProviderBindingFinalizer::OnFinalizeBinding(Zenject.DiContainer container)
    void OnFinalizeBinding(Zenject::DiContainer* container);
  }; // Zenject.PrefabBindingFinalizer
  #pragma pack(pop)
  static check_size<sizeof(PrefabBindingFinalizer), 40 + sizeof(System::Func_3<System::Type*, Zenject::IPrefabInstantiator*, Zenject::IProvider*>*)> __Zenject_PrefabBindingFinalizerSizeCheck;
  static_assert(sizeof(PrefabBindingFinalizer) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::PrefabBindingFinalizer*, "Zenject", "PrefabBindingFinalizer");
