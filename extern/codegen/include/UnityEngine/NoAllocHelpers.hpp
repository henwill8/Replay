// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Array
  class Array;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.NoAllocHelpers
  class NoAllocHelpers : public ::Il2CppObject {
    public:
    // static public System.Void ResizeList(System.Collections.Generic.List`1<T> list, System.Int32 size)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void ResizeList(System::Collections::Generic::List_1<T>* list, int size) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine", "NoAllocHelpers", "ResizeList", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, list, size));
    }
    // static public System.Void EnsureListElemCount(System.Collections.Generic.List`1<T> list, System.Int32 count)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void EnsureListElemCount(System::Collections::Generic::List_1<T>* list, int count) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("UnityEngine", "NoAllocHelpers", "EnsureListElemCount", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, list, count));
    }
    // static public System.Int32 SafeLength(System.Array values)
    // Offset: 0x172B8BC
    static int SafeLength(System::Array* values);
    // static public System.Int32 SafeLength(System.Collections.Generic.List`1<T> values)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int SafeLength(System::Collections::Generic::List_1<T>* values) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<int>("UnityEngine", "NoAllocHelpers", "SafeLength", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, values)));
    }
    // static public T[] ExtractArrayFromListT(System.Collections.Generic.List`1<T> list)
    // Offset: 0xFFFFFFFF
    template<class T>
    static ::Array<T>* ExtractArrayFromListT(System::Collections::Generic::List_1<T>* list) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<::Array<T>*>("UnityEngine", "NoAllocHelpers", "ExtractArrayFromListT", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, list)));
    }
    // static System.Void Internal_ResizeList(System.Object list, System.Int32 size)
    // Offset: 0x172F3AC
    static void Internal_ResizeList(::Il2CppObject* list, int size);
    // static public System.Array ExtractArrayFromList(System.Object list)
    // Offset: 0x172C02C
    static System::Array* ExtractArrayFromList(::Il2CppObject* list);
  }; // UnityEngine.NoAllocHelpers
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::NoAllocHelpers*, "UnityEngine", "NoAllocHelpers");
#pragma pack(pop)
