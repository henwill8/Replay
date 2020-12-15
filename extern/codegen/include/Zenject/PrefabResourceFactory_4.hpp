// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IFactory`5
#include "Zenject/IFactory_5.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Autogenerated type: Zenject.PrefabResourceFactory`4
  template<typename P1, typename P2, typename P3, typename T>
  class PrefabResourceFactory_4 : public ::Il2CppObject/*, public Zenject::IFactory_5<::Il2CppString*, P1, P2, P3, T>*/ {
    public:
    // private readonly Zenject.DiContainer _container
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Creating interface conversion operator: operator Zenject::IFactory_5<::Il2CppString*, P1, P2, P3, T>
    operator Zenject::IFactory_5<::Il2CppString*, P1, P2, P3, T>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_5<::Il2CppString*, P1, P2, P3, T>*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return container;
    }
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<Zenject::DiContainer*>(this, "get_Container"));
    }
    // public T Create(System.String prefabResourceName, P1 param, P2 param2, P3 param3)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`5
    // Base method: TValue IFactory_5::Create(System.String prefabResourceName, P1 param, P2 param2, P3 param3)
    T Create(::Il2CppString* prefabResourceName, P1 param, P2 param2, P3 param3) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Create", prefabResourceName, param, param2, param3));
    }
    // Creating proxy method: Zenject_IFactory_5_Create
    // Maps to method: Create
    T Zenject_IFactory_5_Create(::Il2CppString* prefabResourceName, P1 param, P2 param2, P3 param3) {
      return Create(prefabResourceName, param, param2, param3);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static PrefabResourceFactory_4<P1, P2, P3, T>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<PrefabResourceFactory_4<P1, P2, P3, T>*>()));
    }
  }; // Zenject.PrefabResourceFactory`4
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabResourceFactory_4, "Zenject", "PrefabResourceFactory`4");
#pragma pack(pop)