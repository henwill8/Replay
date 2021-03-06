// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Exception
#include "System/Exception.hpp"
// Including type: Mono.Security.Interface.AlertDescription
#include "Mono/Security/Interface/AlertDescription.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Security::Interface
namespace Mono::Security::Interface {
  // Forward declaring type: Alert
  class Alert;
}
// Completed forward declares
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.TlsException
  // [] Offset: FFFFFFFF
  class TlsException : public System::Exception {
    public:
    // private Mono.Security.Interface.Alert alert
    // Size: 0x8
    // Offset: 0x88
    Mono::Security::Interface::Alert* alert;
    // Field size check
    static_assert(sizeof(Mono::Security::Interface::Alert*) == 0x8);
    // Creating value type constructor for type: TlsException
    TlsException(Mono::Security::Interface::Alert* alert_ = {}) noexcept : alert{alert_} {}
    // Creating conversion operator: operator Mono::Security::Interface::Alert*
    constexpr operator Mono::Security::Interface::Alert*() const noexcept {
      return alert;
    }
    // public System.Void .ctor(Mono.Security.Interface.Alert alert, System.String message)
    // Offset: 0x1BF109C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsException* New_ctor(Mono::Security::Interface::Alert* alert, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Interface::TlsException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsException*, creationType>(alert, message)));
    }
    // public System.Void .ctor(Mono.Security.Interface.AlertDescription description, System.String message)
    // Offset: 0x1BF1128
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TlsException* New_ctor(Mono::Security::Interface::AlertDescription description, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Security::Interface::TlsException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TlsException*, creationType>(description, message)));
    }
  }; // Mono.Security.Interface.TlsException
  #pragma pack(pop)
  static check_size<sizeof(TlsException), 136 + sizeof(Mono::Security::Interface::Alert*)> __Mono_Security_Interface_TlsExceptionSizeCheck;
  static_assert(sizeof(TlsException) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::TlsException*, "Mono.Security.Interface", "TlsException");
