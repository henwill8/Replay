// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509ChainStatus
#include "System/Security/Cryptography/X509Certificates/X509ChainStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x2C
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509ChainElement
  // [] Offset: FFFFFFFF
  class X509ChainElement : public ::Il2CppObject {
    public:
    // private System.Security.Cryptography.X509Certificates.X509Certificate2 certificate
    // Size: 0x8
    // Offset: 0x10
    System::Security::Cryptography::X509Certificates::X509Certificate2* certificate;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509Certificate2*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509ChainStatus[] status
    // Size: 0x8
    // Offset: 0x18
    ::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* status;
    // Field size check
    static_assert(sizeof(::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>*) == 0x8);
    // private System.String info
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* info;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Security.Cryptography.X509Certificates.X509ChainStatusFlags compressed_status_flags
    // Size: 0x4
    // Offset: 0x28
    System::Security::Cryptography::X509Certificates::X509ChainStatusFlags compressed_status_flags;
    // Field size check
    static_assert(sizeof(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags) == 0x4);
    // Creating value type constructor for type: X509ChainElement
    X509ChainElement(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate_ = {}, ::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* status_ = {}, ::Il2CppString* info_ = {}, System::Security::Cryptography::X509Certificates::X509ChainStatusFlags compressed_status_flags_ = {}) noexcept : certificate{certificate_}, status{status_}, info{info_}, compressed_status_flags{compressed_status_flags_} {}
    // System.Void .ctor(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x177A24C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static X509ChainElement* New_ctor(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Security::Cryptography::X509Certificates::X509ChainElement::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<X509ChainElement*, creationType>(certificate)));
    }
    // public System.Security.Cryptography.X509Certificates.X509Certificate2 get_Certificate()
    // Offset: 0x177A2D0
    System::Security::Cryptography::X509Certificates::X509Certificate2* get_Certificate();
    // public System.Security.Cryptography.X509Certificates.X509ChainStatus[] get_ChainElementStatus()
    // Offset: 0x177A2D8
    ::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* get_ChainElementStatus();
    // System.Security.Cryptography.X509Certificates.X509ChainStatusFlags get_StatusFlags()
    // Offset: 0x177A2E0
    System::Security::Cryptography::X509Certificates::X509ChainStatusFlags get_StatusFlags();
    // System.Void set_StatusFlags(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags value)
    // Offset: 0x177A2E8
    void set_StatusFlags(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags value);
    // private System.Int32 Count(System.Security.Cryptography.X509Certificates.X509ChainStatusFlags flags)
    // Offset: 0x177A2F0
    int Count(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags);
    // private System.Void Set(System.Security.Cryptography.X509Certificates.X509ChainStatus[] status, ref System.Int32 position, System.Security.Cryptography.X509Certificates.X509ChainStatusFlags flags, System.Security.Cryptography.X509Certificates.X509ChainStatusFlags mask)
    // Offset: 0x177A314
    void Set(::Array<System::Security::Cryptography::X509Certificates::X509ChainStatus>* status, int& position, System::Security::Cryptography::X509Certificates::X509ChainStatusFlags flags, System::Security::Cryptography::X509Certificates::X509ChainStatusFlags mask);
    // System.Void UncompressFlags()
    // Offset: 0x177A55C
    void UncompressFlags();
  }; // System.Security.Cryptography.X509Certificates.X509ChainElement
  #pragma pack(pop)
  static check_size<sizeof(X509ChainElement), 40 + sizeof(System::Security::Cryptography::X509Certificates::X509ChainStatusFlags)> __System_Security_Cryptography_X509Certificates_X509ChainElementSizeCheck;
  static_assert(sizeof(X509ChainElement) == 0x2C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509ChainElement*, "System.Security.Cryptography.X509Certificates", "X509ChainElement");
