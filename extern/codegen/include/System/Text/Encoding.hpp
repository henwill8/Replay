// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ICloneable
#include "System/ICloneable.hpp"
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
  // Autogenerated type: System.Text.Encoding
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
    // Offset: 0x10
    int m_codePage;
    // System.Globalization.CodePageDataItem dataItem
    // Offset: 0x18
    System::Globalization::CodePageDataItem* dataItem;
    // System.Boolean m_deserializedFromEverett
    // Offset: 0x20
    bool m_deserializedFromEverett;
    // private System.Boolean m_isReadOnly
    // Offset: 0x21
    bool m_isReadOnly;
    // System.Text.EncoderFallback encoderFallback
    // Offset: 0x28
    System::Text::EncoderFallback* encoderFallback;
    // System.Text.DecoderFallback decoderFallback
    // Offset: 0x30
    System::Text::DecoderFallback* decoderFallback;
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
    // Offset: 0x1596FD0
    static Encoding* New_ctor(int codePage);
    // System.Void SetDefaultFallbacks()
    // Offset: 0x159E7E4
    void SetDefaultFallbacks();
    // System.Void OnDeserializing()
    // Offset: 0x159E93C
    void OnDeserializing();
    // System.Void OnDeserialized()
    // Offset: 0x159E97C
    void OnDeserialized();
    // private System.Void OnDeserializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x159E9CC
    void OnDeserializing(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnDeserialized(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x159EA0C
    void OnDeserialized(System::Runtime::Serialization::StreamingContext ctx);
    // private System.Void OnSerializing(System.Runtime.Serialization.StreamingContext ctx)
    // Offset: 0x159EA10
    void OnSerializing(System::Runtime::Serialization::StreamingContext ctx);
    // System.Void DeserializeEncoding(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x159EA1C
    void DeserializeEncoding(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // System.Void SerializeEncoding(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x159ED78
    void SerializeEncoding(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // static private System.Object get_InternalSyncObject()
    // Offset: 0x159EEC4
    static ::Il2CppObject* get_InternalSyncObject();
    // static public System.Text.Encoding GetEncoding(System.Int32 codepage)
    // Offset: 0x159EF58
    static System::Text::Encoding* GetEncoding(int codepage);
    // static public System.Text.Encoding GetEncoding(System.Int32 codepage, System.Text.EncoderFallback encoderFallback, System.Text.DecoderFallback decoderFallback)
    // Offset: 0x15A0434
    static System::Text::Encoding* GetEncoding(int codepage, System::Text::EncoderFallback* encoderFallback, System::Text::DecoderFallback* decoderFallback);
    // static public System.Text.Encoding GetEncoding(System.String name)
    // Offset: 0x15A0834
    static System::Text::Encoding* GetEncoding(::Il2CppString* name);
    // public System.Byte[] GetPreamble()
    // Offset: 0x15A09DC
    ::Array<uint8_t>* GetPreamble();
    // private System.Void GetDataItem()
    // Offset: 0x15A0A44
    void GetDataItem();
    // public System.String get_EncodingName()
    // Offset: 0x15A0B90
    ::Il2CppString* get_EncodingName();
    // public System.String get_WebName()
    // Offset: 0x15A0B9C
    ::Il2CppString* get_WebName();
    // public System.Text.EncoderFallback get_EncoderFallback()
    // Offset: 0x15A0BD8
    System::Text::EncoderFallback* get_EncoderFallback();
    // public System.Void set_EncoderFallback(System.Text.EncoderFallback value)
    // Offset: 0x15A0654
    void set_EncoderFallback(System::Text::EncoderFallback* value);
    // public System.Text.DecoderFallback get_DecoderFallback()
    // Offset: 0x15A0BE0
    System::Text::DecoderFallback* get_DecoderFallback();
    // public System.Void set_DecoderFallback(System.Text.DecoderFallback value)
    // Offset: 0x15A0744
    void set_DecoderFallback(System::Text::DecoderFallback* value);
    // public System.Boolean get_IsReadOnly()
    // Offset: 0x15A0C78
    bool get_IsReadOnly();
    // static public System.Text.Encoding get_ASCII()
    // Offset: 0x1596F28
    static System::Text::Encoding* get_ASCII();
    // static private System.Text.Encoding get_Latin1()
    // Offset: 0x159FD20
    static System::Text::Encoding* get_Latin1();
    // public System.Int32 GetByteCount(System.String s)
    // Offset: 0x15A0C88
    int GetByteCount(::Il2CppString* s);
    // public System.Int32 GetByteCount(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int GetByteCount(::Array<::Il2CppChar>* chars, int index, int count);
    // public System.Int32 GetByteCount(System.Char* chars, System.Int32 count)
    // Offset: 0x15A0D40
    int GetByteCount(::Il2CppChar* chars, int count);
    // System.Int32 GetByteCount(System.Char* chars, System.Int32 count, System.Text.EncoderNLS encoder)
    // Offset: 0x15A0EB0
    int GetByteCount(::Il2CppChar* chars, int count, System::Text::EncoderNLS* encoder);
    // public System.Byte[] GetBytes(System.Char[] chars, System.Int32 index, System.Int32 count)
    // Offset: 0x15A0EBC
    ::Array<uint8_t>* GetBytes(::Array<::Il2CppChar>* chars, int index, int count);
    // public System.Int32 GetBytes(System.Char[] chars, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0xFFFFFFFF
    int GetBytes(::Array<::Il2CppChar>* chars, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // public System.Byte[] GetBytes(System.String s)
    // Offset: 0x15A0F7C
    ::Array<uint8_t>* GetBytes(::Il2CppString* s);
    // public System.Int32 GetBytes(System.String s, System.Int32 charIndex, System.Int32 charCount, System.Byte[] bytes, System.Int32 byteIndex)
    // Offset: 0x15A1084
    int GetBytes(::Il2CppString* s, int charIndex, int charCount, ::Array<uint8_t>* bytes, int byteIndex);
    // System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount, System.Text.EncoderNLS encoder)
    // Offset: 0x15A1160
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount, System::Text::EncoderNLS* encoder);
    // public System.Int32 GetBytes(System.Char* chars, System.Int32 charCount, System.Byte* bytes, System.Int32 byteCount)
    // Offset: 0x15A1170
    int GetBytes(::Il2CppChar* chars, int charCount, uint8_t* bytes, int byteCount);
    // public System.Int32 GetCharCount(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0xFFFFFFFF
    int GetCharCount(::Array<uint8_t>* bytes, int index, int count);
    // public System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count)
    // Offset: 0x15A1390
    int GetCharCount(uint8_t* bytes, int count);
    // System.Int32 GetCharCount(System.Byte* bytes, System.Int32 count, System.Text.DecoderNLS decoder)
    // Offset: 0x15A1504
    int GetCharCount(uint8_t* bytes, int count, System::Text::DecoderNLS* decoder);
    // public System.Char[] GetChars(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x15A1514
    ::Array<::Il2CppChar>* GetChars(::Array<uint8_t>* bytes, int index, int count);
    // public System.Int32 GetChars(System.Byte[] bytes, System.Int32 byteIndex, System.Int32 byteCount, System.Char[] chars, System.Int32 charIndex)
    // Offset: 0xFFFFFFFF
    int GetChars(::Array<uint8_t>* bytes, int byteIndex, int byteCount, ::Array<::Il2CppChar>* chars, int charIndex);
    // public System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount)
    // Offset: 0x15A15D8
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount);
    // System.Int32 GetChars(System.Byte* bytes, System.Int32 byteCount, System.Char* chars, System.Int32 charCount, System.Text.DecoderNLS decoder)
    // Offset: 0x15A17F8
    int GetChars(uint8_t* bytes, int byteCount, ::Il2CppChar* chars, int charCount, System::Text::DecoderNLS* decoder);
    // public System.Int32 get_CodePage()
    // Offset: 0x15A1808
    int get_CodePage();
    // public System.Text.Decoder GetDecoder()
    // Offset: 0x15A1810
    System::Text::Decoder* GetDecoder();
    // static private System.Text.Encoding CreateDefaultEncoding()
    // Offset: 0x15A18C8
    static System::Text::Encoding* CreateDefaultEncoding();
    // System.Void setReadOnly(System.Boolean value)
    // Offset: 0x15A1AD4
    void setReadOnly(bool value);
    // static public System.Text.Encoding get_Default()
    // Offset: 0x159F958
    static System::Text::Encoding* get_Default();
    // public System.Text.Encoder GetEncoder()
    // Offset: 0x15A1AE0
    System::Text::Encoder* GetEncoder();
    // public System.Int32 GetMaxByteCount(System.Int32 charCount)
    // Offset: 0xFFFFFFFF
    int GetMaxByteCount(int charCount);
    // public System.Int32 GetMaxCharCount(System.Int32 byteCount)
    // Offset: 0xFFFFFFFF
    int GetMaxCharCount(int byteCount);
    // public System.String GetString(System.Byte[] bytes)
    // Offset: 0x15A1B98
    ::Il2CppString* GetString(::Array<uint8_t>* bytes);
    // public System.String GetString(System.Byte[] bytes, System.Int32 index, System.Int32 count)
    // Offset: 0x15A1C60
    ::Il2CppString* GetString(::Array<uint8_t>* bytes, int index, int count);
    // static public System.Text.Encoding get_Unicode()
    // Offset: 0x159F9E4
    static System::Text::Encoding* get_Unicode();
    // static public System.Text.Encoding get_BigEndianUnicode()
    // Offset: 0x159FA8C
    static System::Text::Encoding* get_BigEndianUnicode();
    // static public System.Text.Encoding get_UTF7()
    // Offset: 0x159FB34
    static System::Text::Encoding* get_UTF7();
    // static public System.Text.Encoding get_UTF8()
    // Offset: 0x159FC7C
    static System::Text::Encoding* get_UTF8();
    // static public System.Text.Encoding get_UTF32()
    // Offset: 0x159FBD4
    static System::Text::Encoding* get_UTF32();
    // System.Char[] GetBestFitUnicodeToBytesData()
    // Offset: 0x15A1DCC
    ::Array<::Il2CppChar>* GetBestFitUnicodeToBytesData();
    // System.Char[] GetBestFitBytesToUnicodeData()
    // Offset: 0x15A1E34
    ::Array<::Il2CppChar>* GetBestFitBytesToUnicodeData();
    // System.Void ThrowBytesOverflow()
    // Offset: 0x15A1E9C
    void ThrowBytesOverflow();
    // System.Void ThrowBytesOverflow(System.Text.EncoderNLS encoder, System.Boolean nothingEncoded)
    // Offset: 0x1598F28
    void ThrowBytesOverflow(System::Text::EncoderNLS* encoder, bool nothingEncoded);
    // System.Void ThrowCharsOverflow()
    // Offset: 0x15A1FC4
    void ThrowCharsOverflow();
    // System.Void ThrowCharsOverflow(System.Text.DecoderNLS decoder, System.Boolean nothingDecoded)
    // Offset: 0x1599414
    void ThrowCharsOverflow(System::Text::DecoderNLS* decoder, bool nothingDecoded);
    // protected System.Void .ctor()
    // Offset: 0x159E7DC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Encoding* New_ctor();
    // public System.Object Clone()
    // Offset: 0x15A0BE8
    // Implemented from: System.ICloneable
    // Base method: System.Object ICloneable::Clone()
    ::Il2CppObject* Clone();
    // Creating proxy method: System_ICloneable_Clone
    // Maps to method: Clone
    ::Il2CppObject* System_ICloneable_Clone();
    // public override System.Boolean Equals(System.Object value)
    // Offset: 0x15A1C8C
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object value)
    bool Equals(::Il2CppObject* value);
    // public override System.Int32 GetHashCode()
    // Offset: 0x15A1D70
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
  }; // System.Text.Encoding
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Text::Encoding*, "System.Text", "Encoding");
#pragma pack(pop)