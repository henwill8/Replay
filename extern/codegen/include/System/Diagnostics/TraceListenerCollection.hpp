// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.IList
#include "System/Collections/IList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: ArrayList
  class ArrayList;
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System::Diagnostics
namespace System::Diagnostics {
  // Forward declaring type: TraceListener
  class TraceListener;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.TraceListenerCollection
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CB5A34
  class TraceListenerCollection : public ::Il2CppObject/*, public System::Collections::IList*/ {
    public:
    // private System.Collections.ArrayList list
    // Size: 0x8
    // Offset: 0x10
    System::Collections::ArrayList* list;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // Creating value type constructor for type: TraceListenerCollection
    TraceListenerCollection(System::Collections::ArrayList* list_ = {}) noexcept : list{list_} {}
    // Creating interface conversion operator: operator System::Collections::IList
    operator System::Collections::IList() noexcept {
      return *reinterpret_cast<System::Collections::IList*>(this);
    }
    // Creating conversion operator: operator System::Collections::ArrayList*
    constexpr operator System::Collections::ArrayList*() const noexcept {
      return list;
    }
    // public System.Int32 Add(System.Diagnostics.TraceListener listener)
    // Offset: 0x179AF1C
    int Add(System::Diagnostics::TraceListener* listener);
    // System.Void InitializeListener(System.Diagnostics.TraceListener listener)
    // Offset: 0x179BBE8
    void InitializeListener(System::Diagnostics::TraceListener* listener);
    // System.Void .ctor()
    // Offset: 0x179ADC4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TraceListenerCollection* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::TraceListenerCollection::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TraceListenerCollection*, creationType>()));
    }
    // public System.Int32 get_Count()
    // Offset: 0x179BBC4
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public System.Void Clear()
    // Offset: 0x179BCF0
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Clear()
    void Clear();
    // Creating proxy method: System_Collections_IList_Clear
    // Maps to method: Clear
    void System_Collections_IList_Clear();
    // public System.Collections.IEnumerator GetEnumerator()
    // Offset: 0x179B9A0
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IEnumerable_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public System.Void RemoveAt(System.Int32 index)
    // Offset: 0x179BD58
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::RemoveAt(System.Int32 index)
    void RemoveAt(int index);
    // Creating proxy method: System_Collections_IList_RemoveAt
    // Maps to method: RemoveAt
    void System_Collections_IList_RemoveAt(int index);
    // private System.Object System.Collections.IList.get_Item(System.Int32 index)
    // Offset: 0x179BE60
    // Implemented from: System.Collections.IList
    // Base method: System.Object IList::get_Item(System.Int32 index)
    ::Il2CppObject* System_Collections_IList_get_Item(int index);
    // private System.Void System.Collections.IList.set_Item(System.Int32 index, System.Object value)
    // Offset: 0x179BE84
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::set_Item(System.Int32 index, System.Object value)
    void System_Collections_IList_set_Item(int index, ::Il2CppObject* value);
    // private System.Boolean System.Collections.IList.get_IsReadOnly()
    // Offset: 0x179BF80
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::get_IsReadOnly()
    bool System_Collections_IList_get_IsReadOnly();
    // private System.Int32 System.Collections.IList.Add(System.Object value)
    // Offset: 0x179BF88
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::Add(System.Object value)
    int System_Collections_IList_Add(::Il2CppObject* value);
    // private System.Boolean System.Collections.IList.Contains(System.Object value)
    // Offset: 0x179C134
    // Implemented from: System.Collections.IList
    // Base method: System.Boolean IList::Contains(System.Object value)
    bool System_Collections_IList_Contains(::Il2CppObject* value);
    // private System.Int32 System.Collections.IList.IndexOf(System.Object value)
    // Offset: 0x179C158
    // Implemented from: System.Collections.IList
    // Base method: System.Int32 IList::IndexOf(System.Object value)
    int System_Collections_IList_IndexOf(::Il2CppObject* value);
    // private System.Void System.Collections.IList.Insert(System.Int32 index, System.Object value)
    // Offset: 0x179C17C
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Insert(System.Int32 index, System.Object value)
    void System_Collections_IList_Insert(int index, ::Il2CppObject* value);
    // private System.Void System.Collections.IList.Remove(System.Object value)
    // Offset: 0x179C320
    // Implemented from: System.Collections.IList
    // Base method: System.Void IList::Remove(System.Object value)
    void System_Collections_IList_Remove(::Il2CppObject* value);
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x179C428
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
  }; // System.Diagnostics.TraceListenerCollection
  #pragma pack(pop)
  static check_size<sizeof(TraceListenerCollection), 16 + sizeof(System::Collections::ArrayList*)> __System_Diagnostics_TraceListenerCollectionSizeCheck;
  static_assert(sizeof(TraceListenerCollection) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::TraceListenerCollection*, "System.Diagnostics", "TraceListenerCollection");
