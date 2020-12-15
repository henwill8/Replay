// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.KeyedFactoryBase`2
#include "Zenject/KeyedFactoryBase_2.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.KeyedFactory`3
  template<typename TBase, typename TKey, typename TParam1>
  class KeyedFactory_3 : public Zenject::KeyedFactoryBase_2<TBase, TKey> {
    public:
    // public TBase Create(TKey key, TParam1 param1)
    // Offset: 0xFFFFFFFF
    TBase Create(TKey key, TParam1 param1) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TBase>(this, "Create", key, param1));
    }
    // protected override System.Collections.Generic.IEnumerable`1<System.Type> get_ProvidedTypes()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.KeyedFactoryBase`2
    // Base method: System.Collections.Generic.IEnumerable`1<System.Type> KeyedFactoryBase_2::get_ProvidedTypes()
    System::Collections::Generic::IEnumerable_1<System::Type*>* get_ProvidedTypes() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<System::Type*>*>(this, "get_ProvidedTypes"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.KeyedFactoryBase`2
    // Base method: System.Void KeyedFactoryBase_2::.ctor()
    // Base method: System.Void Object::.ctor()
    static KeyedFactory_3<TBase, TKey, TParam1>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<KeyedFactory_3<TBase, TKey, TParam1>*>()));
    }
  }; // Zenject.KeyedFactory`3
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::KeyedFactory_3, "Zenject", "KeyedFactory`3");
#pragma pack(pop)