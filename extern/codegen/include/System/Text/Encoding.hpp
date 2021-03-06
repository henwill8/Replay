// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: EncoderFallback
  class EncoderFallback;
  // Forward declaring type: DecoderFallback
  class DecoderFallback;
  // Forward declaring type: EncoderNLS
  class EncoderNLS;
  // Forward declaring type: DecoderNLS
  class DecoderNLS;
  // Forward declaring type: Decoder
  class Decoder;
  // Forward declaring type: Encoder
  class Encoder;
}
// Forward declaring namespace: System::Globalization
namespace System::Globalization {
  // Forward declaring type: CodePageDataItem
  class CodePageDataItem;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: StreamingContext
  struct StreamingContext;
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Text
namespace System::Text {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.Text.Encoding
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CA8AF0
  class Encoding : public ::Il2CppObject/*, public System::ICloneable*/ {
    public:
    // Nested type: System::Text::Encoding::DefaultEncoder
    class DefaultEncoder;
    // Nested type: System::Text::Encoding::DefaultDecoder
    class DefaultDecoder;
    // Nested type: System::Text::Encoding::EncodingCharBuffer
    class EncodingCharBuffer;
    // Nested type: System::Text::Encoding::EncodingByteBuffer
    class EncodingByteBuffer;
    // System.Int32 m_codePage
    // Size: 0x4
    // Offset: 0x10
    int m_codePage;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_codePage and: dataItem
    char __padding0[0x4] = {};
    // System.Globalization.CodePageDataItem dataItem
    // Size: 0x8
    // Offset: 0x18
    System::Globalization::CodePageDataItem* dataItem;
    // Field size check
    static_assert(sizeof(System::Globalization::CodePageDataItem*) == 0x8);
    // System.Boolean m_deserializedFromEverett
    // Size: 0x1
    // Offset: 0x20
    bool m_deserializedFromEverett;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // [OptionalFieldAttribute] Offset: 0xCAEB90
    // private System.Boolean m_isReadOnly
    // Size: 0x1
    // Offset: 0x21
    bool m_isReadOnly;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: m_isReadOnly and: encoderFallback
    char __padding3[0x6] = {};
    // [OptionalFieldAttribute] Offset: 0xCAEBC8
    // System.Text.EncoderFallback encoderFallback
    // Size: 0x8
    // Offset: 0x28
    System::Text::EncoderFallback* encoderFallback;
    // Field size check
    static_assert(sizeof(System::Text::EncoderFallback*) == 0x8);
    // [OptionalFieldAttribute] Offset: 0xCAEC00
    // System.Text.DecoderFallback decoderFallback
    // Size: 0x8
    // Offset: 0x30
    System::Text::DecoderFallback* decoderFallback;
    // Field size check
    static_assert(sizeof(System::Text::DecoderFallback*) == 0x8);
    // Creating value type constructor for type: Encoding
    Encoding(int m_codePage_ = {}, System::Globalization::CodePageDataItem* dataItem_ = {}, bool m_deserializedFromEverett_ = {}, bool m_isReadOnly_ = {}, System::Text::EncoderFallback* encoderFallback_ = {}, System::Text::DecoderFallback* decoderFallback_ = {}) noexcept : m_codePage{m_codePage_}, dataItem{dataItem_}, m_deserializedFromEverett{m_deserializedFromEverett_}, m_isReadOnly{m_isReadOnly_}, encoderFallback{encoderFallback_}, decoderFallback{decoderFallback_} {}
    // Creating interface conversion operator: operator System::ICloneable
    operator System::ICloneable() noexcept {
      return *reinterpret_cast<System::ICloneable*>(this);
    }
    // Get static field: static private System.Text.Encoding defaultEncoding
    static System::Text::Encoding* _get_defaultEncoding();
    // Set static field: static private System.Text.Encoding defaultEncoding
    static void _set_defaultEncoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding unicodeEncoding
    static System::Text::Encoding* _get_unicodeEncoding();
    // Set static field: static private System.Text.Encoding unicodeEncoding
    static void _set_unicodeEncoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding bigEndianUnicode
    static System::Text::Encoding* _get_bigEndianUnicode();
    // Set static field: static private System.Text.Encoding bigEndianUnicode
    static void _set_bigEndianUnicode(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding utf7Encoding
    static System::Text::Encoding* _get_utf7Encoding();
    // Set static field: static private System.Text.Encoding utf7Encoding
    static void _set_utf7Encoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding utf8Encoding
    static System::Text::Encoding* _get_utf8Encoding();
    // Set static field: static private System.Text.Encoding utf8Encoding
    static void _set_utf8Encoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding utf32Encoding
    static System::Text::Encoding* _get_utf32Encoding();
    // Set static field: static private System.Text.Encoding utf32Encoding
    static void _set_utf32Encoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding asciiEncoding
    static System::Text::Encoding* _get_asciiEncoding();
    // Set static field: static private System.Text.Encoding asciiEncoding
    static void _set_asciiEncoding(System::Text::Encoding* value);
    // Get static field: static private System.Text.Encoding latin1Encoding
    static System::Text::Encoding* _get_latin1Encoding();
    // Set static field: static private System.Text.Encoding latin1Encoding
    static void _set_latin1Encoding(System::Text::Encoding* value);
    // Get static field: static private System.Collections.Hashtable encodings
    static System::Collections::Hashtable* _get_encodings();
    // Set static field: static private System.Collections.Hashtable encodings
    static void _set_encodings(System::Collections::Hashtable* value);
    // Get static field: static private System.Object s_InternalSyncObject
    static ::Il2CppObject* _get_s_InternalSyncObject();
    // Set static field: static private System.Object s_InternalSyncObject
    static void _set_s_InternalSyncObject(::Il2CppObject* value);
    // protected System.Void .ctor(System.Int32 codePage)
    // Offset: 0x1917B54
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoding* New_ctor(int codePage) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoding*, creationType>(codePage)));
    }
    // System.Void SetDefaultFallbacks()
    // Offset: 0x191F368
    void SetDefaultFallbacks();
    // System.Void OnDeserializing()
    // Offset: 0x191F4C0
    void OnDeserializing();
    // System.Void OnDeserialized()
    // Offset: 0x191F500
    void OnDeserialized();
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x191F550
    void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x191F590
    void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x191F594
    void OnSerializing(System::Runtime::Serialization::StreamingContext ctx);
    // System.Void DeserializeEncoding(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x191F5A0
    void DeserializeEncoding(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void SerializeEncoding(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x191F8FC
    void SerializeEncoding(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static private System.Object get_InternalSyncObject()
    // Offset: 0x191FA48
    static ::Il2CppObject* get_InternalSyncObject();
    // static public System.Text.Encoding GetEncoding(System.Int32 codepage)
    // Offset: 0x191FADC
    static System::Text::Encoding* GetEncoding(int codepage);
    // static public System.Text.Encoding GetEncoding(System.Int32 codepage, System.Text.EncoderFallback encoderFallback, System.Text.DecoderFallback decoderFallback)
    // Offset: 0x1920FB8
    static System::Text::Encoding* GetEncoding(int codepage, System::Text::EncoderFallback* encoderFallback, System::Text::DecoderFallback* decoderFallback);
    // static public System.Text.Encoding GetEncoding(System.String name)
    // Offset: 0x19213B8
    static System::Text::Encoding* GetEncoding(::Il2CppString* name);
    // public System.Byte[] GetPreamble()
    // Offset: 0x1921560
    ::Array<uint8_t>* GetPreamble();
    // private System.Void GetDataItem()
    // Offset: 0x19215C8
    void GetDataItem();
    // public System.String get_EncodingName()
    // Offset: 0x1921714
    ::Il2CppString* get_EncodingName();
    // public System.String get_WebName()
    // Offset: 0x1921720
    ::Il2CppString* get_WebName();
    // public System.Text.EncoderFallback get_EncoderFallback()
    // Offset: 0x192175C
    System::Text::EncoderFallback* get_EncoderFallback();
    // public System.Void set_EncoderFallback(System.Text.EncoderFallback value)
    // Offset: 0x19211D8
    void set_EncoderFallback(System::Text::EncoderFallback* value);
    // public System.Text.DecoderFallback get_DecoderFallback()
    // Offset: 0x1921764
    System::Text::DecoderFallback* get_DecoderFallback();
    // public System.Void set_DecoderFallback(System.Text.DecoderFallback value)
    // Offset: 0x19212C8
    void set_DecoderFallback(System::Text::DecoderFallback* value);
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x19217FC
    bool get_IsReadOnly();
    // static public System.Text.Encoding get_ASCII()
    // Offset: 0x1917AAC
    static System::Text::Encoding* get_ASCII();
    // static private System.Text.Encoding get_Latin1()
    // Offset: 0x19208A4
    static System::Text::Encoding* get_Latin1();
    // public System.Int32 GetByteCount(System.String s)
    // Offset: 0x192180C
    int GetByteCount(::Il2CppString* s);
    // public System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int GetByteCount(::Array<::Il2CppChar>* chars, int index, int count);
    // public System.Int32 GetByteCount(System.Char* chars, System.Int32 count)
    // Offset: 0x19218C4
    int GetByteCount(::Il2CppChar* chars, int count);
    // System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS encoder)
    // Offset: 0x1921A34
    int GetByteCount(::Il2CppChar* chars, int count, System::Text::EncoderNLS* encoder);
    // public System.Byte[] GetBytes(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x1921A40
    ::Array<uint8_t>* GetBytes(::Array<::Il2CppChar>* chars, int index, int count);
    // public System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0xFFFFFFFF
    int GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // public System.Byte[] GetBytes(System.String s)
    // Offset: 0x1921B00
    ::Array<uint8_t>* GetBytes(::Il2CppString* s);
    // public System.Int32 GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x1921C08
    int GetBytes(::Il2CppString* s, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    // Offset: 0x1921CE4
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, System::Text::EncoderNLS* encoder);
    // public System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    // Offset: 0x1921CF4
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount);
    // public System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count)
    // Offset: 0x1921F14
    int GetCharCount(uint8_t* bytes, int count);
    // System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS decoder)
    // Offset: 0x1922088
    int GetCharCount(uint8_t* bytes, int count, System::Text::DecoderNLS* decoder);
    // public System.Char[] GetChars(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x1922098
    ::Array<::Il2CppChar>* GetChars(::Array<uint8_t>* bytes, int index, int count);
    // public System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0xFFFFFFFF
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    // Offset: 0x192215C
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount);
    // System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS decoder)
    // Offset: 0x192237C
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, System::Text::DecoderNLS* decoder);
    // public System.Int32 get_CodePage()
    // Offset: 0x192238C
    int get_CodePage();
    // public System.Text.Decoder GetDecoder()
    // Offset: 0x1922394
    System::Text::Decoder* GetDecoder();
    // static private System.Text.Encoding CreateDefaultEncoding()
    // Offset: 0x192244C
    static System::Text::Encoding* CreateDefaultEncoding();
    // System.Void setReadOnly(System.Boolean value)
    // Offset: 0x1922658
    void setReadOnly(bool value);
    // static public System.Text.Encoding get_Default()
    // Offset: 0x19204DC
    static System::Text::Encoding* get_Default();
    // public System.Text.Encoder GetEncoder()
    // Offset: 0x1922664
    System::Text::Encoder* GetEncoder();
    // public System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0xFFFFFFFF
    int GetMaxByteCount(int charCount);
    // public System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0xFFFFFFFF
    int GetMaxCharCount(int byteCount);
    // public System.String GetString(System.Byte[] bytes)
    // Offset: 0x192271C
    ::Il2CppString* GetString(::Array<uint8_t>* bytes);
    // public System.String GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x19227E4
    ::Il2CppString* GetString(::Array<uint8_t>* bytes, int index, int count);
    // static public System.Text.Encoding get_Unicode()
    // Offset: 0x1920568
    static System::Text::Encoding* get_Unicode();
    // static public System.Text.Encoding get_BigEndianUnicode()
    // Offset: 0x1920610
    static System::Text::Encoding* get_BigEndianUnicode();
    // static public System.Text.Encoding get_UTF7()
    // Offset: 0x19206B8
    static System::Text::Encoding* get_UTF7();
    // static public System.Text.Encoding get_UTF8()
    // Offset: 0x1920800
    static System::Text::Encoding* get_UTF8();
    // static public System.Text.Encoding get_UTF32()
    // Offset: 0x1920758
    static System::Text::Encoding* get_UTF32();
    // System.Char[] GetBestFitUnicodeToBytesData()
    // Offset: 0x1922950
    ::Array<::Il2CppChar>* GetBestFitUnicodeToBytesData();
    // System.Char[] GetBestFitBytesToUnicodeData()
    // Offset: 0x19229B8
    ::Array<::Il2CppChar>* GetBestFitBytesToUnicodeData();
    // System.Void ThrowBytesOverflow()
    // Offset: 0x1922A20
    void ThrowBytesOverflow();
    // System.Void ThrowBytesOverflow(System.Text.EncoderNLS encoder, System.Boolean nothingEncoded)
    // Offset: 0x1919AAC
    void ThrowBytesOverflow(System::Text::EncoderNLS* encoder, bool nothingEncoded);
    // System.Void ThrowCharsOverflow()
    // Offset: 0x1922B48
    void ThrowCharsOverflow();
    // System.Void ThrowCharsOverflow(System.Text.DecoderNLS decoder, System.Boolean nothingDecoded)
    // Offset: 0x1919F98
    void ThrowCharsOverflow(System::Text::DecoderNLS* decoder, bool nothingDecoded);
    // protected System.Void .ctor()
    // Offset: 0x191F360
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Encoding* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Text::Encoding::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Encoding*, creationType>()));
    }
    // public System.Object Clone()
    // Offset: 0x192176C
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x1922810
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x19228F4
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.Encoding
  #pragma pack(pop)
  static check_size<sizeof(Encoding), 48 + sizeof(System::Text::DecoderFallback*)> __System_Text_EncodingSizeCheck;
  static_assert(sizeof(Encoding) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoding*, "System.Text", "Encoding");
