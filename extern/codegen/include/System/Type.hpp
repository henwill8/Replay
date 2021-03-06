// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Reflection.MemberInfo
#include "System/Reflection/MemberInfo.hpp"
// Including type: System.Runtime.InteropServices._Type
#include "System/Runtime/InteropServices/_Type.hpp"
// Including type: System.RuntimeTypeHandle
#include "System/RuntimeTypeHandle.hpp"
// Including type: System.Reflection.BindingFlags
#include "System/Reflection/BindingFlags.hpp"
// Including type: System.Reflection.ParameterModifier
#include "System/Reflection/ParameterModifier.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MemberFilter
  class MemberFilter;
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: MethodBase
  class MethodBase;
  // Forward declaring type: AssemblyName
  class AssemblyName;
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
  // Forward declaring type: CallingConventions
  struct CallingConventions;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: FieldInfo
  class FieldInfo;
  // Forward declaring type: TypeFilter
  class TypeFilter;
  // Forward declaring type: EventInfo
  class EventInfo;
  // Forward declaring type: PropertyInfo
  class PropertyInfo;
  // Forward declaring type: MemberTypes
  struct MemberTypes;
  // Forward declaring type: TypeAttributes
  struct TypeAttributes;
  // Forward declaring type: GenericParameterAttributes
  struct GenericParameterAttributes;
  // Forward declaring type: Module
  class Module;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
  // Forward declaring type: Func`4<T1, T2, T3, TResult>
  template<typename T1, typename T2, typename T3, typename TResult>
  class Func_4;
  // Forward declaring type: TypeCode
  struct TypeCode;
  // Forward declaring type: Array
  class Array;
  // Skipping declaration: IntPtr because it is already included!
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: System.Type
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CA8560
  // [ComDefaultInterfaceAttribute] Offset: CA8560
  // [ClassInterfaceAttribute] Offset: CA8560
  class Type : public System::Reflection::MemberInfo/*, public System::Runtime::InteropServices::_Type*/ {
    public:
    // System.RuntimeTypeHandle _impl
    // Size: 0x8
    // Offset: 0x10
    System::RuntimeTypeHandle impl;
    // Field size check
    static_assert(sizeof(System::RuntimeTypeHandle) == 0x8);
    // Creating value type constructor for type: Type
    Type(System::RuntimeTypeHandle impl_ = {}) noexcept : impl{impl_} {}
    // Creating interface conversion operator: operator System::Runtime::InteropServices::_Type
    operator System::Runtime::InteropServices::_Type() noexcept {
      return *reinterpret_cast<System::Runtime::InteropServices::_Type*>(this);
    }
    // Creating conversion operator: operator System::RuntimeTypeHandle
    constexpr operator System::RuntimeTypeHandle() const noexcept {
      return impl;
    }
    // Get static field: static public readonly System.Reflection.MemberFilter FilterAttribute
    static System::Reflection::MemberFilter* _get_FilterAttribute();
    // Set static field: static public readonly System.Reflection.MemberFilter FilterAttribute
    static void _set_FilterAttribute(System::Reflection::MemberFilter* value);
    // Get static field: static public readonly System.Reflection.MemberFilter FilterName
    static System::Reflection::MemberFilter* _get_FilterName();
    // Set static field: static public readonly System.Reflection.MemberFilter FilterName
    static void _set_FilterName(System::Reflection::MemberFilter* value);
    // Get static field: static public readonly System.Reflection.MemberFilter FilterNameIgnoreCase
    static System::Reflection::MemberFilter* _get_FilterNameIgnoreCase();
    // Set static field: static public readonly System.Reflection.MemberFilter FilterNameIgnoreCase
    static void _set_FilterNameIgnoreCase(System::Reflection::MemberFilter* value);
    // Get static field: static public readonly System.Object Missing
    static ::Il2CppObject* _get_Missing();
    // Set static field: static public readonly System.Object Missing
    static void _set_Missing(::Il2CppObject* value);
    // Get static field: static public readonly System.Char Delimiter
    static ::Il2CppChar _get_Delimiter();
    // Set static field: static public readonly System.Char Delimiter
    static void _set_Delimiter(::Il2CppChar value);
    // Get static field: static public readonly System.Type[] EmptyTypes
    static ::Array<System::Type*>* _get_EmptyTypes();
    // Set static field: static public readonly System.Type[] EmptyTypes
    static void _set_EmptyTypes(::Array<System::Type*>* value);
    // Get static field: static private System.Reflection.Binder defaultBinder
    static System::Reflection::Binder* _get_defaultBinder();
    // Set static field: static private System.Reflection.Binder defaultBinder
    static void _set_defaultBinder(System::Reflection::Binder* value);
    // static field const value: static private System.Reflection.BindingFlags DefaultLookup
    static constexpr const int DefaultLookup = 28;
    // Get static field: static private System.Reflection.BindingFlags DefaultLookup
    static System::Reflection::BindingFlags _get_DefaultLookup();
    // Set static field: static private System.Reflection.BindingFlags DefaultLookup
    static void _set_DefaultLookup(System::Reflection::BindingFlags value);
    // static field const value: static System.Reflection.BindingFlags DeclaredOnlyLookup
    static constexpr const int DeclaredOnlyLookup = 62;
    // Get static field: static System.Reflection.BindingFlags DeclaredOnlyLookup
    static System::Reflection::BindingFlags _get_DeclaredOnlyLookup();
    // Set static field: static System.Reflection.BindingFlags DeclaredOnlyLookup
    static void _set_DeclaredOnlyLookup(System::Reflection::BindingFlags value);
    // public System.Reflection.MethodBase get_DeclaringMethod()
    // Offset: 0x19EE724
    System::Reflection::MethodBase* get_DeclaringMethod();
    // static public System.Type GetType(System.String typeName, System.Func`2<System.Reflection.AssemblyName,System.Reflection.Assembly> assemblyResolver, System.Func`4<System.Reflection.Assembly,System.String,System.Boolean,System.Type> typeResolver, System.Boolean throwOnError)
    // Offset: 0x19EE734
    static System::Type* GetType(::Il2CppString* typeName, System::Func_2<System::Reflection::AssemblyName*, System::Reflection::Assembly*>* assemblyResolver, System::Func_4<System::Reflection::Assembly*, ::Il2CppString*, bool, System::Type*>* typeResolver, bool throwOnError);
    // public System.Type MakePointerType()
    // Offset: 0x19EE78C
    System::Type* MakePointerType();
    // public System.Type MakeByRefType()
    // Offset: 0x19EE7EC
    System::Type* MakeByRefType();
    // public System.Type MakeArrayType()
    // Offset: 0x19EE84C
    System::Type* MakeArrayType();
    // public System.Type MakeArrayType(System.Int32 rank)
    // Offset: 0x19EE8AC
    System::Type* MakeArrayType(int rank);
    // static public System.TypeCode GetTypeCode(System.Type type)
    // Offset: 0x19EE90C
    static System::TypeCode GetTypeCode(System::Type* type);
    // protected System.TypeCode GetTypeCodeImpl()
    // Offset: 0x19EE9A0
    System::TypeCode GetTypeCodeImpl();
    // static public System.Reflection.Binder get_DefaultBinder()
    // Offset: 0x19EEAC0
    static System::Reflection::Binder* get_DefaultBinder();
    // static private System.Void CreateBinder()
    // Offset: 0x19EEB68
    static void CreateBinder();
    // public System.Object InvokeMember(System.String name, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object target, System.Object[] args, System.Reflection.ParameterModifier[] modifiers, System.Globalization.CultureInfo culture, System.String[] namedParameters)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* InvokeMember(::Il2CppString* name, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Il2CppObject* target, ::Array<::Il2CppObject*>* args, ::Array<System::Reflection::ParameterModifier>* modifiers, System::Globalization::CultureInfo* culture, ::Array<::Il2CppString*>* namedParameters);
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0xFFFFFFFF
    System::Reflection::Assembly* get_Assembly();
    // public System.RuntimeTypeHandle get_TypeHandle()
    // Offset: 0x19EEC28
    System::RuntimeTypeHandle get_TypeHandle();
    // static public System.RuntimeTypeHandle GetTypeHandle(System.Object o)
    // Offset: 0x19EEC88
    static System::RuntimeTypeHandle GetTypeHandle(::Il2CppObject* o);
    // public System.String get_FullName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_FullName();
    // public System.String get_Namespace()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Namespace();
    // public System.String get_AssemblyQualifiedName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_AssemblyQualifiedName();
    // public System.Int32 GetArrayRank()
    // Offset: 0x19EED90
    int GetArrayRank();
    // public System.Type get_BaseType()
    // Offset: 0xFFFFFFFF
    System::Type* get_BaseType();
    // public System.Reflection.ConstructorInfo GetConstructor(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x19EEE10
    System::Reflection::ConstructorInfo* GetConstructor(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.ConstructorInfo GetConstructor(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x19EEF48
    System::Reflection::ConstructorInfo* GetConstructor(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.ConstructorInfo GetConstructor(System.Type[] types)
    // Offset: 0x19EF07C
    System::Reflection::ConstructorInfo* GetConstructor(::Array<System::Type*>* types);
    // protected System.Reflection.ConstructorInfo GetConstructorImpl(System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xFFFFFFFF
    System::Reflection::ConstructorInfo* GetConstructorImpl(System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.ConstructorInfo[] GetConstructors()
    // Offset: 0x19EF090
    ::Array<System::Reflection::ConstructorInfo*>* GetConstructors();
    // public System.Reflection.ConstructorInfo[] GetConstructors(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    ::Array<System::Reflection::ConstructorInfo*>* GetConstructors(System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.MethodInfo GetMethod(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0x19EF0A4
    System::Reflection::MethodInfo* GetMethod(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.MethodInfo GetMethod(System.String name, System.Type[] types)
    // Offset: 0x19EF200
    System::Reflection::MethodInfo* GetMethod(::Il2CppString* name, ::Array<System::Type*>* types);
    // public System.Reflection.MethodInfo GetMethod(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x19EF348
    System::Reflection::MethodInfo* GetMethod(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.MethodInfo GetMethod(System.String name)
    // Offset: 0x19EF400
    System::Reflection::MethodInfo* GetMethod(::Il2CppString* name);
    // protected System.Reflection.MethodInfo GetMethodImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Reflection.CallingConventions callConvention, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xFFFFFFFF
    System::Reflection::MethodInfo* GetMethodImpl(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Reflection::CallingConventions callConvention, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.MethodInfo[] GetMethods()
    // Offset: 0x19EF4B4
    ::Array<System::Reflection::MethodInfo*>* GetMethods();
    // public System.Reflection.MethodInfo[] GetMethods(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    ::Array<System::Reflection::MethodInfo*>* GetMethods(System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.FieldInfo GetField(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    System::Reflection::FieldInfo* GetField(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.FieldInfo GetField(System.String name)
    // Offset: 0x19EF4C8
    System::Reflection::FieldInfo* GetField(::Il2CppString* name);
    // public System.Reflection.FieldInfo[] GetFields()
    // Offset: 0x19EF4DC
    ::Array<System::Reflection::FieldInfo*>* GetFields();
    // public System.Reflection.FieldInfo[] GetFields(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    ::Array<System::Reflection::FieldInfo*>* GetFields(System::Reflection::BindingFlags bindingAttr);
    // public System.Type[] GetInterfaces()
    // Offset: 0xFFFFFFFF
    ::Array<System::Type*>* GetInterfaces();
    // public System.Type[] FindInterfaces(System.Reflection.TypeFilter filter, System.Object filterCriteria)
    // Offset: 0x19EF4F0
    ::Array<System::Type*>* FindInterfaces(System::Reflection::TypeFilter* filter, ::Il2CppObject* filterCriteria);
    // public System.Reflection.EventInfo GetEvent(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    System::Reflection::EventInfo* GetEvent(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.PropertyInfo GetProperty(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x19EF728
    System::Reflection::PropertyInfo* GetProperty(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.PropertyInfo GetProperty(System.String name, System.Type returnType, System.Type[] types)
    // Offset: 0x19EF7E0
    System::Reflection::PropertyInfo* GetProperty(::Il2CppString* name, System::Type* returnType, ::Array<System::Type*>* types);
    // public System.Reflection.PropertyInfo GetProperty(System.String name, System.Type returnType)
    // Offset: 0x19EF8C4
    System::Reflection::PropertyInfo* GetProperty(::Il2CppString* name, System::Type* returnType);
    // public System.Reflection.PropertyInfo GetProperty(System.String name)
    // Offset: 0x19EF9BC
    System::Reflection::PropertyInfo* GetProperty(::Il2CppString* name);
    // protected System.Reflection.PropertyInfo GetPropertyImpl(System.String name, System.Reflection.BindingFlags bindingAttr, System.Reflection.Binder binder, System.Type returnType, System.Type[] types, System.Reflection.ParameterModifier[] modifiers)
    // Offset: 0xFFFFFFFF
    System::Reflection::PropertyInfo* GetPropertyImpl(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr, System::Reflection::Binder* binder, System::Type* returnType, ::Array<System::Type*>* types, ::Array<System::Reflection::ParameterModifier>* modifiers);
    // public System.Reflection.PropertyInfo[] GetProperties(System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    ::Array<System::Reflection::PropertyInfo*>* GetProperties(System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.PropertyInfo[] GetProperties()
    // Offset: 0x19EFA70
    ::Array<System::Reflection::PropertyInfo*>* GetProperties();
    // public System.Type GetNestedType(System.String name)
    // Offset: 0x19EFA84
    System::Type* GetNestedType(::Il2CppString* name);
    // public System.Type GetNestedType(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0xFFFFFFFF
    System::Type* GetNestedType(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.MemberInfo[] GetMember(System.String name)
    // Offset: 0x19EFA98
    ::Array<System::Reflection::MemberInfo*>* GetMember(::Il2CppString* name);
    // public System.Reflection.MemberInfo[] GetMember(System.String name, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x19EFAAC
    ::Array<System::Reflection::MemberInfo*>* GetMember(::Il2CppString* name, System::Reflection::BindingFlags bindingAttr);
    // public System.Reflection.MemberInfo[] GetMember(System.String name, System.Reflection.MemberTypes type, System.Reflection.BindingFlags bindingAttr)
    // Offset: 0x19EFAC4
    ::Array<System::Reflection::MemberInfo*>* GetMember(::Il2CppString* name, System::Reflection::MemberTypes type, System::Reflection::BindingFlags bindingAttr);
    // public System.Boolean get_IsNested()
    // Offset: 0x19EFB44
    bool get_IsNested();
    // public System.Reflection.TypeAttributes get_Attributes()
    // Offset: 0x19EFBC4
    System::Reflection::TypeAttributes get_Attributes();
    // public System.Reflection.GenericParameterAttributes get_GenericParameterAttributes()
    // Offset: 0x19EFBD4
    System::Reflection::GenericParameterAttributes get_GenericParameterAttributes();
    // public System.Boolean get_IsNotPublic()
    // Offset: 0x19EFC34
    bool get_IsNotPublic();
    // public System.Boolean get_IsPublic()
    // Offset: 0x19EFC5C
    bool get_IsPublic();
    // public System.Boolean get_IsNestedPublic()
    // Offset: 0x19EFC88
    bool get_IsNestedPublic();
    // public System.Boolean get_IsNestedAssembly()
    // Offset: 0x19EFCB4
    bool get_IsNestedAssembly();
    // public System.Boolean get_IsExplicitLayout()
    // Offset: 0x19EFCE0
    bool get_IsExplicitLayout();
    // public System.Boolean get_IsClass()
    // Offset: 0x19EFD0C
    bool get_IsClass();
    // public System.Boolean get_IsInterface()
    // Offset: 0x19EFD70
    bool get_IsInterface();
    // public System.Boolean get_IsValueType()
    // Offset: 0x19EFD60
    bool get_IsValueType();
    // public System.Boolean get_IsAbstract()
    // Offset: 0x19EFE44
    bool get_IsAbstract();
    // public System.Boolean get_IsSealed()
    // Offset: 0x19EFE68
    bool get_IsSealed();
    // public System.Boolean get_IsEnum()
    // Offset: 0x19EFE8C
    bool get_IsEnum();
    // public System.Boolean get_IsSerializable()
    // Offset: 0x19EFF08
    bool get_IsSerializable();
    // public System.Boolean get_IsArray()
    // Offset: 0x19F0008
    bool get_IsArray();
    // System.Boolean get_IsSzArray()
    // Offset: 0x19F0018
    bool get_IsSzArray();
    // public System.Boolean get_IsGenericType()
    // Offset: 0x19F0020
    bool get_IsGenericType();
    // public System.Boolean get_IsGenericTypeDefinition()
    // Offset: 0x19F0028
    bool get_IsGenericTypeDefinition();
    // public System.Boolean get_IsGenericParameter()
    // Offset: 0x19F0030
    bool get_IsGenericParameter();
    // public System.Int32 get_GenericParameterPosition()
    // Offset: 0x19F0038
    int get_GenericParameterPosition();
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0x19F00B8
    bool get_ContainsGenericParameters();
    // public System.Type[] GetGenericParameterConstraints()
    // Offset: 0x19F0228
    ::Array<System::Type*>* GetGenericParameterConstraints();
    // public System.Boolean get_IsByRef()
    // Offset: 0x19F02F4
    bool get_IsByRef();
    // public System.Boolean get_IsPointer()
    // Offset: 0x19F0304
    bool get_IsPointer();
    // public System.Boolean get_IsPrimitive()
    // Offset: 0x19F0314
    bool get_IsPrimitive();
    // public System.Boolean get_IsCOMObject()
    // Offset: 0x19F0324
    bool get_IsCOMObject();
    // public System.Boolean get_HasElementType()
    // Offset: 0x19F01BC
    bool get_HasElementType();
    // public System.Boolean get_IsContextful()
    // Offset: 0x19F0334
    bool get_IsContextful();
    // public System.Boolean get_IsMarshalByRef()
    // Offset: 0x19F0344
    bool get_IsMarshalByRef();
    // protected System.Boolean IsValueTypeImpl()
    // Offset: 0x19F0354
    bool IsValueTypeImpl();
    // protected System.Reflection.TypeAttributes GetAttributeFlagsImpl()
    // Offset: 0xFFFFFFFF
    System::Reflection::TypeAttributes GetAttributeFlagsImpl();
    // protected System.Boolean IsArrayImpl()
    // Offset: 0xFFFFFFFF
    bool IsArrayImpl();
    // protected System.Boolean IsByRefImpl()
    // Offset: 0xFFFFFFFF
    bool IsByRefImpl();
    // protected System.Boolean IsPointerImpl()
    // Offset: 0xFFFFFFFF
    bool IsPointerImpl();
    // protected System.Boolean IsPrimitiveImpl()
    // Offset: 0xFFFFFFFF
    bool IsPrimitiveImpl();
    // protected System.Boolean IsCOMObjectImpl()
    // Offset: 0xFFFFFFFF
    bool IsCOMObjectImpl();
    // public System.Type MakeGenericType(params System.Type[] typeArguments)
    // Offset: 0x19F03D0
    System::Type* MakeGenericType(::Array<System::Type*>* typeArguments);
    // Creating initializer_list -> params proxy for: System.Type MakeGenericType(params System.Type[] typeArguments)
    System::Type* MakeGenericType(std::initializer_list<System::Type*> typeArguments);
    // Creating TArgs -> initializer_list proxy for: System.Type MakeGenericType(params System.Type[] typeArguments)
    template<class ...TParams>
    System::Type* MakeGenericType(TParams&&... typeArguments) {
      return MakeGenericType({typeArguments...});
    }
    // protected System.Boolean IsContextfulImpl()
    // Offset: 0x19F0450
    bool IsContextfulImpl();
    // protected System.Boolean IsMarshalByRefImpl()
    // Offset: 0x19F04DC
    bool IsMarshalByRefImpl();
    // public System.Type GetElementType()
    // Offset: 0xFFFFFFFF
    System::Type* GetElementType();
    // public System.Type[] GetGenericArguments()
    // Offset: 0x19F0568
    ::Array<System::Type*>* GetGenericArguments();
    // public System.Type GetGenericTypeDefinition()
    // Offset: 0x19F05E8
    System::Type* GetGenericTypeDefinition();
    // protected System.Boolean HasElementTypeImpl()
    // Offset: 0xFFFFFFFF
    bool HasElementTypeImpl();
    // System.Type GetRootElementType()
    // Offset: 0x19F01CC
    System::Type* GetRootElementType();
    // public System.String[] GetEnumNames()
    // Offset: 0x19F0668
    ::Array<::Il2CppString*>* GetEnumNames();
    // public System.Array GetEnumValues()
    // Offset: 0x19F0B70
    System::Array* GetEnumValues();
    // private System.Array GetEnumRawConstantValues()
    // Offset: 0x19F0C48
    System::Array* GetEnumRawConstantValues();
    // private System.Void GetEnumData(out System.String[] enumNames, out System.Array enumValues)
    // Offset: 0x19F073C
    void GetEnumData(::Array<::Il2CppString*>*& enumNames, System::Array*& enumValues);
    // public System.Type GetEnumUnderlyingType()
    // Offset: 0x19F0C74
    System::Type* GetEnumUnderlyingType();
    // public System.Boolean IsEnumDefined(System.Object value)
    // Offset: 0x19F0D74
    bool IsEnumDefined(::Il2CppObject* value);
    // public System.String GetEnumName(System.Object value)
    // Offset: 0x19F1640
    ::Il2CppString* GetEnumName(::Il2CppObject* value);
    // static private System.Int32 BinarySearch(System.Array array, System.Object value)
    // Offset: 0x19F14DC
    static int BinarySearch(System::Array* array, ::Il2CppObject* value);
    // static System.Boolean IsIntegerType(System.Type t)
    // Offset: 0x19F127C
    static bool IsIntegerType(System::Type* t);
    // public System.Type get_UnderlyingSystemType()
    // Offset: 0xFFFFFFFF
    System::Type* get_UnderlyingSystemType();
    // public System.Boolean IsSubclassOf(System.Type c)
    // Offset: 0x19F186C
    bool IsSubclassOf(System::Type* c);
    // public System.Boolean IsInstanceOfType(System.Object o)
    // Offset: 0x19F1944
    bool IsInstanceOfType(::Il2CppObject* o);
    // public System.Boolean IsAssignableFrom(System.Type c)
    // Offset: 0x19F198C
    bool IsAssignableFrom(System::Type* c);
    // public System.Boolean IsEquivalentTo(System.Type other)
    // Offset: 0x19F1D2C
    bool IsEquivalentTo(System::Type* other);
    // System.Boolean ImplementInterface(System.Type ifaceType)
    // Offset: 0x19F1BB0
    bool ImplementInterface(System::Type* ifaceType);
    // System.String FormatTypeName()
    // Offset: 0x19F1DA0
    ::Il2CppString* FormatTypeName();
    // System.String FormatTypeName(System.Boolean serialization)
    // Offset: 0x19F1DB4
    ::Il2CppString* FormatTypeName(bool serialization);
    // public System.Boolean Equals(System.Type o)
    // Offset: 0x19F1F2C
    bool Equals(System::Type* o);
    // static private System.Type internal_from_name(System.String name, System.Boolean throwOnError, System.Boolean ignoreCase)
    // Offset: 0x19F1FE4
    static System::Type* internal_from_name(::Il2CppString* name, bool throwOnError, bool ignoreCase);
    // static public System.Type GetType(System.String typeName)
    // Offset: 0x19F1FF0
    static System::Type* GetType(::Il2CppString* typeName);
    // static public System.Type GetType(System.String typeName, System.Boolean throwOnError)
    // Offset: 0x19F2224
    static System::Type* GetType(::Il2CppString* typeName, bool throwOnError);
    // static public System.Type GetType(System.String typeName, System.Boolean throwOnError, System.Boolean ignoreCase)
    // Offset: 0x19F2088
    static System::Type* GetType(::Il2CppString* typeName, bool throwOnError, bool ignoreCase);
    // static public System.Type GetTypeFromHandle(System.RuntimeTypeHandle handle)
    // Offset: 0x19EC0BC
    static System::Type* GetTypeFromHandle(System::RuntimeTypeHandle handle);
    // static private System.Type internal_from_handle(System.IntPtr handle)
    // Offset: 0x19F2304
    static System::Type* internal_from_handle(System::IntPtr handle);
    // static private System.Void .cctor()
    // Offset: 0x19F2308
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x19EE70C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Type* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Type::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Type*, creationType>()));
    }
    // public override System.Reflection.MemberTypes get_MemberType()
    // Offset: 0x19EE714
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.MemberTypes MemberInfo::get_MemberType()
    System::Reflection::MemberTypes get_MemberType();
    // public override System.Type get_DeclaringType()
    // Offset: 0x19EE71C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.Type get_ReflectedType()
    // Offset: 0x19EE72C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Reflection.Module get_Module()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Reflection.Module MemberInfo::get_Module()
    System::Reflection::Module* get_Module();
    // public override System.String ToString()
    // Offset: 0x19F1E14
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public override System.Boolean Equals(System.Object o)
    // Offset: 0x19F1E7C
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::Equals(System.Object o)
    bool Equals(::Il2CppObject* o);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19F1F84
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Int32 MemberInfo::GetHashCode()
    int GetHashCode();
    // public System.Type GetType()
    // Offset: 0x19F1FDC
    // Implemented from: System.Object
    // Base method: System.Type Object::GetType()
    System::Type* GetType();
  }; // System.Type
  #pragma pack(pop)
  static check_size<sizeof(Type), 16 + sizeof(System::RuntimeTypeHandle)> __System_TypeSizeCheck;
  static_assert(sizeof(Type) == 0x18);
  // static public System.Boolean op_Equality(System.Type left, System.Type right)
  // Offset: 0x19EE994
  bool operator ==(System::Type* left, System::Type& right);
  // static public System.Boolean op_Inequality(System.Type left, System.Type right)
  // Offset: 0x19EEAB4
  bool operator !=(System::Type* left, System::Type& right);
}
DEFINE_IL2CPP_ARG_TYPE(System::Type*, "System", "Type");
