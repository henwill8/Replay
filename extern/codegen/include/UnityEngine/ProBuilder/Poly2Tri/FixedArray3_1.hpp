// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::ProBuilder::Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Skipping declaration: <Enumerate>d__10 because it is already included!
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.ProBuilder.Poly2Tri
namespace UnityEngine::ProBuilder::Poly2Tri {
  // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1
  template<typename T>
  struct FixedArray3_1 : public System::ValueType/*, public System::Collections::Generic::IEnumerable_1<T>*/ {
    public:
    // Nested type: UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1::$Enumerate$d__10<T>
    class $Enumerate$d__10;
    // Autogenerated type: UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1/<Enumerate>d__10
    class $Enumerate$d__10 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public System::Collections::Generic::IEnumerable_1<T>, public System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = FixedArray3_1<T>;
      static constexpr std::string_view NESTED_NAME = "$Enumerate$d__10";
      // private System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // private T <>2__current
      // Offset: 0x0
      T $$2__current;
      // private System.Int32 <>l__initialThreadId
      // Offset: 0x0
      int $$l__initialThreadId;
      // public UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<T> <>4__this
      // Offset: 0x0
      UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> $$4__this;
      // public UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1<T> <>3__<>4__this
      // Offset: 0x0
      UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1<T> $$3__$$4__this;
      // private System.Int32 <i>5__2
      // Offset: 0x0
      int $i$5__2;
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<T>
      operator System::Collections::Generic::IEnumerable_1<T>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<T>*>(this);
      }
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<T>
      operator System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      static typename FixedArray3_1<T>::$Enumerate$d__10* New_ctor(int $$1__state) {
        return THROW_UNLESS(il2cpp_utils::New<typename FixedArray3_1<T>::$Enumerate$d__10*>($$1__state));
      }
      // private System.Void System.IDisposable.Dispose()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.IDisposable
      // Base method: System.Void IDisposable::Dispose()
      void System_IDisposable_Dispose() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.IDisposable.Dispose"));
      }
      // private System.Boolean MoveNext()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Boolean IEnumerator::MoveNext()
      bool MoveNext() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "MoveNext"));
      }
      // Creating proxy method: System_Collections_IEnumerator_MoveNext
      // Maps to method: MoveNext
      bool System_Collections_IEnumerator_MoveNext() {
        return MoveNext();
      }
      // private T System.Collections.Generic.IEnumerator<T>.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerator`1
      // Base method: T IEnumerator_1::get_Current()
      T System_Collections_Generic_IEnumerator_1_get_Current() {
        return THROW_UNLESS((il2cpp_utils::RunMethod<T>(this, "System.Collections.Generic.IEnumerator<T>.get_Current")));
      }
      // private System.Void System.Collections.IEnumerator.Reset()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Void IEnumerator::Reset()
      void System_Collections_IEnumerator_Reset() {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "System.Collections.IEnumerator.Reset"));
      }
      // private System.Object System.Collections.IEnumerator.get_Current()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerator
      // Base method: System.Object IEnumerator::get_Current()
      ::Il2CppObject* System_Collections_IEnumerator_get_Current() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<::Il2CppObject*>(this, "System.Collections.IEnumerator.get_Current"));
      }
      // private System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable<T>.GetEnumerator()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.Generic.IEnumerable`1
      // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
      System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
        return THROW_UNLESS((il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<T>*>(this, "System.Collections.Generic.IEnumerable<T>.GetEnumerator")));
      }
      // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
      // Offset: 0xFFFFFFFF
      // Implemented from: System.Collections.IEnumerable
      // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
      System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
      }
    }; // UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1/<Enumerate>d__10
    // public T _0
    // Offset: 0x0
    T _0;
    // public T _1
    // Offset: 0x0
    T _1;
    // public T _2
    // Offset: 0x0
    T _2;
    // Creating value type constructor for type: FixedArray3_1
    constexpr FixedArray3_1(T _0_ = {}, T _1_ = {}, T _2_ = {}) noexcept : _0{_0_}, _1{_1_}, _2{_2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<T>
    operator System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // public T get_Item(System.Int32 index)
    // Offset: 0xFFFFFFFF
    T get_Item(int index) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(*this, "get_Item", index));
    }
    // public System.Void set_Item(System.Int32 index, T value)
    // Offset: 0xFFFFFFFF
    void set_Item(int index, T value) {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "set_Item", index, value));
    }
    // public System.Boolean Contains(T value)
    // Offset: 0xFFFFFFFF
    bool Contains(T value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(*this, "Contains", value));
    }
    // public System.Int32 IndexOf(T value)
    // Offset: 0xFFFFFFFF
    int IndexOf(T value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(*this, "IndexOf", value));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      THROW_UNLESS(il2cpp_utils::RunMethod(*this, "Clear"));
    }
    // private System.Collections.Generic.IEnumerable`1<T> Enumerate()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<T>* Enumerate() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerable_1<T>*>(*this, "Enumerate"));
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<T>*>(*this, "GetEnumerator"));
    }
    // Creating proxy method: System_Collections_Generic_IEnumerable_1_GetEnumerator
    // Maps to method: GetEnumerator
    System::Collections::Generic::IEnumerator_1<T>* System_Collections_Generic_IEnumerable_1_GetEnumerator() {
      return GetEnumerator();
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(*this, "System.Collections.IEnumerable.GetEnumerator"));
    }
  }; // UnityEngine.ProBuilder.Poly2Tri.FixedArray3`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(UnityEngine::ProBuilder::Poly2Tri::FixedArray3_1, "UnityEngine.ProBuilder.Poly2Tri", "FixedArray3`1");
#pragma pack(pop)