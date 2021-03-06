// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Including type: System.Collections.Generic.KeyValuePair`2
#include "System/Collections/Generic/KeyValuePair_2.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: OVRSimpleJSON.JSONNode/Enumerator
#include "OVRSimpleJSON/JSONNode_Enumerator.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // WARNING Size may be invalid!
  // Autogenerated type: OVRSimpleJSON.JSONNode/LinqEnumerator
  // [] Offset: FFFFFFFF
  class JSONNode::LinqEnumerator : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>, public System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>*/ {
    public:
    // private OVRSimpleJSON.JSONNode m_Node
    // Size: 0x8
    // Offset: 0x10
    OVRSimpleJSON::JSONNode* m_Node;
    // Field size check
    static_assert(sizeof(OVRSimpleJSON::JSONNode*) == 0x8);
    // private OVRSimpleJSON.JSONNode/Enumerator m_Enumerator
    // Size: 0xFFFFFFFF
    // Offset: 0x18
    OVRSimpleJSON::JSONNode::Enumerator m_Enumerator;
    // Creating value type constructor for type: LinqEnumerator
    LinqEnumerator(OVRSimpleJSON::JSONNode* m_Node_ = {}, OVRSimpleJSON::JSONNode::Enumerator m_Enumerator_ = {}) noexcept : m_Node{m_Node_}, m_Enumerator{m_Enumerator_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>
    operator System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>
    operator System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>*>(this);
    }
    // System.Void .ctor(OVRSimpleJSON.JSONNode aNode)
    // Offset: 0x1538C68
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONNode::LinqEnumerator* New_ctor(OVRSimpleJSON::JSONNode* aNode) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONNode::LinqEnumerator::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONNode::LinqEnumerator*, creationType>(aNode)));
    }
    // public System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.String,OVRSimpleJSON.JSONNode>> GetEnumerator()
    // Offset: 0x153CFAC
    System::Collections::Generic::IEnumerator_1<System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*>>* GetEnumerator();
    // public System.Collections.Generic.KeyValuePair`2<System.String,OVRSimpleJSON.JSONNode> get_Current()
    // Offset: 0x153CEF8
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*> get_Current();
    // Creating proxy method: System_Collections_Generic_IEnumerator_1_get_Current
    // Maps to method: get_Current
    System::Collections::Generic::KeyValuePair_2<::Il2CppString*, OVRSimpleJSON::JSONNode*> System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x153CF00
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // public System.Boolean MoveNext()
    // Offset: 0x153CF6C
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // public System.Void Dispose()
    // Offset: 0x153CF74
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
    // public System.Void Reset()
    // Offset: 0x153D010
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void Reset();
    // Creating proxy method: System_Collections_IEnumerator_Reset
    // Maps to method: Reset
    void System_Collections_IEnumerator_Reset();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x153D0C8
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // OVRSimpleJSON.JSONNode/LinqEnumerator
  // WARNING Not writing size check since size may be invalid!
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONNode::LinqEnumerator*, "OVRSimpleJSON", "JSONNode/LinqEnumerator");
