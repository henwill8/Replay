// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.EqualityComparer`1
#include "System/Collections/Generic/EqualityComparer_1.hpp"
// Including type: System.Runtime.Serialization.ISerializable
#include "System/Runtime/Serialization/ISerializable.hpp"
// Including type: System.Runtime.Serialization.StreamingContext
#include "System/Runtime/Serialization/StreamingContext.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
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
  // WARNING Size may be invalid!
  // Autogenerated type: System.Collections.Generic.LongEnumEqualityComparer`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class LongEnumEqualityComparer_1 : public System::Collections::Generic::EqualityComparer_1<T>/*, public System::Runtime::Serialization::ISerializable*/ {
    public:
    // Creating value type constructor for type: LongEnumEqualityComparer_1
    LongEnumEqualityComparer_1() noexcept {}
    // Creating interface conversion operator: operator System::Runtime::Serialization::ISerializable
    operator System::Runtime::Serialization::ISerializable() noexcept {
      return *reinterpret_cast<System::Runtime::Serialization::ISerializable*>(this);
    }
    // public System.Void .ctor(System.Runtime.Serialization.SerializationInfo information, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFF
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongEnumEqualityComparer_1<T>* New_ctor(System::Runtime::Serialization::SerializationInfo* information, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::LongEnumEqualityComparer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongEnumEqualityComparer_1<T>*, creationType>(information, context)));
    }
    // public override System.Boolean Equals(T x, T y)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Boolean EqualityComparer_1::Equals(T x, T y)
    bool Equals(T x, T y) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::LongEnumEqualityComparer_1::Equals");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(x, y)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, x, y);
    }
    // public override System.Int32 GetHashCode(T obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Int32 EqualityComparer_1::GetHashCode(T obj)
    int GetHashCode(T obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::LongEnumEqualityComparer_1::GetHashCode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, obj);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::LongEnumEqualityComparer_1::Equals");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(this, ___internal__method, obj);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::LongEnumEqualityComparer_1::GetHashCode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.EqualityComparer`1
    // Base method: System.Void EqualityComparer_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LongEnumEqualityComparer_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::LongEnumEqualityComparer_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LongEnumEqualityComparer_1<T>*, creationType>()));
    }
    // public System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Collections::Generic::LongEnumEqualityComparer_1::GetObjectData");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetObjectData", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(info, context)));
      ::il2cpp_utils::RunMethodThrow<void, false>(this, ___internal__method, info, context);
    }
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      GetObjectData(info, context);
    }
  }; // System.Collections.Generic.LongEnumEqualityComparer`1
  // Could not write size check! Type: System.Collections.Generic.LongEnumEqualityComparer`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Collections::Generic::LongEnumEqualityComparer_1, "System.Collections.Generic", "LongEnumEqualityComparer`1");
