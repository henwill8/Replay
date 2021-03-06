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
  // Size: 0x1A
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.NoekeonEngine
  // [] Offset: FFFFFFFF
  class NoekeonEngine : public ::Il2CppObject/*, public Org::BouncyCastle::Crypto::IBlockCipher*/ {
    public:
    // private readonly System.UInt32[] k
    // Size: 0x8
    // Offset: 0x10
    ::Array<uint>* k;
    // Field size check
    static_assert(sizeof(::Array<uint>*) == 0x8);
    // private System.Boolean _initialised
    // Size: 0x1
    // Offset: 0x18
    bool initialised;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // private System.Boolean _forEncryption
    // Size: 0x1
    // Offset: 0x19
    bool forEncryption;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: NoekeonEngine
    NoekeonEngine(::Array<uint>* k_ = {}, bool initialised_ = {}, bool forEncryption_ = {}) noexcept : k{k_}, initialised{initialised_}, forEncryption{forEncryption_} {}
    // Creating interface conversion operator: operator Org::BouncyCastle::Crypto::IBlockCipher
    operator Org::BouncyCastle::Crypto::IBlockCipher() noexcept {
      return *reinterpret_cast<Org::BouncyCastle::Crypto::IBlockCipher*>(this);
    }
    // Get static field: static private readonly System.Byte[] RoundConstants
    static ::Array<uint8_t>* _get_RoundConstants();
    // Set static field: static private readonly System.Byte[] RoundConstants
    static void _set_RoundConstants(::Array<uint8_t>* value);
    // private System.Int32 EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1C0E1E4
    int EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // private System.Int32 DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1C0DEC0
    int DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // static private System.Void .cctor()
    // Offset: 0x1C0E4E0
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x1C0DA04
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static NoekeonEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::NoekeonEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<NoekeonEngine*, creationType>()));
    }
    // public System.String get_AlgorithmName()
    // Offset: 0x1C0DA78
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.String IBlockCipher::get_AlgorithmName()
    ::Il2CppString* get_AlgorithmName();
    // public System.Boolean get_IsPartialBlockOkay()
    // Offset: 0x1C0DAC0
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Boolean IBlockCipher::get_IsPartialBlockOkay()
    bool get_IsPartialBlockOkay();
    // public System.Int32 GetBlockSize()
    // Offset: 0x1C0DAC8
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::GetBlockSize()
    int GetBlockSize();
    // public System.Void Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    // Offset: 0x1C0DAD0
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Init(System.Boolean forEncryption, Org.BouncyCastle.Crypto.ICipherParameters parameters)
    void Init(bool forEncryption, Org::BouncyCastle::Crypto::ICipherParameters* parameters);
    // public System.Int32 ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1C0DD78
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Int32 IBlockCipher::ProcessBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    int ProcessBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void Reset()
    // Offset: 0x1C0E4DC
    // Implemented from: Org.BouncyCastle.Crypto.IBlockCipher
    // Base method: System.Void IBlockCipher::Reset()
    void Reset();
  }; // Org.BouncyCastle.Crypto.Engines.NoekeonEngine
  #pragma pack(pop)
  static check_size<sizeof(NoekeonEngine), 25 + sizeof(bool)> __Org_BouncyCastle_Crypto_Engines_NoekeonEngineSizeCheck;
  static_assert(sizeof(NoekeonEngine) == 0x1A);
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::NoekeonEngine*, "Org.BouncyCastle.Crypto.Engines", "NoekeonEngine");
