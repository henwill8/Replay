// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Net.Security.AuthenticatedStream
#include "System/Net/Security/AuthenticatedStream.hpp"
// Including type: Mono.Security.Interface.IMonoSslStream
#include "Mono/Security/Interface/IMonoSslStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileTlsContext
  class MobileTlsContext;
  // Forward declaring type: AsyncProtocolRequest
  class AsyncProtocolRequest;
  // Forward declaring type: BufferOffsetSize2
  class BufferOffsetSize2;
  // Forward declaring type: BufferOffsetSize
  class BufferOffsetSize;
  // Forward declaring type: AsyncOperationStatus
  struct AsyncOperationStatus;
}
// Forward declaring namespace: System::Runtime::ExceptionServices
namespace System::Runtime::ExceptionServices {
  // Forward declaring type: ExceptionDispatchInfo
  class ExceptionDispatchInfo;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: SslStream
  class SslStream;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Skipping declaration: Stream because it is already included!
  // Forward declaring type: SeekOrigin
  struct SeekOrigin;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
  // Forward declaring type: ValueTuple`2<T1, T2>
  template<typename T1, typename T2>
  struct ValueTuple_2;
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: SslProtocols
  struct SslProtocols;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.MobileAuthenticatedStream
  // [] Offset: FFFFFFFF
  class MobileAuthenticatedStream : public System::Net::Security::AuthenticatedStream/*, public Mono::Security::Interface::IMonoSslStream*/ {
    public:
    // Writing base type padding for base size: 0x31 to desired offset: 0x38
    char ___base_padding[0x7] = {};
    // Nested type: Mono::Net::Security::MobileAuthenticatedStream::OperationType
    struct OperationType;
    // Nested type: Mono::Net::Security::MobileAuthenticatedStream::$ProcessAuthentication$d__47
    struct $ProcessAuthentication$d__47;
    // Nested type: Mono::Net::Security::MobileAuthenticatedStream::$StartOperation$d__58
    struct $StartOperation$d__58;
    // Nested type: Mono::Net::Security::MobileAuthenticatedStream::$$c__DisplayClass66_0
    class $$c__DisplayClass66_0;
    // Nested type: Mono::Net::Security::MobileAuthenticatedStream::$InnerRead$d__66
    struct $InnerRead$d__66;
    // Nested type: Mono::Net::Security::MobileAuthenticatedStream::$InnerWrite$d__67
    struct $InnerWrite$d__67;
    // private Mono.Net.Security.MobileTlsContext xobileTlsContext
    // Size: 0x8
    // Offset: 0x38
    Mono::Net::Security::MobileTlsContext* xobileTlsContext;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::MobileTlsContext*) == 0x8);
    // private System.Runtime.ExceptionServices.ExceptionDispatchInfo lastException
    // Size: 0x8
    // Offset: 0x40
    System::Runtime::ExceptionServices::ExceptionDispatchInfo* lastException;
    // Field size check
    static_assert(sizeof(System::Runtime::ExceptionServices::ExceptionDispatchInfo*) == 0x8);
    // private Mono.Net.Security.AsyncProtocolRequest asyncHandshakeRequest
    // Size: 0x8
    // Offset: 0x48
    Mono::Net::Security::AsyncProtocolRequest* asyncHandshakeRequest;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::AsyncProtocolRequest*) == 0x8);
    // private Mono.Net.Security.AsyncProtocolRequest asyncReadRequest
    // Size: 0x8
    // Offset: 0x50
    Mono::Net::Security::AsyncProtocolRequest* asyncReadRequest;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::AsyncProtocolRequest*) == 0x8);
    // private Mono.Net.Security.AsyncProtocolRequest asyncWriteRequest
    // Size: 0x8
    // Offset: 0x58
    Mono::Net::Security::AsyncProtocolRequest* asyncWriteRequest;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::AsyncProtocolRequest*) == 0x8);
    // private Mono.Net.Security.BufferOffsetSize2 readBuffer
    // Size: 0x8
    // Offset: 0x60
    Mono::Net::Security::BufferOffsetSize2* readBuffer;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::BufferOffsetSize2*) == 0x8);
    // private Mono.Net.Security.BufferOffsetSize2 writeBuffer
    // Size: 0x8
    // Offset: 0x68
    Mono::Net::Security::BufferOffsetSize2* writeBuffer;
    // Field size check
    static_assert(sizeof(Mono::Net::Security::BufferOffsetSize2*) == 0x8);
    // private System.Object ioLock
    // Size: 0x8
    // Offset: 0x70
    ::Il2CppObject* ioLock;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // private System.Int32 closeRequested
    // Size: 0x4
    // Offset: 0x78
    int closeRequested;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean shutdown
    // Size: 0x1
    // Offset: 0x7C
    bool shutdown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: shutdown and: SslStream
    char __padding9[0x3] = {};
    // [CompilerGeneratedAttribute] Offset: 0xCB7AD0
    // private readonly System.Net.Security.SslStream <SslStream>k__BackingField
    // Size: 0x8
    // Offset: 0x80
    System::Net::Security::SslStream* SslStream;
    // Field size check
    static_assert(sizeof(System::Net::Security::SslStream*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCB7AE0
    // private readonly Mono.Security.Interface.MonoTlsSettings <Settings>k__BackingField
    // Size: 0x8
    // Offset: 0x88
    Mono::Security::Interface::MonoTlsSettings* Settings;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoTlsSettings*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xCB7AF0
    // private readonly Mono.Security.Interface.MonoTlsProvider <Provider>k__BackingField
    // Size: 0x8
    // Offset: 0x90
    Mono::Security::Interface::MonoTlsProvider* Provider;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::MonoTlsProvider*) == 0x8);
    // readonly System.Int32 ID
    // Size: 0x4
    // Offset: 0x98
    int ID;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MobileAuthenticatedStream
    MobileAuthenticatedStream(Mono::Net::Security::MobileTlsContext* xobileTlsContext_ = {}, System::Runtime::ExceptionServices::ExceptionDispatchInfo* lastException_ = {}, Mono::Net::Security::AsyncProtocolRequest* asyncHandshakeRequest_ = {}, Mono::Net::Security::AsyncProtocolRequest* asyncReadRequest_ = {}, Mono::Net::Security::AsyncProtocolRequest* asyncWriteRequest_ = {}, Mono::Net::Security::BufferOffsetSize2* readBuffer_ = {}, Mono::Net::Security::BufferOffsetSize2* writeBuffer_ = {}, ::Il2CppObject* ioLock_ = {}, int closeRequested_ = {}, bool shutdown_ = {}, System::Net::Security::SslStream* SslStream_ = {}, Mono::Security::Interface::MonoTlsSettings* Settings_ = {}, Mono::Security::Interface::MonoTlsProvider* Provider_ = {}, int ID_ = {}) noexcept : xobileTlsContext{xobileTlsContext_}, lastException{lastException_}, asyncHandshakeRequest{asyncHandshakeRequest_}, asyncReadRequest{asyncReadRequest_}, asyncWriteRequest{asyncWriteRequest_}, readBuffer{readBuffer_}, writeBuffer{writeBuffer_}, ioLock{ioLock_}, closeRequested{closeRequested_}, shutdown{shutdown_}, SslStream{SslStream_}, Settings{Settings_}, Provider{Provider_}, ID{ID_} {}
    // Creating interface conversion operator: operator Mono::Security::Interface::IMonoSslStream
    operator Mono::Security::Interface::IMonoSslStream() noexcept {
      return *reinterpret_cast<Mono::Security::Interface::IMonoSslStream*>(this);
    }
    // Get static field: static private System.Int32 uniqueNameInteger
    static int _get_uniqueNameInteger();
    // Set static field: static private System.Int32 uniqueNameInteger
    static void _set_uniqueNameInteger(int value);
    // Get static field: static private System.Int32 nextId
    static int _get_nextId();
    // Set static field: static private System.Int32 nextId
    static void _set_nextId(int value);
    // public System.Void .ctor(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, System.Net.Security.SslStream owner, Mono.Security.Interface.MonoTlsSettings settings, Mono.Security.Interface.MonoTlsProvider provider)
    // Offset: 0x14A4344
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MobileAuthenticatedStream* New_ctor(System::IO::Stream* innerStream, bool leaveInnerStreamOpen, System::Net::Security::SslStream* owner, Mono::Security::Interface::MonoTlsSettings* settings, Mono::Security::Interface::MonoTlsProvider* provider) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::MobileAuthenticatedStream::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MobileAuthenticatedStream*, creationType>(innerStream, leaveInnerStreamOpen, owner, settings, provider)));
    }
    // public Mono.Security.Interface.MonoTlsSettings get_Settings()
    // Offset: 0x14A44A4
    Mono::Security::Interface::MonoTlsSettings* get_Settings();
    // public Mono.Security.Interface.MonoTlsProvider get_Provider()
    // Offset: 0x14A44AC
    Mono::Security::Interface::MonoTlsProvider* get_Provider();
    // System.Void CheckThrow(System.Boolean authSuccessCheck, System.Boolean shutdownCheck)
    // Offset: 0x14A44B4
    void CheckThrow(bool authSuccessCheck, bool shutdownCheck);
    // static System.Exception GetSSPIException(System.Exception e)
    // Offset: 0x14A2560
    static System::Exception* GetSSPIException(System::Exception* e);
    // static System.Exception GetIOException(System.Exception e, System.String message)
    // Offset: 0x14A4594
    static System::Exception* GetIOException(System::Exception* e, ::Il2CppString* message);
    // System.Runtime.ExceptionServices.ExceptionDispatchInfo SetException(System.Exception e)
    // Offset: 0x14A2694
    System::Runtime::ExceptionServices::ExceptionDispatchInfo* SetException(System::Exception* e);
    // private System.Threading.Tasks.Task ProcessAuthentication(System.Boolean runSynchronously, System.Boolean serverMode, System.String targetHost, System.Security.Authentication.SslProtocols enabledProtocols, System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates, System.Boolean clientCertRequired)
    // Offset: 0x14A4710
    System::Threading::Tasks::Task* ProcessAuthentication(bool runSynchronously, bool serverMode, ::Il2CppString* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool clientCertRequired);
    // protected Mono.Net.Security.MobileTlsContext CreateContext(System.Boolean serverMode, System.String targetHost, System.Security.Authentication.SslProtocols enabledProtocols, System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates, System.Boolean askForClientCert)
    // Offset: 0xFFFFFFFF
    Mono::Net::Security::MobileTlsContext* CreateContext(bool serverMode, ::Il2CppString* targetHost, System::Security::Authentication::SslProtocols enabledProtocols, System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, bool askForClientCert);
    // private System.Threading.Tasks.Task`1<System.Int32> StartOperation(Mono.Net.Security.MobileAuthenticatedStream/OperationType type, Mono.Net.Security.AsyncProtocolRequest asyncRequest, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x14A4A2C
    System::Threading::Tasks::Task_1<int>* StartOperation(Mono::Net::Security::MobileAuthenticatedStream::OperationType type, Mono::Net::Security::AsyncProtocolRequest* asyncRequest, System::Threading::CancellationToken cancellationToken);
    // System.Int32 InternalRead(System.Byte[] buffer, System.Int32 offset, System.Int32 size, out System.Boolean outWantMore)
    // Offset: 0x14A4FA4
    int InternalRead(::Array<uint8_t>* buffer, int offset, int size, bool& outWantMore);
    // private System.ValueTuple`2<System.Int32,System.Boolean> InternalRead(Mono.Net.Security.AsyncProtocolRequest asyncRequest, Mono.Net.Security.BufferOffsetSize internalBuffer, System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x14A50F4
    System::ValueTuple_2<int, bool> InternalRead(Mono::Net::Security::AsyncProtocolRequest* asyncRequest, Mono::Net::Security::BufferOffsetSize* internalBuffer, ::Array<uint8_t>* buffer, int offset, int size);
    // System.Boolean InternalWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x14A5274
    bool InternalWrite(::Array<uint8_t>* buffer, int offset, int size);
    // private System.Boolean InternalWrite(Mono.Net.Security.AsyncProtocolRequest asyncRequest, Mono.Net.Security.BufferOffsetSize2 internalBuffer, System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x14A53B8
    bool InternalWrite(Mono::Net::Security::AsyncProtocolRequest* asyncRequest, Mono::Net::Security::BufferOffsetSize2* internalBuffer, ::Array<uint8_t>* buffer, int offset, int size);
    // System.Threading.Tasks.Task`1<System.Int32> InnerRead(System.Boolean sync, System.Int32 requestedSize, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x14A1B30
    System::Threading::Tasks::Task_1<int>* InnerRead(bool sync, int requestedSize, System::Threading::CancellationToken cancellationToken);
    // System.Threading.Tasks.Task InnerWrite(System.Boolean sync, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x14A2098
    System::Threading::Tasks::Task* InnerWrite(bool sync, System::Threading::CancellationToken cancellationToken);
    // Mono.Net.Security.AsyncOperationStatus ProcessHandshake(Mono.Net.Security.AsyncOperationStatus status)
    // Offset: 0x14A1130
    Mono::Net::Security::AsyncOperationStatus ProcessHandshake(Mono::Net::Security::AsyncOperationStatus status);
    // System.ValueTuple`2<System.Int32,System.Boolean> ProcessRead(Mono.Net.Security.BufferOffsetSize userBuffer)
    // Offset: 0x14A2A58
    System::ValueTuple_2<int, bool> ProcessRead(Mono::Net::Security::BufferOffsetSize* userBuffer);
    // System.ValueTuple`2<System.Int32,System.Boolean> ProcessWrite(Mono.Net.Security.BufferOffsetSize userBuffer)
    // Offset: 0x14A2BF0
    System::ValueTuple_2<int, bool> ProcessWrite(Mono::Net::Security::BufferOffsetSize* userBuffer);
    // private System.Void <InnerWrite>b__67_0()
    // Offset: 0x14A5B70
    void $InnerWrite$b__67_0();
    // public System.Void AuthenticateAsClient(System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates, System.Security.Authentication.SslProtocols enabledSslProtocols, System.Boolean checkCertificateRevocation)
    // Offset: 0x14A46CC
    // Implemented from: Mono.Security.Interface.IMonoSslStream
    // Base method: System.Void IMonoSslStream::AuthenticateAsClient(System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection clientCertificates, System.Security.Authentication.SslProtocols enabledSslProtocols, System.Boolean checkCertificateRevocation)
    void AuthenticateAsClient(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* clientCertificates, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);
    // public System.Void AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Boolean clientCertificateRequired, System.Security.Authentication.SslProtocols enabledSslProtocols, System.Boolean checkCertificateRevocation)
    // Offset: 0x14A48A4
    // Implemented from: Mono.Security.Interface.IMonoSslStream
    // Base method: System.Void IMonoSslStream::AuthenticateAsServer(System.Security.Cryptography.X509Certificates.X509Certificate serverCertificate, System.Boolean clientCertificateRequired, System.Security.Authentication.SslProtocols enabledSslProtocols, System.Boolean checkCertificateRevocation)
    void AuthenticateAsServer(System::Security::Cryptography::X509Certificates::X509Certificate* serverCertificate, bool clientCertificateRequired, System::Security::Authentication::SslProtocols enabledSslProtocols, bool checkCertificateRevocation);
    // public System.Net.Security.AuthenticatedStream get_AuthenticatedStream()
    // Offset: 0x14A4948
    // Implemented from: Mono.Security.Interface.IMonoSslStream
    // Base method: System.Net.Security.AuthenticatedStream IMonoSslStream::get_AuthenticatedStream()
    System::Net::Security::AuthenticatedStream* get_AuthenticatedStream();
    // public override System.IAsyncResult BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x14A494C
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginRead(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    System::IAsyncResult* BeginRead(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.Int32 EndRead(System.IAsyncResult asyncResult)
    // Offset: 0x14A4B88
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::EndRead(System.IAsyncResult asyncResult)
    int EndRead(System::IAsyncResult* asyncResult);
    // public override System.IAsyncResult BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    // Offset: 0x14A4BD8
    // Implemented from: System.IO.Stream
    // Base method: System.IAsyncResult Stream::BeginWrite(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.AsyncCallback asyncCallback, System.Object asyncState)
    System::IAsyncResult* BeginWrite(::Array<uint8_t>* buffer, int offset, int count, System::AsyncCallback* asyncCallback, ::Il2CppObject* asyncState);
    // public override System.Void EndWrite(System.IAsyncResult asyncResult)
    // Offset: 0x14A4CB8
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::EndWrite(System.IAsyncResult asyncResult)
    void EndWrite(System::IAsyncResult* asyncResult);
    // public override System.Int32 Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x14A4CC4
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::Read(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    int Read(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Void Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    // Offset: 0x14A4D9C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Write(System.Byte[] buffer, System.Int32 offset, System.Int32 count)
    void Write(::Array<uint8_t>* buffer, int offset, int count);
    // public override System.Threading.Tasks.Task`1<System.Int32> ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x14A4E6C
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task`1<System.Int32> Stream::ReadAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task_1<int>* ReadAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Threading.Tasks.Task WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x14A4F08
    // Implemented from: System.IO.Stream
    // Base method: System.Threading.Tasks.Task Stream::WriteAsync(System.Byte[] buffer, System.Int32 offset, System.Int32 count, System.Threading.CancellationToken cancellationToken)
    System::Threading::Tasks::Task* WriteAsync(::Array<uint8_t>* buffer, int offset, int count, System::Threading::CancellationToken cancellationToken);
    // public override System.Boolean get_IsAuthenticated()
    // Offset: 0x14A54E4
    // Implemented from: System.Net.Security.AuthenticatedStream
    // Base method: System.Boolean AuthenticatedStream::get_IsAuthenticated()
    bool get_IsAuthenticated();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x14A55B8
    // Implemented from: System.Net.Security.AuthenticatedStream
    // Base method: System.Void AuthenticatedStream::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
    // public override System.Void Flush()
    // Offset: 0x14A57C0
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::Flush()
    void Flush();
    // public System.Security.Cryptography.X509Certificates.X509Certificate get_InternalLocalCertificate()
    // Offset: 0x14A57E4
    // Implemented from: Mono.Security.Interface.IMonoSslStream
    // Base method: System.Security.Cryptography.X509Certificates.X509Certificate IMonoSslStream::get_InternalLocalCertificate()
    System::Security::Cryptography::X509Certificates::X509Certificate* get_InternalLocalCertificate();
    // public override System.Int64 Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    // Offset: 0x14A58EC
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::Seek(System.Int64 offset, System.IO.SeekOrigin origin)
    int64_t Seek(int64_t offset, System::IO::SeekOrigin origin);
    // public override System.Void SetLength(System.Int64 value)
    // Offset: 0x14A594C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::SetLength(System.Int64 value)
    void SetLength(int64_t value);
    // public override System.Boolean get_CanRead()
    // Offset: 0x14A5970
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanRead()
    bool get_CanRead();
    // public override System.Boolean get_CanWrite()
    // Offset: 0x14A59C4
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanWrite()
    bool get_CanWrite();
    // public override System.Boolean get_CanSeek()
    // Offset: 0x14A5A2C
    // Implemented from: System.IO.Stream
    // Base method: System.Boolean Stream::get_CanSeek()
    bool get_CanSeek();
    // public override System.Int64 get_Length()
    // Offset: 0x14A5A34
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Length()
    int64_t get_Length();
    // public override System.Int64 get_Position()
    // Offset: 0x14A5A54
    // Implemented from: System.IO.Stream
    // Base method: System.Int64 Stream::get_Position()
    int64_t get_Position();
    // public override System.Void set_Position(System.Int64 value)
    // Offset: 0x14A5A74
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::set_Position(System.Int64 value)
    void set_Position(int64_t value);
    // public override System.Int32 get_ReadTimeout()
    // Offset: 0x14A5AD4
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_ReadTimeout()
    int get_ReadTimeout();
    // public override System.Int32 get_WriteTimeout()
    // Offset: 0x14A5AF8
    // Implemented from: System.IO.Stream
    // Base method: System.Int32 Stream::get_WriteTimeout()
    int get_WriteTimeout();
    // static private System.Void .cctor()
    // Offset: 0x14A5B1C
    // Implemented from: System.IO.Stream
    // Base method: System.Void Stream::.cctor()
    static void _cctor();
  }; // Mono.Net.Security.MobileAuthenticatedStream
  #pragma pack(pop)
  static check_size<sizeof(MobileAuthenticatedStream), 152 + sizeof(int)> __Mono_Net_Security_MobileAuthenticatedStreamSizeCheck;
  static_assert(sizeof(MobileAuthenticatedStream) == 0x9C);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::MobileAuthenticatedStream*, "Mono.Net.Security", "MobileAuthenticatedStream");
