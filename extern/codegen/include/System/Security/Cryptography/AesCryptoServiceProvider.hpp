// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Security.Cryptography.Aes
#include "System/Security/Cryptography/Aes.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: ICryptoTransform
  class ICryptoTransform;
  // Skipping declaration: CipherMode because it is already included!
  // Skipping declaration: PaddingMode because it is already included!
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.AesCryptoServiceProvider
  class AesCryptoServiceProvider : public System::Security::Cryptography::Aes {
    public:
    // public System.Void .ctor()
    // Offset: 0x19B2E0C
    // Implemented from: System.Security.Cryptography.Aes
    // Base method: System.Void Aes::.ctor()
    // Base method: System.Void SymmetricAlgorithm::.ctor()
    // Base method: System.Void Object::.ctor()
    static AesCryptoServiceProvider* New_ctor();
    // public override System.Void GenerateIV()
    // Offset: 0x19B2E80
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateIV()
    void GenerateIV();
    // public override System.Void GenerateKey()
    // Offset: 0x19B2EB8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::GenerateKey()
    void GenerateKey();
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor(System.Byte[] key, System.Byte[] iv)
    // Offset: 0x19B2EF0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor(System.Byte[] key, System.Byte[] iv)
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Array<uint8_t>* key, ::Array<uint8_t>* iv);
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor(System.Byte[] key, System.Byte[] iv)
    // Offset: 0x19B36C8
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor(System.Byte[] key, System.Byte[] iv)
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Array<uint8_t>* key, ::Array<uint8_t>* iv);
    // public override System.Byte[] get_IV()
    // Offset: 0x19B37B4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_IV()
    ::Array<uint8_t>* get_IV();
    // public override System.Void set_IV(System.Byte[] value)
    // Offset: 0x19B37BC
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_IV(System.Byte[] value)
    void set_IV(::Array<uint8_t>* value);
    // public override System.Byte[] get_Key()
    // Offset: 0x19B37C4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Byte[] SymmetricAlgorithm::get_Key()
    ::Array<uint8_t>* get_Key();
    // public override System.Void set_Key(System.Byte[] value)
    // Offset: 0x19B37CC
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Key(System.Byte[] value)
    void set_Key(::Array<uint8_t>* value);
    // public override System.Int32 get_KeySize()
    // Offset: 0x19B37D4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Int32 SymmetricAlgorithm::get_KeySize()
    int get_KeySize();
    // public override System.Void set_KeySize(System.Int32 value)
    // Offset: 0x19B37DC
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_KeySize(System.Int32 value)
    void set_KeySize(int value);
    // public override System.Int32 get_FeedbackSize()
    // Offset: 0x19B37E4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Int32 SymmetricAlgorithm::get_FeedbackSize()
    int get_FeedbackSize();
    // public override System.Security.Cryptography.CipherMode get_Mode()
    // Offset: 0x19B37EC
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.CipherMode SymmetricAlgorithm::get_Mode()
    System::Security::Cryptography::CipherMode get_Mode();
    // public override System.Void set_Mode(System.Security.Cryptography.CipherMode value)
    // Offset: 0x19B37F4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Mode(System.Security.Cryptography.CipherMode value)
    void set_Mode(System::Security::Cryptography::CipherMode value);
    // public override System.Security.Cryptography.PaddingMode get_Padding()
    // Offset: 0x19B3890
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.PaddingMode SymmetricAlgorithm::get_Padding()
    System::Security::Cryptography::PaddingMode get_Padding();
    // public override System.Void set_Padding(System.Security.Cryptography.PaddingMode value)
    // Offset: 0x19B3898
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::set_Padding(System.Security.Cryptography.PaddingMode value)
    void set_Padding(System::Security::Cryptography::PaddingMode value);
    // public override System.Security.Cryptography.ICryptoTransform CreateDecryptor()
    // Offset: 0x19B38A0
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateDecryptor()
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor();
    // public override System.Security.Cryptography.ICryptoTransform CreateEncryptor()
    // Offset: 0x19B38F4
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Security.Cryptography.ICryptoTransform SymmetricAlgorithm::CreateEncryptor()
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor();
    // protected override System.Void Dispose(System.Boolean disposing)
    // Offset: 0x19B3948
    // Implemented from: System.Security.Cryptography.SymmetricAlgorithm
    // Base method: System.Void SymmetricAlgorithm::Dispose(System.Boolean disposing)
    void Dispose(bool disposing);
  }; // System.Security.Cryptography.AesCryptoServiceProvider
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::AesCryptoServiceProvider*, "System.Security.Cryptography", "AesCryptoServiceProvider");
#pragma pack(pop)