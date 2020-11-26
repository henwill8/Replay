// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Text
namespace System::Text {
  // Forward declaring type: Encoding
  class Encoding;
  // Forward declaring type: Decoder
  class Decoder;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.AsyncStreamReader
  class AsyncStreamReader : public ::Il2CppObject {
    public:
    // private System.IO.Stream stream
    // Offset: 0x10
    System::IO::Stream* stream;
    // private System.Text.Encoding encoding
    // Offset: 0x18
    System::Text::Encoding* encoding;
    // private System.Text.Decoder decoder
    // Offset: 0x20
    System::Text::Decoder* decoder;
    // private System.Byte[] byteBuffer
    // Offset: 0x28
    ::Array<uint8_t>* byteBuffer;
    // private System.Char[] charBuffer
    // Offset: 0x30
    ::Array<::Il2CppChar>* charBuffer;
    // private System.Boolean cancelOperation
    // Offset: 0x38
    bool cancelOperation;
    // private System.Threading.ManualResetEvent eofEvent
    // Offset: 0x40
    System::Threading::ManualResetEvent* eofEvent;
    // private System.Object syncObject
    // Offset: 0x48
    ::Il2CppObject* syncObject;
    // public System.Void Close()
    // Offset: 0x14832BC
    void Close();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x14832CC
    void Dispose(bool disposing);
    // System.Void CancelOperation()
    // Offset: 0x1483414
    void CancelOperation();
  }; // System.Diagnostics.AsyncStreamReader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::AsyncStreamReader*, "System.Diagnostics", "AsyncStreamReader");
#pragma pack(pop)
