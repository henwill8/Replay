// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Security.Interface.MonoTlsProvider
#include "Mono/Security/Interface/MonoTlsProvider.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Forward declaring namespace: System::Security::Authentication
namespace System::Security::Authentication {
  // Forward declaring type: SslProtocols
  struct SslProtocols;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: IMonoSslStream
  class IMonoSslStream;
  // Forward declaring type: MonoTlsSettings
  class MonoTlsSettings;
  // Forward declaring type: ICertificateValidator2
  class ICertificateValidator2;
  // Forward declaring type: MonoSslPolicyErrors
  struct MonoSslPolicyErrors;
}
// Forward declaring namespace: System::IO
namespace System::IO {
  // Forward declaring type: Stream
  class Stream;
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: SslStream
  class SslStream;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509CertificateCollection
  class X509CertificateCollection;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Completed forward declares
// Type namespace: Mono.Unity
namespace Mono::Unity {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Unity.UnityTlsProvider
  // [] Offset: FFFFFFFF
  class UnityTlsProvider : public Mono::Security::Interface::MonoTlsProvider {
    public:
    // Creating value type constructor for type: UnityTlsProvider
    UnityTlsProvider() noexcept {}
    // public override System.String get_Name()
    // Offset: 0x178EE1C
    // Implemented from: Mono.Security.Interface.MonoTlsProvider
    // Base method: System.String MonoTlsProvider::get_Name()
    ::Il2CppString* get_Name();
    // public override System.Guid get_ID()
    // Offset: 0x178EE64
    // Implemented from: Mono.Security.Interface.MonoTlsProvider
    // Base method: System.Guid MonoTlsProvider::get_ID()
    System::Guid get_ID();
    // public override System.Boolean get_SupportsSslStream()
    // Offset: 0x178EECC
    // Implemented from: Mono.Security.Interface.MonoTlsProvider
    // Base method: System.Boolean MonoTlsProvider::get_SupportsSslStream()
    bool get_SupportsSslStream();
    // public override System.Boolean get_SupportsMonoExtensions()
    // Offset: 0x178EED4
    // Implemented from: Mono.Security.Interface.MonoTlsProvider
    // Base method: System.Boolean MonoTlsProvider::get_SupportsMonoExtensions()
    bool get_SupportsMonoExtensions();
    // public override System.Boolean get_SupportsConnectionInfo()
    // Offset: 0x178EEDC
    // Implemented from: Mono.Security.Interface.MonoTlsProvider
    // Base method: System.Boolean MonoTlsProvider::get_SupportsConnectionInfo()
    bool get_SupportsConnectionInfo();
    // override System.Boolean get_SupportsCleanShutdown()
    // Offset: 0x178EEE4
    // Implemented from: Mono.Security.Interface.MonoTlsProvider
    // Base method: System.Boolean MonoTlsProvider::get_SupportsCleanShutdown()
    bool get_SupportsCleanShutdown();
    // public override System.Security.Authentication.SslProtocols get_SupportedProtocols()
    // Offset: 0x178EEEC
    // Implemented from: Mono.Security.Interface.MonoTlsProvider
    // Base method: System.Security.Authentication.SslProtocols MonoTlsProvider::get_SupportedProtocols()
    System::Security::Authentication::SslProtocols get_SupportedProtocols();
    // public override Mono.Security.Interface.IMonoSslStream CreateSslStream(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0x178EEF4
    // Implemented from: Mono.Security.Interface.MonoTlsProvider
    // Base method: Mono.Security.Interface.IMonoSslStream MonoTlsProvider::CreateSslStream(System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, Mono.Security.Interface.MonoTlsSettings settings)
    Mono::Security::Interface::IMonoSslStream* CreateSslStream(System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsSettings* settings);
    // override Mono.Security.Interface.IMonoSslStream CreateSslStreamInternal(System.Net.Security.SslStream sslStream, System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, Mono.Security.Interface.MonoTlsSettings settings)
    // Offset: 0x178EF0C
    // Implemented from: Mono.Security.Interface.MonoTlsProvider
    // Base method: Mono.Security.Interface.IMonoSslStream MonoTlsProvider::CreateSslStreamInternal(System.Net.Security.SslStream sslStream, System.IO.Stream innerStream, System.Boolean leaveInnerStreamOpen, Mono.Security.Interface.MonoTlsSettings settings)
    Mono::Security::Interface::IMonoSslStream* CreateSslStreamInternal(System::Net::Security::SslStream* sslStream, System::IO::Stream* innerStream, bool leaveInnerStreamOpen, Mono::Security::Interface::MonoTlsSettings* settings);
    // override System.Boolean ValidateCertificate(Mono.Security.Interface.ICertificateValidator2 validator, System.String targetHost, System.Boolean serverMode, System.Security.Cryptography.X509Certificates.X509CertificateCollection certificates, System.Boolean wantsChain, ref System.Security.Cryptography.X509Certificates.X509Chain chain, ref Mono.Security.Interface.MonoSslPolicyErrors errors, ref System.Int32 status11)
    // Offset: 0x178F044
    // Implemented from: Mono.Security.Interface.MonoTlsProvider
    // Base method: System.Boolean MonoTlsProvider::ValidateCertificate(Mono.Security.Interface.ICertificateValidator2 validator, System.String targetHost, System.Boolean serverMode, System.Security.Cryptography.X509Certificates.X509CertificateCollection certificates, System.Boolean wantsChain, ref System.Security.Cryptography.X509Certificates.X509Chain chain, ref Mono.Security.Interface.MonoSslPolicyErrors errors, ref System.Int32 status11)
    bool ValidateCertificate(Mono::Security::Interface::ICertificateValidator2* validator, ::Il2CppString* targetHost, bool serverMode, System::Security::Cryptography::X509Certificates::X509CertificateCollection* certificates, bool wantsChain, System::Security::Cryptography::X509Certificates::X509Chain*& chain, Mono::Security::Interface::MonoSslPolicyErrors& errors, int& status11);
    // public System.Void .ctor()
    // Offset: 0x178F610
    // Implemented from: Mono.Security.Interface.MonoTlsProvider
    // Base method: System.Void MonoTlsProvider::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static UnityTlsProvider* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Unity::UnityTlsProvider::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<UnityTlsProvider*, creationType>()));
    }
  }; // Mono.Unity.UnityTlsProvider
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Unity::UnityTlsProvider*, "Mono.Unity", "UnityTlsProvider");
