// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.WebUtility
#include "System/Net/WebUtility.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.WebUtility/UrlDecoder
  class WebUtility::UrlDecoder : public ::Il2CppObject {
    public:
    // private System.Int32 _bufferSize
    // Offset: 0x10
    int bufferSize;
    // private System.Int32 _numChars
    // Offset: 0x14
    int numChars;
    // private System.Char[] _charBuffer
    // Offset: 0x18
    ::Array<::Il2CppChar>* charBuffer;
    // private System.Int32 _numBytes
    // Offset: 0x20
    int numBytes;
    // private System.Byte[] _byteBuffer
    // Offset: 0x28
    ::Array<uint8_t>* byteBuffer;
    // private System.Text.Encoding _encoding
    // Offset: 0x30
    System::Text::Encoding* encoding;
    // private System.Void FlushBytes()
    // Offset: 0x122A8CC
    void FlushBytes();
    // System.Void .ctor(System.Int32 bufferSize, System.Text.Encoding encoding)
    // Offset: 0x122A4E4
    static WebUtility::UrlDecoder* New_ctor(int bufferSize, System::Text::Encoding* encoding);
    // System.Void AddChar(System.Char ch)
    // Offset: 0x122A688
    void AddChar(::Il2CppChar ch);
    // System.Void AddByte(System.Byte b)
    // Offset: 0x122A5C4
    void AddByte(uint8_t b);
    // System.String GetString()
    // Offset: 0x122A6F4
    ::Il2CppString* GetString();
  }; // System.Net.WebUtility/UrlDecoder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebUtility::UrlDecoder*, "System.Net", "WebUtility/UrlDecoder");
#pragma pack(pop)