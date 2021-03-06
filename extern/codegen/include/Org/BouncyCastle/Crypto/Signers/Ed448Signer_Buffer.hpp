// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.Signers.Ed448Signer
#include "Org/BouncyCastle/Crypto/Signers/Ed448Signer.hpp"
// Including type: System.IO.MemoryStream
#include "System/IO/MemoryStream.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Org::BouncyCastle::Crypto::Parameters
namespace Org::BouncyCastle::Crypto::Parameters {
  // Forward declaring type: Ed448PrivateKeyParameters
  class Ed448PrivateKeyParameters;
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Crypto.Signers
namespace Org::BouncyCastle::Crypto::Signers {
  // Size: 0x50
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.Signers.Ed448Signer/Buffer
  // [] Offset: FFFFFFFF
  class Ed448Signer::Buffer : public System::IO::MemoryStream {
    public:
    // Creating value type constructor for type: Buffer
    Buffer() noexcept {}
    // System.Byte[] GenerateSignature(Org.BouncyCastle.Crypto.Parameters.Ed448PrivateKeyParameters privateKey, System.Byte[] ctx)
    // Offset: 0x11899EC
    ::Array<uint8_t>* GenerateSignature(Org::BouncyCastle::Crypto::Parameters::Ed448PrivateKeyParameters* privateKey, ::Array<uint8_t>* ctx);
    // System.Void Reset()
    // Offset: 0x1189B64
    void Reset();
    // public System.Void .ctor()
    // Offset: 0x118983C
    // Implemented from: System.IO.MemoryStream
    // Base method: System.Void MemoryStream::.ctor()
    // Base method: System.Void Stream::.ctor()
    // Base method: System.Void MarshalByRefObject::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static Ed448Signer::Buffer* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<Ed448Signer::Buffer*, creationType>()));
    }
  }; // Org.BouncyCastle.Crypto.Signers.Ed448Signer/Buffer
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::Signers::Ed448Signer::Buffer*, "Org.BouncyCastle.Crypto.Signers", "Ed448Signer/Buffer");
