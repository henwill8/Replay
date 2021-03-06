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
// Forward declaring namespace: ModestTree
namespace ModestTree {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Completed forward declares
// Type namespace: ModestTree
namespace ModestTree {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: ModestTree.LinqExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class LinqExtensions : public ::Il2CppObject {
    public:
    // Nested type: ModestTree::LinqExtensions::$Yield$d__0_1<T>
    template<typename T>
    class $Yield$d__0_1;
    // Nested type: ModestTree::LinqExtensions::$$c__7_1<T>
    template<typename T>
    class $$c__7_1;
    // Nested type: ModestTree::LinqExtensions::$$c__DisplayClass9_0_1<T>
    template<typename T>
    class $$c__DisplayClass9_0_1;
    // Creating value type constructor for type: LinqExtensions
    LinqExtensions() noexcept {}
    // static public System.Collections.Generic.IEnumerable`1<T> Yield(T item)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<T>* Yield(T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::LinqExtensions::Yield");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("ModestTree", "LinqExtensions", "Yield", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(item)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, item);
    }
    // static public TSource OnlyOrDefault(System.Collections.Generic.IEnumerable`1<TSource> source)
    // Offset: 0xFFFFFFFF
    template<class TSource>
    static TSource OnlyOrDefault(System::Collections::Generic::IEnumerable_1<TSource>* source) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::LinqExtensions::OnlyOrDefault");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("ModestTree", "LinqExtensions", "OnlyOrDefault", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}, ::il2cpp_utils::ExtractTypes(source)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TSource>::get()}));
      return ::il2cpp_utils::RunMethodThrow<TSource, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, source);
    }
    // static public System.Boolean HasAtLeast(System.Collections.Generic.IEnumerable`1<T> enumerable, System.Int32 amount)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool HasAtLeast(System::Collections::Generic::IEnumerable_1<T>* enumerable, int amount) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::LinqExtensions::HasAtLeast");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("ModestTree", "LinqExtensions", "HasAtLeast", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(enumerable, amount)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, enumerable, amount);
    }
    // static public System.Boolean HasMoreThan(System.Collections.Generic.IEnumerable`1<T> enumerable, System.Int32 amount)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool HasMoreThan(System::Collections::Generic::IEnumerable_1<T>* enumerable, int amount) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::LinqExtensions::HasMoreThan");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("ModestTree", "LinqExtensions", "HasMoreThan", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(enumerable, amount)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, enumerable, amount);
    }
    // static public System.Boolean HasLessThan(System.Collections.Generic.IEnumerable`1<T> enumerable, System.Int32 amount)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool HasLessThan(System::Collections::Generic::IEnumerable_1<T>* enumerable, int amount) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::LinqExtensions::HasLessThan");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("ModestTree", "LinqExtensions", "HasLessThan", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(enumerable, amount)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, enumerable, amount);
    }
    // static public System.Boolean HasAtMost(System.Collections.Generic.IEnumerable`1<T> enumerable, System.Int32 amount)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool HasAtMost(System::Collections::Generic::IEnumerable_1<T>* enumerable, int amount) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::LinqExtensions::HasAtMost");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("ModestTree", "LinqExtensions", "HasAtMost", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(enumerable, amount)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, enumerable, amount);
    }
    // static public System.Boolean IsEmpty(System.Collections.Generic.IEnumerable`1<T> enumerable)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool IsEmpty(System::Collections::Generic::IEnumerable_1<T>* enumerable) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::LinqExtensions::IsEmpty");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("ModestTree", "LinqExtensions", "IsEmpty", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(enumerable)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, enumerable);
    }
    // static public System.Collections.Generic.IEnumerable`1<T> GetDuplicates(System.Collections.Generic.IEnumerable`1<T> list)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<T>* GetDuplicates(System::Collections::Generic::IEnumerable_1<T>* list) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::LinqExtensions::GetDuplicates");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("ModestTree", "LinqExtensions", "GetDuplicates", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(list)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list);
    }
    // static public System.Collections.Generic.IEnumerable`1<T> Except(System.Collections.Generic.IEnumerable`1<T> list, T item)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<T>* Except(System::Collections::Generic::IEnumerable_1<T>* list, T item) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::LinqExtensions::Except");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("ModestTree", "LinqExtensions", "Except", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(list, item)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<System::Collections::Generic::IEnumerable_1<T>*, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, item);
    }
    // static public System.Boolean ContainsItem(System.Collections.Generic.IEnumerable`1<T> list, T value)
    // Offset: 0xFFFFFFFF
    template<class T>
    static bool ContainsItem(System::Collections::Generic::IEnumerable_1<T>* list, T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("ModestTree::LinqExtensions::ContainsItem");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod("ModestTree", "LinqExtensions", "ContainsItem", std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, ::il2cpp_utils::ExtractTypes(list, value)));
      static auto* ___generic__method = THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal__method, std::vector<Il2CppClass*>{il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(static_cast<Il2CppClass*>(nullptr), ___generic__method, list, value);
    }
  }; // ModestTree.LinqExtensions
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(ModestTree::LinqExtensions*, "ModestTree", "LinqExtensions");
