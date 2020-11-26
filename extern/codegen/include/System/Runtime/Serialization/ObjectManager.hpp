// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: DeserializationEventHandler
  class DeserializationEventHandler;
  // Forward declaring type: SerializationEventHandler
  class SerializationEventHandler;
  // Forward declaring type: ObjectHolder
  class ObjectHolder;
  // Forward declaring type: ObjectHolderList
  class ObjectHolderList;
  // Forward declaring type: ISurrogateSelector
  class ISurrogateSelector;
  // Forward declaring type: FixupHolder
  class FixupHolder;
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
  // Forward declaring type: RuntimeConstructorInfo
  class RuntimeConstructorInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: RuntimeType
  class RuntimeType;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.ObjectManager
  class ObjectManager : public ::Il2CppObject {
    public:
    // private System.Runtime.Serialization.DeserializationEventHandler m_onDeserializationHandler
    // Offset: 0x10
    System::Runtime::Serialization::DeserializationEventHandler* m_onDeserializationHandler;
    // private System.Runtime.Serialization.SerializationEventHandler m_onDeserializedHandler
    // Offset: 0x18
    System::Runtime::Serialization::SerializationEventHandler* m_onDeserializedHandler;
    // System.Runtime.Serialization.ObjectHolder[] m_objects
    // Offset: 0x20
    ::Array<System::Runtime::Serialization::ObjectHolder*>* m_objects;
    // System.Object m_topObject
    // Offset: 0x28
    ::Il2CppObject* m_topObject;
    // System.Runtime.Serialization.ObjectHolderList m_specialFixupObjects
    // Offset: 0x30
    System::Runtime::Serialization::ObjectHolderList* m_specialFixupObjects;
    // System.Int64 m_fixupCount
    // Offset: 0x38
    int64_t m_fixupCount;
    // System.Runtime.Serialization.ISurrogateSelector m_selector
    // Offset: 0x40
    System::Runtime::Serialization::ISurrogateSelector* m_selector;
    // System.Runtime.Serialization.StreamingContext m_context
    // Offset: 0x48
    System::Runtime::Serialization::StreamingContext m_context;
    // System.Void .ctor(System.Runtime.Serialization.ISurrogateSelector selector, System.Runtime.Serialization.StreamingContext context, System.Boolean checkSecurity, System.Boolean isCrossAppDomain)
    // Offset: 0x12F533C
    static ObjectManager* New_ctor(System::Runtime::Serialization::ISurrogateSelector* selector, System::Runtime::Serialization::StreamingContext context, bool checkSecurity, bool isCrossAppDomain);
    // private System.Boolean CanCallGetType(System.Object obj)
    // Offset: 0x130691C
    bool CanCallGetType(::Il2CppObject* obj);
    // System.Void set_TopObject(System.Object value)
    // Offset: 0x1306924
    void set_TopObject(::Il2CppObject* value);
    // System.Object get_TopObject()
    // Offset: 0x130692C
    ::Il2CppObject* get_TopObject();
    // System.Runtime.Serialization.ObjectHolderList get_SpecialFixupObjects()
    // Offset: 0x1306934
    System::Runtime::Serialization::ObjectHolderList* get_SpecialFixupObjects();
    // System.Runtime.Serialization.ObjectHolder FindObjectHolder(System.Int64 objectID)
    // Offset: 0x13069AC
    System::Runtime::Serialization::ObjectHolder* FindObjectHolder(int64_t objectID);
    // System.Runtime.Serialization.ObjectHolder FindOrCreateObjectHolder(System.Int64 objectID)
    // Offset: 0x130516C
    System::Runtime::Serialization::ObjectHolder* FindOrCreateObjectHolder(int64_t objectID);
    // private System.Void AddObjectHolder(System.Runtime.Serialization.ObjectHolder holder)
    // Offset: 0x1306A10
    void AddObjectHolder(System::Runtime::Serialization::ObjectHolder* holder);
    // private System.Boolean GetCompletionInfo(System.Runtime.Serialization.FixupHolder fixup, out System.Runtime.Serialization.ObjectHolder holder, out System.Object member, System.Boolean bThrowIfMissing)
    // Offset: 0x1306B74
    bool GetCompletionInfo(System::Runtime::Serialization::FixupHolder* fixup, System::Runtime::Serialization::ObjectHolder*& holder, ::Il2CppObject*& member, bool bThrowIfMissing);
    // private System.Void FixupSpecialObject(System.Runtime.Serialization.ObjectHolder holder)
    // Offset: 0x1306E48
    void FixupSpecialObject(System::Runtime::Serialization::ObjectHolder* holder);
    // private System.Boolean ResolveObjectReference(System.Runtime.Serialization.ObjectHolder holder)
    // Offset: 0x130799C
    bool ResolveObjectReference(System::Runtime::Serialization::ObjectHolder* holder);
    // private System.Boolean DoValueTypeFixup(System.Reflection.FieldInfo memberToFix, System.Runtime.Serialization.ObjectHolder holder, System.Object value)
    // Offset: 0x1307348
    bool DoValueTypeFixup(System::Reflection::FieldInfo* memberToFix, System::Runtime::Serialization::ObjectHolder* holder, ::Il2CppObject* value);
    // System.Void CompleteObject(System.Runtime.Serialization.ObjectHolder holder, System.Boolean bObjectFullyComplete)
    // Offset: 0x130571C
    void CompleteObject(System::Runtime::Serialization::ObjectHolder* holder, bool bObjectFullyComplete);
    // private System.Void DoNewlyRegisteredObjectFixups(System.Runtime.Serialization.ObjectHolder holder)
    // Offset: 0x13078C0
    void DoNewlyRegisteredObjectFixups(System::Runtime::Serialization::ObjectHolder* holder);
    // public System.Object GetObject(System.Int64 objectID)
    // Offset: 0x1307C20
    ::Il2CppObject* GetObject(int64_t objectID);
    // System.Void RegisterString(System.String obj, System.Int64 objectID, System.Runtime.Serialization.SerializationInfo info, System.Int64 idOfContainingObj, System.Reflection.MemberInfo member)
    // Offset: 0x12F8F94
    void RegisterString(::Il2CppString* obj, int64_t objectID, System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, System::Reflection::MemberInfo* member);
    // public System.Void RegisterObject(System.Object obj, System.Int64 objectID, System.Runtime.Serialization.SerializationInfo info, System.Int64 idOfContainingObj, System.Reflection.MemberInfo member, System.Int32[] arrayIndex)
    // Offset: 0x12F9088
    void RegisterObject(::Il2CppObject* obj, int64_t objectID, System::Runtime::Serialization::SerializationInfo* info, int64_t idOfContainingObj, System::Reflection::MemberInfo* member, ::Array<int>* arrayIndex);
    // System.Void CompleteISerializableObject(System.Object obj, System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13070D4
    void CompleteISerializableObject(::Il2CppObject* obj, System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static System.Reflection.RuntimeConstructorInfo GetConstructor(System.RuntimeType t)
    // Offset: 0x1307D08
    static System::Reflection::RuntimeConstructorInfo* GetConstructor(System::RuntimeType* t);
    // public System.Void DoFixups()
    // Offset: 0x1307E4C
    void DoFixups();
    // private System.Void RegisterFixup(System.Runtime.Serialization.FixupHolder fixup, System.Int64 objectToBeFixed, System.Int64 objectRequired)
    // Offset: 0x1308140
    void RegisterFixup(System::Runtime::Serialization::FixupHolder* fixup, int64_t objectToBeFixed, int64_t objectRequired);
    // public System.Void RecordFixup(System.Int64 objectToBeFixed, System.Reflection.MemberInfo member, System.Int64 objectRequired)
    // Offset: 0x1308250
    void RecordFixup(int64_t objectToBeFixed, System::Reflection::MemberInfo* member, int64_t objectRequired);
    // public System.Void RecordDelayedFixup(System.Int64 objectToBeFixed, System.String memberName, System.Int64 objectRequired)
    // Offset: 0x13084C0
    void RecordDelayedFixup(int64_t objectToBeFixed, ::Il2CppString* memberName, int64_t objectRequired);
    // public System.Void RecordArrayElementFixup(System.Int64 arrayToBeFixed, System.Int32[] indices, System.Int64 objectRequired)
    // Offset: 0x1308614
    void RecordArrayElementFixup(int64_t arrayToBeFixed, ::Array<int>* indices, int64_t objectRequired);
    // public System.Void RaiseDeserializationEvent()
    // Offset: 0x1308768
    void RaiseDeserializationEvent();
    // System.Void AddOnDeserialization(System.Runtime.Serialization.DeserializationEventHandler handler)
    // Offset: 0x13087B4
    void AddOnDeserialization(System::Runtime::Serialization::DeserializationEventHandler* handler);
    // System.Void AddOnDeserialized(System.Object obj)
    // Offset: 0x1308844
    void AddOnDeserialized(::Il2CppObject* obj);
    // System.Void RaiseOnDeserializedEvent(System.Object obj)
    // Offset: 0x13088F8
    void RaiseOnDeserializedEvent(::Il2CppObject* obj);
    // public System.Void RaiseOnDeserializingEvent(System.Object obj)
    // Offset: 0x12F76E8
    void RaiseOnDeserializingEvent(::Il2CppObject* obj);
  }; // System.Runtime.Serialization.ObjectManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::ObjectManager*, "System.Runtime.Serialization", "ObjectManager");
#pragma pack(pop)
