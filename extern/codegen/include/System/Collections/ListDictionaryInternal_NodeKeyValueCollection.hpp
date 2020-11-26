// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.ListDictionaryInternal
#include "System/Collections/ListDictionaryInternal.hpp"
// Including type: System.Collections.ICollection
#include "System/Collections/ICollection.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.ListDictionaryInternal/NodeKeyValueCollection
  class ListDictionaryInternal::NodeKeyValueCollection : public ::Il2CppObject/*, public System::Collections::ICollection*/ {
    public:
    // Nested type: System::Collections::ListDictionaryInternal::NodeKeyValueCollection::NodeKeyValueEnumerator
    class NodeKeyValueEnumerator;
    // private System.Collections.ListDictionaryInternal list
    // Offset: 0x10
    System::Collections::ListDictionaryInternal* list;
    // private System.Boolean isKeys
    // Offset: 0x18
    bool isKeys;
    // Creating interface conversion operator: operator System::Collections::ICollection
    operator System::Collections::ICollection() noexcept {
      return *reinterpret_cast<System::Collections::ICollection*>(this);
    }
    // public System.Void .ctor(System.Collections.ListDictionaryInternal list, System.Boolean isKeys)
    // Offset: 0x152A4E4
    static ListDictionaryInternal::NodeKeyValueCollection* New_ctor(System::Collections::ListDictionaryInternal* list, bool isKeys);
    // private System.Void System.Collections.ICollection.CopyTo(System.Array array, System.Int32 index)
    // Offset: 0x152B03C
    // Implemented from: System.Collections.ICollection
    // Base method: System.Void ICollection::CopyTo(System.Array array, System.Int32 index)
    void System_Collections_ICollection_CopyTo(System::Array* array, int index);
    // private System.Int32 System.Collections.ICollection.get_Count()
    // Offset: 0x152B238
    // Implemented from: System.Collections.ICollection
    // Base method: System.Int32 ICollection::get_Count()
    int System_Collections_ICollection_get_Count();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x152B270
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // System.Collections.ListDictionaryInternal/NodeKeyValueCollection
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::ListDictionaryInternal::NodeKeyValueCollection*, "System.Collections", "ListDictionaryInternal/NodeKeyValueCollection");
#pragma pack(pop)
