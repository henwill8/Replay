// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.FromBinder
#include "Zenject/FromBinder.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: InjectContext
  class InjectContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: MonoBehaviour
  class MonoBehaviour;
  // Forward declaring type: Component
  class Component;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass61_2
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D056CC
  class FromBinder::$$c__DisplayClass61_2 : public ::Il2CppObject {
    public:
    // public Zenject.InjectContext ctx
    // Size: 0x8
    // Offset: 0x10
    Zenject::InjectContext* ctx;
    // Field size check
    static_assert(sizeof(Zenject::InjectContext*) == 0x8);
    // public UnityEngine.MonoBehaviour monoBehaviour
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::MonoBehaviour* monoBehaviour;
    // Field size check
    static_assert(sizeof(UnityEngine::MonoBehaviour*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass61_2
    $$c__DisplayClass61_2(Zenject::InjectContext* ctx_ = {}, UnityEngine::MonoBehaviour* monoBehaviour_ = {}) noexcept : ctx{ctx_}, monoBehaviour{monoBehaviour_} {}
    // System.Boolean <FromComponentInParents>b__2(UnityEngine.Component x)
    // Offset: 0x14EAF00
    bool $FromComponentInParents$b__2(UnityEngine::Component* x);
    // System.Boolean <FromComponentInParents>b__3(UnityEngine.Component x)
    // Offset: 0x14EAF24
    bool $FromComponentInParents$b__3(UnityEngine::Component* x);
    // public System.Void .ctor()
    // Offset: 0x14EAEF8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass61_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass61_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass61_2*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass61_2
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass61_2), 24 + sizeof(UnityEngine::MonoBehaviour*)> __Zenject_FromBinder_$$c__DisplayClass61_2SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass61_2) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass61_2*, "Zenject", "FromBinder/<>c__DisplayClass61_2");
