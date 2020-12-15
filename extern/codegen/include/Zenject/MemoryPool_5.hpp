// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MemoryPoolBase`1
#include "Zenject/MemoryPoolBase_1.hpp"
// Including type: Zenject.IMemoryPool`5
#include "Zenject/IMemoryPool_5.hpp"
// Including type: Zenject.IFactory`5
#include "Zenject/IFactory_5.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.MemoryPool`5
  template<typename TParam1, typename TParam2, typename TParam3, typename TParam4, typename TValue>
  class MemoryPool_5 : public Zenject::MemoryPoolBase_1<TValue>/*, public Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>, public Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TValue>*/ {
    public:
    // Creating interface conversion operator: operator Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>
    operator Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IMemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>(this);
    }
    // Creating interface conversion operator: operator Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TValue>
    operator Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TValue>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_5<TParam1, TParam2, TParam3, TParam4, TValue>*>(this);
    }
    // protected System.Void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TValue item)
    // Offset: 0xFFFFFFFF
    void Reinitialize(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TValue item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Reinitialize", p1, p2, p3, p4, item));
    }
    // public TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IMemoryPool`5
    // Base method: TValue IMemoryPool_5::Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4)
    TValue Spawn(TParam1 param1, TParam2 param2, TParam3 param3, TParam4 param4) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TValue>(this, "Spawn", param1, param2, param3, param4));
    }
    // private TValue Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TValue>.Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`5
    // Base method: TValue IFactory_5::Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4)
    TValue Zenject_IFactory_5_Create(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<TValue>(this, "Zenject.IFactory<TParam1,TParam2,TParam3,TParam4,TValue>.Create", p1, p2, p3, p4)));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.MemoryPoolBase`1
    // Base method: System.Void MemoryPoolBase_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static MemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<MemoryPool_5<TParam1, TParam2, TParam3, TParam4, TValue>*>()));
    }
  }; // Zenject.MemoryPool`5
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPool_5, "Zenject", "MemoryPool`5");
#pragma pack(pop)