// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: ArgConditionCopyNonLazyBinder
  class ArgConditionCopyNonLazyBinder;
  // Forward declaring type: FactoryFromBinder`5<TParam1, TParam2, TParam3, TParam4, TContract>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
  class FactoryFromBinder_5;
  // Forward declaring type: ConcreteBinderGeneric`1<TContract>
  template<typename TContract>
  class ConcreteBinderGeneric_1;
  // Forward declaring type: IFactory`5<TParam1, TParam2, TParam3, TParam4, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
  class IFactory_5;
  // Forward declaring type: IPoolable`5<TParam1, TParam2, TParam3, TParam4, TParam5>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5>
  class IPoolable_5;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
  // Forward declaring type: MemoryPool`6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
  class MemoryPool_6;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FactoryFromBinder4Extensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class FactoryFromBinder4Extensions : public ::Il2CppObject {
    public:
    // Nested type: Zenject::FactoryFromBinder4Extensions::$$c__DisplayClass0_0_5<TParam1, TParam2, TParam3, TParam4, TContract>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
    class $$c__DisplayClass0_0_5;
    // Nested type: Zenject::FactoryFromBinder4Extensions::$$c__1_5<TParam1, TParam2, TParam3, TParam4, TContract>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
    class $$c__1_5;
    // Nested type: Zenject::FactoryFromBinder4Extensions::$$c__3_5<TParam1, TParam2, TParam3, TParam4, TContract>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract>
    class $$c__3_5;
    // Nested type: Zenject::FactoryFromBinder4Extensions::$$c__5_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool>
    class $$c__5_6;
    // Nested type: Zenject::FactoryFromBinder4Extensions::$$c__DisplayClass6_0_6<TParam1, TParam2, TParam3, TParam4, TContract, TMemoryPool>
    template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TContract, typename TMemoryPool>
    class $$c__DisplayClass6_0_6;
    // Creating value type constructor for type: FactoryFromBinder4Extensions
    FactoryFromBinder4Extensions() noexcept {}
    // static public Zenject.ArgConditionCopyNonLazyBinder FromIFactory(Zenject.FactoryFromBinder`5<TParam1,TParam2,TParam3,TParam4,TContract> fromBinder, System.Action`1<Zenject.ConcreteBinderGeneric`1<Zenject.IFactory`5<TParam1,TParam2,TParam3,TParam4,TContract>>> factoryBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromIFactory(Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder, System::Action_1<Zenject::ConcreteBinderGeneric_1<Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TContract>*>*>* factoryBindGenerator) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder4Extensions::FromIFactory");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder4Extensions", "FromIFactory", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::il2cpp_utils::ExtractTypes(fromBinder, factoryBindGenerator))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder, factoryBindGenerator);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`5<TParam1,TParam2,TParam3,TParam4,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_5<TParam1, TParam2, TParam3, TParam4, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder4Extensions::FromPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder4Extensions", "FromPoolableMemoryPool", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::il2cpp_utils::ExtractTypes(fromBinder))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`5<TParam1,TParam2,TParam3,TParam4,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_5<TParam1, TParam2, TParam3, TParam4, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder4Extensions::FromPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder4Extensions", "FromPoolableMemoryPool", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::il2cpp_utils::ExtractTypes(fromBinder, poolBindGenerator))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder, poolBindGenerator);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject.FactoryFromBinder`5<TParam1,TParam2,TParam3,TParam4,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*> && std::is_base_of_v<Zenject::IPoolable_5<TParam1, TParam2, TParam3, TParam4, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder4Extensions::FromMonoPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder4Extensions", "FromMonoPoolableMemoryPool", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::il2cpp_utils::ExtractTypes(fromBinder))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromMonoPoolableMemoryPool(Zenject.FactoryFromBinder`5<TParam1,TParam2,TParam3,TParam4,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TContract>
    static Zenject::ArgConditionCopyNonLazyBinder* FromMonoPoolableMemoryPool(Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_convertible_v<TContract, UnityEngine::Component*> && std::is_base_of_v<Zenject::IPoolable_5<TParam1, TParam2, TParam3, TParam4, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder4Extensions::FromMonoPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder4Extensions", "FromMonoPoolableMemoryPool", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()}, ::il2cpp_utils::ExtractTypes(fromBinder, poolBindGenerator))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder, poolBindGenerator);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`5<TParam1,TParam2,TParam3,TParam4,TContract> fromBinder)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TContract, class TMemoryPool>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_5<TParam1, TParam2, TParam3, TParam4, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static_assert(std::is_base_of_v<Zenject::MemoryPool_6<TParam1, TParam2, TParam3, TParam4, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder4Extensions::FromPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder4Extensions", "FromPoolableMemoryPool", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}, ::il2cpp_utils::ExtractTypes(fromBinder))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder);
    }
    // static public Zenject.ArgConditionCopyNonLazyBinder FromPoolableMemoryPool(Zenject.FactoryFromBinder`5<TParam1,TParam2,TParam3,TParam4,TContract> fromBinder, System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> poolBindGenerator)
    // Offset: 0xFFFFFFFF
    template<class TParam1, class TParam2, class TParam3, class TParam4, class TContract, class TMemoryPool>
    static Zenject::ArgConditionCopyNonLazyBinder* FromPoolableMemoryPool(Zenject::FactoryFromBinder_5<TParam1, TParam2, TParam3, TParam4, TContract>* fromBinder, System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* poolBindGenerator) {
      static_assert(std::is_base_of_v<Zenject::IPoolable_5<TParam1, TParam2, TParam3, TParam4, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>);
      static_assert(std::is_base_of_v<Zenject::MemoryPool_6<TParam1, TParam2, TParam3, TParam4, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>);
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FactoryFromBinder4Extensions::FromPoolableMemoryPool");
      static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod("Zenject", "FactoryFromBinder4Extensions", "FromPoolableMemoryPool", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()}, ::il2cpp_utils::ExtractTypes(fromBinder, poolBindGenerator))));
      static auto* ___generic__method = THROW_UNLESS((::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam1>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam2>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam3>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TParam4>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TContract>::get(), il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMemoryPool>::get()})));
      return ::il2cpp_utils::RunMethodThrow<Zenject::ArgConditionCopyNonLazyBinder*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, fromBinder, poolBindGenerator);
    }
  }; // Zenject.FactoryFromBinder4Extensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FactoryFromBinder4Extensions*, "Zenject", "FactoryFromBinder4Extensions");
