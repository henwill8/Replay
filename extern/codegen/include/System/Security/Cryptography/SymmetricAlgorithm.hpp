// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IDisposable
#include "System/IDisposable.hpp"
// Including type: System.Security.Cryptography.CipherMode
#include "System/Security/Cryptography/CipherMode.hpp"
// Including type: System.Security.Cryptography.PaddingMode
#include "System/Security/Cryptography/PaddingMode.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Security::Cryptography
namespace System::Security::Cryptography {
  // Forward declaring type: KeySizes
  class KeySizes;
  // Forward declaring type: ICryptoTransform
  class ICryptoTransform;
}
// Completed forward declares
// Type namespace: System.Security.Cryptography
namespace System::Security::Cryptography {
  // Autogenerated type: System.Security.Cryptography.SymmetricAlgorithm
  class SymmetricAlgorithm : public ::Il2CppObject/*, public System::IDisposable*/ {
    public:
    // protected System.Int32 BlockSizeValue
    // Offset: 0x10
    int BlockSizeValue;
    // protected System.Int32 FeedbackSizeValue
    // Offset: 0x14
    int FeedbackSizeValue;
    // protected System.Byte[] IVValue
    // Offset: 0x18
    ::Array<uint8_t>* IVValue;
    // protected System.Byte[] KeyValue
    // Offset: 0x20
    ::Array<uint8_t>* KeyValue;
    // protected System.Security.Cryptography.KeySizes[] LegalBlockSizesValue
    // Offset: 0x28
    ::Array<System::Security::Cryptography::KeySizes*>* LegalBlockSizesValue;
    // protected System.Security.Cryptography.KeySizes[] LegalKeySizesValue
    // Offset: 0x30
    ::Array<System::Security::Cryptography::KeySizes*>* LegalKeySizesValue;
    // protected System.Int32 KeySizeValue
    // Offset: 0x38
    int KeySizeValue;
    // protected System.Security.Cryptography.CipherMode ModeValue
    // Offset: 0x3C
    System::Security::Cryptography::CipherMode ModeValue;
    // protected System.Security.Cryptography.PaddingMode PaddingValue
    // Offset: 0x40
    System::Security::Cryptography::PaddingMode PaddingValue;
    // Creating interface conversion operator: operator System::IDisposable
    operator System::IDisposable() noexcept {
      return *reinterpret_cast<System::IDisposable*>(this);
    }
    // public System.Void Clear()
    // Offset: 0x127C6C4
    void Clear();
    // protected System.Void Dispose(System.Boolean disposing)
    // Offset: 0x127C768
    void Dispose(bool disposing);
    // public System.Int32 get_BlockSize()
    // Offset: 0x127C7E4
    int get_BlockSize();
    // public System.Void set_BlockSize(System.Int32 value)
    // Offset: 0x127C7EC
    void set_BlockSize(int value);
    // public System.Int32 get_FeedbackSize()
    // Offset: 0x127C930
    int get_FeedbackSize();
    // public System.Byte[] get_IV()
    // Offset: 0x127C938
    ::Array<uint8_t>* get_IV();
    // public System.Void set_IV(System.Byte[] value)
    // Offset: 0x127C9D4
    void set_IV(::Array<uint8_t>* value);
    // public System.Byte[] get_Key()
    // Offset: 0x127CB18
    ::Array<uint8_t>* get_Key();
    // public System.Void set_Key(System.Byte[] value)
    // Offset: 0x127CBB4
    void set_Key(::Array<uint8_t>* value);
    // public System.Security.Cryptography.KeySizes[] get_LegalKeySizes()
    // Offset: 0x127CDB0
    ::Array<System::Security::Cryptography::KeySizes*>* get_LegalKeySizes();
    // public System.Int32 get_KeySize()
    // Offset: 0x127CE30
    int get_KeySize();
    // public System.Void set_KeySize(System.Int32 value)
    // Offset: 0x127CE38
    void set_KeySize(int value);
    // public System.Security.Cryptography.CipherMode get_Mode()
    // Offset: 0x127CEF4
    System::Security::Cryptography::CipherMode get_Mode();
    // public System.Void set_Mode(System.Security.Cryptography.CipherMode value)
    // Offset: 0x127CEFC
    void set_Mode(System::Security::Cryptography::CipherMode value);
    // public System.Security.Cryptography.PaddingMode get_Padding()
    // Offset: 0x127CFA8
    System::Security::Cryptography::PaddingMode get_Padding();
    // public System.Void set_Padding(System.Security.Cryptography.PaddingMode value)
    // Offset: 0x127CFB0
    void set_Padding(System::Security::Cryptography::PaddingMode value);
    // public System.Boolean ValidKeySize(System.Int32 bitLength)
    // Offset: 0x127CCFC
    bool ValidKeySize(int bitLength);
    // static public System.Security.Cryptography.SymmetricAlgorithm Create(System.String algName)
    // Offset: 0x127D05C
    static System::Security::Cryptography::SymmetricAlgorithm* Create(::Il2CppString* algName);
    // public System.Security.Cryptography.ICryptoTransform CreateEncryptor()
    // Offset: 0x127D0E4
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor();
    // public System.Security.Cryptography.ICryptoTransform CreateEncryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::ICryptoTransform* CreateEncryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV);
    // public System.Security.Cryptography.ICryptoTransform CreateDecryptor()
    // Offset: 0x127D138
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor();
    // public System.Security.Cryptography.ICryptoTransform CreateDecryptor(System.Byte[] rgbKey, System.Byte[] rgbIV)
    // Offset: 0xFFFFFFFF
    System::Security::Cryptography::ICryptoTransform* CreateDecryptor(::Array<uint8_t>* rgbKey, ::Array<uint8_t>* rgbIV);
    // public System.Void GenerateKey()
    // Offset: 0xFFFFFFFF
    void GenerateKey();
    // public System.Void GenerateIV()
    // Offset: 0xFFFFFFFF
    void GenerateIV();
    // protected System.Void .ctor()
    // Offset: 0x127C618
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static SymmetricAlgorithm* New_ctor();
    // public System.Void Dispose()
    // Offset: 0x127C648
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void Dispose();
    // Creating proxy method: System_IDisposable_Dispose
    // Maps to method: Dispose
    void System_IDisposable_Dispose();
  }; // System.Security.Cryptography.SymmetricAlgorithm
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::SymmetricAlgorithm*, "System.Security.Cryptography", "SymmetricAlgorithm");
#pragma pack(pop)
