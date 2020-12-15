// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Net.AuthenticationSchemes
#include "System/Net/AuthenticationSchemes.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsProvider
  class MonoTlsProvider;
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListenerPrefixCollection
  class HttpListenerPrefixCollection;
  // Forward declaring type: AuthenticationSchemeSelector
  class AuthenticationSchemeSelector;
  // Forward declaring type: ServiceNameStore
  class ServiceNameStore;
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
  // Forward declaring type: HttpConnection
  class HttpConnection;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Security::Authentication::ExtendedProtection
namespace System::Security::Authentication::ExtendedProtection {
  // Forward declaring type: ExtendedProtectionPolicy
  class ExtendedProtectionPolicy;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: SslStream
  class SslStream;
  // Forward declaring type: RemoteCertificateValidationCallback
  class RemoteCertificateValidationCallback;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Autogenerated type: System.Net.HttpListener
  class HttpListener : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // private Mono.Security.Interface.MonoTlsProvider tlsProvider
    // Offset: 0x10
    Mono::Security::Interface::MonoTlsProvider* tlsProvider;
    // private Mono.Security.Interface.MonoTlsSettings tlsSettings
    // Offset: 0x18
    Mono::Security::Interface::MonoTlsSettings* tlsSettings;
    // private System.Security.Cryptography.X509Certificates.X509Certificate certificate
    // Offset: 0x20
    System::Security::Cryptography::X509Certificates::X509Certificate* certificate;
    // private System.Net.AuthenticationSchemes auth_schemes
    // Offset: 0x28
    System::Net::AuthenticationSchemes auth_schemes;
    // private System.Net.HttpListenerPrefixCollection prefixes
    // Offset: 0x30
    System::Net::HttpListenerPrefixCollection* prefixes;
    // private System.Net.AuthenticationSchemeSelector auth_selector
    // Offset: 0x38
    System::Net::AuthenticationSchemeSelector* auth_selector;
    // private System.String realm
    // Offset: 0x40
    ::Il2CppString* realm;
    // private System.Boolean ignore_write_exceptions
    // Offset: 0x48
    bool ignore_write_exceptions;
    // private System.Boolean listening
    // Offset: 0x49
    bool listening;
    // private System.Boolean disposed
    // Offset: 0x4A
    bool disposed;
    // private readonly System.Object _internalLock
    // Offset: 0x50
    ::Il2CppObject* internalLock;
    // private System.Collections.Hashtable registry
    // Offset: 0x58
    System::Collections::Hashtable* registry;
    // private System.Collections.ArrayList ctx_queue
    // Offset: 0x60
    System::Collections::ArrayList* ctx_queue;
    // private System.Collections.ArrayList wait_queue
    // Offset: 0x68
    System::Collections::ArrayList* wait_queue;
    // private System.Collections.Hashtable connections
    // Offset: 0x70
    System::Collections::Hashtable* connections;
    // private System.Net.ServiceNameStore defaultServiceNames
    // Offset: 0x78
    System::Net::ServiceNameStore* defaultServiceNames;
    // private System.Security.Authentication.ExtendedProtection.ExtendedProtectionPolicy extendedProtectionPolicy
    // Offset: 0x80
    System::Security::Authentication::ExtendedProtection::ExtendedProtectionPolicy* extendedProtectionPolicy;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // System.Security.Cryptography.X509Certificates.X509Certificate LoadCertificateAndKey(System.Net.IPAddress addr, System.Int32 port)
    // Offset: 0x12AD878
    System::Security::Cryptography::X509Certificates::X509Certificate* LoadCertificateAndKey(System::Net::IPAddress* addr, int port);
    // System.Net.Security.SslStream CreateSslStream(System.IO.Stream innerStream, System.Boolean ownsStream, System.Net.Security.RemoteCertificateValidationCallback callback)
    // Offset: 0x12A9B7C
    System::Net::Security::SslStream* CreateSslStream(System::IO::Stream* innerStream, bool ownsStream, System::Net::Security::RemoteCertificateValidationCallback* callback);
    // public System.Net.AuthenticationSchemes get_AuthenticationSchemes()
    // Offset: 0x12ADE2C
    System::Net::AuthenticationSchemes get_AuthenticationSchemes();
    // public System.Net.AuthenticationSchemeSelector get_AuthenticationSchemeSelectorDelegate()
    // Offset: 0x12ADE34
    System::Net::AuthenticationSchemeSelector* get_AuthenticationSchemeSelectorDelegate();
    // public System.Boolean get_IgnoreWriteExceptions()
    // Offset: 0x12ADE3C
    bool get_IgnoreWriteExceptions();
    // public System.Boolean get_IsListening()
    // Offset: 0x12ADE44
    bool get_IsListening();
    // public System.Net.HttpListenerPrefixCollection get_Prefixes()
    // Offset: 0x12ADE4C
    System::Net::HttpListenerPrefixCollection* get_Prefixes();
    // public System.String get_Realm()
    // Offset: 0x12ADF18
    ::Il2CppString* get_Realm();
    // public System.Void Close()
    // Offset: 0x12ADF20
    void Close();
    // private System.Void Close(System.Boolean force)
    // Offset: 0x12ADF64
    void Close(bool force);
    // private System.Void Cleanup(System.Boolean close_existing)
    // Offset: 0x12ADFEC
    void Cleanup(bool close_existing);
    // public System.IAsyncResult BeginGetContext(System.AsyncCallback callback, System.Object state)
    // Offset: 0x12AEB78
    System::IAsyncResult* BeginGetContext(System::AsyncCallback* callback, ::Il2CppObject* state);
    // public System.Net.HttpListenerContext EndGetContext(System.IAsyncResult asyncResult)
    // Offset: 0x12AF5BC
    System::Net::HttpListenerContext* EndGetContext(System::IAsyncResult* asyncResult);
    // System.Net.AuthenticationSchemes SelectAuthenticationScheme(System.Net.HttpListenerContext context)
    // Offset: 0x12AFA68
    System::Net::AuthenticationSchemes SelectAuthenticationScheme(System::Net::HttpListenerContext* context);
    // public System.Net.HttpListenerContext GetContext()
    // Offset: 0x12AFBD0
    System::Net::HttpListenerContext* GetContext();
    // public System.Void Start()
    // Offset: 0x12AFD14
    void Start();
    // public System.Void Stop()
    // Offset: 0x12AFD98
    void Stop();
    // System.Void CheckDisposed()
    // Offset: 0x12ADE70
    void CheckDisposed();
    // private System.Net.HttpListenerContext GetContextFromQueue()
    // Offset: 0x12AEEB0
    System::Net::HttpListenerContext* GetContextFromQueue();
    // System.Void RegisterContext(System.Net.HttpListenerContext context)
    // Offset: 0x12AB7D8
    void RegisterContext(System::Net::HttpListenerContext* context);
    // System.Void UnregisterContext(System.Net.HttpListenerContext context)
    // Offset: 0x12AFE04
    void UnregisterContext(System::Net::HttpListenerContext* context);
    // System.Void AddConnection(System.Net.HttpConnection cnc)
    // Offset: 0x12AB7B0
    void AddConnection(System::Net::HttpConnection* cnc);
    // System.Void RemoveConnection(System.Net.HttpConnection cnc)
    // Offset: 0x12ABAE4
    void RemoveConnection(System::Net::HttpConnection* cnc);
    // public System.Void .ctor()
    // Offset: 0x12ADBDC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HttpListener* New_ctor();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x12AFDC4
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
  }; // System.Net.HttpListener
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListener*, "System.Net", "HttpListener");
#pragma pack(pop)