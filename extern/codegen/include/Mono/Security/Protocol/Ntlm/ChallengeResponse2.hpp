// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Protocol::Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Forward declaring type: Type2Message
  class Type2Message;
  // Forward declaring type: NtlmAuthLevel
  struct NtlmAuthLevel;
}
// Completed forward declares
// Type namespace: Mono.Security.Protocol.Ntlm
namespace Mono::Security::Protocol::Ntlm {
  // Autogenerated type: Mono.Security.Protocol.Ntlm.ChallengeResponse2
  class ChallengeResponse2 : public ::Il2CppObject {
    public:
    // Get static field: static private System.Byte[] magic
    static ::Array<uint8_t>* _get_magic();
    // Set static field: static private System.Byte[] magic
    static void _set_magic(::Array<uint8_t>* value);
    // Get static field: static private System.Byte[] nullEncMagic
    static ::Array<uint8_t>* _get_nullEncMagic();
    // Set static field: static private System.Byte[] nullEncMagic
    static void _set_nullEncMagic(::Array<uint8_t>* value);
    // static private System.Byte[] Compute_LM(System.String password, System.Byte[] challenge)
    // Offset: 0x17B9EF4
    static ::Array<uint8_t>* Compute_LM(::Il2CppString* password, ::Array<uint8_t>* challenge);
    // static private System.Byte[] Compute_NTLM_Password(System.String password)
    // Offset: 0x17BA6D0
    static ::Array<uint8_t>* Compute_NTLM_Password(::Il2CppString* password);
    // static private System.Byte[] Compute_NTLM(System.String password, System.Byte[] challenge)
    // Offset: 0x17BA7D8
    static ::Array<uint8_t>* Compute_NTLM(::Il2CppString* password, ::Array<uint8_t>* challenge);
    // static private System.Void Compute_NTLMv2_Session(System.String password, System.Byte[] challenge, out System.Byte[] lm, out System.Byte[] ntlm)
    // Offset: 0x17BA854
    static void Compute_NTLMv2_Session(::Il2CppString* password, ::Array<uint8_t>* challenge, ::Array<uint8_t>*& lm, ::Array<uint8_t>*& ntlm);
    // static private System.Byte[] Compute_NTLMv2(Mono.Security.Protocol.Ntlm.Type2Message type2, System.String username, System.String password, System.String domain)
    // Offset: 0x17BAA3C
    static ::Array<uint8_t>* Compute_NTLMv2(Mono::Security::Protocol::Ntlm::Type2Message* type2, ::Il2CppString* username, ::Il2CppString* password, ::Il2CppString* domain);
    // static public System.Void Compute(Mono.Security.Protocol.Ntlm.Type2Message type2, Mono.Security.Protocol.Ntlm.NtlmAuthLevel level, System.String username, System.String password, System.String domain, out System.Byte[] lm, out System.Byte[] ntlm)
    // Offset: 0x17BAF74
    static void Compute(Mono::Security::Protocol::Ntlm::Type2Message* type2, Mono::Security::Protocol::Ntlm::NtlmAuthLevel level, ::Il2CppString* username, ::Il2CppString* password, ::Il2CppString* domain, ::Array<uint8_t>*& lm, ::Array<uint8_t>*& ntlm);
    // static private System.Byte[] GetResponse(System.Byte[] challenge, System.Byte[] pwd)
    // Offset: 0x17BA3D0
    static ::Array<uint8_t>* GetResponse(::Array<uint8_t>* challenge, ::Array<uint8_t>* pwd);
    // static private System.Byte[] PrepareDESKey(System.Byte[] key56bits, System.Int32 position)
    // Offset: 0x17BB1A8
    static ::Array<uint8_t>* PrepareDESKey(::Array<uint8_t>* key56bits, int position);
    // static private System.Byte[] PasswordToKey(System.String password, System.Int32 position)
    // Offset: 0x17BA264
    static ::Array<uint8_t>* PasswordToKey(::Il2CppString* password, int position);
    // static private System.Void .cctor()
    // Offset: 0x17BB3B0
    static void _cctor();
  }; // Mono.Security.Protocol.Ntlm.ChallengeResponse2
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Protocol::Ntlm::ChallengeResponse2*, "Mono.Security.Protocol.Ntlm", "ChallengeResponse2");
#pragma pack(pop)