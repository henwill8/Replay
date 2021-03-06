// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
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
  // Size: 0x1C
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoMethodInfo
  // [] Offset: FFFFFFFF
  struct MonoMethodInfo/*, public System::ValueType*/ {
    public:
    // private System.Type parent
    // Size: 0x8
    // Offset: 0x0
    System::Type* parent;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // private System.Type ret
    // Size: 0x8
    // Offset: 0x8
    System::Type* ret;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // System.Reflection.MethodAttributes attrs
    // Size: 0x4
    // Offset: 0x10
    System::Reflection::MethodAttributes attrs;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodAttributes) == 0x4);
    // System.Reflection.MethodImplAttributes iattrs
    // Size: 0x4
    // Offset: 0x14
    System::Reflection::MethodImplAttributes iattrs;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodImplAttributes) == 0x4);
    // private System.Reflection.CallingConventions callconv
    // Size: 0x4
    // Offset: 0x18
    System::Reflection::CallingConventions callconv;
    // Field size check
    static_assert(sizeof(System::Reflection::CallingConventions) == 0x4);
    // Creating value type constructor for type: MonoMethodInfo
    constexpr MonoMethodInfo(System::Type* parent_ = {}, System::Type* ret_ = {}, System::Reflection::MethodAttributes attrs_ = {}, System::Reflection::MethodImplAttributes iattrs_ = {}, System::Reflection::CallingConventions callconv_ = {}) noexcept : parent{parent_}, ret{ret_}, attrs{attrs_}, iattrs{iattrs_}, callconv{callconv_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // static private System.Void get_method_info(System.IntPtr handle, out System.Reflection.MonoMethodInfo info)
    // Offset: 0x194CFF4
    static void get_method_info(System::IntPtr handle, System::Reflection::MonoMethodInfo& info);
    // static private System.Int32 get_method_attributes(System.IntPtr handle)
    // Offset: 0x194CFF8
    static int get_method_attributes(System::IntPtr handle);
    // static System.Reflection.MonoMethodInfo GetMethodInfo(System.IntPtr handle)
    // Offset: 0x194CABC
    static System::Reflection::MonoMethodInfo GetMethodInfo(System::IntPtr handle);
    // static System.Type GetDeclaringType(System.IntPtr handle)
    // Offset: 0x194B248
    static System::Type* GetDeclaringType(System::IntPtr handle);
    // static System.Type GetReturnType(System.IntPtr handle)
    // Offset: 0x194C344
    static System::Type* GetReturnType(System::IntPtr handle);
    // static System.Reflection.MethodAttributes GetAttributes(System.IntPtr handle)
    // Offset: 0x194B180
    static System::Reflection::MethodAttributes GetAttributes(System::IntPtr handle);
    // static System.Reflection.CallingConventions GetCallingConvention(System.IntPtr handle)
    // Offset: 0x194B1B4
    static System::Reflection::CallingConventions GetCallingConvention(System::IntPtr handle);
    // static System.Reflection.MethodImplAttributes GetMethodImplementationFlags(System.IntPtr handle)
    // Offset: 0x194A92C
    static System::Reflection::MethodImplAttributes GetMethodImplementationFlags(System::IntPtr handle);
    // static private System.Reflection.ParameterInfo[] get_parameter_info(System.IntPtr handle, System.Reflection.MemberInfo member)
    // Offset: 0x194CFFC
    static ::Array<System::Reflection::ParameterInfo*>* get_parameter_info(System::IntPtr handle, System::Reflection::MemberInfo* member);
    // static System.Reflection.ParameterInfo[] GetParametersInfo(System.IntPtr handle, System.Reflection.MemberInfo member)
    // Offset: 0x194A964
    static ::Array<System::Reflection::ParameterInfo*>* GetParametersInfo(System::IntPtr handle, System::Reflection::MemberInfo* member);
  }; // System.Reflection.MonoMethodInfo
  #pragma pack(pop)
  static check_size<sizeof(MonoMethodInfo), 24 + sizeof(System::Reflection::CallingConventions)> __System_Reflection_MonoMethodInfoSizeCheck;
  static_assert(sizeof(MonoMethodInfo) == 0x1C);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoMethodInfo, "System.Reflection", "MonoMethodInfo");
