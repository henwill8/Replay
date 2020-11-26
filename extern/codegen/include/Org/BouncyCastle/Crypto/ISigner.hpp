// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include <stdint.h>
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Begin il2cpp-utils forward declares
template<class T>
struct Array;
// Completed il2cpp-utils forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Autogenerated type: Org.BouncyCastle.Crypto.ISigner
  class ISigner {
    public:
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0xFFFFFFFF
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0xFFFFFFFF
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public System.Byte[] GenerateSignature()
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* GenerateSignature();
    // public System.Void Reset()
    // Offset: 0xFFFFFFFF
    void Reset();
  }; // Org.BouncyCastle.Crypto.ISigner
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::ISigner*, "Org.BouncyCastle.Crypto", "ISigner");
#pragma pack(pop)
