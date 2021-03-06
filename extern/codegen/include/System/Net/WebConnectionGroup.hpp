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
  // Forward declaring type: ServicePoint
  class ServicePoint;
  // Forward declaring type: WebConnection
  class WebConnection;
  // Forward declaring type: HttpWebRequest
  class HttpWebRequest;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: LinkedList`1<T>
  template<typename T>
  class LinkedList_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: Queue
  class Queue;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: EventHandler
  class EventHandler;
  // Forward declaring type: TimeSpan
  struct TimeSpan;
  // Forward declaring type: DateTime
  struct DateTime;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebConnectionGroup
  // [] Offset: FFFFFFFF
  class WebConnectionGroup : public ::Il2CppObject {
    public:
    // Nested type: System::Net::WebConnectionGroup::ConnectionState
    class ConnectionState;
    // private System.Net.ServicePoint sPoint
    // Size: 0x8
    // Offset: 0x10
    System::Net::ServicePoint* sPoint;
    // Field size check
    static_assert(sizeof(System::Net::ServicePoint*) == 0x8);
    // private System.String name
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppString* name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Collections.Generic.LinkedList`1<System.Net.WebConnectionGroup/ConnectionState> connections
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::LinkedList_1<System::Net::WebConnectionGroup::ConnectionState*>* connections;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::LinkedList_1<System::Net::WebConnectionGroup::ConnectionState*>*) == 0x8);
    // private System.Collections.Queue queue
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Queue* queue;
    // Field size check
    static_assert(sizeof(System::Collections::Queue*) == 0x8);
    // private System.Boolean closing
    // Size: 0x1
    // Offset: 0x30
    bool closing;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: closing and: ConnectionClosed
    char __padding4[0x7] = {};
    // [CompilerGeneratedAttribute] Offset: 0xCB7C78
    // private System.EventHandler ConnectionClosed
    // Size: 0x8
    // Offset: 0x38
    System::EventHandler* ConnectionClosed;
    // Field size check
    static_assert(sizeof(System::EventHandler*) == 0x8);
    // Creating value type constructor for type: WebConnectionGroup
    WebConnectionGroup(System::Net::ServicePoint* sPoint_ = {}, ::Il2CppString* name_ = {}, System::Collections::Generic::LinkedList_1<System::Net::WebConnectionGroup::ConnectionState*>* connections_ = {}, System::Collections::Queue* queue_ = {}, bool closing_ = {}, System::EventHandler* ConnectionClosed_ = {}) noexcept : sPoint{sPoint_}, name{name_}, connections{connections_}, queue{queue_}, closing{closing_}, ConnectionClosed{ConnectionClosed_} {}
    // public System.Void .ctor(System.Net.ServicePoint sPoint, System.String name)
    // Offset: 0x143BFBC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebConnectionGroup* New_ctor(System::Net::ServicePoint* sPoint, ::Il2CppString* name) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebConnectionGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebConnectionGroup*, creationType>(sPoint, name)));
    }
    // public System.Void add_ConnectionClosed(System.EventHandler value)
    // Offset: 0x143C094
    void add_ConnectionClosed(System::EventHandler* value);
    // public System.Void remove_ConnectionClosed(System.EventHandler value)
    // Offset: 0x143C138
    void remove_ConnectionClosed(System::EventHandler* value);
    // private System.Void OnConnectionClosed()
    // Offset: 0x143C1DC
    void OnConnectionClosed();
    // public System.Void Close()
    // Offset: 0x143C1F8
    void Close();
    // public System.Net.WebConnection GetConnection(System.Net.HttpWebRequest request, out System.Boolean created)
    // Offset: 0x143C4A4
    System::Net::WebConnection* GetConnection(System::Net::HttpWebRequest* request, bool& created);
    // static private System.Void PrepareSharingNtlm(System.Net.WebConnection cnc, System.Net.HttpWebRequest request)
    // Offset: 0x143C694
    static void PrepareSharingNtlm(System::Net::WebConnection* cnc, System::Net::HttpWebRequest* request);
    // private System.Net.WebConnectionGroup/ConnectionState FindIdleConnection()
    // Offset: 0x143C9E0
    System::Net::WebConnectionGroup::ConnectionState* FindIdleConnection();
    // private System.Net.WebConnection CreateOrReuseConnection(System.Net.HttpWebRequest request, out System.Boolean created)
    // Offset: 0x143C564
    System::Net::WebConnection* CreateOrReuseConnection(System::Net::HttpWebRequest* request, bool& created);
    // public System.String get_Name()
    // Offset: 0x143CC08
    ::Il2CppString* get_Name();
    // System.Collections.Queue get_Queue()
    // Offset: 0x143CC10
    System::Collections::Queue* get_Queue();
    // System.Boolean TryRecycle(System.TimeSpan maxIdleTime, ref System.DateTime idleSince)
    // Offset: 0x143CC18
    bool TryRecycle(System::TimeSpan maxIdleTime, System::DateTime& idleSince);
  }; // System.Net.WebConnectionGroup
  #pragma pack(pop)
  static check_size<sizeof(WebConnectionGroup), 56 + sizeof(System::EventHandler*)> __System_Net_WebConnectionGroupSizeCheck;
  static_assert(sizeof(WebConnectionGroup) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebConnectionGroup*, "System.Net", "WebConnectionGroup");
