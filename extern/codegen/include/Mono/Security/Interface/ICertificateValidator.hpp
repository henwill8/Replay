// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
  // Forward declaring type: ValidationResult
  class ValidationResult;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
struct Il2CppString;
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.ICertificateValidator
  // [] Offset: FFFFFFFF
  class ICertificateValidator {
    public:
    // Creating value type constructor for type: ICertificateValidator
    ICertificateValidator() noexcept {}
    // public Mono.Security.Interface.MonoTlsSettings get_Settings()
    // Offset: 0xFFFFFFFF
    Mono::Security::Interface::MonoTlsSettings* get_Settings();
    // public System.Boolean SelectClientCertificate(System.String targetHost, System.Security.Cryptography.X509Certificates.X509CertificateCollection localCertificates, System.Security.Cryptography.X509Certificates.X509Certificate remoteCertificate, System.String[] acceptableIssuers, out System.Security.Cryptography.X509Certificates.X509Certificate clientCertificate)
    // Offset: 0xFFFFFFFF
    bool SelectClientCertificate(::Il2CppString* targetHost, System::Security::Cryptography::X509Certificates::X509CertificateCollection* localCertificates, System::Security::Cryptography::X509Certificates::X509Certificate* remoteCertificate, ::Array<::Il2CppString*>* acceptableIssuers, System::Security::Cryptography::X509Certificates::X509Certificate*& clientCertificate);
    // public Mono.Security.Interface.ValidationResult ValidateCertificate(System.String targetHost, System.Boolean serverMode, System.Security.Cryptography.X509Certificates.X509CertificateCollection certificates)
    // Offset: 0xFFFFFFFF
    Mono::Security::Interface::ValidationResult* ValidateCertificate(::Il2CppString* targetHost, bool serverMode, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates);
  }; // Mono.Security.Interface.ICertificateValidator
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::ICertificateValidator*, "Mono.Security.Interface", "ICertificateValidator");
