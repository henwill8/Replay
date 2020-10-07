// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: NUnit.Framework.Interfaces.IReflectionInfo
#include "NUnit/Framework/Interfaces/IReflectionInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: Assembly
  class Assembly;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: ConstructorInfo
  class ConstructorInfo;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
struct Il2CppObject;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Autogenerated type: NUnit.Framework.Interfaces.ITypeInfo
  class ITypeInfo : public NUnit::Framework::Interfaces::IReflectionInfo {
    public:
    // public System.Type get_Type()
    // Offset: 0xFFFFFFFF
    System::Type* get_Type();
    // public NUnit.Framework.Interfaces.ITypeInfo get_BaseType()
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ITypeInfo* get_BaseType();
    // public System.Boolean IsType(System.Type type)
    // Offset: 0xFFFFFFFF
    bool IsType(System::Type* type);
    // public System.String get_FullName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_FullName();
    // public System.Reflection.Assembly get_Assembly()
    // Offset: 0xFFFFFFFF
    System::Reflection::Assembly* get_Assembly();
    // public System.String get_Namespace()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* get_Namespace();
    // public System.Boolean get_IsAbstract()
    // Offset: 0xFFFFFFFF
    bool get_IsAbstract();
    // public System.Boolean get_IsGenericType()
    // Offset: 0xFFFFFFFF
    bool get_IsGenericType();
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0xFFFFFFFF
    bool get_ContainsGenericParameters();
    // public System.Boolean get_IsGenericTypeDefinition()
    // Offset: 0xFFFFFFFF
    bool get_IsGenericTypeDefinition();
    // public System.Boolean get_IsSealed()
    // Offset: 0xFFFFFFFF
    bool get_IsSealed();
    // public System.Boolean get_IsStaticClass()
    // Offset: 0xFFFFFFFF
    bool get_IsStaticClass();
    // public System.String GetDisplayName()
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetDisplayName();
    // public System.String GetDisplayName(System.Object[] args)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetDisplayName(::Array<::Il2CppObject*>* args);
    // public System.Type GetGenericTypeDefinition()
    // Offset: 0xFFFFFFFF
    System::Type* GetGenericTypeDefinition();
    // public NUnit.Framework.Interfaces.ITypeInfo MakeGenericType(System.Type[] typeArgs)
    // Offset: 0xFFFFFFFF
    NUnit::Framework::Interfaces::ITypeInfo* MakeGenericType(::Array<System::Type*>* typeArgs);
    // public System.Boolean HasMethodWithAttribute(System.Type attrType)
    // Offset: 0xFFFFFFFF
    bool HasMethodWithAttribute(System::Type* attrType);
    // public NUnit.Framework.Interfaces.IMethodInfo[] GetMethods(System.Reflection.BindingFlags flags)
    // Offset: 0xFFFFFFFF
    ::Array<NUnit::Framework::Interfaces::IMethodInfo*>* GetMethods(System::Reflection::BindingFlags flags);
    // public System.Reflection.ConstructorInfo GetConstructor(System.Type[] argTypes)
    // Offset: 0xFFFFFFFF
    System::Reflection::ConstructorInfo* GetConstructor(::Array<System::Type*>* argTypes);
    // public System.Boolean HasConstructor(System.Type[] argTypes)
    // Offset: 0xFFFFFFFF
    bool HasConstructor(::Array<System::Type*>* argTypes);
    // public System.Object Construct(System.Object[] args)
    // Offset: 0xFFFFFFFF
    ::Il2CppObject* Construct(::Array<::Il2CppObject*>* args);
  }; // NUnit.Framework.Interfaces.ITypeInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITypeInfo*, "NUnit.Framework.Interfaces", "ITypeInfo");
#pragma pack(pop)
