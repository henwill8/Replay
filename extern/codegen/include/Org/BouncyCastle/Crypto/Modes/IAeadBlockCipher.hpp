// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Including type: Org.BouncyCastle.Crypto.Modes.IAeadCipher
#include "Org/BouncyCastle/Crypto/Modes/IAeadCipher.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Modes
namespace Org::BouncyCastle::Crypto::Modes {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
  // [] Offset: FFFFFFFF
  class IAeadBlockCipher/*, public Org::BouncyCastle::Crypto::Modes::IAeadCipher*/ {
    public:
    // Creating value type constructor for type: IAeadBlockCipher
    IAeadBlockCipher() noexcept {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::Modes::IAeadCipher
    operator Org::BouncyCastle::Crypto::Modes::IAeadCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::Modes::IAeadCipher*>(this);
    }
    // public System.Int32 GetBlockSize()
    // Offset: 0xFFFFFFFF
    int GetBlockSize();
  }; // Org.BouncyCastle.Crypto.Modes.IAeadBlockCipher
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Modes::IAeadBlockCipher*, "Org.BouncyCastle.Crypto.Modes", "IAeadBlockCipher");
