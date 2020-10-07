// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.RuntimeType
#include "System/RuntimeType.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
struct Il2CppObject;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.RuntimeType/ListBuilder`1
  template<typename T>
  struct RuntimeType::ListBuilder_1 : public System::ValueType {
    public:
    // private T[] _items
    // Offset: 0x0
    ::Array<T>* items;
    // private T _item
    // Offset: 0x0
    T item;
    // private System.Int32 _count
    // Offset: 0x0
    int count;
    // private System.Int32 _capacity
    // Offset: 0x0
    int capacity;
    // Creating value type constructor for type: ListBuilder_1
    constexpr ListBuilder_1(::Array<T>* items_ = {}, T item_ = {}, int count_ = {}, int capacity_ = {}) noexcept : items{items_}, item{item_}, count{count_}, capacity{capacity_} {}
    // public System.Void .ctor(System.Int32 capacity)
    // Offset: 0xFFFFFFFF
    ListBuilder_1(int capacity) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, ".ctor", capacity));
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    T get_Item(int index) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(*this, "get_Item", index));
    }
    // public T[] ToArray()
    // Offset: 0xFFFFFFFF
    ::Array<T>* ToArray() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<::Array<T>*>(*this, "ToArray"));
    }
    // public System.Void CopyTo(System.Object[] array, System.Int32 index)
    // Offset: 0xFFFFFFFF
    void CopyTo(::Array<::Il2CppObject*>* array, int index) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "CopyTo", array, index));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    int get_Count() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "get_Count"));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Add", item));
    }
  }; // System.RuntimeType/ListBuilder`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::RuntimeType::ListBuilder_1, "System", "RuntimeType/ListBuilder`1");
#pragma pack(pop)
