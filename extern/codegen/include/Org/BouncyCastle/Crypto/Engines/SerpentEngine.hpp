// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
#include "Org/BouncyCastle/Crypto/Engines/SerpentEngineBase.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto.Engines
namespace Org::BouncyCastle::Crypto::Engines {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Engines.SerpentEngine
  // [] Offset: FFFFFFFF
  class SerpentEngine : public Org::BouncyCastle::Crypto::Engines::SerpentEngineBase {
    public:
    // Creating value type constructor for type: SerpentEngine
    SerpentEngine() noexcept {}
    // protected override System.Int32[] MakeWorkingKey(System.Byte[] key)
    // Offset: 0x1CD2C04
    // Implemented from: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
    // Base method: System.Int32[] SerpentEngineBase::MakeWorkingKey(System.Byte[] key)
    ::Array<int>* MakeWorkingKey(::Array<uint8_t>* key);
    // protected override System.Void EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1CD48AC
    // Implemented from: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
    // Base method: System.Void SerpentEngineBase::EncryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    void EncryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // protected override System.Void DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    // Offset: 0x1CD5ECC
    // Implemented from: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
    // Base method: System.Void SerpentEngineBase::DecryptBlock(System.Byte[] input, System.Int32 inOff, System.Byte[] output, System.Int32 outOff)
    void DecryptBlock(::Array<uint8_t>* input, int inOff, ::Array<uint8_t>* output, int outOff);
    // public System.Void .ctor()
    // Offset: 0x1CD7A60
    // Implemented from: Org.BouncyCastle.Crypto.Engines.SerpentEngineBase
    // Base method: System.Void SerpentEngineBase::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static SerpentEngine* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Engines::SerpentEngine::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<SerpentEngine*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Engines.SerpentEngine
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Engines::SerpentEngine*, "Org.BouncyCastle.Crypto.Engines", "SerpentEngine");
