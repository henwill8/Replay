// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
  // Forward declaring type: IDictionaryEnumerator
  class IDictionaryEnumerator;
  // Forward declaring type: ICollection
  class ICollection;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Collections.Hashtable/SyncHashtable
  // [] Offset: FFFFFFFF
  // [DefaultMemberAttribute] Offset: CAD3F0
  class Hashtable::SyncHashtable : public System::Collections::Hashtable {
    public:
    // protected System.Collections.Hashtable _table
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Hashtable* table;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // Creating value type constructor for type: SyncHashtable
    SyncHashtable(System::Collections::Hashtable* table_ = {}) noexcept : table{table_} {}
    // Creating conversion operator: operator System::Collections::Hashtable*
    constexpr operator System::Collections::Hashtable*() const noexcept {
      return table;
    }
    // System.Void .ctor(System.Collections.Hashtable table)
    // Offset: 0x18978C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hashtable::SyncHashtable* New_ctor(System::Collections::Hashtable* table) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Hashtable::SyncHashtable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hashtable::SyncHashtable*, creationType>(table)));
    }
    // System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18978F8
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Hashtable::SyncHashtable* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Hashtable::SyncHashtable::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Hashtable::SyncHashtable*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1897A74
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.Int32 get_Count()
    // Offset: 0x1897BF4
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Int32 Hashtable::get_Count()
    int get_Count();
    // Creating proxy method: System_Collections_ICollection_get_Count
    // Maps to method: get_Count
    int System_Collections_ICollection_get_Count();
    // public override System.Object get_Item(System.Object key)
    // Offset: 0x1897C18
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Object Hashtable::get_Item(System.Object key)
    ::Il2CppObject* get_Item(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_get_Item
    // Maps to method: get_Item
    ::Il2CppObject* System_Collections_IDictionary_get_Item(::Il2CppObject* key);
    // public override System.Void set_Item(System.Object key, System.Object value)
    // Offset: 0x1897C3C
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::set_Item(System.Object key, System.Object value)
    void set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_set_Item
    // Maps to method: set_Item
    void System_Collections_IDictionary_set_Item(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Object get_SyncRoot()
    // Offset: 0x1897D20
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Object Hashtable::get_SyncRoot()
    ::Il2CppObject* get_SyncRoot();
    // public override System.Void Add(System.Object key, System.Object value)
    // Offset: 0x1897D44
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::Add(System.Object key, System.Object value)
    void Add(::Il2CppObject* key, ::Il2CppObject* value);
    // Creating proxy method: System_Collections_IDictionary_Add
    // Maps to method: Add
    void System_Collections_IDictionary_Add(::Il2CppObject* key, ::Il2CppObject* value);
    // public override System.Void Clear()
    // Offset: 0x1897E28
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::Clear()
    void Clear();
    // public override System.Boolean Contains(System.Object key)
    // Offset: 0x1897EF4
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Boolean Hashtable::Contains(System.Object key)
    bool Contains(::Il2CppObject* key);
    // Creating proxy method: System_Collections_IDictionary_Contains
    // Maps to method: Contains
    bool System_Collections_IDictionary_Contains(::Il2CppObject* key);
    // public override System.Boolean ContainsKey(System.Object key)
    // Offset: 0x1897F18
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Boolean Hashtable::ContainsKey(System.Object key)
    bool ContainsKey(::Il2CppObject* key);
    // public override System.Void CopyTo(System.Array array, System.Int32 arrayIndex)
    // Offset: 0x1897FE0
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::CopyTo(System.Array array, System.Int32 arrayIndex)
    void CopyTo(System::Array* array, int arrayIndex);
    // Creating proxy method: System_Collections_ICollection_CopyTo
    // Maps to method: CopyTo
    void System_Collections_ICollection_CopyTo(System::Array* array, int arrayIndex);
    // public override System.Object Clone()
    // Offset: 0x18980C4
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Object Hashtable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x1898214
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
    // public override System.Collections.IDictionaryEnumerator GetEnumerator()
    // Offset: 0x1898238
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Collections.IDictionaryEnumerator Hashtable::GetEnumerator()
    System::Collections::IDictionaryEnumerator* GetEnumerator();
    // Creating proxy method: System_Collections_IDictionary_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::IDictionaryEnumerator* System_Collections_IDictionary_GetEnumerator();
    // public override System.Collections.ICollection get_Keys()
    // Offset: 0x189825C
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Collections.ICollection Hashtable::get_Keys()
    System::Collections::ICollection* get_Keys();
    // Creating proxy method: System_Collections_IDictionary_get_Keys
    // Maps to method: get_Keys
    System::Collections::ICollection* System_Collections_IDictionary_get_Keys();
    // public override System.Collections.ICollection get_Values()
    // Offset: 0x1898340
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Collections.ICollection Hashtable::get_Values()
    System::Collections::ICollection* get_Values();
    // public override System.Void Remove(System.Object key)
    // Offset: 0x1898424
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::Remove(System.Object key)
    void Remove(::Il2CppObject* key);
    // public override System.Void OnDeserialization(System.Object sender)
    // Offset: 0x18984F8
    // Implemented from: System.Collections.Hashtable
    // Base method: System.Void Hashtable::OnDeserialization(System.Object sender)
    void OnDeserialization(::Il2CppObject* sender);
    // Creating proxy method: System_Runtime_Serialization_IDeserializationCallback_OnDeserialization
    // Maps to method: OnDeserialization
    void System_Runtime_Serialization_IDeserializationCallback_OnDeserialization(::Il2CppObject* sender);
  }; // System.Collections.Hashtable/SyncHashtable
  #pragma pack(pop)
  static check_size<sizeof(Hashtable::SyncHashtable), 80 + sizeof(System::Collections::Hashtable*)> __System_Collections_Hashtable_SyncHashtableSizeCheck;
  static_assert(sizeof(Hashtable::SyncHashtable) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Hashtable::SyncHashtable*, "System.Collections", "Hashtable/SyncHashtable");
