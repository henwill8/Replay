// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: RSA
  class RSA;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.RSACertificateExtensions
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class RSACertificateExtensions : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: RSACertificateExtensions
    RSACertificateExtensions() noexcept {}
    // static public System.Security.Cryptography.RSA GetRSAPublicKey(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate)
    // Offset: 0x2280928
    static System::Security::Cryptography::RSA* GetRSAPublicKey(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate);
  }; // System.Security.Cryptography.X509Certificates.RSACertificateExtensions
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::RSACertificateExtensions*, "System.Security.Cryptography.X509Certificates", "RSACertificateExtensions");
