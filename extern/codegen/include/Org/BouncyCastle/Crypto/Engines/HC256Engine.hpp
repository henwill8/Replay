// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IStreamCipher
#include "Org/BouncyCastle/Crypto/IStreamCipher.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.HC256Engine
  class HC256Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IStreamCipher*/ {
    public:
    // private System.UInt32[] p
    // Offset: 0x10
    ::Array<uint>* p;
    // private System.UInt32[] q
    // Offset: 0x18
    ::Array<uint>* q;
    // private System.UInt32 cnt
    // Offset: 0x20
    uint cnt;
    // private System.Byte[] key
    // Offset: 0x28
    ::Array<uint8_t>* key;
    // private System.Byte[] iv
    // Offset: 0x30
    ::Array<uint8_t>* iv;
    // private System.Boolean initialised
    // Offset: 0x38
    bool initialised;
    // private System.Byte[] buf
    // Offset: 0x40
    ::Array<uint8_t>* buf;
    // private System.Int32 idx
    // Offset: 0x48
    int idx;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IStreamCipher
    operator Org::BouncyCastle::Crypto::IStreamCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IStreamCipher*>(this);
    }
    // private System.UInt32 Step()
    // Offset: 0x17D1498
    uint Step();
    // private System.Void Init()
    // Offset: 0x17D1708
    void Init();
    // public System.String get_AlgorithmName()
    // Offset: 0x17D1AB0
    ::Il2CppString* get_AlgorithmName();
    // private System.Byte GetByte()
    // Offset: 0x17D1CEC
    uint8_t GetByte();
    // static private System.UInt32 RotateRight(System.UInt32 x, System.Int32 bits)
    // Offset: 0x17D1700
    static uint RotateRight(uint x, int bits);
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x17D1AF8
    // Implemented from: Org.BouncyCastle.Crypto.IStreamCipher
    // Base method: System.Void IStreamCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Void ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x17D1D6C
    // Implemented from: Org.BouncyCastle.Crypto.IStreamCipher
    // Base method: System.Void IStreamCipher::ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 len, System.Byte[] output, System.Int32 outOff)
    void ProcessBytes(::Array<uint8_t>* input, int inOff, int len, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x17D1F0C
    // Implemented from: Org.BouncyCastle.Crypto.IStreamCipher
    // Base method: System.Void IStreamCipher::Reset()
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x17D1F10
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static HC256Engine* New_ctor();
  }; // Org.BouncyCastle.Crypto.Engines.HC256Engine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::HC256Engine*, "Org.BouncyCastle.Crypto.Engines", "HC256Engine");
#pragma pack(pop)
