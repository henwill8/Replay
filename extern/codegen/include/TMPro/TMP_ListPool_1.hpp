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
// Forward declaring namespace: TMPro
namespace TMPro {
  // Skipping declaration: <>c because it is already included!
  // Forward declaring type: TMP_ObjectPool`1<T>
  template<typename T>
  class TMP_ObjectPool_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_ListPool`1
  template<typename T>
  class TMP_ListPool_1 : public ::Il2CppObject {
    public:
    // Nested type: TMPro::TMP_ListPool_1::$$c<T>
    class $$c;
    // Autogenerated type: TMPro.TMP_ListPool`1/<>c
    class $$c : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = TMP_ListPool_1<T>*;
      static constexpr std::string_view NESTED_NAME = "$$c";
      // Autogenerated static field getter
      // Get static field: static public readonly TMPro.TMP_ListPool`1/<>c<T> <>9
      static typename TMPro::TMP_ListPool_1<T>::$$c* _get_$$9() {
        return THROW_UNLESS((il2cpp_utils::GetFieldValue<typename TMPro::TMP_ListPool_1<T>::$$c*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TMP_ListPool_1<T>::$$c*>::get(), "<>9")));
      }
      // Autogenerated static field setter
      // Set static field: static public readonly TMPro.TMP_ListPool`1/<>c<T> <>9
      static void _set_$$9(typename TMPro::TMP_ListPool_1<T>::$$c* value) {
        THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TMP_ListPool_1<T>::$$c*>::get(), "<>9", value)));
      }
      // static private System.Void .cctor()
      // Offset: 0xFFFFFFFF
      static void _cctor() {
        THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<typename TMP_ListPool_1<T>::$$c*>::get(), ".cctor"));
      }
      // System.Void <.cctor>b__3_0(System.Collections.Generic.List`1<T> l)
      // Offset: 0xFFFFFFFF
      void $_cctor$b__3_0(System::Collections::Generic::List_1<T>* l) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "<.cctor>b__3_0", l));
      }
      // public System.Void .ctor()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Object
      // Base method: System.Void Object::.ctor()
      static typename TMP_ListPool_1<T>::$$c* New_ctor() {
        return THROW_UNLESS(il2cpp_utils::New<typename TMP_ListPool_1<T>::$$c*>());
      }
    }; // TMPro.TMP_ListPool`1/<>c
    // Autogenerated static field getter
    // Get static field: static private readonly TMPro.TMP_ObjectPool`1<System.Collections.Generic.List`1<T>> s_ListPool
    static TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>*>* _get_s_ListPool() {
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>*>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_ListPool_1<T>*>::get(), "s_ListPool"));
    }
    // Autogenerated static field setter
    // Set static field: static private readonly TMPro.TMP_ObjectPool`1<System.Collections.Generic.List`1<T>> s_ListPool
    static void _set_s_ListPool(TMPro::TMP_ObjectPool_1<System::Collections::Generic::List_1<T>*>* value) {
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_ListPool_1<T>*>::get(), "s_ListPool", value));
    }
    // static public System.Collections.Generic.List`1<T> Get()
    // Offset: 0xFFFFFFFF
    static System::Collections::Generic::List_1<T>* Get() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::List_1<T>*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_ListPool_1<T>*>::get(), "Get"));
    }
    // static public System.Void Release(System.Collections.Generic.List`1<T> toRelease)
    // Offset: 0xFFFFFFFF
    static void Release(System::Collections::Generic::List_1<T>* toRelease) {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_ListPool_1<T>*>::get(), "Release", toRelease));
    }
    // static private System.Void .cctor()
    // Offset: 0xFFFFFFFF
    static void _cctor() {
      THROW_UNLESS(il2cpp_utils::RunMethod(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TMP_ListPool_1<T>*>::get(), ".cctor"));
    }
  }; // TMPro.TMP_ListPool`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(TMPro::TMP_ListPool_1, "TMPro", "TMP_ListPool`1");
#pragma pack(pop)
