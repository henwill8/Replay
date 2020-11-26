// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: String
  class String;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: IFormatterConverter
  class IFormatterConverter;
  // Forward declaring type: SerializationInfoEnumerator
  class SerializationInfoEnumerator;
}
// Completed forward declares
// Type namespace: System.Runtime.Serialization
namespace System::Runtime::Serialization {
  // Autogenerated type: System.Runtime.Serialization.SerializationInfo
  class SerializationInfo : public ::Il2CppObject {
    public:
    // System.String[] m_members
    // Offset: 0x10
    ::Array<::Il2CppString*>* m_members;
    // System.Object[] m_data
    // Offset: 0x18
    ::Array<::Il2CppObject*>* m_data;
    // System.Type[] m_types
    // Offset: 0x20
    ::Array<System::Type*>* m_types;
    // private System.Collections.Generic.Dictionary`2<System.String,System.Int32> m_nameToIndex
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<::Il2CppString*, int>* m_nameToIndex;
    // System.Int32 m_currMember
    // Offset: 0x30
    int m_currMember;
    // System.Runtime.Serialization.IFormatterConverter m_converter
    // Offset: 0x38
    System::Runtime::Serialization::IFormatterConverter* m_converter;
    // private System.String m_fullTypeName
    // Offset: 0x40
    ::Il2CppString* m_fullTypeName;
    // private System.String m_assemName
    // Offset: 0x48
    ::Il2CppString* m_assemName;
    // private System.Type objectType
    // Offset: 0x50
    System::Type* objectType;
    // private System.Boolean isFullTypeNameSetExplicit
    // Offset: 0x58
    bool isFullTypeNameSetExplicit;
    // private System.Boolean isAssemblyNameSetExplicit
    // Offset: 0x59
    bool isAssemblyNameSetExplicit;
    // private System.Boolean requireSameTokenInPartialTrust
    // Offset: 0x5A
    bool requireSameTokenInPartialTrust;
    // static field const value: static private System.Int32 defaultSize
    static constexpr const int defaultSize = 4;
    // Get static field: static private System.Int32 defaultSize
    static int _get_defaultSize();
    // Set static field: static private System.Int32 defaultSize
    static void _set_defaultSize(int value);
    // static field const value: static private System.String s_mscorlibAssemblySimpleName
    static constexpr const char* s_mscorlibAssemblySimpleName = "mscorlib";
    // Get static field: static private System.String s_mscorlibAssemblySimpleName
    static ::Il2CppString* _get_s_mscorlibAssemblySimpleName();
    // Set static field: static private System.String s_mscorlibAssemblySimpleName
    static void _set_s_mscorlibAssemblySimpleName(::Il2CppString* value);
    // static field const value: static private System.String s_mscorlibFileName
    static constexpr const char* s_mscorlibFileName = "mscorlib.dll";
    // Get static field: static private System.String s_mscorlibFileName
    static ::Il2CppString* _get_s_mscorlibFileName();
    // Set static field: static private System.String s_mscorlibFileName
    static void _set_s_mscorlibFileName(::Il2CppString* value);
    // public System.Void .ctor(System.Type type, System.Runtime.Serialization.IFormatterConverter converter)
    // Offset: 0x1444308
    static SerializationInfo* New_ctor(System::Type* type, System::Runtime::Serialization::IFormatterConverter* converter);
    // public System.Void .ctor(System.Type type, System.Runtime.Serialization.IFormatterConverter converter, System.Boolean requireSameTokenInPartialTrust)
    // Offset: 0x1444310
    static SerializationInfo* New_ctor(System::Type* type, System::Runtime::Serialization::IFormatterConverter* converter, bool requireSameTokenInPartialTrust);
    // public System.String get_FullTypeName()
    // Offset: 0x1444510
    ::Il2CppString* get_FullTypeName();
    // public System.String get_AssemblyName()
    // Offset: 0x1444518
    ::Il2CppString* get_AssemblyName();
    // public System.Void SetType(System.Type type)
    // Offset: 0x1441D98
    void SetType(System::Type* type);
    // static private System.Boolean Compare(System.Byte[] a, System.Byte[] b)
    // Offset: 0x1444524
    static bool Compare(::Array<uint8_t>* a, ::Array<uint8_t>* b);
    // static System.Void DemandForUnsafeAssemblyNameAssignments(System.String originalAssemblyName, System.String newAssemblyName)
    // Offset: 0x1444520
    static void DemandForUnsafeAssemblyNameAssignments(::Il2CppString* originalAssemblyName, ::Il2CppString* newAssemblyName);
    // static System.Boolean IsAssemblyNameAssignmentSafe(System.String originalAssemblyName, System.String newAssemblyName)
    // Offset: 0x14445B0
    static bool IsAssemblyNameAssignmentSafe(::Il2CppString* originalAssemblyName, ::Il2CppString* newAssemblyName);
    // public System.Int32 get_MemberCount()
    // Offset: 0x14446D4
    int get_MemberCount();
    // public System.Type get_ObjectType()
    // Offset: 0x14446DC
    System::Type* get_ObjectType();
    // public System.Boolean get_IsFullTypeNameSetExplicit()
    // Offset: 0x14446E4
    bool get_IsFullTypeNameSetExplicit();
    // public System.Boolean get_IsAssemblyNameSetExplicit()
    // Offset: 0x14446EC
    bool get_IsAssemblyNameSetExplicit();
    // public System.Runtime.Serialization.SerializationInfoEnumerator GetEnumerator()
    // Offset: 0x14446F4
    System::Runtime::Serialization::SerializationInfoEnumerator* GetEnumerator();
    // private System.Void ExpandArrays()
    // Offset: 0x1444800
    void ExpandArrays();
    // public System.Void AddValue(System.String name, System.Object value, System.Type type)
    // Offset: 0x1441CCC
    void AddValue(::Il2CppString* name, ::Il2CppObject* value, System::Type* type);
    // public System.Void AddValue(System.String name, System.Object value)
    // Offset: 0x1444B2C
    void AddValue(::Il2CppString* name, ::Il2CppObject* value);
    // public System.Void AddValue(System.String name, System.Boolean value)
    // Offset: 0x1444BE8
    void AddValue(::Il2CppString* name, bool value);
    // public System.Void AddValue(System.String name, System.Char value)
    // Offset: 0x1444CAC
    void AddValue(::Il2CppString* name, ::Il2CppChar value);
    // public System.Void AddValue(System.String name, System.Byte value)
    // Offset: 0x1444D70
    void AddValue(::Il2CppString* name, uint8_t value);
    // public System.Void AddValue(System.String name, System.Int16 value)
    // Offset: 0x1444E34
    void AddValue(::Il2CppString* name, int16_t value);
    // public System.Void AddValue(System.String name, System.Int32 value)
    // Offset: 0x1444EF8
    void AddValue(::Il2CppString* name, int value);
    // public System.Void AddValue(System.String name, System.Int64 value)
    // Offset: 0x1444FBC
    void AddValue(::Il2CppString* name, int64_t value);
    // public System.Void AddValue(System.String name, System.UInt64 value)
    // Offset: 0x1445080
    void AddValue(::Il2CppString* name, uint64_t value);
    // public System.Void AddValue(System.String name, System.Single value)
    // Offset: 0x1445144
    void AddValue(::Il2CppString* name, float value);
    // public System.Void AddValue(System.String name, System.DateTime value)
    // Offset: 0x1445208
    void AddValue(::Il2CppString* name, System::DateTime value);
    // System.Void AddValueInternal(System.String name, System.Object value, System.Type type)
    // Offset: 0x144493C
    void AddValueInternal(::Il2CppString* name, ::Il2CppObject* value, System::Type* type);
    // System.Void UpdateValue(System.String name, System.Object value, System.Type type)
    // Offset: 0x14452CC
    void UpdateValue(::Il2CppString* name, ::Il2CppObject* value, System::Type* type);
    // private System.Int32 FindElement(System.String name)
    // Offset: 0x14453C8
    int FindElement(::Il2CppString* name);
    // private System.Object GetElement(System.String name, out System.Type foundType)
    // Offset: 0x1445488
    ::Il2CppObject* GetElement(::Il2CppString* name, System::Type*& foundType);
    // private System.Object GetElementNoThrow(System.String name, out System.Type foundType)
    // Offset: 0x14455D0
    ::Il2CppObject* GetElementNoThrow(::Il2CppString* name, System::Type*& foundType);
    // public System.Object GetValue(System.String name, System.Type type)
    // Offset: 0x144194C
    ::Il2CppObject* GetValue(::Il2CppString* name, System::Type* type);
    // System.Object GetValueNoThrow(System.String name, System.Type type)
    // Offset: 0x1441820
    ::Il2CppObject* GetValueNoThrow(::Il2CppString* name, System::Type* type);
    // public System.Boolean GetBoolean(System.String name)
    // Offset: 0x1445678
    bool GetBoolean(::Il2CppString* name);
    // public System.Int32 GetInt32(System.String name)
    // Offset: 0x14457EC
    int GetInt32(::Il2CppString* name);
    // public System.Int64 GetInt64(System.String name)
    // Offset: 0x1445954
    int64_t GetInt64(::Il2CppString* name);
    // public System.Single GetSingle(System.String name)
    // Offset: 0x1445ABC
    float GetSingle(::Il2CppString* name);
    // public System.String GetString(System.String name)
    // Offset: 0x1445C24
    ::Il2CppString* GetString(::Il2CppString* name);
  }; // System.Runtime.Serialization.SerializationInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Serialization::SerializationInfo*, "System.Runtime.Serialization", "SerializationInfo");
#pragma pack(pop)
