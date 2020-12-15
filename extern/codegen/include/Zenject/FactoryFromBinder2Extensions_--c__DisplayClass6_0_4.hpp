// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder2Extensions
#include "Zenject/FactoryFromBinder2Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`3<TParam1, TParam2, TParam3>
  template<typename TParam1, typename TParam2, typename TParam3>
  class IPoolable_3;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`4<TParam1, TParam2, TParam3, TValue>
  template<typename TParam1, typename TParam2, typename TParam3, typename TValue>
  class MemoryPool_4;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder2Extensions/<>c__DisplayClass6_0`4
  template<typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
  class FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4 : public ::Il2CppObject {
    public:
    // public System.Guid poolId
    // Offset: 0x0
    System::Guid poolId;
    // Creating conversion operator: operator System::Guid
    constexpr operator System::Guid() const noexcept {
      return poolId;
    }
    // Zenject.IProvider <FromPoolableMemoryPool>b__0(Zenject.DiContainer container)
    // Offset: 0xFFFFFFFF
    Zenject::IProvider* $FromPoolableMemoryPool$b__0(Zenject::DiContainer* container) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<Zenject::IProvider*>(this, "<FromPoolableMemoryPool>b__0", container)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4<TParam1, TParam2, TContract, TMemoryPool>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4<TParam1, TParam2, TContract, TMemoryPool>*>()));
    }
  }; // Zenject.FactoryFromBinder2Extensions/<>c__DisplayClass6_0`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder2Extensions::$$c__DisplayClass6_0_4, "Zenject", "FactoryFromBinder2Extensions/<>c__DisplayClass6_0`4");
#pragma pack(pop)