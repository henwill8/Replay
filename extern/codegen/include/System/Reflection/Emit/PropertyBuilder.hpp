// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Reflection.PropertyInfo
#include "System/Reflection/PropertyInfo.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: PropertyAttributes
  struct PropertyAttributes;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MethodInfo
  class MethodInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: Binder
  class Binder;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Completed forward declares
// Type namespace: System.Reflection.Emit
namespace System::Reflection::Emit {
  // Autogenerated type: System.Reflection.Emit.PropertyBuilder
  class PropertyBuilder : public System::Reflection::PropertyInfo {
    public:
    // public override System.Reflection.PropertyAttributes get_Attributes()
    // Offset: 0x17255D4
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.PropertyAttributes PropertyInfo::get_Attributes()
    System::Reflection::PropertyAttributes get_Attributes();
    // public override System.Boolean get_CanRead()
    // Offset: 0x1725630
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Boolean PropertyInfo::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x172568C
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Boolean PropertyInfo::get_CanWrite()
    bool get_CanWrite();
    // public override System.Type get_DeclaringType()
    // Offset: 0x17256E8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.String get_Name()
    // Offset: 0x1725744
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Type get_PropertyType()
    // Offset: 0x17257A0
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Type PropertyInfo::get_PropertyType()
    System::Type* get_PropertyType();
    // public override System.Reflection.ParameterInfo[] GetIndexParameters()
    // Offset: 0x17257FC
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.ParameterInfo[] PropertyInfo::GetIndexParameters()
    ::Array<System::Reflection::ParameterInfo*>* GetIndexParameters();
    // public override System.Type get_ReflectedType()
    // Offset: 0x1725858
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Reflection.MethodInfo[] GetAccessors(System.Boolean nonPublic)
    // Offset: 0x1725898
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.MethodInfo[] PropertyInfo::GetAccessors(System.Boolean nonPublic)
    ::Array<System::Reflection::MethodInfo*>* GetAccessors(bool nonPublic);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x17258D8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1725918
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Reflection.MethodInfo GetGetMethod(System.Boolean nonPublic)
    // Offset: 0x1725958
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.MethodInfo PropertyInfo::GetGetMethod(System.Boolean nonPublic)
    System::Reflection::MethodInfo* GetGetMethod(bool nonPublic);
    // public override System.Reflection.MethodInfo GetSetMethod(System.Boolean nonPublic)
    // Offset: 0x1725998
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Reflection.MethodInfo PropertyInfo::GetSetMethod(System.Boolean nonPublic)
    System::Reflection::MethodInfo* GetSetMethod(bool nonPublic);
    // public override System.Object GetValue(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    // Offset: 0x17259D8
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Object PropertyInfo::GetValue(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    ::Il2CppObject* GetValue(::Il2CppObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* index, System::Globalization::CultureInfo* culture);
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x1725A18
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Void SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    // Offset: 0x1725A58
    // Implemented from: System.Reflection.PropertyInfo
    // Base method: System.Void PropertyInfo::SetValue(System.Object obj, System.Object value, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] index, System.Globalization.CultureInfo culture)
    void SetValue(::Il2CppObject* obj, ::Il2CppObject* value, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* index, System::Globalization::CultureInfo* culture);
  }; // System.Reflection.Emit.PropertyBuilder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::Emit::PropertyBuilder*, "System.Reflection.Emit", "PropertyBuilder");
#pragma pack(pop)