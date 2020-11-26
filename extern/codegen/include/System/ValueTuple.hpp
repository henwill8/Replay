// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
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
  // Autogenerated type: System.ValueTuple
  struct ValueTuple : public System::ValueType/*, public System::IEquatable_1<System::ValueTuple>, public System::Collections::IStructuralEquatable, public System::Collections::IStructuralComparable, public System::IComparable, public System::IComparable_1<System::ValueTuple>*/ {
    public:
    // Creating value type constructor for type: ValueTuple
    constexpr ValueTuple() noexcept {}
    // Creating interface conversion operator: operator System::IEquatable_1<System::ValueTuple>
    operator System::IEquatable_1<System::ValueTuple>() noexcept {
      return *reinterpret_cast<System::IEquatable_1<System::ValueTuple>*>(this);
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
    // Creating interface conversion operator: operator System::IComparable_1<System::ValueTuple>
    operator System::IComparable_1<System::ValueTuple>() noexcept {
      return *reinterpret_cast<System::IComparable_1<System::ValueTuple>*>(this);
    }
    // static System.Int32 CombineHashCodes(System.Int32 h1, System.Int32 h2)
    // Offset: 0x16607D0
    static int CombineHashCodes(int h1, int h2);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0xCA40A4
    // Implemented from: System.ValueType
    // Base method: System.Boolean ValueType::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public System.Boolean Equals(System.ValueTuple other)
    // Offset: 0xCA4108
    // Implemented from: System.IEquatable`1
    // Base method: System.Boolean IEquatable_1::Equals(System.ValueTuple other)
    bool Equals(System::ValueTuple other);
    // private System.Boolean System.Collections.IStructuralEquatable.Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    // Offset: 0xCA4110
    // Implemented from: System.Collections.IStructuralEquatable
    // Base method: System.Boolean IStructuralEquatable::Equals(System.Object other, System.Collections.IEqualityComparer comparer)
    bool System_Collections_IStructuralEquatable_Equals(::Il2CppObject* other, System::Collections::IEqualityComparer* comparer);
    // private System.Int32 System.IComparable.CompareTo(System.Object other)
    // Offset: 0xCA4174
    // Implemented from: System.IComparable
    // Base method: System.Int32 IComparable::CompareTo(System.Object other)
    int System_IComparable_CompareTo(::Il2CppObject* other);
    // public System.Int32 CompareTo(System.ValueTuple other)
    // Offset: 0xCA417C
    // Implemented from: System.IComparable`1
    // Base method: System.Int32 IComparable_1::CompareTo(System.ValueTuple other)
    int CompareTo(System::ValueTuple other);
    // private System.Int32 System.Collections.IStructuralComparable.CompareTo(System.Object other, System.Collections.IComparer comparer)
    // Offset: 0xCA4184
    // Implemented from: System.Collections.IStructuralComparable
    // Base method: System.Int32 IStructuralComparable::CompareTo(System.Object other, System.Collections.IComparer comparer)
    int System_Collections_IStructuralComparable_CompareTo(::Il2CppObject* other, System::Collections::IComparer* comparer);
    // public override System.Int32 GetHashCode()
    // Offset: 0xCA418C
    // Implemented from: System.ValueType
    // Base method: System.Int32 ValueType::GetHashCode()
    int GetHashCode();
    // private System.Int32 System.Collections.IStructuralEquatable.GetHashCode(System.Collections.IEqualityComparer comparer)
    // Offset: 0xCA4194
    // Implemented from: System.Collections.IStructuralEquatable
    // Base method: System.Int32 IStructuralEquatable::GetHashCode(System.Collections.IEqualityComparer comparer)
    int System_Collections_IStructuralEquatable_GetHashCode(System::Collections::IEqualityComparer* comparer);
    // public override System.String ToString()
    // Offset: 0xCA419C
    // Implemented from: System.ValueType
    // Base method: System.String ValueType::ToString()
    ::Il2CppString* ToString();
  }; // System.ValueTuple
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::ValueTuple, "System", "ValueTuple");
#pragma pack(pop)
