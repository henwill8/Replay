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
  // Forward declaring type: IProvider
  class IProvider;
  // Forward declaring type: DiContainer
  class DiContainer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.FromBinder/<>c__DisplayClass72_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D057EC
  class FromBinder::$$c__DisplayClass72_0 : public ::Il2CppObject {
    public:
    // public System.Object instance
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* instance;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass72_0
    $$c__DisplayClass72_0(::Il2CppObject* instance_ = {}) noexcept : instance{instance_} {}
    // Creating conversion operator: operator ::Il2CppObject*
    constexpr operator ::Il2CppObject*() const noexcept {
      return instance;
    }
    // Zenject.IProvider <FromInstanceBase>b__0(Zenject.DiContainer container, System.Type type)
    // Offset: 0x14EC08C
    Zenject::IProvider* $FromInstanceBase$b__0(Zenject::DiContainer* container, System::Type* type);
    // public System.Void .ctor()
    // Offset: 0x14E95C0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FromBinder::$$c__DisplayClass72_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FromBinder::$$c__DisplayClass72_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FromBinder::$$c__DisplayClass72_0*, creationType>()));
    }
  }; // Zenject.FromBinder/<>c__DisplayClass72_0
  #pragma pack(pop)
  static check_size<sizeof(FromBinder::$$c__DisplayClass72_0), 16 + sizeof(::Il2CppObject*)> __Zenject_FromBinder_$$c__DisplayClass72_0SizeCheck;
  static_assert(sizeof(FromBinder::$$c__DisplayClass72_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FromBinder::$$c__DisplayClass72_0*, "Zenject", "FromBinder/<>c__DisplayClass72_0");
