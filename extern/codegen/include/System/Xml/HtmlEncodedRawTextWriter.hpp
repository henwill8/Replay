// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlEncodedRawTextWriter
#include "System/Xml/XmlEncodedRawTextWriter.hpp"
// Including type: System.Xml.ElementProperties
#include "System/Xml/ElementProperties.hpp"
// Including type: System.Xml.AttributeProperties
#include "System/Xml/AttributeProperties.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: ByteStack
  class ByteStack;
  // Forward declaring type: TernaryTreeReadOnly
  class TernaryTreeReadOnly;
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
  // Skipping declaration: XmlStandalone because it is already included!
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: TextWriter
  class TextWriter;
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.HtmlEncodedRawTextWriter
  class HtmlEncodedRawTextWriter : public System::Xml::XmlEncodedRawTextWriter {
    public:
    // protected System.Xml.ByteStack elementScope
    // Offset: 0xB8
    System::Xml::ByteStack* elementScope;
    // protected System.Xml.ElementProperties currentElementProperties
    // Offset: 0xC0
    System::Xml::ElementProperties currentElementProperties;
    // private System.Xml.AttributeProperties currentAttributeProperties
    // Offset: 0xC4
    System::Xml::AttributeProperties currentAttributeProperties;
    // private System.Boolean endsWithAmpersand
    // Offset: 0xC8
    bool endsWithAmpersand;
    // private System.Byte[] uriEscapingBuffer
    // Offset: 0xD0
    ::Array<uint8_t>* uriEscapingBuffer;
    // private System.String mediaType
    // Offset: 0xD8
    ::Il2CppString* mediaType;
    // private System.Boolean doNotEscapeUriAttributes
    // Offset: 0xE0
    bool doNotEscapeUriAttributes;
    // Get static field: static protected System.Xml.TernaryTreeReadOnly elementPropertySearch
    static System::Xml::TernaryTreeReadOnly* _get_elementPropertySearch();
    // Set static field: static protected System.Xml.TernaryTreeReadOnly elementPropertySearch
    static void _set_elementPropertySearch(System::Xml::TernaryTreeReadOnly* value);
    // Get static field: static protected System.Xml.TernaryTreeReadOnly attributePropertySearch
    static System::Xml::TernaryTreeReadOnly* _get_attributePropertySearch();
    // Set static field: static protected System.Xml.TernaryTreeReadOnly attributePropertySearch
    static void _set_attributePropertySearch(System::Xml::TernaryTreeReadOnly* value);
    // private System.Void Init(System.Xml.XmlWriterSettings settings)
    // Offset: 0x14DFC3C
    void Init(System::Xml::XmlWriterSettings* settings);
    // protected System.Void WriteMetaElement()
    // Offset: 0x14E076C
    void WriteMetaElement();
    // protected System.Void WriteHtmlElementTextBlock(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0x14E1698
    void WriteHtmlElementTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // protected System.Void WriteHtmlAttributeTextBlock(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0x14E1658
    void WriteHtmlAttributeTextBlock(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // private System.Void WriteHtmlAttributeText(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0x14E2364
    void WriteHtmlAttributeText(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // private System.Void WriteUriAttributeText(System.Char* pSrc, System.Char* pSrcEnd)
    // Offset: 0x14E1FD4
    void WriteUriAttributeText(::Il2CppChar* pSrc, ::Il2CppChar* pSrcEnd);
    // private System.Void OutputRestAmps()
    // Offset: 0x14E10B0
    void OutputRestAmps();
    // public System.Void .ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    // Offset: 0x14DFB0C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    static HtmlEncodedRawTextWriter* New_ctor(System::IO::TextWriter* writer, System::Xml::XmlWriterSettings* settings);
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x14DFDD8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    static HtmlEncodedRawTextWriter* New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings);
    // override System.Void WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    // Offset: 0x14E00D8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteXmlDeclaration(System.Xml.XmlStandalone standalone)
    void WriteXmlDeclaration(System::Xml::XmlStandalone standalone);
    // override System.Void WriteXmlDeclaration(System.String xmldecl)
    // Offset: 0x14E00DC
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteXmlDeclaration(System.String xmldecl)
    void WriteXmlDeclaration(::Il2CppString* xmldecl);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x14E00E0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14E03C0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x14E0708
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::StartElementContent()
    void StartElementContent();
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14E0848
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14E0AEC
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14E0D2C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x14E1008
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // public override System.Void WriteProcessingInstruction(System.String target, System.String text)
    // Offset: 0x14E1180
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteProcessingInstruction(System.String target, System.String text)
    void WriteProcessingInstruction(::Il2CppString* target, ::Il2CppString* text);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x14E15E8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x14E16A8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x14E171C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x14E178C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14E17FC
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
  }; // System.Xml.HtmlEncodedRawTextWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::HtmlEncodedRawTextWriter*, "System.Xml", "HtmlEncodedRawTextWriter");
#pragma pack(pop)
