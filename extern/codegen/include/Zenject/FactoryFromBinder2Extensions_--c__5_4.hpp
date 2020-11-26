// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FactoryFromBinder2Extensions
#include "Zenject/FactoryFromBinder2Extensions.hpp"
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
  // Forward declaring type: MemoryPoolInitialSizeMaxSizeBinder`1<TContract>
  template<typename TContract>
  class MemoryPoolInitialSizeMaxSizeBinder_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.FactoryFromBinder2Extensions/<>c__5`4
  template<typename TParam1, typename TParam2, typename TContract, typename TMemoryPool>
  class FactoryFromBinder2Extensions::$$c__5_4 : public ::Il2CppObject {
    public:
    // Autogenerated static field getter
    // Get static field: static public readonly Zenject.FactoryFromBinder2Extensions/<>c__5`4<TParam1,TParam2,TContract,TMemoryPool> <>9
    static Zenject::FactoryFromBinder2Extensions::$$c__5_4<TParam1, TParam2, TContract, TMemoryPool>* _get_$$9() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<Zenject::FactoryFromBinder2Extensions::$$c__5_4<TParam1, TParam2, TContract, TMemoryPool>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__5_4<TParam1, TParam2, TContract, TMemoryPool>*>::get(), "<>9")));
    }
    // Autogenerated static field setter
    // Set static field: static public readonly Zenject.FactoryFromBinder2Extensions/<>c__5`4<TParam1,TParam2,TContract,TMemoryPool> <>9
    static void _set_$$9(Zenject::FactoryFromBinder2Extensions::$$c__5_4<TParam1, TParam2, TContract, TMemoryPool>* value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__5_4<TParam1, TParam2, TContract, TMemoryPool>*>::get(), "<>9", value)));
    }
    // Autogenerated static field getter
    // Get static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__5_0
    static System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* _get_$$9__5_0() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__5_4<TParam1, TParam2, TContract, TMemoryPool>*>::get(), "<>9__5_0")));
    }
    // Autogenerated static field setter
    // Set static field: static public System.Action`1<Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract>> <>9__5_0
    static void _set_$$9__5_0(System::Action_1<Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>*>* value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__5_4<TParam1, TParam2, TContract, TMemoryPool>*>::get(), "<>9__5_0", value)));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      THROW_UNLESS((il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<FactoryFromBinder2Extensions::$$c__5_4<TParam1, TParam2, TContract, TMemoryPool>*>::get(), ".cctor")));
    }
    // System.Void <FromPoolableMemoryPool>b__5_0(Zenject.MemoryPoolInitialSizeMaxSizeBinder`1<TContract> x)
    // Offset: 0xFFFFFFFF
    void $FromPoolableMemoryPool$b__5_0(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>* x) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "<FromPoolableMemoryPool>b__5_0", x));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static FactoryFromBinder2Extensions::$$c__5_4<TParam1, TParam2, TContract, TMemoryPool>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<FactoryFromBinder2Extensions::$$c__5_4<TParam1, TParam2, TContract, TMemoryPool>*>()));
    }
  }; // Zenject.FactoryFromBinder2Extensions/<>c__5`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::FactoryFromBinder2Extensions::$$c__5_4, "Zenject", "FactoryFromBinder2Extensions/<>c__5`4");
#pragma pack(pop)
