// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ArrayList
#include "System/Collections/ArrayList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ICollection
  class ICollection;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.ArrayList/ReadOnlyArrayList
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CAD234
  class ArrayList::ReadOnlyArrayList : public System::Collections::ArrayList {
    public:
    // private System.Collections.ArrayList _list
    // Size: 0x8
    // Offset: 0x28
    System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: ReadOnlyArrayList
    ReadOnlyArrayList(System::Collections::ArrayList* list_ = {}) noexcept : list{list_} {}
    // Creating conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept {
      return list;
    }
    // System.Void .ctor(System.Collections.ArrayList l)
    // Offset: 0x168B9F4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ArrayList::ReadOnlyArrayList* New_ctor(System::Collections::ArrayList* l) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::ArrayList::ReadOnlyArrayList::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ArrayList::ReadOnlyArrayList*, creationType>(l)));
    }
    // public override System.Int32 get_Count()
    // Offset: 0x168C5A0
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Int32 ArrayList::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public override System.Boolean get_IsReadOnly()
    // Offset: 0x168C5C4
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Boolean ArrayList::get_IsReadOnly()
    bool get_IsReadOnly();
    // Creating proxy method: System_Collections_IList_get_IsReadOnly
    // Maps to method: get_IsReadOnly
    bool System_Collections_IList_get_IsReadOnly();
    // public override System.Object get_Item(System.Int32 index)
    // Offset: 0x168C5CC
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Object ArrayList::get_Item(System.Int32 index)
    ::Il2CppObject* get_Item(int index);
    // Creating proxy method: System_Collections_IList_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IList_get_Item(int index);
    // public override System.Void set_Item(System.Int32 index, System.Object value)
    // Offset: 0x168C5F0
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::set_Item(System.Int32 index, System.Object value)
    void set_Item(int index, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IList_set_Item
    // Maps to method: set_Item
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value);
    // public override System.Object get_SyncRoot()
    // Offset: 0x168C670
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Object ArrayList::get_SyncRoot()
    ::Il2CppObject* get_SyncRoot();
    // public override System.Int32 Add(System.Object obj)
    // Offset: 0x168C694
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Int32 ArrayList::Add(System.Object obj)
    int Add(::Il2CppObject* obj);
    // Creating proxy method: System_Collections_IList_Add
    // Maps to method: Add
    int System_Collections_IList_Add(::Il2CppObject* obj);
    // public override System.Void AddRange(System.Collections.ICollection c)
    // Offset: 0x168C714
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::AddRange(System.Collections.ICollection c)
    void AddRange(System::Collections::ICollection* c);
    // public override System.Void set_Capacity(System.Int32 value)
    // Offset: 0x168C794
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::set_Capacity(System.Int32 value)
    void set_Capacity(int value);
    // public override System.Void Clear()
    // Offset: 0x168C814
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::Clear()
    void Clear();
    // Creating proxy method: System_Collections_IList_Clear
    // Maps to method: Clear
    void System_Collections_IList_Clear();
    // public override System.Object Clone()
    // Offset: 0x168C894
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Object ArrayList::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Contains(System.Object obj)
    // Offset: 0x168C974
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Boolean ArrayList::Contains(System.Object obj)
    bool Contains(::Il2CppObject* obj);
    // Creating proxy method: System_Collections_IList_Contains
    // Maps to method: Contains
    bool System_Collections_IList_Contains(::Il2CppObject* obj);
    // public override System.Void CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x168C998
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::CopyTo(System.Array array, System.Int32 index)
    void CopyTo(System::Array* array, int index);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // public override System.Void CopyTo(System.Int32 index, System.Array array, System.Int32 arrayIndex, System.Int32 count)
    // Offset: 0x168C9BC
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::CopyTo(System.Int32 index, System.Array array, System.Int32 arrayIndex, System.Int32 count)
    void CopyTo(int index, System::Array* array, int arrayIndex, int count);
    // public override System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x168C9E0
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Collections.IEnumerator ArrayList::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.Int32 IndexOf(System.Object value)
    // Offset: 0x168CA04
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Int32 ArrayList::IndexOf(System.Object value)
    int IndexOf(::Il2CppObject* value);
    // Creating proxy method: System_Collections_IList_IndexOf
    // Maps to method: IndexOf
    int System_Collections_IList_IndexOf(::Il2CppObject* value);
    // public override System.Void Insert(System.Int32 index, System.Object obj)
    // Offset: 0x168CA28
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::Insert(System.Int32 index, System.Object obj)
    void Insert(int index, ::Il2CppObject* obj);
    // Creating proxy method: System_Collections_IList_Insert
    // Maps to method: Insert
    void System_Collections_IList_Insert(int index, ::Il2CppObject* obj);
    // public override System.Void InsertRange(System.Int32 index, System.Collections.ICollection c)
    // Offset: 0x168CAA8
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::InsertRange(System.Int32 index, System.Collections.ICollection c)
    void InsertRange(int index, System::Collections::ICollection* c);
    // public override System.Void Remove(System.Object value)
    // Offset: 0x168CB28
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::Remove(System.Object value)
    void Remove(::Il2CppObject* value);
    // Creating proxy method: System_Collections_IList_Remove
    // Maps to method: Remove
    void System_Collections_IList_Remove(::Il2CppObject* value);
    // public override System.Void RemoveAt(System.Int32 index)
    // Offset: 0x168CBA8
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::RemoveAt(System.Int32 index)
    void RemoveAt(int index);
    // Creating proxy method: System_Collections_IList_RemoveAt
    // Maps to method: RemoveAt
    void System_Collections_IList_RemoveAt(int index);
    // public override System.Void RemoveRange(System.Int32 index, System.Int32 count)
    // Offset: 0x168CC28
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::RemoveRange(System.Int32 index, System.Int32 count)
    void RemoveRange(int index, int count);
    // public override System.Void Reverse(System.Int32 index, System.Int32 count)
    // Offset: 0x168CCA8
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Void ArrayList::Reverse(System.Int32 index, System.Int32 count)
    void Reverse(int index, int count);
    // public override System.Object[] ToArray()
    // Offset: 0x168CD28
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Object[] ArrayList::ToArray()
    ::Array<::Il2CppObject*>* ToArray();
    // public override System.Array ToArray(System.Type type)
    // Offset: 0x168CD4C
    // Implemented from: System.Collections.ArrayList
    // Base method: System.Array ArrayList::ToArray(System.Type type)
    System::Array* ToArray(System::Type* type);
  }; // System.Collections.ArrayList/ReadOnlyArrayList
  #pragma pack(pop)
  static check_size<sizeof(ArrayList::ReadOnlyArrayList), 40 + sizeof(System::Collections::ArrayList*)> __System_Collections_ArrayList_ReadOnlyArrayListSizeCheck;
  static_assert(sizeof(ArrayList::ReadOnlyArrayList) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ArrayList::ReadOnlyArrayList*, "System.Collections", "ArrayList/ReadOnlyArrayList");
