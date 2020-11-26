// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Net.Sockets
namespace System::Net::Sockets {
  // Autogenerated type: System.Net.Sockets.SocketAsyncOperation
  struct SocketAsyncOperation : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: SocketAsyncOperation
    constexpr SocketAsyncOperation(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.Sockets.SocketAsyncOperation None
    static constexpr const int None = 0;
    // Get static field: static public System.Net.Sockets.SocketAsyncOperation None
    static System::Net::Sockets::SocketAsyncOperation _get_None();
    // Set static field: static public System.Net.Sockets.SocketAsyncOperation None
    static void _set_None(System::Net::Sockets::SocketAsyncOperation value);
    // static field const value: static public System.Net.Sockets.SocketAsyncOperation Accept
    static constexpr const int Accept = 1;
    // Get static field: static public System.Net.Sockets.SocketAsyncOperation Accept
    static System::Net::Sockets::SocketAsyncOperation _get_Accept();
    // Set static field: static public System.Net.Sockets.SocketAsyncOperation Accept
    static void _set_Accept(System::Net::Sockets::SocketAsyncOperation value);
    // static field const value: static public System.Net.Sockets.SocketAsyncOperation Connect
    static constexpr const int Connect = 2;
    // Get static field: static public System.Net.Sockets.SocketAsyncOperation Connect
    static System::Net::Sockets::SocketAsyncOperation _get_Connect();
    // Set static field: static public System.Net.Sockets.SocketAsyncOperation Connect
    static void _set_Connect(System::Net::Sockets::SocketAsyncOperation value);
    // static field const value: static public System.Net.Sockets.SocketAsyncOperation Disconnect
    static constexpr const int Disconnect = 3;
    // Get static field: static public System.Net.Sockets.SocketAsyncOperation Disconnect
    static System::Net::Sockets::SocketAsyncOperation _get_Disconnect();
    // Set static field: static public System.Net.Sockets.SocketAsyncOperation Disconnect
    static void _set_Disconnect(System::Net::Sockets::SocketAsyncOperation value);
    // static field const value: static public System.Net.Sockets.SocketAsyncOperation Receive
    static constexpr const int Receive = 4;
    // Get static field: static public System.Net.Sockets.SocketAsyncOperation Receive
    static System::Net::Sockets::SocketAsyncOperation _get_Receive();
    // Set static field: static public System.Net.Sockets.SocketAsyncOperation Receive
    static void _set_Receive(System::Net::Sockets::SocketAsyncOperation value);
    // static field const value: static public System.Net.Sockets.SocketAsyncOperation ReceiveFrom
    static constexpr const int ReceiveFrom = 5;
    // Get static field: static public System.Net.Sockets.SocketAsyncOperation ReceiveFrom
    static System::Net::Sockets::SocketAsyncOperation _get_ReceiveFrom();
    // Set static field: static public System.Net.Sockets.SocketAsyncOperation ReceiveFrom
    static void _set_ReceiveFrom(System::Net::Sockets::SocketAsyncOperation value);
    // static field const value: static public System.Net.Sockets.SocketAsyncOperation ReceiveMessageFrom
    static constexpr const int ReceiveMessageFrom = 6;
    // Get static field: static public System.Net.Sockets.SocketAsyncOperation ReceiveMessageFrom
    static System::Net::Sockets::SocketAsyncOperation _get_ReceiveMessageFrom();
    // Set static field: static public System.Net.Sockets.SocketAsyncOperation ReceiveMessageFrom
    static void _set_ReceiveMessageFrom(System::Net::Sockets::SocketAsyncOperation value);
    // static field const value: static public System.Net.Sockets.SocketAsyncOperation Send
    static constexpr const int Send = 7;
    // Get static field: static public System.Net.Sockets.SocketAsyncOperation Send
    static System::Net::Sockets::SocketAsyncOperation _get_Send();
    // Set static field: static public System.Net.Sockets.SocketAsyncOperation Send
    static void _set_Send(System::Net::Sockets::SocketAsyncOperation value);
    // static field const value: static public System.Net.Sockets.SocketAsyncOperation SendPackets
    static constexpr const int SendPackets = 8;
    // Get static field: static public System.Net.Sockets.SocketAsyncOperation SendPackets
    static System::Net::Sockets::SocketAsyncOperation _get_SendPackets();
    // Set static field: static public System.Net.Sockets.SocketAsyncOperation SendPackets
    static void _set_SendPackets(System::Net::Sockets::SocketAsyncOperation value);
    // static field const value: static public System.Net.Sockets.SocketAsyncOperation SendTo
    static constexpr const int SendTo = 9;
    // Get static field: static public System.Net.Sockets.SocketAsyncOperation SendTo
    static System::Net::Sockets::SocketAsyncOperation _get_SendTo();
    // Set static field: static public System.Net.Sockets.SocketAsyncOperation SendTo
    static void _set_SendTo(System::Net::Sockets::SocketAsyncOperation value);
  }; // System.Net.Sockets.SocketAsyncOperation
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::Sockets::SocketAsyncOperation, "System.Net.Sockets", "SocketAsyncOperation");
#pragma pack(pop)
