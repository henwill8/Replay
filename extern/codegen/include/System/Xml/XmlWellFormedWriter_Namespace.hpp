// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlWellFormedWriter
#include "System/Xml/XmlWellFormedWriter.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Xml.XmlWellFormedWriter/NamespaceKind
#include "System/Xml/XmlWellFormedWriter_NamespaceKind.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriter
  class XmlWriter;
  // Forward declaring type: XmlRawWriter
  class XmlRawWriter;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlWellFormedWriter/Namespace
  struct XmlWellFormedWriter::Namespace : public System::ValueType {
    public:
    // System.String prefix
    // Offset: 0x0
    ::Il2CppString* prefix;
    // System.String namespaceUri
    // Offset: 0x8
    ::Il2CppString* namespaceUri;
    // System.Xml.XmlWellFormedWriter/NamespaceKind kind
    // Offset: 0x10
    System::Xml::XmlWellFormedWriter::NamespaceKind kind;
    // System.Int32 prevNsIndex
    // Offset: 0x14
    int prevNsIndex;
    // Creating value type constructor for type: Namespace
    constexpr Namespace(::Il2CppString* prefix_ = {}, ::Il2CppString* namespaceUri_ = {}, System::Xml::XmlWellFormedWriter::NamespaceKind kind_ = {}, int prevNsIndex_ = {}) noexcept : prefix{prefix_}, namespaceUri{namespaceUri_}, kind{kind_}, prevNsIndex{prevNsIndex_} {}
    // System.Void Set(System.String prefix, System.String namespaceUri, System.Xml.XmlWellFormedWriter/NamespaceKind kind)
    // Offset: 0xA5E420
    void Set(::Il2CppString* prefix, ::Il2CppString* namespaceUri, System::Xml::XmlWellFormedWriter::NamespaceKind kind);
    // System.Void WriteDecl(System.Xml.XmlWriter writer, System.Xml.XmlRawWriter rawWriter)
    // Offset: 0xA5E46C
    void WriteDecl(System::Xml::XmlWriter* writer, System::Xml::XmlRawWriter* rawWriter);
  }; // System.Xml.XmlWellFormedWriter/Namespace
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::Namespace, "System.Xml", "XmlWellFormedWriter/Namespace");
#pragma pack(pop)
