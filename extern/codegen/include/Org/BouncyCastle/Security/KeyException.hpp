// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Security.GeneralSecurityException
#include "Org/BouncyCastle/Security/GeneralSecurityException.hpp"
// Completed includes
// Type namespace: Org.BouncyCastle.Security
namespace Org::BouncyCastle::Security {
  // Autogenerated type: Org.BouncyCastle.Security.KeyException
  class KeyException : public Org::BouncyCastle::Security::GeneralSecurityException {
    public:
    // public System.Void .ctor()
    // Offset: 0x10C50D8
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static KeyException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x10C50E0
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static KeyException* New_ctor(::Il2CppString* message);
  }; // Org.BouncyCastle.Security.KeyException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::KeyException*, "Org.BouncyCastle.Security", "KeyException");
#pragma pack(pop)
