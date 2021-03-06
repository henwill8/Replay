// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Xml.SmallXmlParser
#include "Mono/Xml/SmallXmlParser.hpp"
// Including type: Mono.Xml.SmallXmlParser/IAttrList
#include "Mono/Xml/SmallXmlParser_IAttrList.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: Mono.Xml
namespace Mono::Xml {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Xml.SmallXmlParser/AttrListImpl
  // [] Offset: FFFFFFFF
  class SmallXmlParser::AttrListImpl : public ::Il2CppObject/*, public Mono::Xml::SmallXmlParser::IAttrList*/ {
    public:
    // private System.Collections.Generic.List`1<System.String> attrNames
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<::Il2CppString*>* attrNames;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // private System.Collections.Generic.List`1<System.String> attrValues
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<::Il2CppString*>* attrValues;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<::Il2CppString*>*) == 0x8);
    // Creating value type constructor for type: AttrListImpl
    AttrListImpl(System::Collections::Generic::List_1<::Il2CppString*>* attrNames_ = {}, System::Collections::Generic::List_1<::Il2CppString*>* attrValues_ = {}) noexcept : attrNames{attrNames_}, attrValues{attrValues_} {}
    // Creating interface conversion operator: operator Mono::Xml::SmallXmlParser::IAttrList
    operator Mono::Xml::SmallXmlParser::IAttrList() noexcept {
      return *reinterpret_cast<Mono::Xml::SmallXmlParser::IAttrList*>(this);
    }
    // System.Void Clear()
    // Offset: 0x1945308
    void Clear();
    // System.Void Add(System.String name, System.String value)
    // Offset: 0x1945868
    void Add(::Il2CppString* name, ::Il2CppString* value);
    // public System.Int32 get_Length()
    // Offset: 0x19458E8
    // Implemented from: Mono.Xml.SmallXmlParser/IAttrList
    // Base method: System.Int32 IAttrList::get_Length()
    int get_Length();
    // public System.String GetName(System.Int32 i)
    // Offset: 0x1945938
    // Implemented from: Mono.Xml.SmallXmlParser/IAttrList
    // Base method: System.String IAttrList::GetName(System.Int32 i)
    ::Il2CppString* GetName(int i);
    // public System.String GetValue(System.Int32 i)
    // Offset: 0x19459B0
    // Implemented from: Mono.Xml.SmallXmlParser/IAttrList
    // Base method: System.String IAttrList::GetValue(System.Int32 i)
    ::Il2CppString* GetValue(int i);
    // public System.String GetValue(System.String name)
    // Offset: 0x1945A28
    // Implemented from: Mono.Xml.SmallXmlParser/IAttrList
    // Base method: System.String IAttrList::GetValue(System.String name)
    ::Il2CppString* GetValue(::Il2CppString* name);
    // public System.String[] get_Names()
    // Offset: 0x1945AFC
    // Implemented from: Mono.Xml.SmallXmlParser/IAttrList
    // Base method: System.String[] IAttrList::get_Names()
    ::Array<::Il2CppString*>* get_Names();
    // public System.String[] get_Values()
    // Offset: 0x1945B54
    // Implemented from: Mono.Xml.SmallXmlParser/IAttrList
    // Base method: System.String[] IAttrList::get_Values()
    ::Array<::Il2CppString*>* get_Values();
    // public System.Void .ctor()
    // Offset: 0x1943ED0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SmallXmlParser::AttrListImpl* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Xml::SmallXmlParser::AttrListImpl::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SmallXmlParser::AttrListImpl*, creationType>()));
    }
  }; // Mono.Xml.SmallXmlParser/AttrListImpl
  #pragma pack(pop)
  static check_size<sizeof(SmallXmlParser::AttrListImpl), 24 + sizeof(System::Collections::Generic::List_1<::Il2CppString*>*)> __Mono_Xml_SmallXmlParser_AttrListImplSizeCheck;
  static_assert(sizeof(SmallXmlParser::AttrListImpl) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Xml::SmallXmlParser::AttrListImpl*, "Mono.Xml", "SmallXmlParser/AttrListImpl");
