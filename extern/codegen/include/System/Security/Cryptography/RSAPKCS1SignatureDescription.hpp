// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.SignatureDescription
#include "System/Security/Cryptography/SignatureDescription.hpp"
// Completed includes
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.RSAPKCS1SignatureDescription
  class RSAPKCS1SignatureDescription : public System::Security::Cryptography::SignatureDescription {
    public:
    // private System.String _hashAlgorithm
    // Offset: 0x30
    ::Il2CppString* hashAlgorithm;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return hashAlgorithm;
    }
    // protected System.Void .ctor(System.String hashAlgorithm, System.String digestAlgorithm)
    // Offset: 0x169F77C
    static RSAPKCS1SignatureDescription* New_ctor(::Il2CppString* hashAlgorithm, ::Il2CppString* digestAlgorithm);
  }; // System.Security.Cryptography.RSAPKCS1SignatureDescription
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::RSAPKCS1SignatureDescription*, "System.Security.Cryptography", "RSAPKCS1SignatureDescription");
#pragma pack(pop)