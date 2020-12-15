// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Priority_Queue.IPriorityQueue`2
#include "Priority_Queue/IPriorityQueue_2.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
// Including type: Priority_Queue.GenericPriorityQueueNode`1
#include "Priority_Queue/GenericPriorityQueueNode_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Priority_Queue
namespace Priority_Queue {
  // Skipping declaration: SimpleNode because it is already included!
  // Forward declaring type: GenericPriorityQueue`2<TItem, TPriority>
  template<typename TItem, typename TPriority>
  class GenericPriorityQueue_2;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: IComparable`1 because it is already included!
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
  // Forward declaring type: IComparer`1<T>
  template<typename T>
  class IComparer_1;
  // Forward declaring type: IEqualityComparer`1<T>
  template<typename T>
  class IEqualityComparer_1;
  // Forward declaring type: IEnumerator`1<T>
  template<typename T>
  class IEnumerator_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: Priority_Queue
namespace Priority_Queue {
  // Autogenerated type: Priority_Queue.SimplePriorityQueue`2
  template<typename TItem, typename TPriority>
  class SimplePriorityQueue_2 : public ::Il2CppObject/*, public Priority_Queue::IPriorityQueue_2<TItem, TPriority>*/ {
    public:
    // Nested type: Priority_Queue::SimplePriorityQueue_2::SimpleNode<TItem, TPriority>
    class SimpleNode;
    // Autogenerated type: Priority_Queue.SimplePriorityQueue`2/SimpleNode
    class SimpleNode : public Priority_Queue::GenericPriorityQueueNode_1<TPriority>, public ::il2cpp_utils::il2cpp_type_check::NestedType {
      public:
      using declaring_type = SimplePriorityQueue_2<TItem, TPriority>*;
      static constexpr std::string_view NESTED_NAME = "SimpleNode";
      // private TItem <Data>k__BackingField
      // Offset: 0x0
      TItem Data;
      // public TItem get_Data()
      // Offset: 0xFFFFFFFF
      TItem get_Data() {
        return THROW_UNLESS(il2cpp_utils::RunMethod<TItem>(this, "get_Data"));
      }
      // private System.Void set_Data(TItem value)
      // Offset: 0xFFFFFFFF
      void set_Data(TItem value) {
        THROW_UNLESS(il2cpp_utils::RunMethod(this, "set_Data", value));
      }
      // public System.Void .ctor(TItem data)
      // Offset: 0xFFFFFFFF
      static typename SimplePriorityQueue_2<TItem, TPriority>::SimpleNode* New_ctor(TItem data) {
        return THROW_UNLESS((il2cpp_utils::New<typename SimplePriorityQueue_2<TItem, TPriority>::SimpleNode*>(data)));
      }
    }; // Priority_Queue.SimplePriorityQueue`2/SimpleNode
    // private readonly Priority_Queue.GenericPriorityQueue`2<Priority_Queue.SimplePriorityQueue`2/SimpleNode<TItem,TPriority>,TPriority> _queue
    // Offset: 0x0
    Priority_Queue::GenericPriorityQueue_2<typename Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::SimpleNode*, TPriority>* queue;
    // private readonly System.Collections.Generic.Dictionary`2<TItem,System.Collections.Generic.IList`1<Priority_Queue.SimplePriorityQueue`2/SimpleNode<TItem,TPriority>>> _itemToNodesCache
    // Offset: 0x0
    System::Collections::Generic::Dictionary_2<TItem, System::Collections::Generic::IList_1<typename Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::SimpleNode*>*>* itemToNodesCache;
    // private readonly System.Collections.Generic.IList`1<Priority_Queue.SimplePriorityQueue`2/SimpleNode<TItem,TPriority>> _nullNodesCache
    // Offset: 0x0
    System::Collections::Generic::IList_1<typename Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::SimpleNode*>* nullNodesCache;
    // Creating interface conversion operator: operator Priority_Queue::IPriorityQueue_2<TItem, TPriority>
    operator Priority_Queue::IPriorityQueue_2<TItem, TPriority>() noexcept {
      return *reinterpret_cast<Priority_Queue::IPriorityQueue_2<TItem, TPriority>*>(this);
    }
    // Autogenerated static field getter
    // Get static field: static private System.Int32 INITIAL_QUEUE_SIZE
    static int _get_INITIAL_QUEUE_SIZE() {
      return THROW_UNLESS((il2cpp_utils::GetFieldValue<int>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SimplePriorityQueue_2<TItem, TPriority>*>::get(), "INITIAL_QUEUE_SIZE")));
    }
    // Autogenerated static field setter
    // Set static field: static private System.Int32 INITIAL_QUEUE_SIZE
    static void _set_INITIAL_QUEUE_SIZE(int value) {
      THROW_UNLESS((il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<SimplePriorityQueue_2<TItem, TPriority>*>::get(), "INITIAL_QUEUE_SIZE", value)));
    }
    // public System.Void .ctor(System.Collections.Generic.IComparer`1<TPriority> priorityComparer)
    // Offset: 0xFFFFFFFF
    static SimplePriorityQueue_2<TItem, TPriority>* New_ctor(System::Collections::Generic::IComparer_1<TPriority>* priorityComparer) {
      return THROW_UNLESS((il2cpp_utils::New<SimplePriorityQueue_2<TItem, TPriority>*>(priorityComparer)));
    }
    // public System.Void .ctor(System.Comparison`1<TPriority> priorityComparer)
    // Offset: 0xFFFFFFFF
    static SimplePriorityQueue_2<TItem, TPriority>* New_ctor(System::Comparison_1<TPriority>* priorityComparer) {
      return THROW_UNLESS((il2cpp_utils::New<SimplePriorityQueue_2<TItem, TPriority>*>(priorityComparer)));
    }
    // public System.Void .ctor(System.Collections.Generic.IEqualityComparer`1<TItem> itemEquality)
    // Offset: 0xFFFFFFFF
    static SimplePriorityQueue_2<TItem, TPriority>* New_ctor(System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
      return THROW_UNLESS((il2cpp_utils::New<SimplePriorityQueue_2<TItem, TPriority>*>(itemEquality)));
    }
    // public System.Void .ctor(System.Collections.Generic.IComparer`1<TPriority> priorityComparer, System.Collections.Generic.IEqualityComparer`1<TItem> itemEquality)
    // Offset: 0xFFFFFFFF
    static SimplePriorityQueue_2<TItem, TPriority>* New_ctor(System::Collections::Generic::IComparer_1<TPriority>* priorityComparer, System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
      return THROW_UNLESS((il2cpp_utils::New<SimplePriorityQueue_2<TItem, TPriority>*>(priorityComparer, itemEquality)));
    }
    // public System.Void .ctor(System.Comparison`1<TPriority> priorityComparer, System.Collections.Generic.IEqualityComparer`1<TItem> itemEquality)
    // Offset: 0xFFFFFFFF
    static SimplePriorityQueue_2<TItem, TPriority>* New_ctor(System::Comparison_1<TPriority>* priorityComparer, System::Collections::Generic::IEqualityComparer_1<TItem>* itemEquality) {
      return THROW_UNLESS((il2cpp_utils::New<SimplePriorityQueue_2<TItem, TPriority>*>(priorityComparer, itemEquality)));
    }
    // private Priority_Queue.SimplePriorityQueue`2/SimpleNode<TItem,TPriority> GetExistingNode(TItem item)
    // Offset: 0xFFFFFFFF
    typename Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::SimpleNode* GetExistingNode(TItem item) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<typename Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::SimpleNode*>(this, "GetExistingNode", item)));
    }
    // private System.Void AddToNodeCache(Priority_Queue.SimplePriorityQueue`2/SimpleNode<TItem,TPriority> node)
    // Offset: 0xFFFFFFFF
    void AddToNodeCache(typename Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::SimpleNode* node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "AddToNodeCache", node));
    }
    // private System.Void RemoveFromNodeCache(Priority_Queue.SimplePriorityQueue`2/SimpleNode<TItem,TPriority> node)
    // Offset: 0xFFFFFFFF
    void RemoveFromNodeCache(typename Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::SimpleNode* node) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "RemoveFromNodeCache", node));
    }
    // private Priority_Queue.SimplePriorityQueue`2/SimpleNode<TItem,TPriority> EnqueueNoLockOrCache(TItem item, TPriority priority)
    // Offset: 0xFFFFFFFF
    typename Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::SimpleNode* EnqueueNoLockOrCache(TItem item, TPriority priority) {
      return THROW_UNLESS((il2cpp_utils::RunMethod<typename Priority_Queue::SimplePriorityQueue_2<TItem, TPriority>::SimpleNode*>(this, "EnqueueNoLockOrCache", item, priority)));
    }
    // public System.Boolean EnqueueWithoutDuplicates(TItem item, TPriority priority)
    // Offset: 0xFFFFFFFF
    bool EnqueueWithoutDuplicates(TItem item, TPriority priority) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "EnqueueWithoutDuplicates", item, priority));
    }
    // public TPriority GetPriority(TItem item)
    // Offset: 0xFFFFFFFF
    TPriority GetPriority(TItem item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TPriority>(this, "GetPriority", item));
    }
    // public System.Boolean TryFirst(out TItem first)
    // Offset: 0xFFFFFFFF
    bool TryFirst(TItem& first) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryFirst", first));
    }
    // public System.Boolean TryDequeue(out TItem first)
    // Offset: 0xFFFFFFFF
    bool TryDequeue(TItem& first) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryDequeue", first));
    }
    // public System.Boolean TryRemove(TItem item)
    // Offset: 0xFFFFFFFF
    bool TryRemove(TItem item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryRemove", item));
    }
    // public System.Boolean TryUpdatePriority(TItem item, TPriority priority)
    // Offset: 0xFFFFFFFF
    bool TryUpdatePriority(TItem item, TPriority priority) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryUpdatePriority", item, priority));
    }
    // public System.Boolean TryGetPriority(TItem item, out TPriority priority)
    // Offset: 0xFFFFFFFF
    bool TryGetPriority(TItem item, TPriority& priority) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "TryGetPriority", item, priority));
    }
    // public System.Collections.Generic.IEnumerator`1<TItem> GetEnumerator()
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerator_1<TItem>* GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::Generic::IEnumerator_1<TItem>*>(this, "GetEnumerator"));
    }
    // public System.Boolean IsValidQueue()
    // Offset: 0xFFFFFFFF
    bool IsValidQueue() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "IsValidQueue"));
    }
    // public System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SimplePriorityQueue_2<TItem, TPriority>* New_ctor() {
      return THROW_UNLESS((il2cpp_utils::New<SimplePriorityQueue_2<TItem, TPriority>*>()));
    }
    // public System.Int32 get_Count()
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: System.Int32 IPriorityQueue_2::get_Count()
    int get_Count() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<int>(this, "get_Count"));
    }
    // public TItem get_First()
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: TItem IPriorityQueue_2::get_First()
    TItem get_First() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TItem>(this, "get_First"));
    }
    // public System.Void Clear()
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: System.Void IPriorityQueue_2::Clear()
    void Clear() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Clear"));
    }
    // public System.Boolean Contains(TItem item)
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: System.Boolean IPriorityQueue_2::Contains(TItem item)
    bool Contains(TItem item) {
      return THROW_UNLESS(il2cpp_utils::RunMethod<bool>(this, "Contains", item));
    }
    // public TItem Dequeue()
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: TItem IPriorityQueue_2::Dequeue()
    TItem Dequeue() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<TItem>(this, "Dequeue"));
    }
    // public System.Void Enqueue(TItem item, TPriority priority)
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: System.Void IPriorityQueue_2::Enqueue(TItem item, TPriority priority)
    void Enqueue(TItem item, TPriority priority) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Enqueue", item, priority));
    }
    // public System.Void Remove(TItem item)
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: System.Void IPriorityQueue_2::Remove(TItem item)
    void Remove(TItem item) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "Remove", item));
    }
    // public System.Void UpdatePriority(TItem item, TPriority priority)
    // Offset: 0xFFFFFFFF
    // Implemented from: Priority_Queue.IPriorityQueue`2
    // Base method: System.Void IPriorityQueue_2::UpdatePriority(TItem item, TPriority priority)
    void UpdatePriority(TItem item, TPriority priority) {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "UpdatePriority", item, priority));
    }
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() {
      return THROW_UNLESS(il2cpp_utils::RunMethod<System::Collections::IEnumerator*>(this, "System.Collections.IEnumerable.GetEnumerator"));
    }
  }; // Priority_Queue.SimplePriorityQueue`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Priority_Queue::SimplePriorityQueue_2, "Priority_Queue", "SimplePriorityQueue`2");
#pragma pack(pop)