// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPoolMaxSizeBinder`1
#include "Zenject/MemoryPoolMaxSizeBinder_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Skipping declaration: FactoryArgumentsToChoiceBinder`1 because it is already included!
  // Forward declaring type: DiContainer
  class DiContainer;
  // Forward declaring type: BindInfo
  class BindInfo;
  // Forward declaring type: FactoryBindInfo
  class FactoryBindInfo;
  // Forward declaring type: MemoryPoolBindInfo
  class MemoryPoolBindInfo;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPoolInitialSizeMaxSizeBinder`1
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1 : public Zenject::MemoryPoolMaxSizeBinder_1<TContract> {
    public:
    // public Zenject.MemoryPoolMaxSizeBinder`1<TContract> WithInitialSize(System.Int32 size)
    // Offset: 0xFFFFFFFF
    Zenject::MemoryPoolMaxSizeBinder_1<TContract>* WithInitialSize(int size) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::MemoryPoolMaxSizeBinder_1<TContract>*>(this, "WithInitialSize", size));
    }
    // public Zenject.FactoryArgumentsToChoiceBinder`1<TContract> WithFixedSize(System.Int32 size)
    // Offset: 0xFFFFFFFF
    Zenject::FactoryArgumentsToChoiceBinder_1<TContract>* WithFixedSize(int size) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::FactoryArgumentsToChoiceBinder_1<TContract>*>(this, "WithFixedSize", size));
    }
    // public System.Void .ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolMaxSizeBinder`1
    // Base method: System.Void MemoryPoolMaxSizeBinder_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    // Base method: System.Void MemoryPoolExpandBinder_1::.ctor(Zenject.DiContainer bindContainer, Zenject.BindInfo bindInfo, Zenject.FactoryBindInfo factoryBindInfo, Zenject.MemoryPoolBindInfo poolBindInfo)
    static MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* New_ctor(Zenject::DiContainer* bindContainer, Zenject::BindInfo* bindInfo, Zenject::FactoryBindInfo* factoryBindInfo, Zenject::MemoryPoolBindInfo* poolBindInfo) {
      return THROW_UNLESS(il2cpp_utils::New<MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>(bindContainer, bindInfo, factoryBindInfo, poolBindInfo));
    }
  }; // Zenject.MemoryPoolInitialSizeMaxSizeBinder`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1, "Zenject", "MemoryPoolInitialSizeMaxSizeBinder`1");
#pragma pack(pop)