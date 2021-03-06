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
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.TypeExtensions/<>c__DisplayClass39_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D04CDC
  class TypeExtensions::$$c__DisplayClass39_0 : public ::Il2CppObject {
    public:
    // public System.Type[] attributeTypes
    // Size: 0x8
    // Offset: 0x10
    ::Array<System::Type*>* attributeTypes;
    // Field size check
    static_assert(sizeof(::Array<System::Type*>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass39_0
    $$c__DisplayClass39_0(::Array<System::Type*>* attributeTypes_ = {}) noexcept : attributeTypes{attributeTypes_} {}
    // Creating conversion operator: operator ::Array<System::Type*>*
    constexpr operator ::Array<System::Type*>*() const noexcept {
      return attributeTypes;
    }
    // System.Boolean <AllAttributes>b__0(System.Attribute a)
    // Offset: 0x125B9B8
    bool $AllAttributes$b__0(System::Attribute* a);
    // public System.Void .ctor()
    // Offset: 0x125B744
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TypeExtensions::$$c__DisplayClass39_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::TypeExtensions::$$c__DisplayClass39_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TypeExtensions::$$c__DisplayClass39_0*, creationType>()));
    }
  }; // ModestTree.TypeExtensions/<>c__DisplayClass39_0
  #pragma pack(pop)
  static check_size<sizeof(TypeExtensions::$$c__DisplayClass39_0), 16 + sizeof(::Array<System::Type*>*)> __ModestTree_TypeExtensions_$$c__DisplayClass39_0SizeCheck;
  static_assert(sizeof(TypeExtensions::$$c__DisplayClass39_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::TypeExtensions::$$c__DisplayClass39_0*, "ModestTree", "TypeExtensions/<>c__DisplayClass39_0");
