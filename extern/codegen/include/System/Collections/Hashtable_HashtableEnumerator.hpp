// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Hashtable
#include "System/Collections/Hashtable.hpp"
// Including type: System.Collections.IDictionaryEnumerator
#include "System/Collections/IDictionaryEnumerator.hpp"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: DictionaryEntry
  struct DictionaryEntry;
}
// Completed forward declares
// Type namespace: System.Collections
namespace System::Collections {
  // Autogenerated type: System.Collections.Hashtable/HashtableEnumerator
  class Hashtable::HashtableEnumerator : public ::Il2CppObject/*, public System::Collections::IDictionaryEnumerator, public System::ICloneable*/ {
    public:
    // private System.Collections.Hashtable hashtable
    // Offset: 0x10
    System::Collections::Hashtable* hashtable;
    // private System.Int32 bucket
    // Offset: 0x18
    int bucket;
    // private System.Int32 version
    // Offset: 0x1C
    int version;
    // private System.Boolean current
    // Offset: 0x20
    bool current;
    // private System.Int32 getObjectRetType
    // Offset: 0x24
    int getObjectRetType;
    // private System.Object currentKey
    // Offset: 0x28
    ::Il2CppObject* currentKey;
    // private System.Object currentValue
    // Offset: 0x30
    ::Il2CppObject* currentValue;
    // Creating interface conversion operator: operator System::Collections::IDictionaryEnumerator
    operator System::Collections::IDictionaryEnumerator() noexcept {
      return *reinterpret_cast<System::Collections::IDictionaryEnumerator*>(this);
    }
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // System.Void .ctor(System.Collections.Hashtable hashtable, System.Int32 getObjRetType)
    // Offset: 0x1528AA0
    static Hashtable::HashtableEnumerator* New_ctor(System::Collections::Hashtable* hashtable, int getObjRetType);
    // public System.Object Clone()
    // Offset: 0x1528B10
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public System.Object get_Key()
    // Offset: 0x1528B18
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Object IDictionaryEnumerator::get_Key()
    ::Il2CppObject* get_Key();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Key
    // Maps to method: get_Key
    ::Il2CppObject* System_Collections_IDictionaryEnumerator_get_Key();
    // public System.Boolean MoveNext()
    // Offset: 0x1528BB4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Collections.DictionaryEntry get_Entry()
    // Offset: 0x1528D18
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Collections.DictionaryEntry IDictionaryEnumerator::get_Entry()
    System::Collections::DictionaryEntry get_Entry();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Entry
    // Maps to method: get_Entry
    System::Collections::DictionaryEntry System_Collections_IDictionaryEnumerator_get_Entry();
    // public System.Object get_Current()
    // Offset: 0x1528DD0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* get_Current();
    // Creating proxy method: System_Collections_IEnumerator_get_Current
    // Maps to method: get_Current
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Object get_Value()
    // Offset: 0x1528EC4
    // Implemented from: System.Collections.IDictionaryEnumerator
    // Base method: System.Object IDictionaryEnumerator::get_Value()
    ::Il2CppObject* get_Value();
    // Creating proxy method: System_Collections_IDictionaryEnumerator_get_Value
    // Maps to method: get_Value
    ::Il2CppObject* System_Collections_IDictionaryEnumerator_get_Value();
    // public System.Void Reset()
    // Offset: 0x1528F60
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
  }; // System.Collections.Hashtable/HashtableEnumerator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Hashtable::HashtableEnumerator*, "System.Collections", "Hashtable/HashtableEnumerator");
#pragma pack(pop)