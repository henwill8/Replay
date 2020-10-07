// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder6Extensions
#include "Zenject/FactoryFromBinder6Extensions.hpp"
// Including type: System.Guid
#include "System/Guid.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable`7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
  class IPoolable_7;
  // Forward declaring type: IMemoryPool
  class IMemoryPool;
  // Forward declaring type: MemoryPool`8<TValue, TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TParam7>
  template<typename TValue, typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TParam7>
  class MemoryPool_8;
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder6Extensions/<>c__DisplayClass6_0`8
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TParam6, typename TContract, typename TMemoryPool>
  class FactoryFromBinder6Extensions::$$c__DisplayClass6_0_8 : public ::Il2CppObject {
    static_assert((!std::is_complete_v<std::remove_pointer_t<TContract>> || std::is_base_of_v<Zenject::IPoolable_7<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, Zenject::IMemoryPool*>, std::remove_pointer_t<TContract>>));
    static_assert((!std::is_complete_v<std::remove_pointer_t<TMemoryPool>> || std::is_base_of_v<Zenject::MemoryPool_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, Zenject::IMemoryPool*, TContract>, std::remove_pointer_t<TMemoryPool>>));
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
    static FactoryFromBinder6Extensions::$$c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<FactoryFromBinder6Extensions::$$c__DisplayClass6_0_8<TParam1, TParam2, TParam3, TParam4, TParam5, TParam6, TContract, TMemoryPool>*>()));
    }
  }; // Zenject.FactoryFromBinder6Extensions/<>c__DisplayClass6_0`8
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder6Extensions::$$c__DisplayClass6_0_8, "Zenject", "FactoryFromBinder6Extensions/<>c__DisplayClass6_0`8");
#pragma pack(pop)
