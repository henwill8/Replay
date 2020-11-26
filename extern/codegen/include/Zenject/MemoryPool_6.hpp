// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`6
#include "Zenject/IMemoryPool_6.hpp"
// Including type: Zenject.IFactory`6
#include "Zenject/IFactory_6.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPool`6
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TParam5, typename TValue>
  class MemoryPool_6 : public Zenject::MemoryPoolBase_1<TValue>/*, public Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>, public Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*/ {
    public:
    // Creating interface conversion operator: operator Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>
    operator Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IMemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>(this);
    }
    // Creating interface conversion operator: operator Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>
    operator Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>(this);
    }
    // protected System.Void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TValue item)
    // Offset: 0xFFFFFFFF
    void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", p1, p2, p3, p4, p5, item));
    }
    // public TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IMemoryPool`6
    // Base method: TValue IMemoryPool_6::Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5)
    TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4, TParam5 param5) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", param1, param2, param3, param4, param5));
    }
    // private TValue Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>.Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`6
    // Base method: TValue IFactory_6::Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5)
    TValue Zenject_IFactory_6_Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<TValue>(this, "Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>.Create", p1, p2, p3, p4, p5)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<MemoryPool_6<TParam1, TParam2, TParam3, TParam4, TParam5, TValue>*>()));
    }
  }; // Zenject.MemoryPool`6
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_6, "Zenject", "MemoryPool`6");
#pragma pack(pop)
