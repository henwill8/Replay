// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IO.FileAccess
#include "System/IO/FileAccess.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::InteropServices
namespace System::Runtime::InteropServices {
  // Forward declaring type: SafeBuffer
  class SafeBuffer;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
  // Forward declaring type: Task
  class Task;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.UnmanagedMemoryStream
  // [] Offset: FFFFFFFF
  class UnmanagedMemoryStream : public System::IO::Stream {
    public:
    // private System.Runtime.InteropServices.SafeBuffer _buffer
    // Size: 0x8
    // Offset: 0x28
    System::Runtime::InteropServices::SafeBuffer* buffer;
    // Field size check
    static_assert(sizeof(System::Runtime::InteropServices::SafeBuffer*) == 0x8);
    // private System.Byte* _mem
    // Size: 0x8
    // Offset: 0x30
    uint8_t* mem;
    // Field size check
    static_assert(sizeof(uint8_t*) == 0x8);
    // private System.Int64 _length
    // Size: 0x8
    // Offset: 0x38
    int64_t length;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _capacity
    // Size: 0x8
    // Offset: 0x40
    int64_t capacity;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _position
    // Size: 0x8
    // Offset: 0x48
    int64_t position;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.Int64 _offset
    // Size: 0x8
    // Offset: 0x50
    int64_t offset;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.IO.FileAccess _access
    // Size: 0x4
    // Offset: 0x58
    System::IO::FileAccess access;
    // Field size check
    static_assert(sizeof(System::IO::FileAccess) == 0x4);
    // System.Boolean _isOpen
    // Size: 0x1
    // Offset: 0x5C
    bool isOpen;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isOpen and: lastReadTask
    char __padding7[0x3] = {};
    // private System.Threading.Tasks.Task`1<System.Int32> _lastReadTask
    // Size: 0x8
    // Offset: 0x60
    System::Threading::Tasks::Task_1<int>* lastReadTask;
    // Field size check
    static_assert(sizeof(System::Threading::Tasks::Task_1<int>*) == 0x8);
    // Creating value type constructor for type: UnmanagedMemoryStream
    UnmanagedMemoryStream(System::Runtime::InteropServices::SafeBuffer* buffer_ = {}, uint8_t* mem_ = {}, int64_t length_ = {}, int64_t capacity_ = {}, int64_t position_ = {}, int64_t offset_ = {}, System::IO::FileAccess access_ = {}, bool isOpen_ = {}, System::Threading::Tasks::Task_1<int>* lastReadTask_ = {}) noexcept : buffer{buffer_}, mem{mem_}, length{length_}, capacity{capacity_}, position{position_}, offset{offset_}, access{access_}, isOpen{isOpen_}, lastReadTask{lastReadTask_} {}
    // public System.Void .ctor(System.Byte* pointer, System.Int64 length)
    // Offset: 0x1650188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnmanagedMemoryStream* New_ctor(uint8_t* pointer, int64_t length) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::UnmanagedMemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnmanagedMemoryStream*, creationType>(pointer, length)));
    }
    // System.Void .ctor(System.Byte* pointer, System.Int64 length, System.Int64 capacity, System.IO.FileAccess access, System.Boolean skipSecurityCheck)
    // Offset: 0x165021C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnmanagedMemoryStream* New_ctor(uint8_t* pointer, int64_t length, int64_t capacity, System::IO::FileAccess access, bool skipSecurityCheck) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::UnmanagedMemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnmanagedMemoryStream*, creationType>(pointer, length, capacity, access, skipSecurityCheck)));
    }
    // System.Void Initialize(System.Byte* pointer, System.Int64 length, System.Int64 capacity, System.IO.FileAccess access, System.Boolean skipSecurityCheck)
    // Offset: 0x1646278
    void Initialize(uint8_t* pointer, int64_t length, int64_t capacity, System::IO::FileAccess access, bool skipSecurityCheck);
    // public System.Byte* get_PositionPointer()
    // Offset: 0x16504C4
    uint8_t* get_PositionPointer();
    // protected System.Void .ctor()
    // Offset: 0x1646204
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnmanagedMemoryStream* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::UnmanagedMemoryStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnmanagedMemoryStream*, creationType>()));
    }
    // public override System.Boolean get_CanRead()
    // Offset: 0x16502C0
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x16502DC
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x16502E4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x1646588
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void Flush()
    // Offset: 0x1650300
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public override System.Int64 get_Length()
    // Offset: 0x165039C
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x16503BC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x16503F4
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Int32 Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x16505F8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(in System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>*& buffer, int offset, int count);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x16508F4
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<int>* ReadAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Int32 ReadByte()
    // Offset: 0x1650C28
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::ReadByte()
    int ReadByte();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin loc)
    // Offset: 0x1650D64
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin loc)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin loc);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x1650EC0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x16510A8
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x1651470
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Void WriteByte(System.Byte value)
    // Offset: 0x1651740
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::WriteByte(System.Byte value)
    void WriteByte(uint8_t value);
  }; // System.IO.UnmanagedMemoryStream
  #pragma pack(pop)
  static check_size<sizeof(UnmanagedMemoryStream), 96 + sizeof(System::Threading::Tasks::Task_1<int>*)> __System_IO_UnmanagedMemoryStreamSizeCheck;
  static_assert(sizeof(UnmanagedMemoryStream) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::UnmanagedMemoryStream*, "System.IO", "UnmanagedMemoryStream");
