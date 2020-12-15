// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinderBase
#include "Zenject/FactoryFromBinderBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: <>c__DisplayClass1_0 because it is already included!
  // Skipping declaration: <>c__2`1 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Skipping declaration: ConditionCopyNonLazyBinder because it is already included!
  // Forward declaring type: IFactory`5<TParam1, TParam2, TParam3, TParam4, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
  class IFactory_5;
  // Forward declaring type: FactorySubContainerBinder`5<TParam1, TParam2, TParam3, TParam4, TContract>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  class FactorySubContainerBinder_5;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`6<T1, T2, T3, T4, T5, TResult>
  template<typename T1, typename T2, typename T3, typename T4, typename T5, typename TResult>
  class Func_6;
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder`5
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  class FactoryFromBinder_5 : public Zenject::FactoryFromBinderBase {
    public:
    // Nested type: Zenject::FactoryFromBinder_5::$$c__DisplayClass1_0<TParam1, TParam2, TParam3, TParam4, TContract>
    class $$c__DisplayClass1_0;
    // Nested type: Zenject::FactoryFromBinder_5::$$c__2_1<TParam1, TParam2, TParam3, TParam4, TContract, TSubFactory>
    template<typename TSubFactory>
    class $$c__2_1;
    // Autogenerated type: Zenject.FactoryFromBinder`5/<>c__DisplayClass1_0
    class $$c__DisplayClass1_0 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*;
      static constexpr std::string_view NESTED_NAME = "$$c__DisplayClass1_0";
      // public System.Func`6<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TContract> method
      // Offset: 0x0
      System::Func_6<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TContract>* method;
      // Creating conversion operator: operator System::Func_6<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TContract>*
      constexpr operator System::Func_6<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TContract>*() const noexcept {
        return method;
      }
      // Zenject.IProvider <FromMethod>b__0(Zenject.DiContainer container)
      // Offset: 0xFFFFFFFF
      Zenject::IProvider* $FromMethod$b__0(Zenject::DiContainer* container) {
        return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromMethod>b__0", container)));
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::$$c__DisplayClass1_0* New_ctor() {
        return THROW_UNLESS((il2cpp_utils::New<typename FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::$$c__DisplayClass1_0*>()));
      }
    }; // Zenject.FactoryFromBinder`5/<>c__DisplayClass1_0
    // Autogenerated type: Zenject.FactoryFromBinder`5/<>c__2`1
    template<typename TSubFactory>
    class $$c__2_1 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*;
      static constexpr std::string_view NESTED_NAME = "$$c__2_1";
      // Autogenerated static field getter
      // Get static field: static public readonly Zenject.FactoryFromBinder`5/<>c__2`1<TParam1,TParam2,TParam3,TParam4,TContract,TSubFactory> <>9
      static typename Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::$$c__2_1<TSubFactory>* _get_$$9() {
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::$$c__2_1<TSubFactory>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly Zenject.FactoryFromBinder`5/<>c__2`1<TParam1,TParam2,TParam3,TParam4,TContract,TSubFactory> <>9
      static void _set_$$9(typename Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::$$c__2_1<TSubFactory>* value) {
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9", value)));
      }
      // Autogenerated static field getter
      // Get static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`5<TParam1,TParam2,TParam3,TParam4,TContract>>> <>9__2_0
      static System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TContract>*>*>* _get_$$9__2_0() {
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TContract>*>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9__2_0")));
      }
      // Autogenerated static field setter
      // Set static field: static public System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`5<TParam1,TParam2,TParam3,TParam4,TContract>>> <>9__2_0
      static void _set_$$9__2_0(System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TContract>*>*>* value) {
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::$$c__2_1<TSubFactory>*>::get(), "<>9__2_0", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::$$c__2_1<TSubFactory>*>::get(), ".cctor")));
      }
      // System.Void <FromFactory>b__2_0(Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`5<TParam1,TParam2,TParam3,TParam4,TContract>> x)
      // Offset: 0xFFFFFFFF
      void $FromFactory$b__2_0(Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TContract>*>* x) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "<FromFactory>b__2_0", x));
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::$$c__2_1<TSubFactory>* New_ctor() {
        return THROW_UNLESS((il2cpp_utils::New<typename FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>::$$c__2_1<TSubFactory>*>()));
      }
    }; // Zenject.FactoryFromBinder`5/<>c__2`1
    // public System.Void .ctor(Zenject.DiContainer container, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo)
    // Offset: 0xFFFFFFFF
    static FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* New_ctor(Zenject::DiContainer* container, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo) {
      return THROW_UNLESS((il2cpp_utils::New<FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>(container, bindInfo, factoryBindInfo)));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromMethod(System.Func`6<Zenject.DiContainer,TParam1,TParam2,TParam3,TParam4,TContract> method)
    // Offset: 0xFFFFFFFF
    Zenject::ConditionCopyNonLazyBinder* FromMethod(System::Func_6<Zenject::DiContainer*, TParam1, TParam2, TParam3, TParam4, TContract>* method) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::ConditionCopyNonLazyBinder*>(this, "FromMethod", method));
    }
    // public Zenject.ConditionCopyNonLazyBinder FromFactory()
    // Offset: 0xFFFFFFFF
    template<class TSubFactory>
    Zenject::ConditionCopyNonLazyBinder* FromFactory() {
      static_assert(std::is_base_of_v<Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TContract>, std::remove_pointer_t<TSubFactory>>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<Zenject::ConditionCopyNonLazyBinder*>(this, "FromFactory", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSubFactory>::get()})));
    }
    // public Zenject.FactorySubContainerBinder`5<TParam1,TParam2,TParam3,TParam4,TContract> FromSubContainerResolve()
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* FromSubContainerResolve() {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>(this, "FromSubContainerResolve")));
    }
    // public Zenject.FactorySubContainerBinder`5<TParam1,TParam2,TParam3,TParam4,TContract> FromSubContainerResolve(System.Object subIdentifier)
    // Offset: 0xFFFFFFFF
    Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* FromSubContainerResolve(::Il2CppObject* subIdentifier) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::FactorySubContainerBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>*>(this, "FromSubContainerResolve", subIdentifier)));
    }
  }; // Zenject.FactoryFromBinder`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder_5, "Zenject", "FactoryFromBinder`5");
#pragma pack(pop)