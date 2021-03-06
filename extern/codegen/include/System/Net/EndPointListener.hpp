// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: HttpListener
  class HttpListener;
  // Forward declaring type: IPEndPoint
  class IPEndPoint;
  // Forward declaring type: HttpConnection
  class HttpConnection;
  // Forward declaring type: IPAddress
  class IPAddress;
  // Forward declaring type: HttpListenerContext
  class HttpListenerContext;
  // Forward declaring type: ListenerPrefix
  class ListenerPrefix;
}
// Forward declaring namespace: System::Net::Sockets
namespace System::Net::Sockets {
  // Forward declaring type: Socket
  class Socket;
  // Forward declaring type: SocketAsyncEventArgs
  class SocketAsyncEventArgs;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Hashtable
  class Hashtable;
  // Forward declaring type: ArrayList
  class ArrayList;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Uri
  class Uri;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.EndPointListener
  // [] Offset: FFFFFFFF
  class EndPointListener : public ::Il2CppObject {
    public:
    // private System.Net.HttpListener listener
    // Size: 0x8
    // Offset: 0x10
    System::Net::HttpListener* listener;
    // Field size check
    static_assert(sizeof(System::Net::HttpListener*) == 0x8);
    // private System.Net.IPEndPoint endpoint
    // Size: 0x8
    // Offset: 0x18
    System::Net::IPEndPoint* endpoint;
    // Field size check
    static_assert(sizeof(System::Net::IPEndPoint*) == 0x8);
    // private System.Net.Sockets.Socket sock
    // Size: 0x8
    // Offset: 0x20
    System::Net::Sockets::Socket* sock;
    // Field size check
    static_assert(sizeof(System::Net::Sockets::Socket*) == 0x8);
    // private System.Collections.Hashtable prefixes
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Hashtable* prefixes;
    // Field size check
    static_assert(sizeof(System::Collections::Hashtable*) == 0x8);
    // private System.Collections.ArrayList unhandled
    // Size: 0x8
    // Offset: 0x30
    System::Collections::ArrayList* unhandled;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Collections.ArrayList all
    // Size: 0x8
    // Offset: 0x38
    System::Collections::ArrayList* all;
    // Field size check
    static_assert(sizeof(System::Collections::ArrayList*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509Certificate cert
    // Size: 0x8
    // Offset: 0x40
    System::Security::Cryptography::X509Certificates::X509Certificate* cert;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509Certificate*) == 0x8);
    // private System.Boolean secure
    // Size: 0x1
    // Offset: 0x48
    bool secure;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: secure and: unregistered
    char __padding7[0x7] = {};
    // private System.Collections.Generic.Dictionary`2<System.Net.HttpConnection,System.Net.HttpConnection> unregistered
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::Dictionary_2<System::Net::HttpConnection*, System::Net::HttpConnection*>* unregistered;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<System::Net::HttpConnection*, System::Net::HttpConnection*>*) == 0x8);
    // Creating value type constructor for type: EndPointListener
    EndPointListener(System::Net::HttpListener* listener_ = {}, System::Net::IPEndPoint* endpoint_ = {}, System::Net::Sockets::Socket* sock_ = {}, System::Collections::Hashtable* prefixes_ = {}, System::Collections::ArrayList* unhandled_ = {}, System::Collections::ArrayList* all_ = {}, System::Security::Cryptography::X509Certificates::X509Certificate* cert_ = {}, bool secure_ = {}, System::Collections::Generic::Dictionary_2<System::Net::HttpConnection*, System::Net::HttpConnection*>* unregistered_ = {}) noexcept : listener{listener_}, endpoint{endpoint_}, sock{sock_}, prefixes{prefixes_}, unhandled{unhandled_}, all{all_}, cert{cert_}, secure{secure_}, unregistered{unregistered_} {}
    // public System.Void .ctor(System.Net.HttpListener listener, System.Net.IPAddress addr, System.Int32 port, System.Boolean secure)
    // Offset: 0x1567000
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EndPointListener* New_ctor(System::Net::HttpListener* listener, System::Net::IPAddress* addr, int port, bool secure) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::EndPointListener::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EndPointListener*, creationType>(listener, addr, port, secure)));
    }
    // System.Net.HttpListener get_Listener()
    // Offset: 0x15673E8
    System::Net::HttpListener* get_Listener();
    // static private System.Void Accept(System.Net.Sockets.Socket socket, System.Net.Sockets.SocketAsyncEventArgs e, ref System.Net.Sockets.Socket accepted)
    // Offset: 0x156724C
    static void Accept(System::Net::Sockets::Socket* socket, System::Net::Sockets::SocketAsyncEventArgs* e, System::Net::Sockets::Socket*& accepted);
    // static private System.Void ProcessAccept(System.Net.Sockets.SocketAsyncEventArgs args)
    // Offset: 0x15673F0
    static void ProcessAccept(System::Net::Sockets::SocketAsyncEventArgs* args);
    // static private System.Void OnAccept(System.Object sender, System.Net.Sockets.SocketAsyncEventArgs e)
    // Offset: 0x1567634
    static void OnAccept(::Il2CppObject* sender, System::Net::Sockets::SocketAsyncEventArgs* e);
    // System.Void RemoveConnection(System.Net.HttpConnection conn)
    // Offset: 0x156763C
    void RemoveConnection(System::Net::HttpConnection* conn);
    // public System.Boolean BindContext(System.Net.HttpListenerContext context)
    // Offset: 0x1567718
    bool BindContext(System::Net::HttpListenerContext* context);
    // public System.Void UnbindContext(System.Net.HttpListenerContext context)
    // Offset: 0x1567D1C
    void UnbindContext(System::Net::HttpListenerContext* context);
    // private System.Net.HttpListener SearchListener(System.Uri uri, out System.Net.ListenerPrefix prefix)
    // Offset: 0x1567780
    System::Net::HttpListener* SearchListener(System::Uri* uri, System::Net::ListenerPrefix*& prefix);
    // private System.Net.HttpListener MatchFromList(System.String host, System.String path, System.Collections.ArrayList list, out System.Net.ListenerPrefix prefix)
    // Offset: 0x1567D48
    System::Net::HttpListener* MatchFromList(::Il2CppString* host, ::Il2CppString* path, System::Collections::ArrayList* list, System::Net::ListenerPrefix*& prefix);
    // private System.Void AddSpecial(System.Collections.ArrayList coll, System.Net.ListenerPrefix prefix)
    // Offset: 0x156801C
    void AddSpecial(System::Collections::ArrayList* coll, System::Net::ListenerPrefix* prefix);
    // private System.Boolean RemoveSpecial(System.Collections.ArrayList coll, System.Net.ListenerPrefix prefix)
    // Offset: 0x15682E0
    bool RemoveSpecial(System::Collections::ArrayList* coll, System::Net::ListenerPrefix* prefix);
    // private System.Void CheckIfRemove()
    // Offset: 0x15683E0
    void CheckIfRemove();
    // public System.Void Close()
    // Offset: 0x1568700
    void Close();
    // public System.Void AddPrefix(System.Net.ListenerPrefix prefix, System.Net.HttpListener listener)
    // Offset: 0x1568960
    void AddPrefix(System::Net::ListenerPrefix* prefix, System::Net::HttpListener* listener);
    // public System.Void RemovePrefix(System.Net.ListenerPrefix prefix, System.Net.HttpListener listener)
    // Offset: 0x1568CBC
    void RemovePrefix(System::Net::ListenerPrefix* prefix, System::Net::HttpListener* listener);
  }; // System.Net.EndPointListener
  #pragma pack(pop)
  static check_size<sizeof(EndPointListener), 80 + sizeof(System::Collections::Generic::Dictionary_2<System::Net::HttpConnection*, System::Net::HttpConnection*>*)> __System_Net_EndPointListenerSizeCheck;
  static_assert(sizeof(EndPointListener) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::EndPointListener*, "System.Net", "EndPointListener");
