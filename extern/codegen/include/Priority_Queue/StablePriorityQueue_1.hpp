// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Priority_Queue.IFixedSizePriorityQueue`2
#include "Priority_Queue/IFixedSizePriorityQueue_2.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Priority_Queue
namespace Priority_Queue {
  // Skipping declaration: <GetEnumerator>d__22 because it is already included!
  // Forward declaring type: StablePriorityQueueNode
  class StablePriorityQueueNode;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // Autogenerated type: Priority_Queue.StablePriorityQueue`1
  template<typename T>
  class StablePriorityQueue_1 : public ::Il2CppObject/*, public Priority_Queue::IFixedSizePriorityQueue_2<T, float>*/ {
    public:
    // Nested type: Priority_Queue::StablePriorityQueue_1::$GetEnumerator$d__22<T>
    class $GetEnumerator$d__22;
    // Autogenerated type: Priority_Queue.StablePriorityQueue`1/<GetEnumerator>d__22
    class $GetEnumerator$d__22 : public ::Il2CppObject, public ::il2cpp_utils::il2cpp_type_check::NestedType/*, public System::Collections::Generic::IEnumerator_1<T>*/ {
      public:
      using declaring_type = StablePriorityQueue_1<T>*;
      static constexpr std::string_view NESTED_NAME = "$GetEnumerator$d__22";
      // private System.Int32 <>1__state
      // Offset: 0x0
      int $$1__state;
      // private T <>2__current
      // Offset: 0x0
      T $$2__current;
      // public Priority_Queue.StablePriorityQueue`1<T> <>4__this
      // Offset: 0x0
      Priority_Queue::StablePriorityQueue_1<T>* $$4__this;
      // private System.Int32 <i>5__2
      // Offset: 0x0
      int $i$5__2;
      // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<T>
      operator System::Collections::Generic::IEnumerator_1<T>() noexcept {
        return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<T>*>(this);
      }
      // public System.Void .ctor(System.Int32 <>1__state)
      // Offset: 0xFFFFFFFF
      static typename StablePriorityQueue_1<T>::$GetEnumerator$d__22* New_ctor(int $$1__state) {
        return THROW_UNLESS(il2cpp_utils::New<typename StablePriorityQueue_1<T>::$GetEnumerator$d__22*>($$1__state));
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
    }; // Priority_Queue.StablePriorityQueue`1/<GetEnumerator>d__22
    // private System.Int32 _numNodes
    // Offset: 0x0
    int numNodes;
    // private T[] _nodes
    // Offset: 0x0
    ::Array<T>* nodes;
    // private System.Int64 _numNodesEverEnqueued
    // Offset: 0x0
    int64_t numNodesEverEnqueued;
    // Creating interface conversion operator: operator Priority_Queue::IFixedSizePriorityQueue_2<T, float>
    operator Priority_Queue::IFixedSizePriorityQueue_2<T, float>() noexcept {
      return *reinterpret_cast<Priority_Queue::IFixedSizePriorityQueue_2<T, float>*>(this);
    }
    // public System.Void .ctor(System.Int32 maxNodes)
    // Offset: 0xFFFFFFFF
    static StablePriorityQueue_1<T>* New_ctor(int maxNodes) {
      return THROW_UNLESS(il2cpp_utils::New<StablePriorityQueue_1<T>*>(maxNodes));
    }
    // private System.Void CascadeUp(T node)
    // Offset: 0xFFFFFFFF
    void CascadeUp(T node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "CascadeUp", node));
    }
    // private System.Void CascadeDown(T node)
    // Offset: 0xFFFFFFFF
    void CascadeDown(T node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "CascadeDown", node));
    }
    // private System.Boolean HasHigherPriority(T higher, T lower)
    // Offset: 0xFFFFFFFF
    bool HasHigherPriority(T higher, T lower) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "HasHigherPriority", higher, lower));
    }
    // private System.Void OnNodeUpdated(T node)
    // Offset: 0xFFFFFFFF
    void OnNodeUpdated(T node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "OnNodeUpdated", node));
    }
    // public System.Boolean IsValidQueue()
    // Offset: 0xFFFFFFFF
    bool IsValidQueue() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValidQueue"));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: System.Int32 IPriorityQueue_2::get_Count()
    int get_Count() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
    }
    // public System.Int32 get_MaxSize()
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IFixedSizePriorityQueue`2
    // Base method: System.Int32 IFixedSizePriorityQueue_2::get_MaxSize()
    int get_MaxSize() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_MaxSize"));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: System.Void IPriorityQueue_2::Clear()
    void Clear() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
    }
    // public System.Boolean Contains(T node)
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: System.Boolean IPriorityQueue_2::Contains(T node)
    bool Contains(T node) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", node));
    }
    // public System.Void Enqueue(T node, System.Single priority)
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: System.Void IPriorityQueue_2::Enqueue(T node, System.Single priority)
    void Enqueue(T node, float priority) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Enqueue", node, priority));
    }
    // public T Dequeue()
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: TItem IPriorityQueue_2::Dequeue()
    T Dequeue() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "Dequeue"));
    }
    // public System.Void Resize(System.Int32 maxNodes)
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IFixedSizePriorityQueue`2
    // Base method: System.Void IFixedSizePriorityQueue_2::Resize(System.Int32 maxNodes)
    void Resize(int maxNodes) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Resize", maxNodes));
    }
    // public T get_First()
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: TItem IPriorityQueue_2::get_First()
    T get_First() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<T>(this, "get_First"));
    }
    // public System.Void UpdatePriority(T node, System.Single priority)
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: System.Void IPriorityQueue_2::UpdatePriority(T node, System.Single priority)
    void UpdatePriority(T node, float priority) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdatePriority", node, priority));
    }
    // public System.Void Remove(T node)
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: System.Void IPriorityQueue_2::Remove(T node)
    void Remove(T node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Remove", node));
    }
    // public System.Void ResetNode(T node)
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IFixedSizePriorityQueue`2
    // Base method: System.Void IFixedSizePriorityQueue_2::ResetNode(T node)
    void ResetNode(T node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "ResetNode", node));
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
  }; // Priority_Queue.StablePriorityQueue`1
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::StablePriorityQueue_1, "Priority_Queue", "StablePriorityQueue`1");
#pragma pack(pop)