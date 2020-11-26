// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.X509Certificates.X509KeyUsageFlags
#include "System/Security/Cryptography/X509Certificates/X509KeyUsageFlags.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Chain
  class X509Chain;
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Autogenerated type: Mono.Net.Security.SystemCertificateValidator
  class SystemCertificateValidator : public ::Il2CppObject {
    public:
    // Get static field: static private System.Boolean is_macosx
    static bool _get_is_macosx();
    // Set static field: static private System.Boolean is_macosx
    static void _set_is_macosx(bool value);
    // Get static field: static private System.Security.Cryptography.X509Certificates.X509KeyUsageFlags s_flags
    static System::Security::Cryptography::X509Certificates::X509KeyUsageFlags _get_s_flags();
    // Set static field: static private System.Security.Cryptography.X509Certificates.X509KeyUsageFlags s_flags
    static void _set_s_flags(System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value);
    // static private System.Void .cctor()
    // Offset: 0x126C2AC
    static void _cctor();
    // static public System.Security.Cryptography.X509Certificates.X509Chain CreateX509Chain(System.Security.Cryptography.X509Certificates.X509CertificateCollection certs)
    // Offset: 0x126C348
    static System::Security::Cryptography::X509Certificates::X509Chain* CreateX509Chain(System::Security::Cryptography::X509Certificates::X509CertificateCollection* certs);
    // static System.Boolean NeedsChain(Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0x12672DC
    static bool NeedsChain(Mono::Security::Interface::MonoTlsSettings* settings);
  }; // Mono.Net.Security.SystemCertificateValidator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::SystemCertificateValidator*, "Mono.Net.Security", "SystemCertificateValidator");
#pragma pack(pop)
