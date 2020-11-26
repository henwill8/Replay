// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
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
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.Cast5Engine
  class Cast5Engine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32[] _Kr
    // Offset: 0x10
    ::Array<int>* Kr;
    // private System.UInt32[] _Km
    // Offset: 0x18
    ::Array<uint>* Km;
    // private System.Boolean _encrypting
    // Offset: 0x20
    bool encrypting;
    // private System.Byte[] _workingKey
    // Offset: 0x28
    ::Array<uint8_t>* workingKey;
    // private System.Int32 _rounds
    // Offset: 0x30
    int rounds;
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.UInt32[] S1
    static ::Array<uint>* _get_S1();
    // Set static field: static private readonly System.UInt32[] S1
    static void _set_S1(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S2
    static ::Array<uint>* _get_S2();
    // Set static field: static private readonly System.UInt32[] S2
    static void _set_S2(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S3
    static ::Array<uint>* _get_S3();
    // Set static field: static private readonly System.UInt32[] S3
    static void _set_S3(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S4
    static ::Array<uint>* _get_S4();
    // Set static field: static private readonly System.UInt32[] S4
    static void _set_S4(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S5
    static ::Array<uint>* _get_S5();
    // Set static field: static private readonly System.UInt32[] S5
    static void _set_S5(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S6
    static ::Array<uint>* _get_S6();
    // Set static field: static private readonly System.UInt32[] S6
    static void _set_S6(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S7
    static ::Array<uint>* _get_S7();
    // Set static field: static private readonly System.UInt32[] S7
    static void _set_S7(::Array<uint>* value);
    // Get static field: static private readonly System.UInt32[] S8
    static ::Array<uint>* _get_S8();
    // Set static field: static private readonly System.UInt32[] S8
    static void _set_S8(::Array<uint>* value);
    // Get static field: static readonly System.Int32 MAX_ROUNDS
    static int _get_MAX_ROUNDS();
    // Set static field: static readonly System.Int32 MAX_ROUNDS
    static void _set_MAX_ROUNDS(int value);
    // Get static field: static readonly System.Int32 RED_ROUNDS
    static int _get_RED_ROUNDS();
    // Set static field: static readonly System.Int32 RED_ROUNDS
    static void _set_RED_ROUNDS(int value);
    // System.Void SetKey(System.Byte[] key)
    // Offset: 0x17C7198
    void SetKey(::Array<uint8_t>* key);
    // System.Int32 EncryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x17CAD18
    int EncryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
    // System.Int32 DecryptBlock(System.Byte[] src, System.Int32 srcIndex, System.Byte[] dst, System.Int32 dstIndex)
    // Offset: 0x17CB074
    int DecryptBlock(::Array<uint8_t>* src, int srcIndex, ::Array<uint8_t>* dst, int dstIndex);
    // static System.UInt32 F1(System.UInt32 D, System.UInt32 Kmi, System.Int32 Kri)
    // Offset: 0x17CB3EC
    static uint F1(uint D, uint Kmi, int Kri);
    // static System.UInt32 F2(System.UInt32 D, System.UInt32 Kmi, System.Int32 Kri)
    // Offset: 0x17CB50C
    static uint F2(uint D, uint Kmi, int Kri);
    // static System.UInt32 F3(System.UInt32 D, System.UInt32 Kmi, System.Int32 Kri)
    // Offset: 0x17CB62C
    static uint F3(uint D, uint Kmi, int Kri);
    // System.Void CAST_Encipher(System.UInt32 L0, System.UInt32 R0, System.UInt32[] result)
    // Offset: 0x17CAE24
    void CAST_Encipher(uint L0, uint R0, ::Array<uint>* result);
    // System.Void CAST_Decipher(System.UInt32 L16, System.UInt32 R16, System.UInt32[] result)
    // Offset: 0x17CB180
    void CAST_Decipher(uint L16, uint R16, ::Array<uint>* result);
    // static System.Void Bits32ToInts(System.UInt32 inData, System.Int32[] b, System.Int32 offset)
    // Offset: 0x17CAC88
    static void Bits32ToInts(uint inData, ::Array<int>* b, int offset);
    // static System.UInt32 IntsTo32bits(System.Int32[] b, System.Int32 i)
    // Offset: 0x17CAC04
    static uint IntsTo32bits(::Array<int>* b, int i);
    // static private System.Void .cctor()
    // Offset: 0x17CB74C
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x17C6D84
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Cast5Engine* New_ctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x17C6E48
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.String get_AlgorithmName()
    // Offset: 0x17C6FE8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x17C7030
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x17C7038
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x17C718C
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
    // public System.Int32 GetBlockSize()
    // Offset: 0x17C7190
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
  }; // Org.BouncyCastle.Crypto.Engines.Cast5Engine
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::Cast5Engine*, "Org.BouncyCastle.Crypto.Engines", "Cast5Engine");
#pragma pack(pop)
