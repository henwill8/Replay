// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Digests.GeneralDigest
#include "Org/BouncyCastle/Crypto/Digests/GeneralDigest.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Utilities
namespace Org::BouncyCastle::Utilities {
  // Skipping declaration: IMemoable because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Sha1Digest
  class Sha1Digest : public Org::BouncyCastle::Crypto::Digests::GeneralDigest {
    public:
    // private System.UInt32 H1
    // Offset: 0x28
    uint H1;
    // private System.UInt32 H2
    // Offset: 0x2C
    uint H2;
    // private System.UInt32 H3
    // Offset: 0x30
    uint H3;
    // private System.UInt32 H4
    // Offset: 0x34
    uint H4;
    // private System.UInt32 H5
    // Offset: 0x38
    uint H5;
    // private System.UInt32[] X
    // Offset: 0x40
    ::Array<uint>* X;
    // private System.Int32 xOff
    // Offset: 0x48
    int xOff;
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Sha1Digest t)
    // Offset: 0x14B3854
    static Sha1Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Sha1Digest* t);
    // private System.Void CopyIn(Org.BouncyCastle.Crypto.Digests.Sha1Digest t)
    // Offset: 0x14B38DC
    void CopyIn(Org::BouncyCastle::Crypto::Digests::Sha1Digest* t);
    // static private System.UInt32 F(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x14B3BD0
    static uint F(uint u, uint v, uint w);
    // static private System.UInt32 H(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x14B3BE0
    static uint H(uint u, uint v, uint w);
    // static private System.UInt32 G(System.UInt32 u, System.UInt32 v, System.UInt32 w)
    // Offset: 0x14B3BEC
    static uint G(uint u, uint v, uint w);
    // public System.Void .ctor()
    // Offset: 0x14B37D4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::.ctor()
    // Base method: System.Void Object::.ctor()
    static Sha1Digest* New_ctor();
    // public override System.String get_AlgorithmName()
    // Offset: 0x14B395C
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.String GeneralDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public override System.Int32 GetDigestSize()
    // Offset: 0x14B39A4
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::GetDigestSize()
    int GetDigestSize();
    // override System.Void ProcessWord(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x14B39AC
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessWord(System.Byte[] input, System.Int32 inOff)
    void ProcessWord(::Array<uint8_t>* input, int inOff);
    // override System.Void ProcessLength(System.Int64 bitLength)
    // Offset: 0x14B3A44
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessLength(System.Int64 bitLength)
    void ProcessLength(int64_t bitLength);
    // public override System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x14B3AC8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Int32 GeneralDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public override System.Void Reset()
    // Offset: 0x14B3B78
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset()
    void Reset();
    // override System.Void ProcessBlock()
    // Offset: 0x14B3C00
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::ProcessBlock()
    void ProcessBlock();
    // public override Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x14B4168
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: Org.BouncyCastle.Utilities.IMemoable GeneralDigest::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public override System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x14B41C8
    // Implemented from: Org.BouncyCastle.Crypto.Digests.GeneralDigest
    // Base method: System.Void GeneralDigest::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.Sha1Digest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Sha1Digest*, "Org.BouncyCastle.Crypto.Digests", "Sha1Digest");
#pragma pack(pop)