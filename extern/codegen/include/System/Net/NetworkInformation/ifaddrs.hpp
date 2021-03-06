// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Net.NetworkInformation.ifa_ifu
#include "System/Net/NetworkInformation/ifa_ifu.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // WARNING Size may be invalid!
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Net.NetworkInformation.ifaddrs
  // [] Offset: FFFFFFFF
  struct ifaddrs/*, public System::ValueType*/ {
    public:
    // public System.IntPtr ifa_next
    // Size: 0x8
    // Offset: 0x0
    System::IntPtr ifa_next;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.String ifa_name
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* ifa_name;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.UInt32 ifa_flags
    // Size: 0x4
    // Offset: 0x10
    uint ifa_flags;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // public System.IntPtr ifa_addr
    // Size: 0x8
    // Offset: 0x18
    System::IntPtr ifa_addr;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.IntPtr ifa_netmask
    // Size: 0x8
    // Offset: 0x20
    System::IntPtr ifa_netmask;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // public System.Net.NetworkInformation.ifa_ifu ifa_ifu
    // Size: 0xFFFFFFFF
    // Offset: 0x28
    System::Net::NetworkInformation::ifa_ifu ifa_ifu;
    // public System.IntPtr ifa_data
    // Size: 0x8
    // Offset: 0x30
    System::IntPtr ifa_data;
    // Field size check
    static_assert(sizeof(System::IntPtr) == 0x8);
    // Creating value type constructor for type: ifaddrs
    constexpr ifaddrs(System::IntPtr ifa_next_ = {}, ::Il2CppString* ifa_name_ = {}, uint ifa_flags_ = {}, System::IntPtr ifa_addr_ = {}, System::IntPtr ifa_netmask_ = {}, System::Net::NetworkInformation::ifa_ifu ifa_ifu_ = {}, System::IntPtr ifa_data_ = {}) noexcept : ifa_next{ifa_next_}, ifa_name{ifa_name_}, ifa_flags{ifa_flags_}, ifa_addr{ifa_addr_}, ifa_netmask{ifa_netmask_}, ifa_ifu{ifa_ifu_}, ifa_data{ifa_data_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // System.Net.NetworkInformation.ifaddrs
  // WARNING Not writing size check since size may be invalid!
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::ifaddrs, "System.Net.NetworkInformation", "ifaddrs");
