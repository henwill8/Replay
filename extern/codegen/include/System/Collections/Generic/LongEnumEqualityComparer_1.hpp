// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: ValueType because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Collections.Generic
namespace System::Collections::Generic {
  // Autogenerated type: System.Collections.Generic.LongEnumEqualityComparer`1
  template<typename T>
  class LongEnumEqualityComparer_1 : public System::Collections::Generic::EqualityComparer_1<T>/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo information, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFF
    static LongEnumEqualityComparer_1<T>* New_ctor(System::Runtime::Serialization::SerializationInfo* information, System::Runtime::Serialization::StreamingContext context) {
      return THROW_UNLESS(il2cpp_utils::New<LongEnumEqualityComparer_1<T>*>(information, context));
    }
    // public override System.Boolean Equals(T x, T y)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Boolean EqualityComparer_1::Equals(T x, T y)
    bool Equals(T x, T y) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Equals", x, y));
    }
    // public override System.Int32 GetHashCode(T obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Int32 EqualityComparer_1::GetHashCode(T obj)
    int GetHashCode(T obj) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "GetHashCode", obj));
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
    static LongEnumEqualityComparer_1<T>* New_ctor() {
      return THROW_UNLESS(il2cpp_utils::New<LongEnumEqualityComparer_1<T>*>());
    }
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "GetObjectData", info, context));
    }
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      GetObjectData(info, context);
    }
  }; // System.Collections.Generic.LongEnumEqualityComparer`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::LongEnumEqualityComparer_1, "System.Collections.Generic", "LongEnumEqualityComparer`1");
#pragma pack(pop)
