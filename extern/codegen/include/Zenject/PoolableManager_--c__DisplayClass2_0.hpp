// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.PoolableManager
#include "Zenject/PoolableManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: ModestTree::Util
namespace ModestTree::Util {
  // Forward declaring type: ValuePair`2<T1, T2>
  template<typename T1, typename T2>
  class ValuePair_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IPoolable
  class IPoolable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PoolableManager/<>c__DisplayClass2_0
  class PoolableManager::$$c__DisplayClass2_0 : public ::Il2CppObject {
    public:
    // public Zenject.PoolableManager <>4__this
    // Offset: 0x10
    Zenject::PoolableManager* $$4__this;
    // public System.Collections.Generic.List`1<ModestTree.Util.ValuePair`2<System.Type,System.Int32>> priorities
    // Offset: 0x18
    System::Collections::Generic::List_1<ModestTree::Util::ValuePair_2<System::Type*, int>*>* priorities;
    // Zenject.PoolableManager/PoolableInfo <.ctor>b__0(Zenject.IPoolable x)
    // Offset: 0x13496F0
    Zenject::PoolableManager::PoolableInfo $_ctor$b__0(Zenject::IPoolable* x);
    // public System.Void .ctor()
    // Offset: 0x13491AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PoolableManager::$$c__DisplayClass2_0* New_ctor();
  }; // Zenject.PoolableManager/<>c__DisplayClass2_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Zenject::PoolableManager::$$c__DisplayClass2_0*, "Zenject", "PoolableManager/<>c__DisplayClass2_0");
#pragma pack(pop)
