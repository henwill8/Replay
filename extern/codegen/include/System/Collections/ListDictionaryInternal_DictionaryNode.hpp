// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ListDictionaryInternal
#include "System/Collections/ListDictionaryInternal.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ListDictionaryInternal/DictionaryNode
  // [] Offset: FFFFFFFF
  class ListDictionaryInternal::DictionaryNode : public ::Il2CppObject {
    public:
    // public System.Object key
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* key;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Object value
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* value;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.Collections.ListDictionaryInternal/DictionaryNode next
    // Size: 0x8
    // Offset: 0x20
    System::Collections::ListDictionaryInternal::DictionaryNode* next;
    // Field size check
    static_assert(sizeof(System::Collections::ListDictionaryInternal::DictionaryNode*) == 0x8);
    // Creating value type constructor for type: DictionaryNode
    DictionaryNode(::Il2CppObject* key_ = {}, ::Il2CppObject* value_ = {}, System::Collections::ListDictionaryInternal::DictionaryNode* next_ = {}) noexcept : key{key_}, value{value_}, next{next_} {}
    // public System.Void .ctor()
    // Offset: 0x1898A8C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ListDictionaryInternal::DictionaryNode* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ListDictionaryInternal::DictionaryNode::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ListDictionaryInternal::DictionaryNode*, creationType>()));
    }
  }; // System.Collections.ListDictionaryInternal/DictionaryNode
  #pragma pack(pop)
  static check_size<sizeof(ListDictionaryInternal::DictionaryNode), 32 + sizeof(System::Collections::ListDictionaryInternal::DictionaryNode*)> __System_Collections_ListDictionaryInternal_DictionaryNodeSizeCheck;
  static_assert(sizeof(ListDictionaryInternal::DictionaryNode) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ListDictionaryInternal::DictionaryNode*, "System.Collections", "ListDictionaryInternal/DictionaryNode");
