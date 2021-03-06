// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OVRSimpleJSON.JSONNode
#include "OVRSimpleJSON/JSONNode.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Forward declaring type: JSONNodeType
  struct JSONNodeType;
  // Forward declaring type: JSONTextMode
  struct JSONTextMode;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: OVRSimpleJSON
namespace OVRSimpleJSON {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: OVRSimpleJSON.JSONString
  // [] Offset: FFFFFFFF
  class JSONString : public OVRSimpleJSON::JSONNode {
    public:
    // private System.String m_Data
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppString* m_Data;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: JSONString
    JSONString(::Il2CppString* m_Data_ = {}) noexcept : m_Data{m_Data_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_Data;
    }
    // public System.Void .ctor(System.String aData)
    // Offset: 0x1538484
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static JSONString* New_ctor(::Il2CppString* aData) {
      static auto ___internal__logger = ::Logger::get().WithContext("OVRSimpleJSON::JSONString::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<JSONString*, creationType>(aData)));
    }
    // public override OVRSimpleJSON.JSONNodeType get_Tag()
    // Offset: 0x153EA44
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNodeType JSONNode::get_Tag()
    OVRSimpleJSON::JSONNodeType get_Tag();
    // public override System.Boolean get_IsString()
    // Offset: 0x153EA4C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::get_IsString()
    bool get_IsString();
    // public override OVRSimpleJSON.JSONNode/Enumerator GetEnumerator()
    // Offset: 0x153EA54
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: OVRSimpleJSON.JSONNode/Enumerator JSONNode::GetEnumerator()
    OVRSimpleJSON::JSONNode::Enumerator GetEnumerator();
    // public override System.String get_Value()
    // Offset: 0x153EA74
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.String JSONNode::get_Value()
    ::Il2CppString* get_Value();
    // public override System.Void set_Value(System.String value)
    // Offset: 0x153EA7C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::set_Value(System.String value)
    void set_Value(::Il2CppString* value);
    // override System.Void WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    // Offset: 0x153EA84
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Void JSONNode::WriteToStringBuilder(System.Text.StringBuilder aSB, System.Int32 aIndent, System.Int32 aIndentInc, OVRSimpleJSON.JSONTextMode aMode)
    void WriteToStringBuilder(System::Text::StringBuilder* aSB, int aIndent, int aIndentInc, OVRSimpleJSON::JSONTextMode aMode);
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x153EB3C
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Boolean JSONNode::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.Int32 GetHashCode()
    // Offset: 0x153EC50
    // Implemented from: OVRSimpleJSON.JSONNode
    // Base method: System.Int32 JSONNode::GetHashCode()
    int GetHashCode();
  }; // OVRSimpleJSON.JSONString
  #pragma pack(pop)
  static check_size<sizeof(JSONString), 16 + sizeof(::Il2CppString*)> __OVRSimpleJSON_JSONStringSizeCheck;
  static_assert(sizeof(JSONString) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(OVRSimpleJSON::JSONString*, "OVRSimpleJSON", "JSONString");
