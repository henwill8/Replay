// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlUtf8RawTextWriter
#include "System/Xml/XmlUtf8RawTextWriter.hpp"
// Including type: System.Xml.ConformanceLevel
#include "System/Xml/ConformanceLevel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: BitStack
  class BitStack;
  // Forward declaring type: XmlWriterSettings
  class XmlWriterSettings;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlUtf8RawTextWriterIndent
  class XmlUtf8RawTextWriterIndent : public System::Xml::XmlUtf8RawTextWriter {
    public:
    // protected System.Int32 indentLevel
    // Offset: 0x88
    int indentLevel;
    // protected System.Boolean newLineOnAttributes
    // Offset: 0x8C
    bool newLineOnAttributes;
    // protected System.String indentChars
    // Offset: 0x90
    ::Il2CppString* indentChars;
    // protected System.Boolean mixedContent
    // Offset: 0x98
    bool mixedContent;
    // private System.Xml.BitStack mixedContentStack
    // Offset: 0xA0
    System::Xml::BitStack* mixedContentStack;
    // protected System.Xml.ConformanceLevel conformanceLevel
    // Offset: 0xA8
    System::Xml::ConformanceLevel conformanceLevel;
    // private System.Void Init(System.Xml.XmlWriterSettings settings)
    // Offset: 0x11AC09C
    void Init(System::Xml::XmlWriterSettings* settings);
    // private System.Void WriteIndent()
    // Offset: 0x11AC230
    void WriteIndent();
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x11AC070
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    static XmlUtf8RawTextWriterIndent* New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x11AC1C4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x11AC27C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x11AC320
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::StartElementContent()
    void StartElementContent();
    // override System.Void OnRootElement(System.Xml.ConformanceLevel currentConformanceLevel)
    // Offset: 0x11AC364
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::OnRootElement(System.Xml.ConformanceLevel currentConformanceLevel)
    void OnRootElement(System::Xml::ConformanceLevel currentConformanceLevel);
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x11AC36C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x11AC408
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x11AC4A4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x11AC4EC
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x11AC4F8
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String target, System.String text)
    // Offset: 0x11AC53C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteProcessingInstruction(System.String target, System.String text)
    void WriteProcessingInstruction(::Il2CppString* target, ::Il2CppString* text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x11AC590
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x11AC59C
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x11AC5A8
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x11AC5B4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x11AC5C0
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x11AC5CC
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x11AC5D8
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x11AC5E4
    // Implemented from: System.Xml.XmlUtf8RawTextWriter
    // Base method: System.Void XmlUtf8RawTextWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
    // public override System.Void WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x11AC5F0
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBase64(::Array<uint8_t>* buffer, int index, int count);
  }; // System.Xml.XmlUtf8RawTextWriterIndent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlUtf8RawTextWriterIndent*, "System.Xml", "XmlUtf8RawTextWriterIndent");
#pragma pack(pop)
