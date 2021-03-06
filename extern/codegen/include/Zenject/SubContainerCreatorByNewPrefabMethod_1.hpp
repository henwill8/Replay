// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.SubContainerCreatorByNewPrefabDynamicContext
#include "Zenject/SubContainerCreatorByNewPrefabDynamicContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass2_0 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: IPrefabProvider
  class IPrefabProvider;
  // Forward declaring type: GameObjectCreationParameters
  class GameObjectCreationParameters;
  // Forward declaring type: GameObjectContext
  class GameObjectContext;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
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
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.SubContainerCreatorByNewPrefabMethod`1
  // [] Offset: FFFFFFFF
  // [NoReflectionBakingAttribute] Offset: D04AE4
  template<typename TParam1>
  class SubContainerCreatorByNewPrefabMethod_1 : public Zenject::SubContainerCreatorByNewPrefabDynamicContext {
    public:
    // Nested type: Zenject::SubContainerCreatorByNewPrefabMethod_1::$$c__DisplayClass2_0<TParam1>
    class $$c__DisplayClass2_0;
    // WARNING Size may be invalid!
    // Autogenerated type: Zenject.SubContainerCreatorByNewPrefabMethod`1/<>c__DisplayClass2_0
    // [] Offset: FFFFFFFF
    // [CompilerGeneratedAttribute] Offset: D05CAC
    class $$c__DisplayClass2_0 : public ::il2cpp_utils::il2cpp_type_check::NestedType, public ::Il2CppObject {
      public:
      using declaring_type = SubContainerCreatorByNewPrefabMethod_1<TParam1>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass2_0";
      // public Zenject.SubContainerCreatorByNewPrefabMethod`1<TParam1> <>4__this
      // Size: 0x8
      // Offset: 0x0
      Zenject::SubContainerCreatorByNewPrefabMethod_1<TParam1>* $$4__this;
      // Field size check
      static_assert(sizeof(Zenject::SubContainerCreatorByNewPrefabMethod_1<TParam1>*) == 0x8);
      // public System.Collections.Generic.List`1<Zenject.TypeValuePair> args
      // Size: 0x8
      // Offset: 0x0
      System::Collections::Generic::List_1<Zenject::TypeValuePair>* args;
      // Field size check
      static_assert(sizeof(System::Collections::Generic::List_1<Zenject::TypeValuePair>*) == 0x8);
      // Creating value type constructor for type: $$c__DisplayClass2_0
      $$c__DisplayClass2_0(Zenject::SubContainerCreatorByNewPrefabMethod_1<TParam1>* $$4__this_ = {}, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args_ = {}) noexcept : $$4__this{$$4__this_}, args{args_} {}
      // System.Void <AddInstallers>b__0(Zenject.DiContainer subContainer)
      // Offset: 0xFFFFFFFF
      void $AddInstallers$b__0(Zenject::DiContainer* subContainer) {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewPrefabMethod_1::$$c__DisplayClass2_0::<AddInstallers>b__0");
        static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(this, "<AddInstallers>b__0", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(subContainer))));
        ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, subContainer);
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
      static typename SubContainerCreatorByNewPrefabMethod_1<TParam1>::$$c__DisplayClass2_0* New_ctor() {
        static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewPrefabMethod_1::$$c__DisplayClass2_0::.ctor");
        return THROW_UNLESS((::il2cpp_utils::New<typename SubContainerCreatorByNewPrefabMethod_1<TParam1>::$$c__DisplayClass2_0*, creationType>()));
      }
    }; // Zenject.SubContainerCreatorByNewPrefabMethod`1/<>c__DisplayClass2_0
    // Could not write size check! Type: Zenject.SubContainerCreatorByNewPrefabMethod`1/<>c__DisplayClass2_0 is generic, or has no fields that are valid for size checks!
    // private readonly System.Action`2<Zenject.DiContainer,TParam1> _installerMethod
    // Size: 0x8
    // Offset: 0x0
    System::Action_2<Zenject::DiContainer*, TParam1>* installerMethod;
    // Field size check
    static_assert(sizeof(System::Action_2<Zenject::DiContainer*, TParam1>*) == 0x8);
    // Creating value type constructor for type: SubContainerCreatorByNewPrefabMethod_1
    SubContainerCreatorByNewPrefabMethod_1(System::Action_2<Zenject::DiContainer*, TParam1>* installerMethod_ = {}) noexcept : installerMethod{installerMethod_} {}
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.IPrefabProvider prefabProvider, Zenject.GameObjectCreationParameters gameObjectBindInfo, System.Action`2<Zenject.DiContainer,TParam1> installerMethod)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SubContainerCreatorByNewPrefabMethod_1<TParam1>* New_ctor(Zenject::DiContainer* container, Zenject::IPrefabProvider* prefabProvider, Zenject::GameObjectCreationParameters* gameObjectBindInfo, System::Action_2<Zenject::DiContainer*, TParam1>* installerMethod) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewPrefabMethod_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SubContainerCreatorByNewPrefabMethod_1<TParam1>*, creationType>(container, prefabProvider, gameObjectBindInfo, installerMethod)));
    }
    // protected override System.Void AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.SubContainerCreatorDynamicContext
    // Base method: System.Void SubContainerCreatorDynamicContext::AddInstallers(System.Collections.Generic.List`1<Zenject.TypeValuePair> args, Zenject.GameObjectContext context)
    void AddInstallers(System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, Zenject::GameObjectContext* context) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::SubContainerCreatorByNewPrefabMethod_1::AddInstallers");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "AddInstallers", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(args, context)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, args, context);
    }
  }; // Zenject.SubContainerCreatorByNewPrefabMethod`1
  // Could not write size check! Type: Zenject.SubContainerCreatorByNewPrefabMethod`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::SubContainerCreatorByNewPrefabMethod_1, "Zenject", "SubContainerCreatorByNewPrefabMethod`1");
