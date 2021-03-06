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
  // Size: 0x31
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.SkipjackEngine
  // [] Offset: FFFFFFFF
  class SkipjackEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private System.Int32[] key0
    // Size: 0x8
    // Offset: 0x10
    ::Array<int>* key0;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] key1
    // Size: 0x8
    // Offset: 0x18
    ::Array<int>* key1;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] key2
    // Size: 0x8
    // Offset: 0x20
    ::Array<int>* key2;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Int32[] key3
    // Size: 0x8
    // Offset: 0x28
    ::Array<int>* key3;
    // Field size check
    static_assert(sizeof(::Array<int>*) == 0x8);
    // private System.Boolean encrypting
    // Size: 0x1
    // Offset: 0x30
    bool encrypting;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: SkipjackEngine
    SkipjackEngine(::Array<int>* key0_ = {}, ::Array<int>* key1_ = {}, ::Array<int>* key2_ = {}, ::Array<int>* key3_ = {}, bool encrypting_ = {}) noexcept : key0{key0_}, key1{key1_}, key2{key2_}, key3{key3_}, encrypting{encrypting_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Int16[] ftable
    static ::Array<int16_t>* _get_ftable();
    // Set static field: static private readonly System.Int16[] ftable
    static void _set_ftable(::Array<int16_t>* value);
    // private System.Int32 G(System.Int32 k, System.Int32 w)
    // Offset: 0x1CD8414
    int G(int k, int w);
    // public System.Int32 EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1CD8588
    int EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // private System.Int32 H(System.Int32 k, System.Int32 w)
    // Offset: 0x1CD87DC
    int H(int k, int w);
    // public System.Int32 DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] outBytes, System.Int32 outOff)
    // Offset: 0x1CD8950
    int DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* outBytes, int outOff);
    // static private System.Void .cctor()
    // Offset: 0x1CD8BC0
    static void _cctor();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1CD7F1C
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.String get_AlgorithmName()
    // Offset: 0x1CD8298
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1CD82E0
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1CD82E8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1CD82F0
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1CD8410
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x1CD8C40
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SkipjackEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::SkipjackEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SkipjackEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.SkipjackEngine
  #pragma pack(pop)
  static check_size<sizeof(SkipjackEngine), 48 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_SkipjackEngineSizeCheck;
  static_assert(sizeof(SkipjackEngine) == 0x31);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::SkipjackEngine*, "Org.BouncyCastle.Crypto.Engines", "SkipjackEngine");
