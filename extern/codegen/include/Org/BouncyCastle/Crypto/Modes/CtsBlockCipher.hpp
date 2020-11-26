// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.BufferedBlockCipher
#include "Org/BouncyCastle/Crypto/BufferedBlockCipher.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.CtsBlockCipher
  class CtsBlockCipher : public Org::BouncyCastle::Crypto::BufferedBlockCipher {
    public:
    // private readonly System.Int32 blockSize
    // Offset: 0x28
    int blockSize;
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return blockSize;
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    // Offset: 0x14A6FE0
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Void BufferedBlockCipher::.ctor(Org.BouncyCastle.Crypto.IBlockCipher cipher)
    static CtsBlockCipher* New_ctor(Org::BouncyCastle::Crypto::IBlockCipher* cipher);
    // public override System.Int32 GetUpdateOutputSize(System.Int32 length)
    // Offset: 0x14A7198
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Int32 BufferedBlockCipher::GetUpdateOutputSize(System.Int32 length)
    int GetUpdateOutputSize(int length);
    // public override System.Int32 GetOutputSize(System.Int32 length)
    // Offset: 0x14A71D0
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Int32 BufferedBlockCipher::GetOutputSize(System.Int32 length)
    int GetOutputSize(int length);
    // public override System.Int32 ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x14A71DC
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Int32 BufferedBlockCipher::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    int ProcessBytes(::Array<uint8_t>* input, int inOff, int length, ::Array<uint8_t>* output, int outOff);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x14A751C
    // Implemented from: Org.BouncyCastle.Crypto.BufferedBlockCipher
    // Base method: System.Int32 BufferedBlockCipher::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
  }; // Org.BouncyCastle.Crypto.Modes.CtsBlockCipher
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::CtsBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "CtsBlockCipher");
#pragma pack(pop)
