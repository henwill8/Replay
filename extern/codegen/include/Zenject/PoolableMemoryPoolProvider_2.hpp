// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PoolableMemoryPoolProviderBase`1
#include "Zenject/PoolableMemoryPoolProviderBase_1.hpp"
// Including type: Zenject.IValidatable
#include "Zenject/IValidatable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`1<TParam1>
  template<typename TParam1>
  class IPoolable_1;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`2<TParam1, TValue>
  template<typename TParam1, typename TValue>
  class MemoryPool_2;
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolableMemoryPoolProvider`2
  template<typename TContract, typename TMemoryPool>
  class PoolableMemoryPoolProvider_2 : public Zenject::PoolableMemoryPoolProviderBase_1<TContract>/*, public Zenject::IValidatable*/ {
    public:
    // private TMemoryPool _pool
    // Offset: 0x0
    TMemoryPool pool;
    // Creating interface conversion operator: operator Zenject::IValidatable
    operator Zenject::IValidatable() noexcept {
      return *reinterpret_cast<Zenject::IValidatable*>(this);
    }
    // public System.Void .ctor(Zenject.DiContainer container, System.Guid poolId)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PoolableMemoryPoolProviderBase`1
    // Base method: System.Void PoolableMemoryPoolProviderBase_1::.ctor(Zenject.DiContainer container, System.Guid poolId)
    static PoolableMemoryPoolProvider_2<TContract, TMemoryPool>* New_ctor(Zenject::DiContainer* container, System::Guid poolId) {
      return THROW_UNLESS((il2cpp_utils::New<PoolableMemoryPoolProvider_2<TContract, TMemoryPool>*>(container, poolId)));
    }
    // public System.Void Validate()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IValidatable
    // Base method: System.Void IValidatable::Validate()
    void Validate() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Validate"));
    }
    // Creating proxy method: Zenject_IValidatable_Validate
    // Maps to method: Validate
    void Zenject_IValidatable_Validate() {
      Validate();
    }
    // public override System.Void GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PoolableMemoryPoolProviderBase`1
    // Base method: System.Void PoolableMemoryPoolProviderBase_1::GetAllInstancesWithInjectSplit(Zenject.InjectContext context, System.Collections.Generic.List`1<Zenject.TypeValuePair> args, out System.Action injectAction, System.Collections.Generic.List`1<System.Object> buffer)
    void GetAllInstancesWithInjectSplit(Zenject::InjectContext* context, System::Collections::Generic::List_1<Zenject::TypeValuePair>* args, System::Action*& injectAction, System::Collections::Generic::List_1<::Il2CppObject*>* buffer) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetAllInstancesWithInjectSplit", context, args, injectAction, buffer));
    }
  }; // Zenject.PoolableMemoryPoolProvider`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolableMemoryPoolProvider_2, "Zenject", "PoolableMemoryPoolProvider`2");
#pragma pack(pop)
