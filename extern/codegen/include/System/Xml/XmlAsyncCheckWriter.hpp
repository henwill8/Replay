// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlWriter
#include "System/Xml/XmlWriter.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: WriteState
  struct WriteState;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Autogenerated type: System.Xml.XmlAsyncCheckWriter
  class XmlAsyncCheckWriter : public System::Xml::XmlWriter {
    public:
    // private readonly System.Xml.XmlWriter coreWriter
    // Offset: 0x10
    System::Xml::XmlWriter* coreWriter;
    // private System.Threading.Tasks.Task lastTask
    // Offset: 0x18
    System::Threading::Tasks::Task* lastTask;
    // public System.Void .ctor(System.Xml.XmlWriter writer)
    // Offset: 0x14E7BE8
    static XmlAsyncCheckWriter* New_ctor(System::Xml::XmlWriter* writer);
    // private System.Void CheckAsync()
    // Offset: 0x14E7C84
    void CheckAsync();
    // public override System.Void WriteStartDocument()
    // Offset: 0x14E7D1C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartDocument()
    void WriteStartDocument();
    // public override System.Void WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    // Offset: 0x14E7D50
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteDocType(System.String name, System.String pubid, System.String sysid, System.String subset)
    void WriteDocType(::Il2CppString* name, ::Il2CppString* pubid, ::Il2CppString* sysid, ::Il2CppString* subset);
    // public override System.Void WriteStartElement(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14E7DB4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartElement(System.String prefix, System.String localName, System.String ns)
    void WriteStartElement(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndElement()
    // Offset: 0x14E7E08
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndElement()
    void WriteEndElement();
    // public override System.Void WriteFullEndElement()
    // Offset: 0x14E7E3C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteFullEndElement()
    void WriteFullEndElement();
    // public override System.Void WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    // Offset: 0x14E7E70
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteStartAttribute(System.String prefix, System.String localName, System.String ns)
    void WriteStartAttribute(::Il2CppString* prefix, ::Il2CppString* localName, ::Il2CppString* ns);
    // public override System.Void WriteEndAttribute()
    // Offset: 0x14E7EC4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEndAttribute()
    void WriteEndAttribute();
    // public override System.Void WriteCData(System.String text)
    // Offset: 0x14E7EF8
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteCData(System.String text)
    void WriteCData(::Il2CppString* text);
    // public override System.Void WriteComment(System.String text)
    // Offset: 0x14E7F34
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteComment(System.String text)
    void WriteComment(::Il2CppString* text);
    // public override System.Void WriteProcessingInstruction(System.String name, System.String text)
    // Offset: 0x14E7F74
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteProcessingInstruction(System.String name, System.String text)
    void WriteProcessingInstruction(::Il2CppString* name, ::Il2CppString* text);
    // public override System.Void WriteEntityRef(System.String name)
    // Offset: 0x14E7FC4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteEntityRef(System.String name)
    void WriteEntityRef(::Il2CppString* name);
    // public override System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x14E8004
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteCharEntity(System.Char ch)
    void WriteCharEntity(::Il2CppChar ch);
    // public override System.Void WriteWhitespace(System.String ws)
    // Offset: 0x14E8044
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteWhitespace(System.String ws)
    void WriteWhitespace(::Il2CppString* ws);
    // public override System.Void WriteString(System.String text)
    // Offset: 0x14E8084
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteString(System.String text)
    void WriteString(::Il2CppString* text);
    // public override System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x14E80C4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // public override System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14E8114
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14E816C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void WriteRaw(System.String data)
    // Offset: 0x14E81C4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteRaw(System.String data)
    void WriteRaw(::Il2CppString* data);
    // public override System.Void WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14E8204
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteBase64(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBase64(::Array<uint8_t>* buffer, int index, int count);
    // public override System.Void WriteBinHex(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x14E825C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteBinHex(System.Byte[] buffer, System.Int32 index, System.Int32 count)
    void WriteBinHex(::Array<uint8_t>* buffer, int index, int count);
    // public override System.Xml.WriteState get_WriteState()
    // Offset: 0x14E82B4
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Xml.WriteState XmlWriter::get_WriteState()
    System::Xml::WriteState get_WriteState();
    // public override System.Void Close()
    // Offset: 0x14E82EC
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Close()
    void Close();
    // public override System.Void Flush()
    // Offset: 0x14E8324
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Flush()
    void Flush();
    // public override System.String LookupPrefix(System.String ns)
    // Offset: 0x14E835C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.String XmlWriter::LookupPrefix(System.String ns)
    ::Il2CppString* LookupPrefix(::Il2CppString* ns);
    // public override System.Void WriteValue(System.String value)
    // Offset: 0x14E839C
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::WriteValue(System.String value)
    void WriteValue(::Il2CppString* value);
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x14E83DC
    // Implemented from: System.Xml.XmlWriter
    // Base method: System.Void XmlWriter::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Xml.XmlAsyncCheckWriter
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlAsyncCheckWriter*, "System.Xml", "XmlAsyncCheckWriter");
#pragma pack(pop)
