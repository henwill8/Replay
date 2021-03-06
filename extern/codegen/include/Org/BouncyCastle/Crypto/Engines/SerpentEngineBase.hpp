// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.IBlockCipher
#include "Org/BouncyCastle/Crypto/IBlockCipher.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
  // [] Offset: FFFFFFFF
  class SerpentEngineBase : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // protected System.Boolean encrypting
    // Size: 0x1
    // Offset: 0x10
    bool encrypting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: encrypting and: wKey
    char __padding0[0x7] = {};
    // protected System.Int32[] wKey
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* wKey;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // protected System.Int32 X0
    // Size: 0x4
    // Offset: 0x20
    int X0;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 X1
    // Size: 0x4
    // Offset: 0x24
    int X1;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 X2
    // Size: 0x4
    // Offset: 0x28
    int X2;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 X3
    // Size: 0x4
    // Offset: 0x2C
    int X3;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: SerpentEngineBase
    SerpentEngineBase(bool encrypting_ = {}, ::Array<int>* wKey_ = {}, int X0_ = {}, int X1_ = {}, int X2_ = {}, int X3_ = {}) noexcept : encrypting{encrypting_}, wKey{wKey_}, X0{X0_}, X1{X1_}, X2{X2_}, X3{X3_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static protected readonly System.Int32 BlockSize
    static int _get_BlockSize();
    // Set static field: static protected readonly System.Int32 BlockSize
    static void _set_BlockSize(int value);
    // static protected System.Int32 RotateLeft(System.Int32 x, System.Int32 bits)
    // Offset: 0x1CD4674
    static int RotateLeft(int x, int bits);
    // static private System.Int32 RotateRight(System.Int32 x, System.Int32 bits)
    // Offset: 0x1CD7EC0
    static int RotateRight(int x, int bits);
    // protected System.Void Sb0(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD4758
    void Sb0(int a, int b, int c, int d);
    // protected System.Void Ib0(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD7A1C
    void Ib0(int a, int b, int c, int d);
    // protected System.Void Sb1(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD4718
    void Sb1(int a, int b, int c, int d);
    // protected System.Void Ib1(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD79DC
    void Ib1(int a, int b, int c, int d);
    // protected System.Void Sb2(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD46CC
    void Sb2(int a, int b, int c, int d);
    // protected System.Void Ib2(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD7998
    void Ib2(int a, int b, int c, int d);
    // protected System.Void Sb3(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD4680
    void Sb3(int a, int b, int c, int d);
    // protected System.Void Ib3(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD7950
    void Ib3(int a, int b, int c, int d);
    // protected System.Void Sb4(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD4868
    void Sb4(int a, int b, int c, int d);
    // protected System.Void Ib4(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD790C
    void Ib4(int a, int b, int c, int d);
    // protected System.Void Sb5(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD4820
    void Sb5(int a, int b, int c, int d);
    // protected System.Void Ib5(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD78C4
    void Ib5(int a, int b, int c, int d);
    // protected System.Void Sb6(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD47E0
    void Sb6(int a, int b, int c, int d);
    // protected System.Void Ib6(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD7880
    void Ib6(int a, int b, int c, int d);
    // protected System.Void Sb7(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD4798
    void Sb7(int a, int b, int c, int d);
    // protected System.Void Ib7(System.Int32 a, System.Int32 b, System.Int32 c, System.Int32 d)
    // Offset: 0x1CD7798
    void Ib7(int a, int b, int c, int d);
    // protected System.Void LT()
    // Offset: 0x1CD5E20
    void LT();
    // protected System.Void InverseLT()
    // Offset: 0x1CD77E4
    void InverseLT();
    // protected System.Int32[] MakeWorkingKey(System.Byte[] key)
    // Offset: 0xFFFFFFFF
    ::Array<int>* MakeWorkingKey(::Array<uint8_t>* key);
    // protected System.Void EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0xFFFFFFFF
    void EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // protected System.Void DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0xFFFFFFFF
    void DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // static private System.Void .cctor()
    // Offset: 0x1CD7EC8
    static void _cctor();
    // protected System.Void .ctor()
    // Offset: 0x1CD7AC8
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerpentEngineBase* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::SerpentEngineBase::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerpentEngineBase*, creationType>()));
    }
    // public System.Void Init(System.Boolean encrypting, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1CD7AD0
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean encrypting, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool encrypting, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.String get_AlgorithmName()
    // Offset: 0x1CD7C70
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1CD7CB8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1CD7CC0
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1CD7D28
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1CD7EBC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
  #pragma pack(pop)
  static check_size<sizeof(SerpentEngineBase), 44 + sizeof(int)> __Org_BouncyCastle_Crypto_Engines_SerpentEngineBaseSizeCheck;
  static_assert(sizeof(SerpentEngineBase) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::SerpentEngineBase*, "Org.BouncyCastle.Crypto.Engines", "SerpentEngineBase");
