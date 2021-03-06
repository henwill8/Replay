// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.Security.Private.CallbackHelpers
#include "Mono/Net/Security/Private/CallbackHelpers.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: RemoteCertificateValidationCallback
  class RemoteCertificateValidationCallback;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: MonoSslPolicyErrors
  struct MonoSslPolicyErrors;
}
// Completed forward declares
// Type namespace: Mono.Net.Security.Private
namespace Mono::Net::Security::Private {
  // Size: 0x18
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass0_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CB58D0
  class CallbackHelpers::$$c__DisplayClass0_0 : public ::Il2CppObject {
    public:
    // public System.Net.Security.RemoteCertificateValidationCallback callback
    // Size: 0x8
    // Offset: 0x10
    System::Net::Security::RemoteCertificateValidationCallback* callback;
    // Field size check
    static_assert(sizeof(System::Net::Security::RemoteCertificateValidationCallback*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass0_0
    $$c__DisplayClass0_0(System::Net::Security::RemoteCertificateValidationCallback* callback_ = {}) noexcept : callback{callback_} {}
    // Creating conversion operator: operator System::Net::Security::RemoteCertificateValidationCallback*
    constexpr operator System::Net::Security::RemoteCertificateValidationCallback*() const noexcept {
      return callback;
    }
    // System.Boolean <PublicToMono>b__0(System.String h, System.Security.Cryptography.X509Certificates.X509Certificate c, System.Security.Cryptography.X509Certificates.X509Chain ch, Mono.Security.Interface.MonoSslPolicyErrors e)
    // Offset: 0x14A91C4
    bool $PublicToMono$b__0(::Il2CppString* h, System::Security::Cryptography::X509Certificates::X509Certificate* c, System::Security::Cryptography::X509Certificates::X509Chain* ch, Mono::Security::Interface::MonoSslPolicyErrors e);
    // public System.Void .ctor()
    // Offset: 0x14A91AC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CallbackHelpers::$$c__DisplayClass0_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass0_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CallbackHelpers::$$c__DisplayClass0_0*, creationType>()));
    }
  }; // Mono.Net.Security.Private.CallbackHelpers/<>c__DisplayClass0_0
  #pragma pack(pop)
  static check_size<sizeof(CallbackHelpers::$$c__DisplayClass0_0), 16 + sizeof(System::Net::Security::RemoteCertificateValidationCallback*)> __Mono_Net_Security_Private_CallbackHelpers_$$c__DisplayClass0_0SizeCheck;
  static_assert(sizeof(CallbackHelpers::$$c__DisplayClass0_0) == 0x18);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::Private::CallbackHelpers::$$c__DisplayClass0_0*, "Mono.Net.Security.Private", "CallbackHelpers/<>c__DisplayClass0_0");
