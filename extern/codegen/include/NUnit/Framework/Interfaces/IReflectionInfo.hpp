// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.IReflectionInfo
  // [] Offset: FFFFFFFF
  class IReflectionInfo {
    public:
    // Creating value type constructor for type: IReflectionInfo
    IReflectionInfo() noexcept {}
    // public T[] GetCustomAttributes(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    template<class T>
    ::Array<T>* GetCustomAttributes(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::IReflectionInfo::GetCustomAttributes");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetCustomAttributes", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(inherit)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<::Array<T>*, false>(this, ___generic__method, inherit);
    }
    // public System.Boolean IsDefined(System.Boolean inherit)
    // Offset: 0xFFFFFFFF
    template<class T>
    bool IsDefined(bool inherit) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Interfaces::IReflectionInfo::IsDefined");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "IsDefined", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(inherit)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___generic__method, inherit);
    }
  }; // NUnit.Framework.Interfaces.IReflectionInfo
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::IReflectionInfo*, "NUnit.Framework.Interfaces", "IReflectionInfo");
