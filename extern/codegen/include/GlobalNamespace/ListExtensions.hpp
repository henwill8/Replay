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
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Random
  class Random;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ListExtensions
  class ListExtensions : public ::Il2CppObject {
    public:
    // Get static field: static private readonly System.Random _random
    static System::Random* _get__random();
    // Set static field: static private readonly System.Random _random
    static void _set__random(System::Random* value);
    // static public System.Int32 IndexOf(System.Collections.Generic.IReadOnlyList`1<T> self, T item)
    // Offset: 0xFFFFFFFF
    template<class T>
    static int IndexOf(System::Collections::Generic::IReadOnlyList_1<T>* self, T item) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<int>("", "ListExtensions", "IndexOf", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, self, item)));
    }
    // static public System.Void ShuffleInPlace(System.Collections.Generic.IList`1<T> list)
    // Offset: 0xFFFFFFFF
    template<class T>
    static void ShuffleInPlace(System::Collections::Generic::IList_1<T>* list) {
      THROW_UNLESS(il2cpp_utils::RunGenericMethod("", "ListExtensions", "ShuffleInPlace", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, list));
    }
    // static private System.Void .cctor()
    // Offset: 0x1AC8604
    static void _cctor();
  }; // ListExtensions
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ListExtensions*, "", "ListExtensions");
#pragma pack(pop)
