// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
// Including type: System.Nullable`1
#include "System/Nullable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IEquatable`1<T>
  template<typename T>
  class IEquatable_1;
  // Skipping declaration: ValueType because it is already included!
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.NullableEqualityComparer`1
  template<typename T>
  class NullableEqualityComparer_1 : public System::Collections::Generic::EqualityComparer_1<System::Nullable_1<T>> {
    public:
    // public System.Boolean Equals(System.Nullable`1<T> x, System.Nullable`1<T> y)
    // Offset: 0xFFFFFFFF
    bool Equals(System::Nullable_1<T> x, System::Nullable_1<T> y) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", x, y));
    }
    // public System.Int32 GetHashCode(System.Nullable`1<T> obj)
    // Offset: 0xFFFFFFFF
    int GetHashCode(System::Nullable_1<T> obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", obj));
    }
    // System.Int32 IndexOf(System.Nullable`1<T>[] array, System.Nullable`1<T> value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int IndexOf(::Array<System::Nullable_1<T>>* array, System::Nullable_1<T> value, int startIndex, int count) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "IndexOf", array, value, startIndex, count));
    }
    // System.Int32 LastIndexOf(System.Nullable`1<T>[] array, System.Nullable`1<T> value, System.Int32 startIndex, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int LastIndexOf(::Array<System::Nullable_1<T>>* array, System::Nullable_1<T> value, int startIndex, int count) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "LastIndexOf", array, value, startIndex, count));
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", obj));
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    static NullableEqualityComparer_1<T>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<NullableEqualityComparer_1<T>*>());
    }
  }; // System.Collections.Generic.NullableEqualityComparer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::NullableEqualityComparer_1, "System.Collections.Generic", "NullableEqualityComparer`1");
#pragma pack(pop)