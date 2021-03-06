// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: INativeCertificateHelper
  class INativeCertificateHelper;
  // Forward declaring type: X509CertificateImpl
  class X509CertificateImpl;
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509KeyStorageFlags
  struct X509KeyStorageFlags;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Exception
  class Exception;
}
// Forward declaring namespace: Mono::Security::X509
namespace Mono::Security::X509 {
  // Forward declaring type: X509Certificate
  class X509Certificate;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography.X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Security.Cryptography.X509Certificates.X509Helper
  // [] Offset: FFFFFFFF
  class X509Helper : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: X509Helper
    X509Helper() noexcept {}
    // Get static field: static private System.Security.Cryptography.X509Certificates.INativeCertificateHelper nativeHelper
    static System::Security::Cryptography::X509Certificates::INativeCertificateHelper* _get_nativeHelper();
    // Set static field: static private System.Security.Cryptography.X509Certificates.INativeCertificateHelper nativeHelper
    static void _set_nativeHelper(System::Security::Cryptography::X509Certificates::INativeCertificateHelper* value);
    // static System.Void InstallNativeHelper(System.Security.Cryptography.X509Certificates.INativeCertificateHelper helper)
    // Offset: 0x14CF784
    static void InstallNativeHelper(System::Security::Cryptography::X509Certificates::INativeCertificateHelper* helper);
    // static private System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(System.Byte[] rawData)
    // Offset: 0x14CF7F0
    static System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Array<uint8_t>* rawData);
    // static public System.Security.Cryptography.X509Certificates.X509CertificateImpl InitFromCertificate(System.Security.Cryptography.X509Certificates.X509Certificate cert)
    // Offset: 0x14CE244
    static System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate(System::Security::Cryptography::X509Certificates::X509Certificate* cert);
    // static public System.Security.Cryptography.X509Certificates.X509CertificateImpl InitFromCertificate(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x14CE0B0
    static System::Security::Cryptography::X509Certificates::X509CertificateImpl* InitFromCertificate(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // static public System.Boolean IsValid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x14CE410
    static bool IsValid(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // static System.Void ThrowIfContextInvalid(System.Security.Cryptography.X509Certificates.X509CertificateImpl impl)
    // Offset: 0x14CE38C
    static void ThrowIfContextInvalid(System::Security::Cryptography::X509Certificates::X509CertificateImpl* impl);
    // static System.Exception GetInvalidContextException()
    // Offset: 0x14CEEFC
    static System::Exception* GetInvalidContextException();
    // static Mono.Security.X509.X509Certificate ImportPkcs12(System.Byte[] rawData, System.String password)
    // Offset: 0x14CF9CC
    static Mono::Security::X509::X509Certificate* ImportPkcs12(::Array<uint8_t>* rawData, ::Il2CppString* password);
    // static private System.Byte[] PEM(System.String type, System.Byte[] data)
    // Offset: 0x14CFDA0
    static ::Array<uint8_t>* PEM(::Il2CppString* type, ::Array<uint8_t>* data);
    // static private System.Byte[] ConvertData(System.Byte[] data)
    // Offset: 0x14D00F4
    static ::Array<uint8_t>* ConvertData(::Array<uint8_t>* data);
    // static private System.Security.Cryptography.X509Certificates.X509CertificateImpl ImportCore(System.Byte[] rawData)
    // Offset: 0x14CF7F4
    static System::Security::Cryptography::X509Certificates::X509CertificateImpl* ImportCore(::Array<uint8_t>* rawData);
    // static public System.Security.Cryptography.X509Certificates.X509CertificateImpl Import(System.Byte[] rawData, System.String password, System.Security.Cryptography.X509Certificates.X509KeyStorageFlags keyStorageFlags)
    // Offset: 0x14CEB30
    static System::Security::Cryptography::X509Certificates::X509CertificateImpl* Import(::Array<uint8_t>* rawData, ::Il2CppString* password, System::Security::Cryptography::X509Certificates::X509KeyStorageFlags keyStorageFlags);
    // static public System.String ToHexString(System.Byte[] data)
    // Offset: 0x14CE5BC
    static ::Il2CppString* ToHexString(::Array<uint8_t>* data);
  }; // System.Security.Cryptography.X509Certificates.X509Helper
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Helper*, "System.Security.Cryptography.X509Certificates", "X509Helper");
