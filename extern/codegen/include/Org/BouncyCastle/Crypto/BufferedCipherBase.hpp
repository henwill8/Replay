// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBufferedCipher
#include "Org/BouncyCastle/Crypto/IBufferedCipher.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto
namespace Org::BouncyCastle::Crypto {
  // Forward declaring type: ICipherParameters
  class ICipherParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Autogenerated type: Org.BouncyCastle.Crypto.BufferedCipherBase
  class BufferedCipherBase : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBufferedCipher*/ {
    public:
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBufferedCipher
    operator Org::BouncyCastle::Crypto::IBufferedCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBufferedCipher*>(this);
    }
    // Get static field: static protected readonly System.Byte[] EmptyBuffer
    static ::Array<uint8_t>* _get_EmptyBuffer();
    // Set static field: static protected readonly System.Byte[] EmptyBuffer
    static void _set_EmptyBuffer(::Array<uint8_t>* value);
    // public System.Int32 GetBlockSize()
    // Offset: 0xFFFFFFFF
    int GetBlockSize();
    // public System.Int32 GetOutputSize(System.Int32 inputLen)
    // Offset: 0xFFFFFFFF
    int GetOutputSize(int inputLen);
    // public System.Int32 GetUpdateOutputSize(System.Int32 inputLen)
    // Offset: 0xFFFFFFFF
    int GetUpdateOutputSize(int inputLen);
    // public System.Byte[] ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* ProcessBytes(::Array<uint8_t>* input, int inOff, int length);
    // public System.Int32 ProcessBytes(System.Byte[] input, System.Int32 inOff, System.Int32 length, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1756F50
    int ProcessBytes(::Array<uint8_t>* input, int inOff, int length, ::Array<uint8_t>* output, int outOff);
    // public System.Byte[] DoFinal()
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* DoFinal();
    // public System.Byte[] DoFinal(System.Byte[] input, System.Int32 inOff, System.Int32 length)
    // Offset: 0xFFFFFFFF
    ::Array<uint8_t>* DoFinal(::Array<uint8_t>* input, int inOff, int length);
    // public System.Int32 DoFinal(System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1757078
    int DoFinal(::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0xFFFFFFFF
    void Reset();
    // static private System.Void .cctor()
    // Offset: 0x175714C
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0xFFFFFFFF
    // Implemented from: Org.BouncyCastle.Crypto.IBufferedCipher
    // Base method: System.Void IBufferedCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Byte[] DoFinal(System.Byte[] input)
    // Offset: 0x1757050
    // Implemented from: Org.BouncyCastle.Crypto.IBufferedCipher
    // Base method: System.Byte[] IBufferedCipher::DoFinal(System.Byte[] input)
    ::Array<uint8_t>* DoFinal(::Array<uint8_t>* input);
    // protected System.Void .ctor()
    // Offset: 0x17571B8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BufferedCipherBase* New_ctor();
  }; // Org.BouncyCastle.Crypto.BufferedCipherBase
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::BufferedCipherBase*, "Org.BouncyCastle.Crypto", "BufferedCipherBase");
#pragma pack(pop)
