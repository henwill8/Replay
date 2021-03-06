// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Crypto.CryptoException
#include "Org/BouncyCastle/Crypto/CryptoException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Crypto.DataLengthException
  // [] Offset: FFFFFFFF
  class DataLengthException : public Org::BouncyCastle::Crypto::CryptoException {
    public:
    // Creating value type constructor for type: DataLengthException
    DataLengthException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1B5C978
    // Implemented from: Org.BouncyCastle.Crypto.CryptoException
    // Base method: System.Void CryptoException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataLengthException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::DataLengthException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataLengthException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1B5BA80
    // Implemented from: Org.BouncyCastle.Crypto.CryptoException
    // Base method: System.Void CryptoException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DataLengthException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Crypto::DataLengthException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DataLengthException*, creationType>(message)));
    }
  }; // Org.BouncyCastle.Crypto.DataLengthException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::DataLengthException*, "Org.BouncyCastle.Crypto", "DataLengthException");
