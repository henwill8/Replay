// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Completed forward declares
// Type namespace: System.Threading
namespace System::Threading {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Threading.LazyInitializer
  // [] Offset: FFFFFFFF
  class LazyInitializer : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: LazyInitializer
    LazyInitializer() noexcept {}
    // static public T EnsureInitialized(ref T target, System.Func`1<T> valueFactory)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T EnsureInitialized(T& target, System::Func_1<T>* valueFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::LazyInitializer::EnsureInitialized");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Threading", "LazyInitializer", "EnsureInitialized", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(target, valueFactory)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, target, valueFactory);
    }
    // static private T EnsureInitializedCore(ref T target, System.Func`1<T> valueFactory)
    // Offset: 0xFFFFFFFF
    template<class T>
    static T EnsureInitializedCore(T& target, System::Func_1<T>* valueFactory) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Threading::LazyInitializer::EnsureInitializedCore");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("System.Threading", "LazyInitializer", "EnsureInitializedCore", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(target, valueFactory)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<T, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, target, valueFactory);
    }
  }; // System.Threading.LazyInitializer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Threading::LazyInitializer*, "System.Threading", "LazyInitializer");
