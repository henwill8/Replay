// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Xml.XmlWellFormedWriter
#include "System/Xml/XmlWellFormedWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Xml
namespace System::Xml {
  // Forward declaring type: XmlWriter
  class XmlWriter;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: StringBuilder
  class StringBuilder;
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlWellFormedWriter/AttributeValueCache
  // [] Offset: FFFFFFFF
  class XmlWellFormedWriter::AttributeValueCache : public ::Il2CppObject {
    public:
    // Nested type: System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType
    struct ItemType;
    // Nested type: System::Xml::XmlWellFormedWriter::AttributeValueCache::Item
    class Item;
    // Nested type: System::Xml::XmlWellFormedWriter::AttributeValueCache::BufferChunk
    class BufferChunk;
    // private System.Text.StringBuilder stringValue
    // Size: 0x8
    // Offset: 0x10
    System::Text::StringBuilder* stringValue;
    // Field size check
    static_assert(sizeof(System::Text::StringBuilder*) == 0x8);
    // private System.String singleStringValue
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* singleStringValue;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Xml.XmlWellFormedWriter/AttributeValueCache/Item[] items
    // Size: 0x8
    // Offset: 0x20
    ::Array<System::Xml::XmlWellFormedWriter::AttributeValueCache::Item*>* items;
    // Field size check
    static_assert(sizeof(::Array<System::Xml::XmlWellFormedWriter::AttributeValueCache::Item*>*) == 0x8);
    // private System.Int32 firstItem
    // Size: 0x4
    // Offset: 0x28
    int firstItem;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 lastItem
    // Size: 0x4
    // Offset: 0x2C
    int lastItem;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: AttributeValueCache
    AttributeValueCache(System::Text::StringBuilder* stringValue_ = {}, ::Il2CppString* singleStringValue_ = {}, ::Array<System::Xml::XmlWellFormedWriter::AttributeValueCache::Item*>* items_ = {}, int firstItem_ = {}, int lastItem_ = {}) noexcept : stringValue{stringValue_}, singleStringValue{singleStringValue_}, items{items_}, firstItem{firstItem_}, lastItem{lastItem_} {}
    // System.String get_StringValue()
    // Offset: 0x22A6B24
    ::Il2CppString* get_StringValue();
    // System.Void WriteEntityRef(System.String name)
    // Offset: 0x22A6B54
    void WriteEntityRef(::Il2CppString* name);
    // System.Void WriteCharEntity(System.Char ch)
    // Offset: 0x22A6ED4
    void WriteCharEntity(::Il2CppChar ch);
    // System.Void WriteSurrogateCharEntity(System.Char lowChar, System.Char highChar)
    // Offset: 0x22A6F70
    void WriteSurrogateCharEntity(::Il2CppChar lowChar, ::Il2CppChar highChar);
    // System.Void WriteWhitespace(System.String ws)
    // Offset: 0x22A7044
    void WriteWhitespace(::Il2CppString* ws);
    // System.Void WriteString(System.String text)
    // Offset: 0x22A7098
    void WriteString(::Il2CppString* text);
    // System.Void WriteChars(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x22A7110
    void WriteChars(::Array<::Il2CppChar>* buffer, int index, int count);
    // System.Void WriteRaw(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x22A7224
    void WriteRaw(::Array<::Il2CppChar>* buffer, int index, int count);
    // System.Void WriteRaw(System.String data)
    // Offset: 0x22A72EC
    void WriteRaw(::Il2CppString* data);
    // System.Void WriteValue(System.String value)
    // Offset: 0x22A7340
    void WriteValue(::Il2CppString* value);
    // System.Void Replay(System.Xml.XmlWriter writer)
    // Offset: 0x22A7394
    void Replay(System::Xml::XmlWriter* writer);
    // System.Void Trim()
    // Offset: 0x22A76A0
    void Trim();
    // System.Void Clear()
    // Offset: 0x22A7B5C
    void Clear();
    // private System.Void StartComplexValue()
    // Offset: 0x22A6CD0
    void StartComplexValue();
    // private System.Void AddItem(System.Xml.XmlWellFormedWriter/AttributeValueCache/ItemType type, System.Object data)
    // Offset: 0x22A6D24
    void AddItem(System::Xml::XmlWellFormedWriter::AttributeValueCache::ItemType type, ::Il2CppObject* data);
    // public System.Void .ctor()
    // Offset: 0x22A7BBC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlWellFormedWriter::AttributeValueCache* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlWellFormedWriter::AttributeValueCache::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlWellFormedWriter::AttributeValueCache*, creationType>()));
    }
  }; // System.Xml.XmlWellFormedWriter/AttributeValueCache
  #pragma pack(pop)
  static check_size<sizeof(XmlWellFormedWriter::AttributeValueCache), 44 + sizeof(int)> __System_Xml_XmlWellFormedWriter_AttributeValueCacheSizeCheck;
  static_assert(sizeof(XmlWellFormedWriter::AttributeValueCache) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlWellFormedWriter::AttributeValueCache*, "System.Xml", "XmlWellFormedWriter/AttributeValueCache");
