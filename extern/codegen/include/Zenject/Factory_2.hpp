// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PlaceholderFactory`2
#include "Zenject/PlaceholderFactory_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.Factory`2
  template<typename TParam1, typename TValue>
  class Factory_2 : public Zenject::PlaceholderFactory_2<TParam1, TValue> {
    public:
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.PlaceholderFactory`2
    // Base method: System.Void PlaceholderFactory_2::.ctor()
    // Base method: System.Void PlaceholderFactoryBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static Factory_2<TParam1, TValue>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<Factory_2<TParam1, TValue>*>()));
    }
  }; // Zenject.Factory`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::Factory_2, "Zenject", "Factory`2");
#pragma pack(pop)