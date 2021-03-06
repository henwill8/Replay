// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Org.BouncyCastle.Security.GeneralSecurityException
#include "Org/BouncyCastle/Security/GeneralSecurityException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Completed forward declares
// Type namespace: Org.BouncyCastle.Security.Certificates
namespace Org::BouncyCastle::Security::Certificates {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: Org.BouncyCastle.Security.Certificates.CertificateException
  // [] Offset: FFFFFFFF
  class CertificateException : public Org::BouncyCastle::Security::GeneralSecurityException {
    public:
    // Creating value type constructor for type: CertificateException
    CertificateException() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x11F298C
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificateException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::Certificates::CertificateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificateException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x11F2994
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificateException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::Certificates::CertificateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificateException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception exception)
    // Offset: 0x11F299C
    // Implemented from: Org.BouncyCastle.Security.GeneralSecurityException
    // Base method: System.Void GeneralSecurityException::.ctor(System.String message, System.Exception exception)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception exception)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CertificateException* New_ctor(::Il2CppString* message, System::Exception* exception) {
      static auto ___internal__logger = ::Logger::get().WithContext("Org::BouncyCastle::Security::Certificates::CertificateException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CertificateException*, creationType>(message, exception)));
    }
  }; // Org.BouncyCastle.Security.Certificates.CertificateException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Org::BouncyCastle::Security::Certificates::CertificateException*, "Org.BouncyCastle.Security.Certificates", "CertificateException");
