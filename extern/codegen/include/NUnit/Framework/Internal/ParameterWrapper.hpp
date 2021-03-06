// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.IParameterInfo
#include "NUnit/Framework/Interfaces/IParameterInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: ParameterInfo
  class ParameterInfo;
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
  // Autogenerated type: NUnit.Framework.Internal.ParameterWrapper
  // [] Offset: FFFFFFFF
  class ParameterWrapper : public ::Il2CppObject/*, public NUnit::Framework::Interfaces::IParameterInfo*/ {
    public:
    // [CompilerGeneratedAttribute] Offset: 0xD25428
    // private NUnit.Framework.Interfaces.IMethodInfo <Method>k__BackingField
    // Size: 0x8
    // Offset: 0x10
    NUnit::Framework::Interfaces::IMethodInfo* Method;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Interfaces::IMethodInfo*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD25438
    // private System.Reflection.ParameterInfo <ParameterInfo>k__BackingField
    // Size: 0x8
    // Offset: 0x18
    System::Reflection::ParameterInfo* ParameterInfo;
    // Field size check
    static_assert(sizeof(System::Reflection::ParameterInfo*) == 0x8);
    // Creating value type constructor for type: ParameterWrapper
    ParameterWrapper(NUnit::Framework::Interfaces::IMethodInfo* Method_ = {}, System::Reflection::ParameterInfo* ParameterInfo_ = {}) noexcept : Method{Method_}, ParameterInfo{ParameterInfo_} {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IParameterInfo
    operator NUnit::Framework::Interfaces::IParameterInfo() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IParameterInfo*>(this);
    }
    // public System.Void .ctor(NUnit.Framework.Interfaces.IMethodInfo method, System.Reflection.ParameterInfo parameterInfo)
    // Offset: 0x2220C20
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ParameterWrapper* New_ctor(NUnit::Framework::Interfaces::IMethodInfo* method, System::Reflection::ParameterInfo* parameterInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::ParameterWrapper::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ParameterWrapper*, creationType>(method, parameterInfo)));
    }
    // private System.Void set_Method(NUnit.Framework.Interfaces.IMethodInfo value)
    // Offset: 0x2221254
    void set_Method(NUnit::Framework::Interfaces::IMethodInfo* value);
    // public System.Reflection.ParameterInfo get_ParameterInfo()
    // Offset: 0x222124C
    System::Reflection::ParameterInfo* get_ParameterInfo();
    // private System.Void set_ParameterInfo(System.Reflection.ParameterInfo value)
    // Offset: 0x222125C
    void set_ParameterInfo(System::Reflection::ParameterInfo* value);
    // public System.Boolean get_IsOptional()
    // Offset: 0x2221230
    // Implemented from: NUnit.Framework.Interfaces.IParameterInfo
    // Base method: System.Boolean IParameterInfo::get_IsOptional()
    bool get_IsOptional();
    // public System.Type get_ParameterType()
    // Offset: 0x2221264
    // Implemented from: NUnit.Framework.Interfaces.IParameterInfo
    // Base method: System.Type IParameterInfo::get_ParameterType()
    System::Type* get_ParameterType();
    // public T[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    // Implemented from: NUnit.Framework.Interfaces.IReflectionInfo
    // Base method: T[] IReflectionInfo::GetCustomAttributes(System.Boolean inherit)
    template<class T>
    ::Array<T>* GetCustomAttributes(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::ParameterWrapper::GetCustomAttributes");
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
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::ParameterWrapper::IsDefined");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "IsDefined", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(inherit)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, inherit);
    }
  }; // NUnit.Framework.Internal.ParameterWrapper
  #pragma pack(pop)
  static check_size<sizeof(ParameterWrapper), 24 + sizeof(System::Reflection::ParameterInfo*)> __NUnit_Framework_Internal_ParameterWrapperSizeCheck;
  static_assert(sizeof(ParameterWrapper) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::ParameterWrapper*, "NUnit.Framework.Internal", "ParameterWrapper");
