// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.ProBuilder.MeshOperations.DeleteElements
#include "UnityEngine/ProBuilder/MeshOperations/DeleteElements.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: KeyValuePair`2<TKey, TValue>
  template<typename TKey, typename TValue>
  struct KeyValuePair_2;
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.MeshOperations
namespace UnityEngine::ProBuilder::MeshOperations {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.ProBuilder.MeshOperations.DeleteElements/<>c__DisplayClass0_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D55758
  class DeleteElements::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.Collections.Generic.List`1<System.Int32> sorted
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<int>* sorted;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<int>*) == 0x8);
    // public System.Int32[] offset
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* offset;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass0_0
    $$c__DisplayClass0_0(System::Collections::Generic::List_1<int>* sorted_ = {}, ::Array<int>* offset_ = {}) noexcept : sorted{sorted_}, offset{offset_} {}
    // System.Boolean <DeleteVertices>b__0(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> x)
    // Offset: 0x1470698
    bool $DeleteVertices$b__0(System::Collections::Generic::KeyValuePair_2<int, int> x);
    // System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> <DeleteVertices>b__1(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> y)
    // Offset: 0x1470708
    System::Collections::Generic::KeyValuePair_2<int, int> $DeleteVertices$b__1(System::Collections::Generic::KeyValuePair_2<int, int> y);
    // System.Boolean <DeleteVertices>b__2(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> x)
    // Offset: 0x14707A8
    bool $DeleteVertices$b__2(System::Collections::Generic::KeyValuePair_2<int, int> x);
    // System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> <DeleteVertices>b__3(System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32> y)
    // Offset: 0x1470818
    System::Collections::Generic::KeyValuePair_2<int, int> $DeleteVertices$b__3(System::Collections::Generic::KeyValuePair_2<int, int> y);
    // public System.Void .ctor()
    // Offset: 0x146FEA4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DeleteElements::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DeleteElements::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // UnityEngine.ProBuilder.MeshOperations.DeleteElements/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(DeleteElements::$$c__DisplayClass0_0), 24 + sizeof(::Array<int>*)> __UnityEngine_ProBuilder_MeshOperations_DeleteElements_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(DeleteElements::$$c__DisplayClass0_0) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::MeshOperations::DeleteElements::$$c__DisplayClass0_0*, "UnityEngine.ProBuilder.MeshOperations", "DeleteElements/<>c__DisplayClass0_0");
