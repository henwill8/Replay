// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.ConventionBindInfo
#include "Zenject/ConventionBindInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Zenject.ConventionBindInfo/<>c__DisplayClass7_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D04DFC
  class ConventionBindInfo::$$c__DisplayClass7_0 : public ::Il2CppObject {
    public:
    // public System.Type type
    // Size: 0x8
    // Offset: 0x10
    System::Type* type;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass7_0
    $$c__DisplayClass7_0(System::Type* type_ = {}) noexcept : type{type_} {}
    // Creating conversion operator: operator System::Type*
    constexpr operator System::Type*() const noexcept {
      return type;
    }
    // System.Boolean <ShouldIncludeType>b__0(System.Func`2<System.Type,System.Boolean> predicate)
    // Offset: 0x1267404
    bool $ShouldIncludeType$b__0(System::Func_2<System::Type*, bool>* predicate);
    // public System.Void .ctor()
    // Offset: 0x1267218
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ConventionBindInfo::$$c__DisplayClass7_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::ConventionBindInfo::$$c__DisplayClass7_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ConventionBindInfo::$$c__DisplayClass7_0*, creationType>()));
    }
  }; // Zenject.ConventionBindInfo/<>c__DisplayClass7_0
  #pragma pack(pop)
  static check_size<sizeof(ConventionBindInfo::$$c__DisplayClass7_0), 16 + sizeof(System::Type*)> __Zenject_ConventionBindInfo_$$c__DisplayClass7_0SizeCheck;
  static_assert(sizeof(ConventionBindInfo::$$c__DisplayClass7_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::ConventionBindInfo::$$c__DisplayClass7_0*, "Zenject", "ConventionBindInfo/<>c__DisplayClass7_0");
