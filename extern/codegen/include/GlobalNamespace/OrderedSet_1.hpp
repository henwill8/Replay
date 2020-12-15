// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Skipping declaration: Node because it is already included!
  // Skipping declaration: <GetEnumerator>d__21 because it is already included!
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OrderedSet`1
  template<typename T>
  class OrderedSet_1 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<T>*/ {
    public:
    // Nested type: GlobalNamespace::OrderedSet_1::Node<T>
    class Node;
    // Nested type: GlobalNamespace::OrderedSet_1::$GetEnumerator$d__21<T>
    class $GetEnumerator$d__21;
    // Autogenerated type: OrderedSet`1/Node
    class Node : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = OrderedSet_1<T>*;
      static constexpr std::string_view NESTED_NAME = "Node";
      // public readonly T value
      // Offset: 0x0
      T value;
      // public OrderedSet`1/Node<T> previous
      // Offset: 0x0
      typename GlobalNamespace::OrderedSet_1<T>::Node* previous;
      // public OrderedSet`1/Node<T> next
      // Offset: 0x0
      typename GlobalNamespace::OrderedSet_1<T>::Node* next;
      // public System.Boolean isRemoved
      // Offset: 0x0
      bool isRemoved;
      // public System.Int32 clearCount
      // Offset: 0x0
      int clearCount;
      // public System.Void .ctor(T value, System.Int32 clearCount)
      // Offset: 0xFFFFFFFF
      static typename OrderedSet_1<T>::Node* New_ctor(T value, int clearCount) {
        return THROW_UNLESS(il2cpp_utils::New<typename OrderedSet_1<T>::Node*>(value, clearCount));
      }
    }; // OrderedSet`1/Node
    // Autogenerated type: OrderedSet`1/<GetEnumerator>d__21
    class $GetEnumerator$d__21 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = OrderedSet_1<T>*;
      static constexpr std::string_view NESTED_NAME = "$GetEnumerator$d__21";
      // private System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // private T <>2__current
      // Offset: 0x0
      T $$2__current;
      // public OrderedSet`1<T> <>4__this
      // Offset: 0x0
      GlobalNamespace::OrderedSet_1<T>* $$4__this;
      // private OrderedSet`1/Node<T> <next>5__2
      // Offset: 0x0
      typename GlobalNamespace::OrderedSet_1<T>::Node* $next$5__2;
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<T>
      operator System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      static typename OrderedSet_1<T>::$GetEnumerator$d__21* New_ctor(int $$1__state) {
        return THROW_UNLESS(il2cpp_utils::New<typename OrderedSet_1<T>::$GetEnumerator$d__21*>($$1__state));
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
    }; // OrderedSet`1/<GetEnumerator>d__21
    // private readonly System.Comparison`1<T> _comparison
    // Offset: 0x0
    System::Comparison_1<T>* comparison;
    // private readonly System.Collections.Generic.Dictionary`2<T,OrderedSet`1/Node<T>> _sortIndices
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<T, typename GlobalNamespace::OrderedSet_1<T>::Node*>* sortIndices;
    // private OrderedSet`1/Node<T> _head
    // Offset: 0x0
    typename GlobalNamespace::OrderedSet_1<T>::Node* head;
    // private OrderedSet`1/Node<T> _tail
    // Offset: 0x0
    typename GlobalNamespace::OrderedSet_1<T>::Node* tail;
    // private System.Int32 _clearCount
    // Offset: 0x0
    int clearCount;
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<T>
    operator System::Collections::Generic::IEnumerable_1<T>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<T>*>(this);
    }
    // public System.Int32 get_count()
    // Offset: 0xFFFFFFFF
    int get_count() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_count"));
    }
    // public System.Void .ctor(System.Comparison`1<T> comparison)
    // Offset: 0xFFFFFFFF
    static OrderedSet_1<T>* New_ctor(System::Comparison_1<T>* comparison) {
      return THROW_UNLESS(il2cpp_utils::New<OrderedSet_1<T>*>(comparison));
    }
    // public System.Void Add(T item)
    // Offset: 0xFFFFFFFF
    void Add(T item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Add", item));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    void Clear() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
    }
    // public System.Boolean Contains(T item)
    // Offset: 0xFFFFFFFF
    bool Contains(T item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", item));
    }
    // public System.Boolean Remove(T item)
    // Offset: 0xFFFFFFFF
    bool Remove(T item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Remove", item));
    }
    // public System.Void UpdateSortedPosition(T item)
    // Offset: 0xFFFFFFFF
    void UpdateSortedPosition(T item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateSortedPosition", item));
    }
    // private System.Void AppendNode(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void AppendNode(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "AppendNode", node));
    }
    // private System.Void AppendNodeUnchecked(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void AppendNodeUnchecked(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "AppendNodeUnchecked", node));
    }
    // private System.Void PrependNode(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void PrependNode(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "PrependNode", node));
    }
    // private System.Void PrependNodeUnchecked(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void PrependNodeUnchecked(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "PrependNodeUnchecked", node));
    }
    // private System.Void SwapNodes(OrderedSet`1/Node<T> previous, OrderedSet`1/Node<T> next)
    // Offset: 0xFFFFFFFF
    void SwapNodes(typename GlobalNamespace::OrderedSet_1<T>::Node* previous, typename GlobalNamespace::OrderedSet_1<T>::Node* next) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "SwapNodes", previous, next));
    }
    // private System.Void RemoveNode(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void RemoveNode(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveNode", node));
    }
    // private System.Void UpdateSortedPosition(OrderedSet`1/Node<T> node)
    // Offset: 0xFFFFFFFF
    void UpdateSortedPosition(typename GlobalNamespace::OrderedSet_1<T>::Node* node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdateSortedPosition", node));
    }
    // public T GetFirstOrDefault()
    // Offset: 0xFFFFFFFF
    T GetFirstOrDefault() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "GetFirstOrDefault"));
    }
    // public System.Boolean TryGetFirst(out T value)
    // Offset: 0xFFFFFFFF
    bool TryGetFirst(T& value) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetFirst", value));
    }
    // public System.Collections.Generic.IEnumerator`1<T> GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<T>*>(this, "GetEnumerator"));
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
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
  }; // OrderedSet`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::OrderedSet_1, "", "OrderedSet`1");
#pragma pack(pop)