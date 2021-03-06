// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: System.Reflection.RuntimeMethodInfo
#include "System/Reflection/RuntimeMethodInfo.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: RuntimeMethodHandle
  struct RuntimeMethodHandle;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Skipping declaration: MethodBase because it is already included!
  // Forward declaring type: Binder
  class Binder;
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
  // Forward declaring type: BindingFlags
  struct BindingFlags;
  // Forward declaring type: PInvokeAttributes
  struct PInvokeAttributes;
  // Skipping declaration: MethodInfo because it is already included!
  // Forward declaring type: MethodImplAttributes
  struct MethodImplAttributes;
  // Forward declaring type: MethodAttributes
  struct MethodAttributes;
  // Forward declaring type: CallingConventions
  struct CallingConventions;
  // Forward declaring type: MethodBody
  class MethodBody;
  // Forward declaring type: CustomAttributeData
  class CustomAttributeData;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CultureInfo
  class CultureInfo;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: System.Reflection
namespace System::Reflection {
  // Size: 0x28
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Reflection.MonoMethod
  // [] Offset: FFFFFFFF
  class MonoMethod : public System::Reflection::RuntimeMethodInfo {
    public:
    // System.IntPtr mhandle
    // Size: 0x8
    // Offset: 0x10
    System::IntPtr mhandle;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Type reftype
    // Size: 0x8
    // Offset: 0x20
    System::Type* reftype;
    // Field size check
    static_assert(sizeof(System::Type*) == 0x8);
    // Creating value type constructor for type: MonoMethod
    MonoMethod(System::IntPtr mhandle_ = {}, ::Il2CppString* name_ = {}, System::Type* reftype_ = {}) noexcept : mhandle{mhandle_}, name{name_}, reftype{reftype_} {}
    // static System.String get_name(System.Reflection.MethodBase method)
    // Offset: 0x194B29C
    static ::Il2CppString* get_name(System::Reflection::MethodBase* method);
    // static System.Reflection.MonoMethod get_base_method(System.Reflection.MonoMethod method, System.Boolean definition)
    // Offset: 0x194C2FC
    static System::Reflection::MonoMethod* get_base_method(System::Reflection::MonoMethod* method, bool definition);
    // System.Object InternalInvoke(System.Object obj, System.Object[] parameters, out System.Exception exc)
    // Offset: 0x194C46C
    ::Il2CppObject* InternalInvoke(::Il2CppObject* obj, ::Array<::Il2CppObject*>* parameters, System::Exception*& exc);
    // static System.Void ConvertValues(System.Reflection.Binder binder, System.Object[] args, System.Reflection.ParameterInfo[] pinfo, System.Globalization.CultureInfo culture, System.Reflection.BindingFlags invokeAttr)
    // Offset: 0x194ACB4
    static void ConvertValues(System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* args, ::Array<System::Reflection::ParameterInfo*>* pinfo, System::Globalization::CultureInfo* culture, System::Reflection::BindingFlags invokeAttr);
    // System.Void GetPInvoke(out System.Reflection.PInvokeAttributes flags, out System.String entryPoint, out System.String dllName)
    // Offset: 0x194C928
    void GetPInvoke(System::Reflection::PInvokeAttributes& flags, ::Il2CppString*& entryPoint, ::Il2CppString*& dllName);
    // System.Object[] GetPseudoCustomAttributes()
    // Offset: 0x194C92C
    ::Array<::Il2CppObject*>* GetPseudoCustomAttributes();
    // private System.Reflection.MethodInfo MakeGenericMethod_impl(System.Type[] types)
    // Offset: 0x194CE38
    System::Reflection::MethodInfo* MakeGenericMethod_impl(::Array<System::Type*>* types);
    // private System.Reflection.MethodInfo GetGenericMethodDefinition_impl()
    // Offset: 0x194CE40
    System::Reflection::MethodInfo* GetGenericMethodDefinition_impl();
    // static private System.Int32 get_core_clr_security_level()
    // Offset: 0x194CFE4
    static int get_core_clr_security_level();
    // System.Void .ctor()
    // Offset: 0x194C2EC
    // Implemented from: System.Reflection.RuntimeMethodInfo
    // Base method: System.Void RuntimeMethodInfo::.ctor()
    // Base method: System.Void MethodInfo::.ctor()
    // Base method: System.Void MethodBase::.ctor()
    // Base method: System.Void MemberInfo::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MonoMethod* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Reflection::MonoMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MonoMethod*, creationType>()));
    }
    // public override System.Reflection.MethodInfo GetBaseDefinition()
    // Offset: 0x194C304
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Reflection.MethodInfo MethodInfo::GetBaseDefinition()
    System::Reflection::MethodInfo* GetBaseDefinition();
    // override System.Reflection.MethodInfo GetBaseMethod()
    // Offset: 0x194C30C
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Reflection.MethodInfo MethodInfo::GetBaseMethod()
    System::Reflection::MethodInfo* GetBaseMethod();
    // public override System.Type get_ReturnType()
    // Offset: 0x194C314
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Type MethodInfo::get_ReturnType()
    System::Type* get_ReturnType();
    // public override System.Reflection.MethodImplAttributes GetMethodImplementationFlags()
    // Offset: 0x194C370
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodImplAttributes MethodBase::GetMethodImplementationFlags()
    System::Reflection::MethodImplAttributes GetMethodImplementationFlags();
    // public override System.Reflection.ParameterInfo[] GetParameters()
    // Offset: 0x194C3A0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.ParameterInfo[] MethodBase::GetParameters()
    ::Array<System::Reflection::ParameterInfo*>* GetParameters();
    // override System.Reflection.ParameterInfo[] GetParametersInternal()
    // Offset: 0x194C438
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.ParameterInfo[] MethodBase::GetParametersInternal()
    ::Array<System::Reflection::ParameterInfo*>* GetParametersInternal();
    // override System.Int32 GetParametersCount()
    // Offset: 0x194C444
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Int32 MethodBase::GetParametersCount()
    int GetParametersCount();
    // public override System.Object Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    // Offset: 0x194C470
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Object MethodBase::Invoke(System.Object obj, System.Reflection.BindingFlags invokeAttr, System.Reflection.Binder binder, System.Object[] parameters, System.Globalization.CultureInfo culture)
    ::Il2CppObject* Invoke(::Il2CppObject* obj, System::Reflection::BindingFlags invokeAttr, System::Reflection::Binder* binder, ::Array<::Il2CppObject*>* parameters, System::Globalization::CultureInfo* culture);
    // public override System.RuntimeMethodHandle get_MethodHandle()
    // Offset: 0x194C710
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.RuntimeMethodHandle MethodBase::get_MethodHandle()
    System::RuntimeMethodHandle get_MethodHandle();
    // public override System.Reflection.MethodAttributes get_Attributes()
    // Offset: 0x194C718
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodAttributes MethodBase::get_Attributes()
    System::Reflection::MethodAttributes get_Attributes();
    // public override System.Reflection.CallingConventions get_CallingConvention()
    // Offset: 0x194C720
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.CallingConventions MethodBase::get_CallingConvention()
    System::Reflection::CallingConventions get_CallingConvention();
    // public override System.Type get_ReflectedType()
    // Offset: 0x194C750
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_ReflectedType()
    System::Type* get_ReflectedType();
    // public override System.Type get_DeclaringType()
    // Offset: 0x194C758
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Type MemberInfo::get_DeclaringType()
    System::Type* get_DeclaringType();
    // public override System.String get_Name()
    // Offset: 0x194C788
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.String MemberInfo::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Boolean IsDefined(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x194C7B0
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Boolean MemberInfo::IsDefined(System.Type attributeType, System.Boolean inherit)
    bool IsDefined(System::Type* attributeType, bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0x194C830
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(bool inherit);
    // public override System.Object[] GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    // Offset: 0x194C8A8
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Object[] MemberInfo::GetCustomAttributes(System.Type attributeType, System.Boolean inherit)
    ::Array<::Il2CppObject*>* GetCustomAttributes(System::Type* attributeType, bool inherit);
    // public override System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] methodInstantiation)
    // Offset: 0x194CAF8
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Reflection.MethodInfo MethodInfo::MakeGenericMethod(params System.Type[] methodInstantiation)
    System::Reflection::MethodInfo* MakeGenericMethod(::Array<System::Type*>* methodInstantiation);
    // Creating initializer_list -> params proxy for: System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] methodInstantiation)
    System::Reflection::MethodInfo* MakeGenericMethod(std::initializer_list<System::Type*> methodInstantiation);
    // Creating TArgs -> initializer_list proxy for: System.Reflection.MethodInfo MakeGenericMethod(params System.Type[] methodInstantiation)
    template<class ...TParams>
    System::Reflection::MethodInfo* MakeGenericMethod(TParams&&... methodInstantiation) {
      return MakeGenericMethod({methodInstantiation...});
    }
    // public override System.Type[] GetGenericArguments()
    // Offset: 0x194CE3C
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Type[] MethodInfo::GetGenericArguments()
    ::Array<System::Type*>* GetGenericArguments();
    // public override System.Reflection.MethodInfo GetGenericMethodDefinition()
    // Offset: 0x194CE44
    // Implemented from: System.Reflection.MethodInfo
    // Base method: System.Reflection.MethodInfo MethodInfo::GetGenericMethodDefinition()
    System::Reflection::MethodInfo* GetGenericMethodDefinition();
    // public override System.Boolean get_IsGenericMethodDefinition()
    // Offset: 0x194CEEC
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::get_IsGenericMethodDefinition()
    bool get_IsGenericMethodDefinition();
    // public override System.Boolean get_IsGenericMethod()
    // Offset: 0x194CEF0
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::get_IsGenericMethod()
    bool get_IsGenericMethod();
    // public override System.Boolean get_ContainsGenericParameters()
    // Offset: 0x194CEF4
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::get_ContainsGenericParameters()
    bool get_ContainsGenericParameters();
    // public override System.Reflection.MethodBody GetMethodBody()
    // Offset: 0x194CFD4
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Reflection.MethodBody MethodBase::GetMethodBody()
    System::Reflection::MethodBody* GetMethodBody();
    // public override System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> GetCustomAttributesData()
    // Offset: 0x194CFDC
    // Implemented from: System.Reflection.MemberInfo
    // Base method: System.Collections.Generic.IList`1<System.Reflection.CustomAttributeData> MemberInfo::GetCustomAttributesData()
    System::Collections::Generic::IList_1<System::Reflection::CustomAttributeData*>* GetCustomAttributesData();
    // public override System.Boolean get_IsSecurityCritical()
    // Offset: 0x194CFEC
    // Implemented from: System.Reflection.MethodBase
    // Base method: System.Boolean MethodBase::get_IsSecurityCritical()
    bool get_IsSecurityCritical();
  }; // System.Reflection.MonoMethod
  #pragma pack(pop)
  static check_size<sizeof(MonoMethod), 32 + sizeof(System::Type*)> __System_Reflection_MonoMethodSizeCheck;
  static_assert(sizeof(MonoMethod) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::MonoMethod*, "System.Reflection", "MonoMethod");
