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
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Autogenerated type: Mono.Security.Protocol.Ntlm.NtlmFlags
  struct NtlmFlags : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: NtlmFlags
    constexpr NtlmFlags(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateUnicode
    static constexpr const int NegotiateUnicode = 1;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateUnicode
    static Mono::Security::Protocol::Ntlm::NtlmFlags _get_NegotiateUnicode();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateUnicode
    static void _set_NegotiateUnicode(Mono::Security::Protocol::Ntlm::NtlmFlags value);
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateOem
    static constexpr const int NegotiateOem = 2;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateOem
    static Mono::Security::Protocol::Ntlm::NtlmFlags _get_NegotiateOem();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateOem
    static void _set_NegotiateOem(Mono::Security::Protocol::Ntlm::NtlmFlags value);
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmFlags RequestTarget
    static constexpr const int RequestTarget = 4;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags RequestTarget
    static Mono::Security::Protocol::Ntlm::NtlmFlags _get_RequestTarget();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags RequestTarget
    static void _set_RequestTarget(Mono::Security::Protocol::Ntlm::NtlmFlags value);
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateNtlm
    static constexpr const int NegotiateNtlm = 512;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateNtlm
    static Mono::Security::Protocol::Ntlm::NtlmFlags _get_NegotiateNtlm();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateNtlm
    static void _set_NegotiateNtlm(Mono::Security::Protocol::Ntlm::NtlmFlags value);
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateDomainSupplied
    static constexpr const int NegotiateDomainSupplied = 4096;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateDomainSupplied
    static Mono::Security::Protocol::Ntlm::NtlmFlags _get_NegotiateDomainSupplied();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateDomainSupplied
    static void _set_NegotiateDomainSupplied(Mono::Security::Protocol::Ntlm::NtlmFlags value);
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateWorkstationSupplied
    static constexpr const int NegotiateWorkstationSupplied = 8192;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateWorkstationSupplied
    static Mono::Security::Protocol::Ntlm::NtlmFlags _get_NegotiateWorkstationSupplied();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateWorkstationSupplied
    static void _set_NegotiateWorkstationSupplied(Mono::Security::Protocol::Ntlm::NtlmFlags value);
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateAlwaysSign
    static constexpr const int NegotiateAlwaysSign = 32768;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateAlwaysSign
    static Mono::Security::Protocol::Ntlm::NtlmFlags _get_NegotiateAlwaysSign();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateAlwaysSign
    static void _set_NegotiateAlwaysSign(Mono::Security::Protocol::Ntlm::NtlmFlags value);
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateNtlm2Key
    static constexpr const int NegotiateNtlm2Key = 524288;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateNtlm2Key
    static Mono::Security::Protocol::Ntlm::NtlmFlags _get_NegotiateNtlm2Key();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags NegotiateNtlm2Key
    static void _set_NegotiateNtlm2Key(Mono::Security::Protocol::Ntlm::NtlmFlags value);
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmFlags Negotiate128
    static constexpr const int Negotiate128 = 536870912;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags Negotiate128
    static Mono::Security::Protocol::Ntlm::NtlmFlags _get_Negotiate128();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags Negotiate128
    static void _set_Negotiate128(Mono::Security::Protocol::Ntlm::NtlmFlags value);
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmFlags Negotiate56
    static constexpr const int Negotiate56 = -2147483648;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags Negotiate56
    static Mono::Security::Protocol::Ntlm::NtlmFlags _get_Negotiate56();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmFlags Negotiate56
    static void _set_Negotiate56(Mono::Security::Protocol::Ntlm::NtlmFlags value);
  }; // Mono.Security.Protocol.Ntlm.NtlmFlags
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::NtlmFlags, "Mono.Security.Protocol.Ntlm", "NtlmFlags");
#pragma pack(pop)
