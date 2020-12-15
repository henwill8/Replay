// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Reflection.MethodAttributes
#include "System/Reflection/MethodAttributes.hpp"
// Including type: System.Reflection.MethodImplAttributes
#include "System/Reflection/MethodImplAttributes.hpp"
// Including type: System.Reflection.CallingConventions
#include "System/Reflection/CallingConventions.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: IntPtr
  struct IntPtr;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: MemberInfo
  class MemberInfo;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.MonoMethodInfo
  struct MonoMethodInfo : public System::ValueType {
    public:
    // private System.Type parent
    // Offset: 0x0
    System::Type* parent;
    // private System.Type ret
    // Offset: 0x8
    System::Type* ret;
    // System.Reflection.MethodAttributes attrs
    // Offset: 0x10
    System::Reflection::MethodAttributes attrs;
    // System.Reflection.MethodImplAttributes iattrs
    // Offset: 0x14
    System::Reflection::MethodImplAttributes iattrs;
    // private System.Reflection.CallingConventions callconv
    // Offset: 0x18
    System::Reflection::CallingConventions callconv;
    // Creating value type constructor for type: MonoMethodInfo
    constexpr MonoMethodInfo(System::Type* parent_ = {}, System::Type* ret_ = {}, System::Reflection::MethodAttributes attrs_ = {}, System::Reflection::MethodImplAttributes iattrs_ = {}, System::Reflection::CallingConventions callconv_ = {}) noexcept : parent{parent_}, ret{ret_}, attrs{attrs_}, iattrs{iattrs_}, callconv{callconv_} {}
    // static private System.Void get_method_info(System.IntPtr handle, out System.Reflection.MonoMethodInfo info)
    // Offset: 0x15CD470
    static void get_method_info(System::IntPtr handle, System::Reflection::MonoMethodInfo& info);
    // static private System.Int32 get_method_attributes(System.IntPtr handle)
    // Offset: 0x15CD474
    static int get_method_attributes(System::IntPtr handle);
    // static System.Reflection.MonoMethodInfo GetMethodInfo(System.IntPtr handle)
    // Offset: 0x15CCF38
    static System::Reflection::MonoMethodInfo GetMethodInfo(System::IntPtr handle);
    // static System.Type GetDeclaringType(System.IntPtr handle)
    // Offset: 0x15CB6C4
    static System::Type* GetDeclaringType(System::IntPtr handle);
    // static System.Type GetReturnType(System.IntPtr handle)
    // Offset: 0x15CC7C0
    static System::Type* GetReturnType(System::IntPtr handle);
    // static System.Reflection.MethodAttributes GetAttributes(System.IntPtr handle)
    // Offset: 0x15CB5FC
    static System::Reflection::MethodAttributes GetAttributes(System::IntPtr handle);
    // static System.Reflection.CallingConventions GetCallingConvention(System.IntPtr handle)
    // Offset: 0x15CB630
    static System::Reflection::CallingConventions GetCallingConvention(System::IntPtr handle);
    // static System.Reflection.MethodImplAttributes GetMethodImplementationFlags(System.IntPtr handle)
    // Offset: 0x15CADA8
    static System::Reflection::MethodImplAttributes GetMethodImplementationFlags(System::IntPtr handle);
    // static private System.Reflection.ParameterInfo[] get_parameter_info(System.IntPtr handle, System.Reflection.MemberInfo member)
    // Offset: 0x15CD478
    static ::Array<System::Reflection::ParameterInfo*>* get_parameter_info(System::IntPtr handle, System::Reflection::MemberInfo* member);
    // static System.Reflection.ParameterInfo[] GetParametersInfo(System.IntPtr handle, System.Reflection.MemberInfo member)
    // Offset: 0x15CADE0
    static ::Array<System::Reflection::ParameterInfo*>* GetParametersInfo(System::IntPtr handle, System::Reflection::MemberInfo* member);
  }; // System.Reflection.MonoMethodInfo
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoMethodInfo, "System.Reflection", "MonoMethodInfo");
#pragma pack(pop)