// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Protocol.Ntlm.NtlmAuthLevel
  // [] Offset: FFFFFFFF
  struct NtlmAuthLevel/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: NtlmAuthLevel
    constexpr NtlmAuthLevel(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel LM_and_NTLM
    static constexpr const int LM_and_NTLM = 0;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel LM_and_NTLM
    static Mono::Security::Protocol::Ntlm::NtlmAuthLevel _get_LM_and_NTLM();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel LM_and_NTLM
    static void _set_LM_and_NTLM(Mono::Security::Protocol::Ntlm::NtlmAuthLevel value);
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel LM_and_NTLM_and_try_NTLMv2_Session
    static constexpr const int LM_and_NTLM_and_try_NTLMv2_Session = 1;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel LM_and_NTLM_and_try_NTLMv2_Session
    static Mono::Security::Protocol::Ntlm::NtlmAuthLevel _get_LM_and_NTLM_and_try_NTLMv2_Session();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel LM_and_NTLM_and_try_NTLMv2_Session
    static void _set_LM_and_NTLM_and_try_NTLMv2_Session(Mono::Security::Protocol::Ntlm::NtlmAuthLevel value);
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel NTLM_only
    static constexpr const int NTLM_only = 2;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel NTLM_only
    static Mono::Security::Protocol::Ntlm::NtlmAuthLevel _get_NTLM_only();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel NTLM_only
    static void _set_NTLM_only(Mono::Security::Protocol::Ntlm::NtlmAuthLevel value);
    // static field const value: static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel NTLMv2_only
    static constexpr const int NTLMv2_only = 3;
    // Get static field: static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel NTLMv2_only
    static Mono::Security::Protocol::Ntlm::NtlmAuthLevel _get_NTLMv2_only();
    // Set static field: static public Mono.Security.Protocol.Ntlm.NtlmAuthLevel NTLMv2_only
    static void _set_NTLMv2_only(Mono::Security::Protocol::Ntlm::NtlmAuthLevel value);
  }; // Mono.Security.Protocol.Ntlm.NtlmAuthLevel
  #pragma pack(pop)
  static check_size<sizeof(NtlmAuthLevel), 0 + sizeof(int)> __Mono_Security_Protocol_Ntlm_NtlmAuthLevelSizeCheck;
  static_assert(sizeof(NtlmAuthLevel) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::NtlmAuthLevel, "Mono.Security.Protocol.Ntlm", "NtlmAuthLevel");
