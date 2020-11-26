// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Crypto
namespace Org::BouncyCastle::Crypto {
  // Autogenerated type: Org.BouncyCastle.Crypto.CryptoException
  class CryptoException : public System::Exception {
    public:
    // public System.Void .ctor()
    // Offset: 0x1757DE4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static CryptoException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x1757E4C
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message)
    static CryptoException* New_ctor(::Il2CppString* message);
    // public System.Void .ctor(System.String message, System.Exception exception)
    // Offset: 0x1757EC4
    // Implemented from: System.Exception
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception exception)
    static CryptoException* New_ctor(::Il2CppString* message, System::Exception* exception);
  }; // Org.BouncyCastle.Crypto.CryptoException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Crypto::CryptoException*, "Org.BouncyCastle.Crypto", "CryptoException");
#pragma pack(pop)
