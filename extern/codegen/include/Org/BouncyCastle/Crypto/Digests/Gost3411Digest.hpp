// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IDigest
#include "Org/BouncyCastle/Crypto/IDigest.hpp"
// Including type: Org.BouncyCastle.Utilities.IMemoable
#include "Org/BouncyCastle/Utilities/IMemoable.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: IBlockCipher
  class IBlockCipher;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Digests
namespace Org::BouncyCastle::Crypto::Digests {
  // Autogenerated type: Org.BouncyCastle.Crypto.Digests.Gost3411Digest
  class Gost3411Digest : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IDigest, public Org::BouncyCastle::Utilities::IMemoable*/ {
    public:
    // private System.Byte[] H
    // Offset: 0x10
    ::Array<uint8_t>* H;
    // private System.Byte[] L
    // Offset: 0x18
    ::Array<uint8_t>* L;
    // private System.Byte[] M
    // Offset: 0x20
    ::Array<uint8_t>* M;
    // private System.Byte[] Sum
    // Offset: 0x28
    ::Array<uint8_t>* Sum;
    // private System.Byte[][] C
    // Offset: 0x30
    ::Array<::Array<uint8_t>*>* C;
    // private System.Byte[] xBuf
    // Offset: 0x38
    ::Array<uint8_t>* xBuf;
    // private System.Int32 xBufOff
    // Offset: 0x40
    int xBufOff;
    // private System.UInt64 byteCount
    // Offset: 0x48
    uint64_t byteCount;
    // private readonly Org.BouncyCastle.Crypto.IBlockCipher cipher
    // Offset: 0x50
    Org::BouncyCastle::Crypto::IBlockCipher* cipher;
    // private System.Byte[] sBox
    // Offset: 0x58
    ::Array<uint8_t>* sBox;
    // private System.Byte[] K
    // Offset: 0x60
    ::Array<uint8_t>* K;
    // private System.Byte[] a
    // Offset: 0x68
    ::Array<uint8_t>* a;
    // System.Int16[] wS
    // Offset: 0x70
    ::Array<int16_t>* wS;
    // System.Int16[] w_S
    // Offset: 0x78
    ::Array<int16_t>* w_S;
    // System.Byte[] S
    // Offset: 0x80
    ::Array<uint8_t>* S;
    // System.Byte[] U
    // Offset: 0x88
    ::Array<uint8_t>* U;
    // System.Byte[] V
    // Offset: 0x90
    ::Array<uint8_t>* V;
    // System.Byte[] W
    // Offset: 0x98
    ::Array<uint8_t>* W;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IDigest
    operator Org::BouncyCastle::Crypto::IDigest() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IDigest*>(this);
    }
    // Creating interface conversion operator: operator Org::BouncyCastle::Utilities::IMemoable
    operator Org::BouncyCastle::Utilities::IMemoable() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Utilities::IMemoable*>(this);
    }
    // Get static field: static private readonly System.Byte[] C2
    static ::Array<uint8_t>* _get_C2();
    // Set static field: static private readonly System.Byte[] C2
    static void _set_C2(::Array<uint8_t>* value);
    // static private System.Byte[][] MakeC()
    // Offset: 0x175C050
    static ::Array<::Array<uint8_t>*>* MakeC();
    // public System.Void .ctor(Org.BouncyCastle.Crypto.Digests.Gost3411Digest t)
    // Offset: 0x175C5D8
    static Gost3411Digest* New_ctor(Org::BouncyCastle::Crypto::Digests::Gost3411Digest* t);
    // private System.Byte[] P(System.Byte[] input)
    // Offset: 0x175D0FC
    ::Array<uint8_t>* P(::Array<uint8_t>* input);
    // private System.Byte[] A(System.Byte[] input)
    // Offset: 0x175D21C
    ::Array<uint8_t>* A(::Array<uint8_t>* input);
    // private System.Void E(System.Byte[] key, System.Byte[] s, System.Int32 sOff, System.Byte[] input, System.Int32 inOff)
    // Offset: 0x175D2E8
    void E(::Array<uint8_t>* key, ::Array<uint8_t>* s, int sOff, ::Array<uint8_t>* input, int inOff);
    // private System.Void fw(System.Byte[] input)
    // Offset: 0x175D46C
    void fw(::Array<uint8_t>* input);
    // private System.Void processBlock(System.Byte[] input, System.Int32 inOff)
    // Offset: 0x175CC68
    void processBlock(::Array<uint8_t>* input, int inOff);
    // private System.Void finish()
    // Offset: 0x175D6E0
    void finish();
    // private System.Void sumByteArray(System.Byte[] input)
    // Offset: 0x175CBE4
    void sumByteArray(::Array<uint8_t>* input);
    // static private System.Void cpyBytesToShort(System.Byte[] S, System.Int16[] wS)
    // Offset: 0x175D594
    static void cpyBytesToShort(::Array<uint8_t>* S, ::Array<int16_t>* wS);
    // static private System.Void cpyShortToBytes(System.Int16[] wS, System.Byte[] S)
    // Offset: 0x175D638
    static void cpyShortToBytes(::Array<int16_t>* wS, ::Array<uint8_t>* S);
    // static private System.Void .cctor()
    // Offset: 0x175D804
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x175C144
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Gost3411Digest* New_ctor();
    // public System.String get_AlgorithmName()
    // Offset: 0x175CB00
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.String IDigest::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Int32 GetDigestSize()
    // Offset: 0x175CB48
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::GetDigestSize()
    int GetDigestSize();
    // public System.Void Update(System.Byte input)
    // Offset: 0x175CB50
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::Update(System.Byte input)
    void Update(uint8_t input);
    // public System.Void BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0x175CFB4
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::BlockUpdate(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    void BlockUpdate(::Array<uint8_t>* input, int inOff, int length);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x175D744
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::DoFinal(System.Byte[] output, System.Int32 outOff)
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x175C460
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Void IDigest::Reset()
    void Reset();
    // public System.Int32 GetByteLength()
    // Offset: 0x175D79C
    // Implemented from: Org.BouncyCastle.Crypto.IDigest
    // Base method: System.Int32 IDigest::GetByteLength()
    int GetByteLength();
    // public Org.BouncyCastle.Utilities.IMemoable Copy()
    // Offset: 0x175D7A4
    // Implemented from: Org.BouncyCastle.Utilities.IMemoable
    // Base method: Org.BouncyCastle.Utilities.IMemoable IMemoable::Copy()
    Org::BouncyCastle::Utilities::IMemoable* Copy();
    // public System.Void Reset(Org.BouncyCastle.Utilities.IMemoable other)
    // Offset: 0x175C818
    // Implemented from: Org.BouncyCastle.Utilities.IMemoable
    // Base method: System.Void IMemoable::Reset(Org.BouncyCastle.Utilities.IMemoable other)
    void Reset(Org::BouncyCastle::Utilities::IMemoable* other);
  }; // Org.BouncyCastle.Crypto.Digests.Gost3411Digest
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Digests::Gost3411Digest*, "Org.BouncyCastle.Crypto.Digests", "Gost3411Digest");
#pragma pack(pop)