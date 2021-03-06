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
  // Size: 0x52
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.Remoting.Metadata.SoapTypeAttribute
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CABC3C
  // [AttributeUsageAttribute] Offset: CABC3C
  class SoapTypeAttribute : public System::Runtime::Remoting::Metadata::SoapAttribute {
    public:
    // private System.Boolean _useAttribute
    // Size: 0x1
    // Offset: 0x28
    bool useAttribute;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: useAttribute and: xmlElementName
    char __padding0[0x7] = {};
    // private System.String _xmlElementName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* xmlElementName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _xmlNamespace
    // Size: 0x8
    // Offset: 0x38
    ::Il2CppString* xmlNamespace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _xmlTypeName
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* xmlTypeName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _xmlTypeNamespace
    // Size: 0x8
    // Offset: 0x48
    ::Il2CppString* xmlTypeNamespace;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Boolean _isType
    // Size: 0x1
    // Offset: 0x50
    bool isType;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _isElement
    // Size: 0x1
    // Offset: 0x51
    bool isElement;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SoapTypeAttribute
    SoapTypeAttribute(bool useAttribute_ = {}, ::Il2CppString* xmlElementName_ = {}, ::Il2CppString* xmlNamespace_ = {}, ::Il2CppString* xmlTypeName_ = {}, ::Il2CppString* xmlTypeNamespace_ = {}, bool isType_ = {}, bool isElement_ = {}) noexcept : useAttribute{useAttribute_}, xmlElementName{xmlElementName_}, xmlNamespace{xmlNamespace_}, xmlTypeName{xmlTypeName_}, xmlTypeNamespace{xmlTypeNamespace_}, isType{isType_}, isElement{isElement_} {}
    // public System.String get_XmlElementName()
    // Offset: 0x157F7FC
    ::Il2CppString* get_XmlElementName();
    // public System.String get_XmlTypeName()
    // Offset: 0x157F80C
    ::Il2CppString* get_XmlTypeName();
    // public System.String get_XmlTypeNamespace()
    // Offset: 0x157F814
    ::Il2CppString* get_XmlTypeNamespace();
    // System.Boolean get_IsInteropXmlElement()
    // Offset: 0x157F81C
    bool get_IsInteropXmlElement();
    // System.Boolean get_IsInteropXmlType()
    // Offset: 0x157F824
    bool get_IsInteropXmlType();
    // public System.Void .ctor()
    // Offset: 0x157F7EC
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SoapTypeAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::Remoting::Metadata::SoapTypeAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SoapTypeAttribute*, creationType>()));
    }
    // public override System.Boolean get_UseAttribute()
    // Offset: 0x157F7F4
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Boolean SoapAttribute::get_UseAttribute()
    bool get_UseAttribute();
    // public override System.String get_XmlNamespace()
    // Offset: 0x157F804
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.String SoapAttribute::get_XmlNamespace()
    ::Il2CppString* get_XmlNamespace();
    // override System.Void SetReflectionObject(System.Object reflectionObject)
    // Offset: 0x157F82C
    // Implemented from: System.Runtime.Remoting.Metadata.SoapAttribute
    // Base method: System.Void SoapAttribute::SetReflectionObject(System.Object reflectionObject)
    void SetReflectionObject(::Il2CppObject* reflectionObject);
  }; // System.Runtime.Remoting.Metadata.SoapTypeAttribute
  #pragma pack(pop)
  static check_size<sizeof(SoapTypeAttribute), 81 + sizeof(bool)> __System_Runtime_Remoting_Metadata_SoapTypeAttributeSizeCheck;
  static_assert(sizeof(SoapTypeAttribute) == 0x52);
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Metadata::SoapTypeAttribute*, "System.Runtime.Remoting.Metadata", "SoapTypeAttribute");
