// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Diagnostics.Tracing.TraceLoggingDataType
#include "System/Diagnostics/Tracing/TraceLoggingDataType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventFieldFormat
  struct EventFieldFormat;
  // Forward declaring type: TraceLoggingTypeInfo
  class TraceLoggingTypeInfo;
  // Forward declaring type: TraceLoggingTypeInfo`1<DataType>
  template<typename DataType>
  class TraceLoggingTypeInfo_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Attribute
  class Attribute;
  // Forward declaring type: Delegate
  class Delegate;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.Statics
  class Statics : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Diagnostics.Tracing.TraceLoggingDataType IntPtrType
    static System::Diagnostics::Tracing::TraceLoggingDataType _get_IntPtrType();
    // Set static field: static public readonly System.Diagnostics.Tracing.TraceLoggingDataType IntPtrType
    static void _set_IntPtrType(System::Diagnostics::Tracing::TraceLoggingDataType value);
    // Get static field: static public readonly System.Diagnostics.Tracing.TraceLoggingDataType UIntPtrType
    static System::Diagnostics::Tracing::TraceLoggingDataType _get_UIntPtrType();
    // Set static field: static public readonly System.Diagnostics.Tracing.TraceLoggingDataType UIntPtrType
    static void _set_UIntPtrType(System::Diagnostics::Tracing::TraceLoggingDataType value);
    // Get static field: static public readonly System.Diagnostics.Tracing.TraceLoggingDataType HexIntPtrType
    static System::Diagnostics::Tracing::TraceLoggingDataType _get_HexIntPtrType();
    // Set static field: static public readonly System.Diagnostics.Tracing.TraceLoggingDataType HexIntPtrType
    static void _set_HexIntPtrType(System::Diagnostics::Tracing::TraceLoggingDataType value);
    // static public System.Byte[] MetadataForString(System.String name, System.Int32 prefixSize, System.Int32 suffixSize, System.Int32 additionalSize)
    // Offset: 0xD9D9C8
    static ::Array<uint8_t>* MetadataForString(::Il2CppString* name, int prefixSize, int suffixSize, int additionalSize);
    // static public System.Void EncodeTags(System.Int32 tags, ref System.Int32 pos, System.Byte[] metadata)
    // Offset: 0xD97A64
    static void EncodeTags(int tags, int& pos, ::Array<uint8_t>* metadata);
    // static public System.Byte Combine(System.Int32 settingValue, System.Byte defaultValue)
    // Offset: 0xD9E43C
    static uint8_t Combine(int settingValue, uint8_t defaultValue);
    // static public System.Int32 Combine(System.Int32 settingValue1, System.Int32 settingValue2)
    // Offset: 0xD9E448
    static int Combine(int settingValue1, int settingValue2);
    // static public System.Void CheckName(System.String name)
    // Offset: 0xD97734
    static void CheckName(::Il2CppString* name);
    // static public System.Boolean ShouldOverrideFieldName(System.String fieldName)
    // Offset: 0xD9E454
    static bool ShouldOverrideFieldName(::Il2CppString* fieldName);
    // static public System.Diagnostics.Tracing.TraceLoggingDataType MakeDataType(System.Diagnostics.Tracing.TraceLoggingDataType baseType, System.Diagnostics.Tracing.EventFieldFormat format)
    // Offset: 0xD97B4C
    static System::Diagnostics::Tracing::TraceLoggingDataType MakeDataType(System::Diagnostics::Tracing::TraceLoggingDataType baseType, System::Diagnostics::Tracing::EventFieldFormat format);
    // static public System.Diagnostics.Tracing.TraceLoggingDataType Format8(System.Diagnostics.Tracing.EventFieldFormat format, System.Diagnostics.Tracing.TraceLoggingDataType native)
    // Offset: 0xD9DDFC
    static System::Diagnostics::Tracing::TraceLoggingDataType Format8(System::Diagnostics::Tracing::EventFieldFormat format, System::Diagnostics::Tracing::TraceLoggingDataType native);
    // static public System.Diagnostics.Tracing.TraceLoggingDataType Format16(System.Diagnostics.Tracing.EventFieldFormat format, System.Diagnostics.Tracing.TraceLoggingDataType native)
    // Offset: 0xD9808C
    static System::Diagnostics::Tracing::TraceLoggingDataType Format16(System::Diagnostics::Tracing::EventFieldFormat format, System::Diagnostics::Tracing::TraceLoggingDataType native);
    // static public System.Diagnostics.Tracing.TraceLoggingDataType Format32(System.Diagnostics.Tracing.EventFieldFormat format, System.Diagnostics.Tracing.TraceLoggingDataType native)
    // Offset: 0xD983EC
    static System::Diagnostics::Tracing::TraceLoggingDataType Format32(System::Diagnostics::Tracing::EventFieldFormat format, System::Diagnostics::Tracing::TraceLoggingDataType native);
    // static public System.Diagnostics.Tracing.TraceLoggingDataType Format64(System.Diagnostics.Tracing.EventFieldFormat format, System.Diagnostics.Tracing.TraceLoggingDataType native)
    // Offset: 0xD98764
    static System::Diagnostics::Tracing::TraceLoggingDataType Format64(System::Diagnostics::Tracing::EventFieldFormat format, System::Diagnostics::Tracing::TraceLoggingDataType native);
    // static public System.Diagnostics.Tracing.TraceLoggingDataType FormatPtr(System.Diagnostics.Tracing.EventFieldFormat format, System.Diagnostics.Tracing.TraceLoggingDataType native)
    // Offset: 0xD98ABC
    static System::Diagnostics::Tracing::TraceLoggingDataType FormatPtr(System::Diagnostics::Tracing::EventFieldFormat format, System::Diagnostics::Tracing::TraceLoggingDataType native);
    // static public System.Object CreateInstance(System.Type type, params System.Object[] parameters)
    // Offset: 0xD9E498
    static ::Il2CppObject* CreateInstance(System::Type* type, ::Array<::Il2CppObject*>* parameters);
    // Creating initializer_list -> params proxy for: System.Object CreateInstance(System.Type type, params System.Object[] parameters)
    static ::Il2CppObject* CreateInstance(System::Type* type, std::initializer_list<::Il2CppObject*> parameters);
    // Creating TArgs -> initializer_list proxy for: System.Object CreateInstance(System.Type type, params System.Object[] parameters)
    template<class ...TParams>
    static ::Il2CppObject* CreateInstance(System::Type* type, TParams&&... parameters) {
      return CreateInstance(type, {parameters...});
    }
    // static public System.Boolean IsValueType(System.Type type)
    // Offset: 0xD9E4A0
    static bool IsValueType(System::Type* type);
    // static public System.Boolean IsEnum(System.Type type)
    // Offset: 0xD9E4B8
    static bool IsEnum(System::Type* type);
    // static public System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyInfo> GetProperties(System.Type type)
    // Offset: 0xD9E4D8
    static System::Collections::Generic::IEnumerable_1<System::Reflection::PropertyInfo*>* GetProperties(System::Type* type);
    // static public System.Reflection.MethodInfo GetGetMethod(System.Reflection.PropertyInfo propInfo)
    // Offset: 0xD9E4F0
    static System::Reflection::MethodInfo* GetGetMethod(System::Reflection::PropertyInfo* propInfo);
    // static public System.Reflection.MethodInfo GetDeclaredStaticMethod(System.Type declaringType, System.String name)
    // Offset: 0xD9E508
    static System::Reflection::MethodInfo* GetDeclaredStaticMethod(System::Type* declaringType, ::Il2CppString* name);
    // static public System.Boolean HasCustomAttribute(System.Reflection.PropertyInfo propInfo, System.Type attributeType)
    // Offset: 0xD9E524
    static bool HasCustomAttribute(System::Reflection::PropertyInfo* propInfo, System::Type* attributeType);
    // static public AttributeType GetCustomAttribute(System.Reflection.PropertyInfo propInfo)
    // Offset: 0xFFFFFFFF
    template<class AttributeType>
    static AttributeType GetCustomAttribute(System::Reflection::PropertyInfo* propInfo) {
      static_assert(std::is_convertible_v<AttributeType, System::Attribute*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<AttributeType>("System.Diagnostics.Tracing", "Statics", "GetCustomAttribute", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AttributeType>::get()}, propInfo)));
    }
    // static public AttributeType GetCustomAttribute(System.Type type)
    // Offset: 0xFFFFFFFF
    template<class AttributeType>
    static AttributeType GetCustomAttribute(System::Type* type) {
      static_assert(std::is_convertible_v<AttributeType, System::Attribute*>);
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<AttributeType>("System.Diagnostics.Tracing", "Statics", "GetCustomAttribute", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<AttributeType>::get()}, type)));
    }
    // static public System.Type[] GetGenericArguments(System.Type type)
    // Offset: 0xD9E55C
    static ::Array<System::Type*>* GetGenericArguments(System::Type* type);
    // static public System.Type FindEnumerableElementType(System.Type type)
    // Offset: 0xD9E57C
    static System::Type* FindEnumerableElementType(System::Type* type);
    // static public System.Boolean IsGenericMatch(System.Type type, System.Object openType)
    // Offset: 0xD9E7B8
    static bool IsGenericMatch(System::Type* type, ::Il2CppObject* openType);
    // static public System.Delegate CreateDelegate(System.Type delegateType, System.Reflection.MethodInfo methodInfo)
    // Offset: 0xD9E8C0
    static System::Delegate* CreateDelegate(System::Type* delegateType, System::Reflection::MethodInfo* methodInfo);
    // static public System.Diagnostics.Tracing.TraceLoggingTypeInfo GetTypeInfoInstance(System.Type dataType, System.Collections.Generic.List`1<System.Type> recursionCheck)
    // Offset: 0xD9E8C8
    static System::Diagnostics::Tracing::TraceLoggingTypeInfo* GetTypeInfoInstance(System::Type* dataType, System::Collections::Generic::List_1<System::Type*>* recursionCheck);
    // static public System.Diagnostics.Tracing.TraceLoggingTypeInfo`1<DataType> CreateDefaultTypeInfo(System.Collections.Generic.List`1<System.Type> recursionCheck)
    // Offset: 0xFFFFFFFF
    template<class DataType>
    static System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>* CreateDefaultTypeInfo(System::Collections::Generic::List_1<System::Type*>* recursionCheck) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Diagnostics::Tracing::TraceLoggingTypeInfo_1<DataType>*>("System.Diagnostics.Tracing", "Statics", "CreateDefaultTypeInfo", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<DataType>::get()}, recursionCheck)));
    }
    // static private System.Void .cctor()
    // Offset: 0xD9EBD0
    static void _cctor();
  }; // System.Diagnostics.Tracing.Statics
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::Statics*, "System.Diagnostics.Tracing", "Statics");
#pragma pack(pop)
