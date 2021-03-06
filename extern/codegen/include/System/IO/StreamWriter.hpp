// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.TextWriter
#include "System/IO/TextWriter.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Forward declaring type: Encoder
  class Encoder;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.StreamWriter
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CA9FA8
  class StreamWriter : public System::IO::TextWriter {
    public:
    // private System.IO.Stream stream
    // Size: 0x8
    // Offset: 0x28
    System::IO::Stream* stream;
    // Field size check
    static_assert(sizeof(System::IO::Stream*) == 0x8);
    // private System.Text.Encoding encoding
    // Size: 0x8
    // Offset: 0x30
    System::Text::Encoding* encoding;
    // Field size check
    static_assert(sizeof(System::Text::Encoding*) == 0x8);
    // private System.Text.Encoder encoder
    // Size: 0x8
    // Offset: 0x38
    System::Text::Encoder* encoder;
    // Field size check
    static_assert(sizeof(System::Text::Encoder*) == 0x8);
    // private System.Byte[] byteBuffer
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* byteBuffer;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Char[] charBuffer
    // Size: 0x8
    // Offset: 0x48
    ::Array<::Il2CppChar>* charBuffer;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppChar>*) == 0x8);
    // private System.Int32 charPos
    // Size: 0x4
    // Offset: 0x50
    int charPos;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 charLen
    // Size: 0x4
    // Offset: 0x54
    int charLen;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean autoFlush
    // Size: 0x1
    // Offset: 0x58
    bool autoFlush;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean haveWrittenPreamble
    // Size: 0x1
    // Offset: 0x59
    bool haveWrittenPreamble;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean closable
    // Size: 0x1
    // Offset: 0x5A
    bool closable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: closable and: asyncWriteTask
    char __padding9[0x5] = {};
    // private System.Threading.Tasks.Task _asyncWriteTask
    // Size: 0x8
    // Offset: 0x60
    System::Threading::Tasks::Task* asyncWriteTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task*) == 0x8);
    // Creating value type constructor for type: StreamWriter
    StreamWriter(System::IO::Stream* stream_ = {}, System::Text::Encoding* encoding_ = {}, System::Text::Encoder* encoder_ = {}, ::Array<uint8_t>* byteBuffer_ = {}, ::Array<::Il2CppChar>* charBuffer_ = {}, int charPos_ = {}, int charLen_ = {}, bool autoFlush_ = {}, bool haveWrittenPreamble_ = {}, bool closable_ = {}, System::Threading::Tasks::Task* asyncWriteTask_ = {}) noexcept : stream{stream_}, encoding{encoding_}, encoder{encoder_}, byteBuffer{byteBuffer_}, charBuffer{charBuffer_}, charPos{charPos_}, charLen{charLen_}, autoFlush{autoFlush_}, haveWrittenPreamble{haveWrittenPreamble_}, closable{closable_}, asyncWriteTask{asyncWriteTask_} {}
    // Get static field: static public readonly System.IO.StreamWriter Null
    static System::IO::StreamWriter* _get_Null();
    // Set static field: static public readonly System.IO.StreamWriter Null
    static void _set_Null(System::IO::StreamWriter* value);
    // Get static field: static private System.Text.Encoding _UTF8NoBOM
    static System::Text::Encoding* _get__UTF8NoBOM();
    // Set static field: static private System.Text.Encoding _UTF8NoBOM
    static void _set__UTF8NoBOM(System::Text::Encoding* value);
    // private System.Void CheckAsyncTaskInProgress()
    // Offset: 0x164B498
    void CheckAsyncTaskInProgress();
    // static System.Text.Encoding get_UTF8NoBOM()
    // Offset: 0x164B540
    static System::Text::Encoding* get_UTF8NoBOM();
    // public System.Void .ctor(System.IO.Stream stream)
    // Offset: 0x164B74C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(System::IO::Stream* stream) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(stream)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding)
    // Offset: 0x164B978
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(stream, encoding)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding, System.Int32 bufferSize)
    // Offset: 0x164B984
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding, int bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(stream, encoding, bufferSize)));
    }
    // public System.Void .ctor(System.IO.Stream stream, System.Text.Encoding encoding, System.Int32 bufferSize, System.Boolean leaveOpen)
    // Offset: 0x164B7D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(System::IO::Stream* stream, System::Text::Encoding* encoding, int bufferSize, bool leaveOpen) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(stream, encoding, bufferSize, leaveOpen)));
    }
    // public System.Void .ctor(System.String path)
    // Offset: 0x164BB08
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::Il2CppString* path) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path)));
    }
    // public System.Void .ctor(System.String path, System.Boolean append)
    // Offset: 0x164BB9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::Il2CppString* path, bool append) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path, append)));
    }
    // public System.Void .ctor(System.String path, System.Boolean append, System.Text.Encoding encoding)
    // Offset: 0x164BC28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::Il2CppString* path, bool append, System::Text::Encoding* encoding) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path, append, encoding)));
    }
    // public System.Void .ctor(System.String path, System.Boolean append, System.Text.Encoding encoding, System.Int32 bufferSize)
    // Offset: 0x164BB90
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::Il2CppString* path, bool append, System::Text::Encoding* encoding, int bufferSize) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path, append, encoding, bufferSize)));
    }
    // System.Void .ctor(System.String path, System.Boolean append, System.Text.Encoding encoding, System.Int32 bufferSize, System.Boolean checkHost)
    // Offset: 0x164BC38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor(::Il2CppString* path, bool append, System::Text::Encoding* encoding, int bufferSize, bool checkHost) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>(path, append, encoding, bufferSize, checkHost)));
    }
    // private System.Void Init(System.IO.Stream streamArg, System.Text.Encoding encodingArg, System.Int32 bufferSize, System.Boolean shouldLeaveOpen)
    // Offset: 0x164B98C
    void Init(System::IO::Stream* streamArg, System::Text::Encoding* encodingArg, int bufferSize, bool shouldLeaveOpen);
    // static private System.IO.Stream CreateFile(System.String path, System.Boolean append, System.Boolean checkHost)
    // Offset: 0x164BE20
    static System::IO::Stream* CreateFile(::Il2CppString* path, bool append, bool checkHost);
    // private System.Void Flush(System.Boolean flushStream, System.Boolean flushEncoder)
    // Offset: 0x164C11C
    void Flush(bool flushStream, bool flushEncoder);
    // public System.Void set_AutoFlush(System.Boolean value)
    // Offset: 0x164C328
    void set_AutoFlush(bool value);
    // System.Boolean get_LeaveOpen()
    // Offset: 0x164C10C
    bool get_LeaveOpen();
    // System.Void .ctor()
    // Offset: 0x164B638
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StreamWriter* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::StreamWriter::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StreamWriter*, creationType>()));
    }
    // public override System.Void Close()
    // Offset: 0x164BF0C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Close()
    void Close();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x164BF88
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void Flush()
    // Offset: 0x164C278
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Flush()
    void Flush();
    // public override System.Text.Encoding get_Encoding()
    // Offset: 0x164C37C
    // Implemented from: System.IO.TextWriter
    // Base method: System.Text.Encoding TextWriter::get_Encoding()
    System::Text::Encoding* get_Encoding();
    // public override System.Void Write(System.Char value)
    // Offset: 0x164C384
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char value)
    void Write(::Il2CppChar value);
    // public override System.Void Write(System.Char[] buffer)
    // Offset: 0x164C420
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer)
    void Write(::Array<::Il2CppChar>* buffer);
    // public override System.Void Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    // Offset: 0x164C4F8
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.Char[] buffer, System.Int32 index, System.Int32 count)
    void Write(::Array<::Il2CppChar>* buffer, int index, int count);
    // public override System.Void Write(System.String value)
    // Offset: 0x164C730
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::Write(System.String value)
    void Write(::Il2CppString* value);
    // static private System.Void .cctor()
    // Offset: 0x164C804
    // Implemented from: System.IO.TextWriter
    // Base method: System.Void TextWriter::.cctor()
    static void _cctor();
  }; // System.IO.StreamWriter
  #pragma pack(pop)
  static check_size<sizeof(StreamWriter), 96 + sizeof(System::Threading::Tasks::Task*)> __System_IO_StreamWriterSizeCheck;
  static_assert(sizeof(StreamWriter) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::StreamWriter*, "System.IO", "StreamWriter");
