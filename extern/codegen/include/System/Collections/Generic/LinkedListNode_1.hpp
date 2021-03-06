// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.LinkedListNode`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class LinkedListNode_1 : public ::Il2CppObject {
    public:
    // System.Collections.Generic.LinkedList`1<T> list
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::LinkedList_1<T>* list;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::LinkedList_1<T>*) == 0x8);
    // System.Collections.Generic.LinkedListNode`1<T> next
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::LinkedListNode_1<T>* next;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::LinkedListNode_1<T>*) == 0x8);
    // System.Collections.Generic.LinkedListNode`1<T> prev
    // Size: 0x8
    // Offset: 0x0
    System::Collections::Generic::LinkedListNode_1<T>* prev;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::LinkedListNode_1<T>*) == 0x8);
    // T item
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T item;
    // Creating value type constructor for type: LinkedListNode_1
    LinkedListNode_1(System::Collections::Generic::LinkedList_1<T>* list_ = {}, System::Collections::Generic::LinkedListNode_1<T>* next_ = {}, System::Collections::Generic::LinkedListNode_1<T>* prev_ = {}, T item_ = {}) noexcept : list{list_}, next{next_}, prev{prev_}, item{item_} {}
    // System.Void .ctor(System.Collections.Generic.LinkedList`1<T> list, T value)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LinkedListNode_1<T>* New_ctor(System::Collections::Generic::LinkedList_1<T>* list, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::LinkedListNode_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LinkedListNode_1<T>*, creationType>(list, value)));
    }
    // public System.Collections.Generic.LinkedListNode`1<T> get_Next()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::LinkedListNode_1<T>* get_Next() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::LinkedListNode_1::get_Next");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Next", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::LinkedListNode_1<T>*, false>(this, ___internal__method);
    }
    // public T get_Value()
    // Offset: 0xFFFFFFFF
    T get_Value() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::LinkedListNode_1::get_Value");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "get_Value", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method);
    }
    // System.Void Invalidate()
    // Offset: 0xFFFFFFFF
    void Invalidate() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::LinkedListNode_1::Invalidate");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Invalidate", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method);
    }
  }; // System.Collections.Generic.LinkedListNode`1
  // Could not write size check! Type: System.Collections.Generic.LinkedListNode`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::LinkedListNode_1, "System.Collections.Generic", "LinkedListNode`1");
