// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.Stream
#include "System/IO/Stream.hpp"
// Including type: System.IAsyncResult
#include "System/IAsyncResult.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::IO
namespace System::IO {
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ManualResetEvent
  class ManualResetEvent;
  // Forward declaring type: WaitHandle
  class WaitHandle;
}
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: ExceptionDispatchInfo
  class ExceptionDispatchInfo;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Completed forward declares
// Type namespace: System.IO
namespace System::IO {
  // Size: 0x38
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.Stream/SynchronousAsyncResult
  // [] Offset: FFFFFFFF
  class Stream::SynchronousAsyncResult : public ::Il2CppObject/*, public System::IAsyncResult*/ {
    public:
    // Nested type: System::IO::Stream::SynchronousAsyncResult::$$c
    class $$c;
    // private readonly System.Object _stateObject
    // Size: 0x8
    // Offset: 0x10
    ::Il2CppObject* stateObject;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private readonly System.Boolean _isWrite
    // Size: 0x1
    // Offset: 0x18
    bool isWrite;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: isWrite and: waitHandle
    char __padding1[0x7] = {};
    // private System.Threading.ManualResetEvent _waitHandle
    // Size: 0x8
    // Offset: 0x20
    System::Threading::ManualResetEvent* waitHandle;
    // Field size check
    static_assert(sizeof(System::Threading::ManualResetEvent*) == 0x8);
    // private System.Runtime.ExceptionServices.ExceptionDispatchInfo _exceptionInfo
    // Size: 0x8
    // Offset: 0x28
    System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionInfo;
    // Field size check
    static_assert(sizeof(System::Runtime::ExceptionServices::ExceptionDispatchInfo*) == 0x8);
    // private System.Boolean _endXxxCalled
    // Size: 0x1
    // Offset: 0x30
    bool endXxxCalled;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: endXxxCalled and: bytesRead
    char __padding4[0x3] = {};
    // private System.Int32 _bytesRead
    // Size: 0x4
    // Offset: 0x34
    int bytesRead;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SynchronousAsyncResult
    SynchronousAsyncResult(::Il2CppObject* stateObject_ = {}, bool isWrite_ = {}, System::Threading::ManualResetEvent* waitHandle_ = {}, System::Runtime::ExceptionServices::ExceptionDispatchInfo* exceptionInfo_ = {}, bool endXxxCalled_ = {}, int bytesRead_ = {}) noexcept : stateObject{stateObject_}, isWrite{isWrite_}, waitHandle{waitHandle_}, exceptionInfo{exceptionInfo_}, endXxxCalled{endXxxCalled_}, bytesRead{bytesRead_} {}
    // Creating interface conversion operator: operator System::IAsyncResult
    operator System::IAsyncResult() noexcept {
      return *reinterpret_cast<System::IAsyncResult*>(this);
    }
    // System.Void .ctor(System.Int32 bytesRead, System.Object asyncStateObject)
    // Offset: 0x1648494
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream::SynchronousAsyncResult* New_ctor(int bytesRead, ::Il2CppObject* asyncStateObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Stream::SynchronousAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream::SynchronousAsyncResult*, creationType>(bytesRead, asyncStateObject)));
    }
    // System.Void .ctor(System.Object asyncStateObject)
    // Offset: 0x16485D4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream::SynchronousAsyncResult* New_ctor(::Il2CppObject* asyncStateObject) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Stream::SynchronousAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream::SynchronousAsyncResult*, creationType>(asyncStateObject)));
    }
    // System.Void .ctor(System.Exception ex, System.Object asyncStateObject, System.Boolean isWrite)
    // Offset: 0x16484D8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Stream::SynchronousAsyncResult* New_ctor(System::Exception* ex, ::Il2CppObject* asyncStateObject, bool isWrite) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::Stream::SynchronousAsyncResult::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Stream::SynchronousAsyncResult*, creationType>(ex, asyncStateObject, isWrite)));
    }
    // System.Void ThrowIfError()
    // Offset: 0x16496A0
    void ThrowIfError();
    // static System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x1648544
    static int EndRead(System::IAsyncResult* asyncResult);
    // static System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x1648614
    static void EndWrite(System::IAsyncResult* asyncResult);
    // public System.Boolean get_IsCompleted()
    // Offset: 0x1649590
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_IsCompleted()
    bool get_IsCompleted();
    // Creating proxy method: System_IAsyncResult_get_IsCompleted
    // Maps to method: get_IsCompleted
    bool System_IAsyncResult_get_IsCompleted();
    // public System.Threading.WaitHandle get_AsyncWaitHandle()
    // Offset: 0x1649598
    // Implemented from: System.IAsyncResult
    // Base method: System.Threading.WaitHandle IAsyncResult::get_AsyncWaitHandle()
    System::Threading::WaitHandle* get_AsyncWaitHandle();
    // Creating proxy method: System_IAsyncResult_get_AsyncWaitHandle
    // Maps to method: get_AsyncWaitHandle
    System::Threading::WaitHandle* System_IAsyncResult_get_AsyncWaitHandle();
    // public System.Object get_AsyncState()
    // Offset: 0x1649690
    // Implemented from: System.IAsyncResult
    // Base method: System.Object IAsyncResult::get_AsyncState()
    ::Il2CppObject* get_AsyncState();
    // Creating proxy method: System_IAsyncResult_get_AsyncState
    // Maps to method: get_AsyncState
    ::Il2CppObject* System_IAsyncResult_get_AsyncState();
    // public System.Boolean get_CompletedSynchronously()
    // Offset: 0x1649698
    // Implemented from: System.IAsyncResult
    // Base method: System.Boolean IAsyncResult::get_CompletedSynchronously()
    bool get_CompletedSynchronously();
    // Creating proxy method: System_IAsyncResult_get_CompletedSynchronously
    // Maps to method: get_CompletedSynchronously
    bool System_IAsyncResult_get_CompletedSynchronously();
  }; // System.IO.Stream/SynchronousAsyncResult
  #pragma pack(pop)
  static check_size<sizeof(Stream::SynchronousAsyncResult), 52 + sizeof(int)> __System_IO_Stream_SynchronousAsyncResultSizeCheck;
  static_assert(sizeof(Stream::SynchronousAsyncResult) == 0x38);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::Stream::SynchronousAsyncResult*, "System.IO", "Stream/SynchronousAsyncResult");
