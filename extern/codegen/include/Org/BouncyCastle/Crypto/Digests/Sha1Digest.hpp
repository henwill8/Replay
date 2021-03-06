// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.GeneralDigest
#include "Org/BouncyCastle/Crypto/Digests/GeneralDigest.hpp"
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
  // Size: 0x4C
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Sha1Digest
  // [] Offset: FFFFFFFF
  class Sha1Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
    public:
    // private System.UInt32 H1
    // Size: 0x4
    // Offset: 0x28
    uint H1;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H2
    // Size: 0x4
    // Offset: 0x2C
    uint H2;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H3
    // Size: 0x4
    // Offset: 0x30
    uint H3;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H4
    // Size: 0x4
    // Offset: 0x34
    uint H4;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // private System.UInt32 H5
    // Size: 0x4
    // Offset: 0x38
    uint H5;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: H5 and: X
    char __padding4[0x4] = {};
    // private System.UInt32[] X
    // Size: 0x8
    // Offset: 0x40
    ::Array<uint>* X;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x48
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: Sha1Digest
    Sha1Digest(uint H1_ = {}, uint H2_ = {}, uint H3_ = {}, uint H4_ = {}, uint H5_ = {}, ::Array<uint>* X_ = {}, int xOff_ = {}) noexcept : H1{H1_}, H2{H2_}, H3{H3_}, H4{H4_}, H5{H5_}, X{X_}, xOff{xOff_} {}
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Sha1Digest t)
    // Offset: 0x17E1F9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha1Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Sha1Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Sha1Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha1Digest*, creationType>(t)));
    }
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.Sha1Digest t)
    // Offset: 0x17E2024
    void CopyIn(Org::BouncyCastle::Crypto::Digests::Sha1Digest* t);
    // static private System.UInt32 F(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x17E2318
    static uint F(uint u, uint v, uint w);
    // static private System.UInt32 H(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x17E2328
    static uint H(uint u, uint v, uint w);
    // static private System.UInt32 G(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x17E2334
    static uint G(uint u, uint v, uint w);
    // public System.Void .ctor()
    // Offset: 0x17E1F1C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Sha1Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::Sha1Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Sha1Digest*, creationType>()));
    }
    // public override System.String get_AlgorithmName()
    // Offset: 0x17E20A4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.String GeneralDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetDigestSize()
    // Offset: 0x17E20EC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::GetDigestSize()
    int GetDigestSize();
    // override System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x17E20F4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessWord(System.Byte[] input, System.Int32 inOff)
    void ProcessWord(::Array<uint8_t>* input, int inOff);
    // override System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x17E218C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessLength(System.Int64 bitLength)
    void ProcessLength(int64_t bitLength);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x17E2210
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x17E22C0
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset()
    void Reset();
    // override System.Void ProcessBlock()
    // Offset: 0x17E2348
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessBlock()
    void ProcessBlock();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x17E28B0
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable GeneralDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x17E2910
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.Sha1Digest
  #pragma pack(pop)
  static check_size<sizeof(Sha1Digest), 72 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_Sha1DigestSizeCheck;
  static_assert(sizeof(Sha1Digest) == 0x4C);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Sha1Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha1Digest");
