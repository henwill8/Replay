// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlEncodedRawTextWriter
#include "System/Xml/XmlEncodedRawTextWriter.hpp"
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
  // Forward declaring type: TextWriter
  class TextWriter;
  // Forward declaring type: Stream
  class Stream;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlEncodedRawTextWriterIndent
  class XmlEncodedRawTextWriterIndent : public System::Xml::XmlEncodedRawTextWriter {
    public:
    // protected System.Int32 indentLevel
    // Offset: 0xB8
    int indentLevel;
    // protected System.Boolean newLineOnAttributes
    // Offset: 0xBC
    bool newLineOnAttributes;
    // protected System.String indentChars
    // Offset: 0xC0
    ::Il2CppString* indentChars;
    // protected System.Boolean mixedContent
    // Offset: 0xC8
    bool mixedContent;
    // private System.Xml.BitStack mixedContentStack
    // Offset: 0xD0
    System::Xml::BitStack* mixedContentStack;
    // protected System.Xml.ConformanceLevel conformanceLevel
    // Offset: 0xD8
    System::Xml::ConformanceLevel conformanceLevel;
    // private System.Void Init(System.Xml.XmlWriterSettings settings)
    // Offset: 0x14ED394
    void Init(System::Xml::XmlWriterSettings* settings);
    // private System.Void WriteIndent()
    // Offset: 0x14ED554
    void WriteIndent();
    // public System.Void .ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    // Offset: 0x14ED368
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.TextWriter writer, System.Xml.XmlWriterSettings settings)
    static XmlEncodedRawTextWriterIndent* New_ctor(System::IO::TextWriter* writer, System::Xml::XmlWriterSettings* settings);
    // public System.Void .ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    // Offset: 0x14ED4BC
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::.ctor(System.IO.Stream stream, System.Xml.XmlWriterSettings settings)
    static XmlEncodedRawTextWriterIndent* New_ctor(System::IO::Stream* stream, System::Xml::XmlWriterSettings* settings);
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x14ED4E8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14ED5A0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void StartElementContent()
    // Offset: 0x14ED644
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::StartElementContent()
    void StartElementContent();
    // override System.Void OnRootElement(System.Xml.ConformanceLevel currentConformanceLevel)
    // Offset: 0x14ED688
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::OnRootElement(System.Xml.ConformanceLevel currentConformanceLevel)
    void OnRootElement(System::Xml::ConformanceLevel currentConformanceLevel);
    // override System.Void WriteEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14ED690
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // override System.Void WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14ED72C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteFullEndElement(System.String prefix, System.String localName, System.String ns)
    void WriteFullEndElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14ED7C8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x14ED810
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x14ED81C
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String target, System.String text)
    // Offset: 0x14ED860
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteProcessingInstruction(System.String target, System.String text)
    void WriteProcessingInstruction(::Il2CppString* target, ::Il2CppString* text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x14ED8B4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x14ED8C0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x14ED8CC
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x14ED8D8
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x14ED8E4
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14ED8F0
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14ED8FC
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x14ED908
    // Implemented from: System.Xml.XmlEncodedRawTextWriter
    // Base method: System.Void XmlEncodedRawTextWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
    // public override System.Void WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14ED914
    // Implemented from: System.Xml.XmlRawWriter
    // Base method: System.Void XmlRawWriter::WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBase64(::Array<uint8_t>* buffer, int index, int count);
  }; // System.Xml.XmlEncodedRawTextWriterIndent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlEncodedRawTextWriterIndent*, "System.Xml", "XmlEncodedRawTextWriterIndent");
#pragma pack(pop)