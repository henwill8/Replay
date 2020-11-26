// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ICertificateEncryptionProvider
  class ICertificateEncryptionProvider;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate2
  class X509Certificate2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: X509CertificateUtility
  class X509CertificateUtility : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::X509CertificateUtility::PasswordFinder
    class PasswordFinder;
    // Nested type: GlobalNamespace::X509CertificateUtility::RSACertificateEncryptionProvider
    class RSACertificateEncryptionProvider;
    // Nested type: GlobalNamespace::X509CertificateUtility::$$c
    class $$c;
    // static public ICertificateEncryptionProvider GetCertificateEncryptionProvider(System.String privateKeyPem, System.String password)
    // Offset: 0x1E58CB0
    static GlobalNamespace::ICertificateEncryptionProvider* GetCertificateEncryptionProvider(::Il2CppString* privateKeyPem, ::Il2CppString* password);
    // static private X509CertificateUtility/RSACertificateEncryptionProvider GetRSACertificateEncryptionProvider(System.String privateKeyPem, X509CertificateUtility/PasswordFinder passwordFinder)
    // Offset: 0x1E58D7C
    static GlobalNamespace::X509CertificateUtility::RSACertificateEncryptionProvider* GetRSACertificateEncryptionProvider(::Il2CppString* privateKeyPem, GlobalNamespace::X509CertificateUtility::PasswordFinder* passwordFinder);
    // static public System.Security.Cryptography.X509Certificates.X509Certificate2[] GetCertificateList(System.String certificatePem, System.String certificateChainPem)
    // Offset: 0x1E59048
    static ::Array<System::Security::Cryptography::X509Certificates::X509Certificate2*>* GetCertificateList(::Il2CppString* certificatePem, ::Il2CppString* certificateChainPem);
    // static public System.Void ValidateCertificateChain(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x1E595BC
    static void ValidateCertificateChain(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::Array<::Array<uint8_t>*>* certificateChain);
    // static private System.Void ValidateCertificateChainUnity(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x1E595C0
    static void ValidateCertificateChainUnity(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::Array<::Array<uint8_t>*>* certificateChain);
    // static private System.Void ValidateCertificateChainDotNet(System.Security.Cryptography.X509Certificates.X509Certificate2 certificate, System.Byte[][] certificateChain)
    // Offset: 0x1E59C94
    static void ValidateCertificateChainDotNet(System::Security::Cryptography::X509Certificates::X509Certificate2* certificate, ::Array<::Array<uint8_t>*>* certificateChain);
  }; // X509CertificateUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::X509CertificateUtility*, "", "X509CertificateUtility");
#pragma pack(pop)
