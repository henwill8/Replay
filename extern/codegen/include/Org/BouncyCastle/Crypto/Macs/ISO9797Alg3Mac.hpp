// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IMac
#include "Org/BouncyCastle/Crypto/IMac.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Paddings
namespace Org::BouncyCastle::Crypto::Paddings {
  // Forward declaring type: IBlockCipherPadding
  class IBlockCipherPadding;
}
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: KeyParameter
  class KeyParameter;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Macs
namespace Org::BouncyCastle::Crypto::Macs {
  // Autogenerated type: Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac
  class ISO9797Alg3Mac : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IMac*/ {
    public:
    // private System.Byte[] mac
    // Offset: 0x10
    ::Array<uint8_t>* mac;
    // private System.Byte[] buf
    // Offset: 0x18
    ::Array<uint8_t>* buf;
    // private System.Int32 bufOff
    // Offset: 0x20
    int bufOff;
    // private Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Offset: 0x28
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // private Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding
    // Offset: 0x30
    Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding;
    // private System.Int32 macSize
    // Offset: 0x38
    int macSize;
    // private Org.BouncyCastle.Crypto.Parameters.KeyParameter lastKey2
    // Offset: 0x40
    Org::BouncyCastle::Crypto::Parameters::KeyParameter* lastKey2;
    // private Org.BouncyCastle.Crypto.Parameters.KeyParameter lastKey3
    // Offset: 0x48
    Org::BouncyCastle::Crypto::Parameters::KeyParameter* lastKey3;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IMac
    operator Org::BouncyCastle::Crypto::IMac() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IMac*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x149F5EC
    static ISO9797Alg3Mac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding)
    // Offset: 0x149F92C
    static ISO9797Alg3Mac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher, System.Int32 macSizeInBits, Org.BouncyCastle.Crypto.Paddings.IBlockCipherPadding padding)
    // Offset: 0x149F6BC
    static ISO9797Alg3Mac* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher, int macSizeInBits, Org::BouncyCastle::Crypto::Paddings::IBlockCipherPadding* padding);
    // public System.Void Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x149FA00
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Init(Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 GetMacSize()
    // Offset: 0x149FED4
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Int32 IMac::GetMacSize()
    int GetMacSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x149FEDC
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Update(System.Byte input)
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    // Offset: 0x14A0014
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 len)
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int len);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x14A02B8
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Int32 IMac::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x149FE04
    // Implemented from: Org.BouncyCastle.Crypto.IMac
    // Base method: System.Void IMac::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Macs.ISO9797Alg3Mac
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Macs::ISO9797Alg3Mac*, "Org.BouncyCastle.Crypto.Macs", "ISO9797Alg3Mac");
#pragma pack(pop)
