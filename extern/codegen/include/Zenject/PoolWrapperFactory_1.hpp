// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IFactory`1
#include "Zenject/IFactory_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IDisposable
  class IDisposable;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IMemoryPool`1<TValue>
  template<typename TValue>
  class IMemoryPool_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolWrapperFactory`1
  template<typename T>
  class PoolWrapperFactory_1 : public ::Il2CppObject/*, public Zenject::IFactory_1<T>*/ {
    public:
    // private readonly Zenject.IMemoryPool`1<T> _pool
    // Offset: 0x0
    Zenject::IMemoryPool_1<T>* pool;
    // Creating interface conversion operator: operator Zenject::IFactory_1<T>
    operator Zenject::IFactory_1<T>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_1<T>*>(this);
    }
    // Creating conversion operator: operator Zenject::IMemoryPool_1<T>*
    constexpr operator Zenject::IMemoryPool_1<T>*() const noexcept {
      return pool;
    }
    // public System.Void .ctor(Zenject.IMemoryPool`1<T> pool)
    // Offset: 0xFFFFFFFF
    static PoolWrapperFactory_1<T>* New_ctor(Zenject::IMemoryPool_1<T>* pool) {
      return THROW_UNLESS(il2cpp_utils::New<PoolWrapperFactory_1<T>*>(pool));
    }
    // public T Create()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`1
    // Base method: TValue IFactory_1::Create()
    T Create() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Create"));
    }
    // Creating proxy method: Zenject_IFactory_1_Create
    // Maps to method: Create
    T Zenject_IFactory_1_Create() {
      return Create();
    }
  }; // Zenject.PoolWrapperFactory`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PoolWrapperFactory_1, "Zenject", "PoolWrapperFactory`1");
#pragma pack(pop)