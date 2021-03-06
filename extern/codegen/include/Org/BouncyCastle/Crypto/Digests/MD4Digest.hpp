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
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.MD4Digest
  // [] Offset: FFFFFFFF
  class MD4Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
    public:
    // private System.Int32 H1
    // Size: 0x4
    // Offset: 0x28
    int H1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H2
    // Size: 0x4
    // Offset: 0x2C
    int H2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H3
    // Size: 0x4
    // Offset: 0x30
    int H3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 H4
    // Size: 0x4
    // Offset: 0x34
    int H4;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32[] X
    // Size: 0x8
    // Offset: 0x38
    ::Array<int>* X;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32 xOff
    // Size: 0x4
    // Offset: 0x40
    int xOff;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MD4Digest
    MD4Digest(int H1_ = {}, int H2_ = {}, int H3_ = {}, int H4_ = {}, ::Array<int>* X_ = {}, int xOff_ = {}) noexcept : H1{H1_}, H2{H2_}, H3{H3_}, H4{H4_}, X{X_}, xOff{xOff_} {}
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.MD4Digest t)
    // Offset: 0x1B675A4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD4Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::MD4Digest* t) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::MD4Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD4Digest*, creationType>(t)));
    }
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.MD4Digest t)
    // Offset: 0x1B67628
    void CopyIn(Org::BouncyCastle::Crypto::Digests::MD4Digest* t);
    // private System.Void UnpackWord(System.Int32 word, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1B67838
    void UnpackWord(int word, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 RotateLeft(System.Int32 x, System.Int32 n)
    // Offset: 0x1B679BC
    int RotateLeft(int x, int n);
    // private System.Int32 F(System.Int32 u, System.Int32 v, System.Int32 w)
    // Offset: 0x1B679C8
    int F(int u, int v, int w);
    // private System.Int32 G(System.Int32 u, System.Int32 v, System.Int32 w)
    // Offset: 0x1B679D8
    int G(int u, int v, int w);
    // private System.Int32 H(System.Int32 u, System.Int32 v, System.Int32 w)
    // Offset: 0x1B679EC
    int H(int u, int v, int w);
    // public System.Void .ctor()
    // Offset: 0x1B67528
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MD4Digest* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Digests::MD4Digest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MD4Digest*, creationType>()));
    }
    // public override System.String get_AlgorithmName()
    // Offset: 0x1B6769C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.String GeneralDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetDigestSize()
    // Offset: 0x1B676E4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::GetDigestSize()
    int GetDigestSize();
    // override System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x1B676EC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessWord(System.Byte[] input, System.Int32 inOff)
    void ProcessWord(::Array<uint8_t>* input, int inOff);
    // override System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x1B677B4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessLength(System.Int64 bitLength)
    void ProcessLength(int64_t bitLength);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1B678C4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x1B6794C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset()
    void Reset();
    // override System.Void ProcessBlock()
    // Offset: 0x1B679F8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessBlock()
    void ProcessBlock();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x1B68054
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable GeneralDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x1B680B4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.MD4Digest
  #pragma pack(pop)
  static check_size<sizeof(MD4Digest), 64 + sizeof(int)> __Org_BouncyCastle_Crypto_Digests_MD4DigestSizeCheck;
  static_assert(sizeof(MD4Digest) == 0x44);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::MD4Digest*, "Org.BouncyCastle.Crypto.Digests", "MD4Digest");
