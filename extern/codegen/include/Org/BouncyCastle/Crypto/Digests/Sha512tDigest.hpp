// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.LongDigest
#include "Org/BouncyCastle/Crypto/Digests/LongDigest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Size: 0xC8
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Sha512tDigest
  // [] Offset: FFFFFFFF
  class Sha512tDigest : public Org::BouncyCastle::Crypto::Digests::LongDigest {
    public:
    // private readonly System.Int32 digestLength
    // Size: 0x4
    // Offset: 0x84
    int digestLength;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.UInt64 H1t
    // Size: 0x8
    // Offset: 0x88
    uint64_t H1t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H2t
    // Size: 0x8
    // Offset: 0x90
    uint64_t H2t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H3t
    // Size: 0x8
    // Offset: 0x98
    uint64_t H3t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H4t
    // Size: 0x8
    // Offset: 0xA0
    uint64_t H4t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H5t
    // Size: 0x8
    // Offset: 0xA8
    uint64_t H5t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H6t
    // Size: 0x8
    // Offset: 0xB0
    uint64_t H6t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H7t
    // Size: 0x8
    // Offset: 0xB8
    uint64_t H7t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // private System.UInt64 H8t
    // Size: 0x8
    // Offset: 0xC0
    uint64_t H8t;
    // Field size check
    static_assert(sizeof(uint64_t) == 0x8);
    // Creating value type constructor for type: Sha512tDigest
    Sha512tDigest(int digestLength_ = {}, uint64_t H1t_ = {}, uint64_t H2t_ = {}, uint64_t H3t_ = {}, uint64_t H4t_ = {}, uint64_t H5t_ = {}, uint64_t H6t_ = {}, uint64_t H7t_ = {}, uint64_t H8t_ = {}) noexcept : digestLength{digestLength_}, H1t{H1t_}, H2t{H2t_}, H3t{H3t_}, H4t{H4t_}, H5t{H5t_}, H6t{H6t_}, H7t{H7t_}, H8t{H8t_} {}
    // public System.Void .ctor(System.Int32 bitLength)
    // Offset: 0x17E4B3C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha512tDigest* New_ctor(int bitLength) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Sha512tDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha512tDigest*, creationType>(bitLength)));
    }
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Sha512tDigest t)
    // Offset: 0x17E4E28
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha512tDigest* New_ctor(Org::BouncyCastle::Crypto::Digests::Sha512tDigest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Sha512tDigest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha512tDigest*, creationType>(t)));
    }
    // private System.Void tIvGenerate(System.Int32 bitLength)
    // Offset: 0x17E4C94
    void tIvGenerate(int bitLength);
    // static private System.Void UInt64_To_BE(System.UInt64 n, System.Byte[] bs, System.Int32 off, System.Int32 max)
    // Offset: 0x17E505C
    static void UInt64_To_BE(uint64_t n, ::Array<uint8_t>* bs, int off, int max);
    // static private System.Void UInt32_To_BE(System.UInt32 n, System.Byte[] bs, System.Int32 off, System.Int32 max)
    // Offset: 0x17E5108
    static void UInt32_To_BE(uint n, ::Array<uint8_t>* bs, int off, int max);
    // public override System.String get_AlgorithmName()
    // Offset: 0x17E4EC8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.String LongDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetDigestSize()
    // Offset: 0x17E4F4C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Int32 LongDigest::GetDigestSize()
    int GetDigestSize();
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x17E4F54
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Int32 LongDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x17E50C4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Void LongDigest::Reset()
    void Reset();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x17E51E0
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable LongDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x17E5240
    // Implemented from: Org.BouncyCastle.Crypto.Digests.LongDigest
    // Base method: System.Void LongDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.Sha512tDigest
  #pragma pack(pop)
  static check_size<sizeof(Sha512tDigest), 192 + sizeof(uint64_t)> __Org_BouncyCastle_Crypto_Digests_Sha512tDigestSizeCheck;
  static_assert(sizeof(Sha512tDigest) == 0xC8);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Sha512tDigest*, "Org.BouncyCastle.Crypto.Digests", "Sha512tDigest");
