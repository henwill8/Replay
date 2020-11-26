// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: System.Net.NetworkInformation.Win32LengthFlagsUnion
#include "System/Net/NetworkInformation/Win32LengthFlagsUnion.hpp"
// Including type: System.IntPtr
#include "System/IntPtr.hpp"
// Including type: System.Net.NetworkInformation.Win32_SOCKET_ADDRESS
#include "System/Net/NetworkInformation/Win32_SOCKET_ADDRESS.hpp"
// Including type: System.Net.NetworkInformation.PrefixOrigin
#include "System/Net/NetworkInformation/PrefixOrigin.hpp"
// Including type: System.Net.NetworkInformation.SuffixOrigin
#include "System/Net/NetworkInformation/SuffixOrigin.hpp"
// Including type: System.Net.NetworkInformation.DuplicateAddressDetectionState
#include "System/Net/NetworkInformation/DuplicateAddressDetectionState.hpp"
// Completed includes
// Type namespace: System.Net.NetworkInformation
namespace System::Net::NetworkInformation {
  // Autogenerated type: System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
  struct Win32_IP_ADAPTER_UNICAST_ADDRESS : public System::ValueType {
    public:
    // public System.Net.NetworkInformation.Win32LengthFlagsUnion LengthFlags
    // Offset: 0x0
    System::Net::NetworkInformation::Win32LengthFlagsUnion LengthFlags;
    // public System.IntPtr Next
    // Offset: 0x8
    System::IntPtr Next;
    // public System.Net.NetworkInformation.Win32_SOCKET_ADDRESS Address
    // Offset: 0x10
    System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Address;
    // public System.Net.NetworkInformation.PrefixOrigin PrefixOrigin
    // Offset: 0x20
    System::Net::NetworkInformation::PrefixOrigin PrefixOrigin;
    // public System.Net.NetworkInformation.SuffixOrigin SuffixOrigin
    // Offset: 0x24
    System::Net::NetworkInformation::SuffixOrigin SuffixOrigin;
    // public System.Net.NetworkInformation.DuplicateAddressDetectionState DadState
    // Offset: 0x28
    System::Net::NetworkInformation::DuplicateAddressDetectionState DadState;
    // public System.UInt32 ValidLifetime
    // Offset: 0x2C
    uint ValidLifetime;
    // public System.UInt32 PreferredLifetime
    // Offset: 0x30
    uint PreferredLifetime;
    // public System.UInt32 LeaseLifetime
    // Offset: 0x34
    uint LeaseLifetime;
    // public System.Byte OnLinkPrefixLength
    // Offset: 0x38
    uint8_t OnLinkPrefixLength;
    // Creating value type constructor for type: Win32_IP_ADAPTER_UNICAST_ADDRESS
    constexpr Win32_IP_ADAPTER_UNICAST_ADDRESS(System::Net::NetworkInformation::Win32LengthFlagsUnion LengthFlags_ = {}, System::IntPtr Next_ = {}, System::Net::NetworkInformation::Win32_SOCKET_ADDRESS Address_ = {}, System::Net::NetworkInformation::PrefixOrigin PrefixOrigin_ = {}, System::Net::NetworkInformation::SuffixOrigin SuffixOrigin_ = {}, System::Net::NetworkInformation::DuplicateAddressDetectionState DadState_ = {}, uint ValidLifetime_ = {}, uint PreferredLifetime_ = {}, uint LeaseLifetime_ = {}, uint8_t OnLinkPrefixLength_ = {}) noexcept : LengthFlags{LengthFlags_}, Next{Next_}, Address{Address_}, PrefixOrigin{PrefixOrigin_}, SuffixOrigin{SuffixOrigin_}, DadState{DadState_}, ValidLifetime{ValidLifetime_}, PreferredLifetime{PreferredLifetime_}, LeaseLifetime{LeaseLifetime_}, OnLinkPrefixLength{OnLinkPrefixLength_} {}
  }; // System.Net.NetworkInformation.Win32_IP_ADAPTER_UNICAST_ADDRESS
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Net::NetworkInformation::Win32_IP_ADAPTER_UNICAST_ADDRESS, "System.Net.NetworkInformation", "Win32_IP_ADAPTER_UNICAST_ADDRESS");
#pragma pack(pop)
