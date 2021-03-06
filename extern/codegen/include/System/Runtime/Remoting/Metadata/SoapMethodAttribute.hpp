// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Runtime.Remoting.Metadata.SoapAttribute
#include "System/Runtime/Remoting/Metadata/SoapAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: System.Runtime.Remoting.Metadata
namespace System::Runtime::Remoting::Metadata {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapMethodAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: CABBBC
  // [ComVisibleAttribute] Offset: CABBBC
  class SoapMethodAttribute : public System::Runtime::Remoting::Metadata::SoapAttribute {
    public:
    // private System.String _responseElement
    // Size: 0x8
    // Offset: 0x28
    ::Il2CppString* responseElement;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _responseNamespace
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* responseNamespace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _returnElement
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* returnElement;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _soapAction
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* soapAction;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _useAttribute
    // Size: 0x1
    // Offset: 0x48
    bool useAttribute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAttribute and: _namespace
    char __padding4[0x7] = {};
    // private System.String _namespace
    // Size: 0x8
    // Offset: 0x50
    ::Il2CppString* _namespace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: SoapMethodAttribute
    SoapMethodAttribute(::Il2CppString* responseElement_ = {}, ::Il2CppString* responseNamespace_ = {}, ::Il2CppString* returnElement_ = {}, ::Il2CppString* soapAction_ = {}, bool useAttribute_ = {}, ::Il2CppString* _namespace_ = {}) noexcept : responseElement{responseElement_}, responseNamespace{responseNamespace_}, returnElement{returnElement_}, soapAction{soapAction_}, useAttribute{useAttribute_}, _namespace{_namespace_} {}
    // public System.Void .ctor()
    // Offset: 0x157F488
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoapMethodAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Metadata::SoapMethodAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoapMethodAttribute*, creationType>()));
    }
    // public override System.Boolean get_UseAttribute()
    // Offset: 0x157F490
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Boolean SoapAttribute::get_UseAttribute()
    bool get_UseAttribute();
    // public override System.String get_XmlNamespace()
    // Offset: 0x157F498
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.String SoapAttribute::get_XmlNamespace()
    ::Il2CppString* get_XmlNamespace();
    // override System.Void SetReflectionObject(System.Object reflectionObject)
    // Offset: 0x157F4A0
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::SetReflectionObject(System.Object reflectionObject)
    void SetReflectionObject(::Il2CppObject* reflectionObject);
  }; // System.Runtime.Remoting.Metadata.SoapMethodAttribute
  #pragma pack(pop)
  static check_size<sizeof(SoapMethodAttribute), 80 + sizeof(::Il2CppString*)> __System_Runtime_Remoting_Metadata_SoapMethodAttributeSizeCheck;
  static_assert(sizeof(SoapMethodAttribute) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Metadata::SoapMethodAttribute*, "System.Runtime.Remoting.Metadata", "SoapMethodAttribute");
