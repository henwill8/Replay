// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.IFactory`4
#include "Zenject/IFactory_4.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Object
  class Object;
}
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.PrefabFactory`3
  // [] Offset: FFFFFFFF
  template<typename P1, typename P2, typename T>
  class PrefabFactory_3 : public ::Il2CppObject/*, public Zenject::IFactory_4<UnityEngine::Object*, P1, P2, T>*/ {
    public:
    // [InjectAttribute] Offset: 0xD061EC
    // private readonly Zenject.DiContainer _container
    // Size: 0x8
    // Offset: 0x0
    Zenject::DiContainer* container;
    // Field size check
    static_assert(sizeof(Zenject::DiContainer*) == 0x8);
    // Creating value type constructor for type: PrefabFactory_3
    PrefabFactory_3(Zenject::DiContainer* container_ = {}) noexcept : container{container_} {}
    // Creating interface conversion operator: operator Zenject::IFactory_4<UnityEngine::Object*, P1, P2, T>
    operator Zenject::IFactory_4<UnityEngine::Object*, P1, P2, T>() noexcept {
      return *reinterpret_cast<Zenject::IFactory_4<UnityEngine::Object*, P1, P2, T>*>(this);
    }
    // Creating conversion operator: operator Zenject::DiContainer*
    constexpr operator Zenject::DiContainer*() const noexcept {
      return container;
    }
    // public Zenject.DiContainer get_Container()
    // Offset: 0xFFFFFFFF
    Zenject::DiContainer* get_Container() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabFactory_3::get_Container");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Container", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<Zenject::DiContainer*, false>(this, ___internal__method);
    }
    // public T Create(UnityEngine.Object prefab, P1 param, P2 param2)
    // Offset: 0xFFFFFFFF
    // Implemented from: Zenject.IFactory`4
    // Base method: TValue IFactory_4::Create(UnityEngine.Object prefab, P1 param, P2 param2)
    T Create(UnityEngine::Object* prefab, P1 param, P2 param2) {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabFactory_3::Create");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Create", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(prefab, param, param2)));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, prefab, param, param2);
    }
    // Creating proxy method: Zenject_IFactory_4_Create
    // Maps to method: Create
    T Zenject_IFactory_4_Create(UnityEngine::Object* prefab, P1 param, P2 param2) {
      return Create(prefab, param, param2);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PrefabFactory_3<P1, P2, T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::PrefabFactory_3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PrefabFactory_3<P1, P2, T>*, creationType>()));
    }
  }; // Zenject.PrefabFactory`3
  // Could not write size check! Type: Zenject.PrefabFactory`3 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::PrefabFactory_3, "Zenject", "PrefabFactory`3");
