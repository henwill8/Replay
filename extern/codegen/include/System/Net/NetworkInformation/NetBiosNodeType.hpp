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
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.NetBiosNodeType
  struct NetBiosNodeType : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: NetBiosNodeType
    constexpr NetBiosNodeType(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Net.NetworkInformation.NetBiosNodeType Unknown
    static constexpr const int Unknown = 0;
    // Get static field: static public System.Net.NetworkInformation.NetBiosNodeType Unknown
    static System::Net::NetworkInformation::NetBiosNodeType _get_Unknown();
    // Set static field: static public System.Net.NetworkInformation.NetBiosNodeType Unknown
    static void _set_Unknown(System::Net::NetworkInformation::NetBiosNodeType value);
    // static field const value: static public System.Net.NetworkInformation.NetBiosNodeType Broadcast
    static constexpr const int Broadcast = 1;
    // Get static field: static public System.Net.NetworkInformation.NetBiosNodeType Broadcast
    static System::Net::NetworkInformation::NetBiosNodeType _get_Broadcast();
    // Set static field: static public System.Net.NetworkInformation.NetBiosNodeType Broadcast
    static void _set_Broadcast(System::Net::NetworkInformation::NetBiosNodeType value);
    // static field const value: static public System.Net.NetworkInformation.NetBiosNodeType Peer2Peer
    static constexpr const int Peer2Peer = 2;
    // Get static field: static public System.Net.NetworkInformation.NetBiosNodeType Peer2Peer
    static System::Net::NetworkInformation::NetBiosNodeType _get_Peer2Peer();
    // Set static field: static public System.Net.NetworkInformation.NetBiosNodeType Peer2Peer
    static void _set_Peer2Peer(System::Net::NetworkInformation::NetBiosNodeType value);
    // static field const value: static public System.Net.NetworkInformation.NetBiosNodeType Mixed
    static constexpr const int Mixed = 4;
    // Get static field: static public System.Net.NetworkInformation.NetBiosNodeType Mixed
    static System::Net::NetworkInformation::NetBiosNodeType _get_Mixed();
    // Set static field: static public System.Net.NetworkInformation.NetBiosNodeType Mixed
    static void _set_Mixed(System::Net::NetworkInformation::NetBiosNodeType value);
    // static field const value: static public System.Net.NetworkInformation.NetBiosNodeType Hybrid
    static constexpr const int Hybrid = 8;
    // Get static field: static public System.Net.NetworkInformation.NetBiosNodeType Hybrid
    static System::Net::NetworkInformation::NetBiosNodeType _get_Hybrid();
    // Set static field: static public System.Net.NetworkInformation.NetBiosNodeType Hybrid
    static void _set_Hybrid(System::Net::NetworkInformation::NetBiosNodeType value);
  }; // System.Net.NetworkInformation.NetBiosNodeType
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::NetBiosNodeType, "System.Net.NetworkInformation", "NetBiosNodeType");
#pragma pack(pop)
