// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactorySubContainerBinderBase`1
#include "Zenject/FactorySubContainerBinderBase_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass4_0 because it is already included!
  // Skipping declaration: <>c__DisplayClass8_0 because it is already included!
  // Forward declaring type: NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder
  class NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder;
  // Forward declaring type: IInstaller
  class IInstaller;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: IProvider
  class IProvider;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FactorySubContainerBinderWithParams`1
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D03F94
  template<typename TContract>
  class FactorySubContainerBinderWithParams_1 : public Zenject::FactorySubContainerBinderBase_1<TContract> {
    public:
    // Nested type: Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0<TContract>
    class $$c__DisplayClass4_0;
    // Nested type: Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0<TContract>
    class $$c__DisplayClass8_0;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinderWithParams`1/<>c__DisplayClass4_0
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D0548C
    class $$c__DisplayClass4_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinderWithParams_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass4_0";
      // public Zenject.FactorySubContainerBinderWithParams`1<TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinderWithParams_1<TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinderWithParams_1<TContract>*) == 0x8);
      // public System.Type installerType
      // Size: 0x8
      // Offset: 0x0
      System::Type* installerType;
      // Field size check
      static_assert(sizeof(System::Type*) == 0x8);
      // public UnityEngine.Object prefab
      // Size: 0x8
      // Offset: 0x0
      UnityEngine::Object* prefab;
      // Field size check
      static_assert(sizeof(UnityEngine::Object*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass4_0
      $$c__DisplayClass4_0(Zenject::FactorySubContainerBinderWithParams_1<TContract>* $$4__this_ = {}, System::Type* installerType_ = {}, UnityEngine::Object* prefab_ = {}, Zenject::GameObjectCreationParameters* gameObjectInfo_ = {}) noexcept : $$4__this{$$4__this_}, installerType{installerType_}, prefab{prefab_}, gameObjectInfo{gameObjectInfo_} {}
      // Zenject.IProvider <ByNewContextPrefab>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByNewContextPrefab$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::<ByNewContextPrefab>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewContextPrefab>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container))));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass4_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass4_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass4_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinderWithParams`1/<>c__DisplayClass4_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinderWithParams`1/<>c__DisplayClass4_0 is generic, or has no fields that are valid for size checks!
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.FactorySubContainerBinderWithParams`1/<>c__DisplayClass8_0
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D0549C
    class $$c__DisplayClass8_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = FactorySubContainerBinderWithParams_1<TContract>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass8_0";
      // public Zenject.FactorySubContainerBinderWithParams`1<TContract> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::FactorySubContainerBinderWithParams_1<TContract>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::FactorySubContainerBinderWithParams_1<TContract>*) == 0x8);
      // public System.Type installerType
      // Size: 0x8
      // Offset: 0x0
      System::Type* installerType;
      // Field size check
      static_assert(sizeof(System::Type*) == 0x8);
      // public System.String resourcePath
      // Size: 0x8
      // Offset: 0x0
      ::Il2CppString* resourcePath;
      // Field size check
      static_assert(sizeof(::Il2CppString*) == 0x8);
      // public Zenject.GameObjectCreationParameters gameObjectInfo
      // Size: 0x8
      // Offset: 0x0
      Zenject::GameObjectCreationParameters* gameObjectInfo;
      // Field size check
      static_assert(sizeof(Zenject::GameObjectCreationParameters*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass8_0
      $$c__DisplayClass8_0(Zenject::FactorySubContainerBinderWithParams_1<TContract>* $$4__this_ = {}, System::Type* installerType_ = {}, ::Il2CppString* resourcePath_ = {}, Zenject::GameObjectCreationParameters* gameObjectInfo_ = {}) noexcept : $$4__this{$$4__this_}, installerType{installerType_}, resourcePath{resourcePath_}, gameObjectInfo{gameObjectInfo_} {}
      // Zenject.IProvider <ByNewContextPrefabResource>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $ByNewContextPrefabResource$b__0(Zenject::DiContainer* container) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::<ByNewContextPrefabResource>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<ByNewContextPrefabResource>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(container))));
        return ::il2cpp_utils::RunMethodThrow<Zenject::IProvider*, false>(this, ___internal__method, container);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass8_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::$$c__DisplayClass8_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename FactorySubContainerBinderWithParams_1<TContract>::$$c__DisplayClass8_0*, creationType>()));
      }
    }; // Zenject.FactorySubContainerBinderWithParams`1/<>c__DisplayClass8_0
    // Could not write size check! Type: Zenject.FactorySubContainerBinderWithParams`1/<>c__DisplayClass8_0 is generic, or has no fields that are valid for size checks!
    // Creating value type constructor for type: FactorySubContainerBinderWithParams_1
    FactorySubContainerBinderWithParams_1() noexcept {}
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefab(System.Type installerType, UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(System::Type* installerType, UnityEngine::Object* prefab) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewPrefab");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewPrefab", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(installerType, prefab)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerType, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefab(UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefab(UnityEngine::Object* prefab) {
      static_assert(std::is_base_of_v<Zenject::IInstaller, std::remove_pointer_t<TInstaller>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewPrefab");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewPrefab", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::il2cpp_utils::ExtractTypes(prefab)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefab(UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(UnityEngine::Object* prefab) {
      static_assert(std::is_base_of_v<Zenject::IInstaller, std::remove_pointer_t<TInstaller>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewContextPrefab");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewContextPrefab", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::il2cpp_utils::ExtractTypes(prefab)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefab(System.Type installerType, UnityEngine.Object prefab)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefab(System::Type* installerType, UnityEngine::Object* prefab) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewContextPrefab");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewContextPrefab", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(installerType, prefab)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerType, prefab);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResource(System.String resourcePath)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(::Il2CppString* resourcePath) {
      static_assert(std::is_base_of_v<Zenject::IInstaller, std::remove_pointer_t<TInstaller>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewPrefabResource");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewPrefabResource", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::il2cpp_utils::ExtractTypes(resourcePath)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, resourcePath);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewPrefabResource(System.Type installerType, System.String resourcePath)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewPrefabResource(System::Type* installerType, ::Il2CppString* resourcePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewPrefabResource");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewPrefabResource", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(installerType, resourcePath)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerType, resourcePath);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefabResource(System.String resourcePath)
    // Offset: 0xFFFFFFFF
    template<class TInstaller>
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(::Il2CppString* resourcePath) {
      static_assert(std::is_base_of_v<Zenject::IInstaller, std::remove_pointer_t<TInstaller>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewContextPrefabResource");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewContextPrefabResource", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}, ::il2cpp_utils::ExtractTypes(resourcePath)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get()}));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___generic__method, resourcePath);
    }
    // public Zenject.NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder ByNewContextPrefabResource(System.Type installerType, System.String resourcePath)
    // Offset: 0xFFFFFFFF
    Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder* ByNewContextPrefabResource(System::Type* installerType, ::Il2CppString* resourcePath) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::ByNewContextPrefabResource");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "ByNewContextPrefabResource", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(installerType, resourcePath)));
      return ::il2cpp_utils::RunMethodThrow<Zenject::NameTransformScopeConcreteIdArgConditionCopyNonLazyBinder*, false>(this, ___internal__method, installerType, resourcePath);
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.FactorySubContainerBinderBase`1
    // Base method: System.Void FactorySubContainerBinderBase_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, System.Object subIdentifier)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FactorySubContainerBinderWithParams_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, ::Il2CppObject* subIdentifier) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactorySubContainerBinderWithParams_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FactorySubContainerBinderWithParams_1<TContract>*, creationType>(bindContainer, bindInfo, factoryBindInfo, subIdentifier)));
    }
  }; // Zenject.FactorySubContainerBinderWithParams`1
  // Could not write size check! Type: Zenject.FactorySubContainerBinderWithParams`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactorySubContainerBinderWithParams_1, "Zenject", "FactorySubContainerBinderWithParams`1");
