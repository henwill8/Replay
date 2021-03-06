// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include <initializer_list>
// Including type: NUnit.Framework.Interfaces.IMethodInfo
#include "NUnit/Framework/Interfaces/IMethodInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
  // Forward declaring type: IParameterInfo
  class IParameterInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.MethodWrapper
  // [] Offset: FFFFFFFF
  class MethodWrapper : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::IMethodInfo*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD25548
    // private NUnit.Framework.Interfaces.ITypeInfo <TypeInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Interfaces::ITypeInfo* TypeInfo;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::ITypeInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD25558
    // private System.Reflection.MethodInfo <MethodInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::MethodInfo* MethodInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodInfo*) == 0x8);
    // Creating value type constructor for type: MethodWrapper
    MethodWrapper(NUnit::Framework::Interfaces::ITypeInfo* TypeInfo_ = {}, System::Reflection::MethodInfo* MethodInfo_ = {}) noexcept : TypeInfo{TypeInfo_}, MethodInfo{MethodInfo_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IMethodInfo
    operator NUnit::Framework::Interfaces::IMethodInfo() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IMethodInfo*>(this);
    }
    // public System.Void .ctor(System.Type type, System.Reflection.MethodInfo method)
    // Offset: 0x222087C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MethodWrapper* New_ctor(System::Type* type, System::Reflection::MethodInfo* method) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::MethodWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MethodWrapper*, creationType>(type, method)));
    }
    // private System.Void set_TypeInfo(NUnit.Framework.Interfaces.ITypeInfo value)
    // Offset: 0x2220994
    void set_TypeInfo(NUnit::Framework::Interfaces::ITypeInfo* value);
    // private System.Void set_MethodInfo(System.Reflection.MethodInfo value)
    // Offset: 0x22209A4
    void set_MethodInfo(System::Reflection::MethodInfo* value);
    // public NUnit.Framework.Interfaces.ITypeInfo get_TypeInfo()
    // Offset: 0x222098C
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: NUnit.Framework.Interfaces.ITypeInfo IMethodInfo::get_TypeInfo()
    NUnit::Framework::Interfaces::ITypeInfo* get_TypeInfo();
    // public System.Reflection.MethodInfo get_MethodInfo()
    // Offset: 0x222099C
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.Reflection.MethodInfo IMethodInfo::get_MethodInfo()
    System::Reflection::MethodInfo* get_MethodInfo();
    // public System.String get_Name()
    // Offset: 0x22209AC
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.String IMethodInfo::get_Name()
    ::Il2CppString* get_Name();
    // public System.Boolean get_IsAbstract()
    // Offset: 0x22209CC
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.Boolean IMethodInfo::get_IsAbstract()
    bool get_IsAbstract();
    // public System.Boolean get_IsPublic()
    // Offset: 0x22209E8
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.Boolean IMethodInfo::get_IsPublic()
    bool get_IsPublic();
    // public System.Boolean get_ContainsGenericParameters()
    // Offset: 0x2220A04
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.Boolean IMethodInfo::get_ContainsGenericParameters()
    bool get_ContainsGenericParameters();
    // public System.Boolean get_IsGenericMethodDefinition()
    // Offset: 0x2220A28
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.Boolean IMethodInfo::get_IsGenericMethodDefinition()
    bool get_IsGenericMethodDefinition();
    // public NUnit.Framework.Interfaces.ITypeInfo get_ReturnType()
    // Offset: 0x2220A4C
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: NUnit.Framework.Interfaces.ITypeInfo IMethodInfo::get_ReturnType()
    NUnit::Framework::Interfaces::ITypeInfo* get_ReturnType();
    // public NUnit.Framework.Interfaces.IParameterInfo[] GetParameters()
    // Offset: 0x2220AD0
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: NUnit.Framework.Interfaces.IParameterInfo[] IMethodInfo::GetParameters()
    ::Array<NUnit::Framework::Interfaces::IParameterInfo*>* GetParameters();
    // public NUnit.Framework.Interfaces.IMethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    // Offset: 0x2220C70
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: NUnit.Framework.Interfaces.IMethodInfo IMethodInfo::MakeGenericMethod(params System.Type[] typeArguments)
    NUnit::Framework::Interfaces::IMethodInfo* MakeGenericMethod(::Array<System::Type*>* typeArguments);
    // Creating initializer_list -> params proxy for: NUnit.Framework.Interfaces.IMethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    NUnit::Framework::Interfaces::IMethodInfo* MakeGenericMethod(std::initializer_list<System::Type*> typeArguments);
    // Creating TArgs -> initializer_list proxy for: NUnit.Framework.Interfaces.IMethodInfo MakeGenericMethod(params System.Type[] typeArguments)
    template<class ...TParams>
    NUnit::Framework::Interfaces::IMethodInfo* MakeGenericMethod(TParams&&... typeArguments) {
      return MakeGenericMethod({typeArguments...});
    }
    // public T[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.IReflectionInfo
    // Base method: T[] IReflectionInfo::GetCustomAttributes(System.Boolean inherit)
    template<class T>
    ::Array<T>* GetCustomAttributes(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::MethodWrapper::GetCustomAttributes");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetCustomAttributes", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(inherit)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method, inherit);
    }
    // public System.Boolean IsDefined(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.IReflectionInfo
    // Base method: System.Boolean IReflectionInfo::IsDefined(System.Boolean inherit)
    template<class T>
    bool IsDefined(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::MethodWrapper::IsDefined");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "IsDefined", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(inherit)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, inherit);
    }
    // public System.Object Invoke(System.Object fixture, params System.Object[] args)
    // Offset: 0x2220D80
    // Implemented from: NUnit.Framework.Interfaces.IMethodInfo
    // Base method: System.Object IMethodInfo::Invoke(System.Object fixture, params System.Object[] args)
    ::Il2CppObject* Invoke(::Il2CppObject* fixture, ::Array<::Il2CppObject*>* args);
    // Creating initializer_list -> params proxy for: System.Object Invoke(System.Object fixture, params System.Object[] args)
    ::Il2CppObject* Invoke(::Il2CppObject* fixture, std::initializer_list<::Il2CppObject*> args);
    // Creating TArgs -> initializer_list proxy for: System.Object Invoke(System.Object fixture, params System.Object[] args)
    template<class ...TParams>
    ::Il2CppObject* Invoke(::Il2CppObject* fixture, TParams&&... args) {
      return Invoke(fixture, {args...});
    }
    // public override System.String ToString()
    // Offset: 0x2221098
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // NUnit.Framework.Internal.MethodWrapper
  #pragma pack(pop)
  static check_size<sizeof(MethodWrapper), 24 + sizeof(System::Reflection::MethodInfo*)> __NUnit_Framework_Internal_MethodWrapperSizeCheck;
  static_assert(sizeof(MethodWrapper) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::MethodWrapper*, "NUnit.Framework.Internal", "MethodWrapper");
