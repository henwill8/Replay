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
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BatchExtensions
  class BatchExtensions : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::BatchExtensions::$Batch$d__0_1<T>
    template<typename T>
    class $Batch$d__0_1;
    // static public System.Collections.Generic.IEnumerable`1<System.Collections.Generic.List`1<T>> Batch(System.Collections.Generic.IEnumerable`1<T> enumerable, System.Int32 batchSize)
    // Offset: 0xFFFFFFFF
    template<class T>
    static System::Collections::Generic::IEnumerable_1<System::Collections::Generic::List_1<T>*>* Batch(System::Collections::Generic::IEnumerable_1<T>* enumerable, int batchSize) {
      return THROW_UNLESS((il2cpp_utils::RunGenericMethod<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::List_1<T>*>*>("", "BatchExtensions", "Batch", {il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get()}, enumerable, batchSize)));
    }
  }; // BatchExtensions
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BatchExtensions*, "", "BatchExtensions");
#pragma pack(pop)
