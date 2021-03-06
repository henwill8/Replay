// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.ISigner
#include "Org/BouncyCastle/Crypto/ISigner.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IDigest
  class IDigest;
  // Forward declaring type: IAsymmetricBlockCipher
  class IAsymmetricBlockCipher;
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x58
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer
  // [] Offset: FFFFFFFF
  class Iso9796d2Signer : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::ISigner*/ {
    public:
    // private Org.BouncyCastle.Crypto.IDigest digest
    // Size: 0x8
    // Offset: 0x10
    Org::BouncyCastle::Crypto::IDigest* digest;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IDigest*) == 0x8);
    // private Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher
    // Size: 0x8
    // Offset: 0x18
    Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher;
    // Field size check
    static_assert(sizeof(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher*) == 0x8);
    // private System.Int32 trailer
    // Size: 0x4
    // Offset: 0x20
    int trailer;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 keyBits
    // Size: 0x4
    // Offset: 0x24
    int keyBits;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Byte[] block
    // Size: 0x8
    // Offset: 0x28
    ::Array<uint8_t>* block;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] mBuf
    // Size: 0x8
    // Offset: 0x30
    ::Array<uint8_t>* mBuf;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Int32 messageLength
    // Size: 0x4
    // Offset: 0x38
    int messageLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean fullMessage
    // Size: 0x1
    // Offset: 0x3C
    bool fullMessage;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: fullMessage and: recoveredMessage
    char __padding7[0x3] = {};
    // private System.Byte[] recoveredMessage
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint8_t>* recoveredMessage;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] preSig
    // Size: 0x8
    // Offset: 0x48
    ::Array<uint8_t>* preSig;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // private System.Byte[] preBlock
    // Size: 0x8
    // Offset: 0x50
    ::Array<uint8_t>* preBlock;
    // Field size check
    static_assert(sizeof(::Array<uint8_t>*) == 0x8);
    // Creating value type constructor for type: Iso9796d2Signer
    Iso9796d2Signer(Org::BouncyCastle::Crypto::IDigest* digest_ = {}, Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher_ = {}, int trailer_ = {}, int keyBits_ = {}, ::Array<uint8_t>* block_ = {}, ::Array<uint8_t>* mBuf_ = {}, int messageLength_ = {}, bool fullMessage_ = {}, ::Array<uint8_t>* recoveredMessage_ = {}, ::Array<uint8_t>* preSig_ = {}, ::Array<uint8_t>* preBlock_ = {}) noexcept : digest{digest_}, cipher{cipher_}, trailer{trailer_}, keyBits{keyBits_}, block{block_}, mBuf{mBuf_}, messageLength{messageLength_}, fullMessage{fullMessage_}, recoveredMessage{recoveredMessage_}, preSig{preSig_}, preBlock{preBlock_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::ISigner
    operator Org::BouncyCastle::Crypto::ISigner() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::ISigner*>(this);
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.IAsymmetricBlockCipher cipher, Org.BouncyCastle.Crypto.IDigest digest, System.Boolean isImplicit)
    // Offset: 0x118ADFC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Iso9796d2Signer* New_ctor(Org::BouncyCastle::Crypto::IAsymmetricBlockCipher* cipher, Org::BouncyCastle::Crypto::IDigest* digest, bool isImplicit) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Iso9796d2Signer*, creationType>(cipher, digest, isImplicit)));
    }
    // private System.Void ClearBlock(System.Byte[] block)
    // Offset: 0x118B428
    void ClearBlock(::Array<uint8_t>* block);
    // public System.Void Update(System.Byte input)
    // Offset: 0x118B44C
    void Update(uint8_t input);
    // public System.Void Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x118B204
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::Init(System.Boolean forSigning, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forSigning, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x118B554
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public System.Void Reset()
    // Offset: 0x118B6B0
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Void ISigner::Reset()
    void Reset();
    // public System.Byte[] GenerateSignature()
    // Offset: 0x118B7D0
    // Implemented from: Org.BouncyCastle.Crypto.ISigner
    // Base method: System.Byte[] ISigner::GenerateSignature()
    ::Array<uint8_t>* GenerateSignature();
  }; // Org.BouncyCastle.Crypto.Signers.Iso9796d2Signer
  #pragma pack(pop)
  static check_size<sizeof(Iso9796d2Signer), 80 + sizeof(::Array<uint8_t>*)> __Org_BouncyCastle_Crypto_Signers_Iso9796d2SignerSizeCheck;
  static_assert(sizeof(Iso9796d2Signer) == 0x58);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Iso9796d2Signer*, "Org.BouncyCastle.Crypto.Signers", "Iso9796d2Signer");
