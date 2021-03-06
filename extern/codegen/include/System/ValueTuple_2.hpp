// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IEquatable`1
#include "System/IEquatable_1.hpp"
// Including type: System.Collections.IStructuralEquatable
#include "System/Collections/IStructuralEquatable.hpp"
// Including type: System.Collections.IStructuralComparable
#include "System/Collections/IStructuralComparable.hpp"
// Including type: System.IComparable
#include "System/IComparable.hpp"
// Including type: System.IComparable`1
#include "System/IComparable_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEqualityComparer
  class IEqualityComparer;
  // Forward declaring type: IComparer
  class IComparer;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppObject;
struct Il2CppString;
// Completed il2cpp-utils forward declares
// Type namespace: System
namespace System {
  // WARNING Size may be invalid!
  // Autogenerated type: System.ValueTuple`2
  // [] Offset: FFFFFFFF
  template<typename T1, typename T2>
  struct ValueTuple_2/*, public System::ValueType, public System::IEquatable_1<System::ValueTuple_2<T1, T2>>, public System::Collections::IStructuralEquatable, public System::Collections::IStructuralComparable, public System::IComparable, public System::IComparable_1<System::ValueTuple_2<T1, T2>>*/ {
    public:
    // public T1 Item1
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T1 Item1;
    // public T2 Item2
    // Size: 0xFFFFFFFF
    // Offset: 0x0
    T2 Item2;
    // Creating value type constructor for type: ValueTuple_2
    constexpr ValueTuple_2(T1 Item1_ = {}, T2 Item2_ = {}) noexcept : Item1{Item1_}, Item2{Item2_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
    // Creating interface conversion operator: operator System::IEquatable_1<System::ValueTuple_2<T1, T2>>
    operator System::IEquatable_1<System::ValueTuple_2<T1, T2>>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<System::ValueTuple_2<T1, T2>>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IStructuralEquatable
    operator System::Collections::IStructuralEquatable() noexcept {
      return *reinterpret_cast<System::Collections::IStructuralEquatable*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::IStructuralComparable
    operator System::Collections::IStructuralComparable() noexcept {
      return *reinterpret_cast<System::Collections::IStructuralComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable
    operator System::IComparable() noexcept {
      return *reinterpret_cast<System::IComparable*>(this);
    }
    // Creating interface conversion operator: operator System::IComparable_1<System::ValueTuple_2<T1, T2>>
    operator System::IComparable_1<System::ValueTuple_2<T1, T2>>() noexcept {
      return *reinterpret_cast<System::IComparable_1<System::ValueTuple_2<T1, T2>>*>(this);
    }
    // public System.Void .ctor(T1 item1, T2 item2)
    // Offset: 0xFFFFFFFF
    // template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    // ABORTED: conflicts with another method.  ValueTuple_2(T1 item1, T2 item2)
    // private System.Int32 GetHashCodeCore(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    int GetHashCodeCore(System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ValueTuple_2::GetHashCodeCore");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "GetHashCodeCore", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(comparer)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method, comparer);
    }
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ValueTuple_2::Equals");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(obj)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, obj);
    }
    // public System.Boolean Equals(System.ValueTuple`2<T1,T2> other)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.ValueTuple`2<T1,T2> other)
    bool Equals(System::ValueTuple_2<T1, T2> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ValueTuple_2::Equals");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(other)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, other);
    }
    // private System.Boolean System.Collections.IStructuralEquatable.Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IStructuralEquatable
    // Base method: System.Boolean IStructuralEquatable::Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    bool System_Collections_IStructuralEquatable_Equals(::Il2CppObject* other, System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ValueTuple_2::System.Collections.IStructuralEquatable.Equals");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.Collections.IStructuralEquatable.Equals", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(other, comparer)));
      return ::il2cpp_utils::RunMethodThrow<bool, false>(*this, ___internal__method, other, comparer);
    }
    // private System.Int32 System.IComparable.CompareTo(System.Object other)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object other)
    int System_IComparable_CompareTo(::Il2CppObject* other) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ValueTuple_2::System.IComparable.CompareTo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.IComparable.CompareTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(other)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method, other);
    }
    // public System.Int32 CompareTo(System.ValueTuple`2<T1,T2> other)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable_1::CompareTo(System.ValueTuple`2<T1,T2> other)
    int CompareTo(System::ValueTuple_2<T1, T2> other) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ValueTuple_2::CompareTo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "CompareTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(other)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method, other);
    }
    // private System.Int32 System.Collections.IStructuralComparable.CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IStructuralComparable
    // Base method: System.Int32 IStructuralComparable::CompareTo(System.Object other, System.Collections.IComparer comparer)
    int System_Collections_IStructuralComparable_CompareTo(::Il2CppObject* other, System::Collections::IComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ValueTuple_2::System.Collections.IStructuralComparable.CompareTo");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.Collections.IStructuralComparable.CompareTo", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(other, comparer)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method, other, comparer);
    }
    // public override System.Int32 GetHashCode()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ValueTuple_2::GetHashCode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method);
    }
    // private System.Int32 System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IStructuralEquatable
    // Base method: System.Int32 IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer comparer)
    int System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer* comparer) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ValueTuple_2::System.Collections.IStructuralEquatable.GetHashCode");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "System.Collections.IStructuralEquatable.GetHashCode", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(comparer)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(*this, ___internal__method, comparer);
    }
    // public override System.String ToString()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ValueTuple_2::ToString");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(*this, "ToString", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(*this, ___internal__method);
    }
  }; // System.ValueTuple`2
  // Could not write size check! Type: System.ValueTuple`2 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(System::ValueTuple_2, "System", "ValueTuple`2");
