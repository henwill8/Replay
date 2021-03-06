// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModestTree.TypeExtensions
#include "ModestTree/TypeExtensions.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeExtensions/<>c__DisplayClass39_1
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D04CEC
  class TypeExtensions::$$c__DisplayClass39_1 : public ::Il2CppObject {
    public:
    // public System.Attribute a
    // Size: 0x8
    // Offset: 0x10
    System::Attribute* a;
    // Field size check
    static_assert(sizeof(System::Attribute*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass39_1
    $$c__DisplayClass39_1(System::Attribute* a_ = {}) noexcept : a{a_} {}
    // Creating conversion operator: operator System::Attribute*
    constexpr operator System::Attribute*() const noexcept {
      return a;
    }
    // System.Boolean <AllAttributes>b__1(System.Type x)
    // Offset: 0x125BA8C
    bool $AllAttributes$b__1(System::Type* x);
    // public System.Void .ctor()
    // Offset: 0x125BA84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeExtensions::$$c__DisplayClass39_1* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::$$c__DisplayClass39_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeExtensions::$$c__DisplayClass39_1*, creationType>()));
    }
  }; // ModestTree.TypeExtensions/<>c__DisplayClass39_1
  #pragma pack(pop)
  static check_size<sizeof(TypeExtensions::$$c__DisplayClass39_1), 16 + sizeof(System::Attribute*)> __ModestTree_TypeExtensions_$$c__DisplayClass39_1SizeCheck;
  static_assert(sizeof(TypeExtensions::$$c__DisplayClass39_1) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::TypeExtensions::$$c__DisplayClass39_1*, "ModestTree", "TypeExtensions/<>c__DisplayClass39_1");
