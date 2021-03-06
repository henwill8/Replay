// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include <stdint.h>
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDerivationParameters
  class IDerivationParameters;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.IDerivationFunction
  // [] Offset: FFFFFFFF
  class IDerivationFunction {
    public:
    // Creating value type constructor for type: IDerivationFunction
    IDerivationFunction() noexcept {}
    // public System.Void Init(Org.BouncyCastle.Crypto.IDerivationParameters parameters)
    // Offset: 0xFFFFFFFF
    void Init(Org::BouncyCastle::Crypto::IDerivationParameters* parameters);
    // public System.Int32 GenerateBytes(System.Byte[] output, System.Int32 outOff, System.Int32 length)
    // Offset: 0xFFFFFFFF
    int GenerateBytes(::Array<uint8_t>* output, int outOff, int length);
  }; // Org.BouncyCastle.Crypto.IDerivationFunction
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::IDerivationFunction*, "Org.BouncyCastle.Crypto", "IDerivationFunction");
