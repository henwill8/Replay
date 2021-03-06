// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: Mono.Security.Interface
namespace Mono::Security::Interface {
  // Size: 0x4
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Security.Interface.MonoSslPolicyErrors
  // [] Offset: FFFFFFFF
  // [FlagsAttribute] Offset: FFFFFFFF
  struct MonoSslPolicyErrors/*, public System::Enum*/ {
    public:
    // public System.Int32 value__
    // Size: 0x4
    // Offset: 0x0
    int value;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: MonoSslPolicyErrors
    constexpr MonoSslPolicyErrors(int value_ = {}) noexcept : value{value_} {}
    // Creating interface conversion operator: operator System::Enum
    operator System::Enum() noexcept {
      return *reinterpret_cast<System::Enum*>(this);
    }
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public Mono.Security.Interface.MonoSslPolicyErrors None
    static constexpr const int None = 0;
    // Get static field: static public Mono.Security.Interface.MonoSslPolicyErrors None
    static Mono::Security::Interface::MonoSslPolicyErrors _get_None();
    // Set static field: static public Mono.Security.Interface.MonoSslPolicyErrors None
    static void _set_None(Mono::Security::Interface::MonoSslPolicyErrors value);
    // static field const value: static public Mono.Security.Interface.MonoSslPolicyErrors RemoteCertificateNotAvailable
    static constexpr const int RemoteCertificateNotAvailable = 1;
    // Get static field: static public Mono.Security.Interface.MonoSslPolicyErrors RemoteCertificateNotAvailable
    static Mono::Security::Interface::MonoSslPolicyErrors _get_RemoteCertificateNotAvailable();
    // Set static field: static public Mono.Security.Interface.MonoSslPolicyErrors RemoteCertificateNotAvailable
    static void _set_RemoteCertificateNotAvailable(Mono::Security::Interface::MonoSslPolicyErrors value);
    // static field const value: static public Mono.Security.Interface.MonoSslPolicyErrors RemoteCertificateNameMismatch
    static constexpr const int RemoteCertificateNameMismatch = 2;
    // Get static field: static public Mono.Security.Interface.MonoSslPolicyErrors RemoteCertificateNameMismatch
    static Mono::Security::Interface::MonoSslPolicyErrors _get_RemoteCertificateNameMismatch();
    // Set static field: static public Mono.Security.Interface.MonoSslPolicyErrors RemoteCertificateNameMismatch
    static void _set_RemoteCertificateNameMismatch(Mono::Security::Interface::MonoSslPolicyErrors value);
    // static field const value: static public Mono.Security.Interface.MonoSslPolicyErrors RemoteCertificateChainErrors
    static constexpr const int RemoteCertificateChainErrors = 4;
    // Get static field: static public Mono.Security.Interface.MonoSslPolicyErrors RemoteCertificateChainErrors
    static Mono::Security::Interface::MonoSslPolicyErrors _get_RemoteCertificateChainErrors();
    // Set static field: static public Mono.Security.Interface.MonoSslPolicyErrors RemoteCertificateChainErrors
    static void _set_RemoteCertificateChainErrors(Mono::Security::Interface::MonoSslPolicyErrors value);
  }; // Mono.Security.Interface.MonoSslPolicyErrors
  #pragma pack(pop)
  static check_size<sizeof(MonoSslPolicyErrors), 0 + sizeof(int)> __Mono_Security_Interface_MonoSslPolicyErrorsSizeCheck;
  static_assert(sizeof(MonoSslPolicyErrors) == 0x4);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::Interface::MonoSslPolicyErrors, "Mono.Security.Interface", "MonoSslPolicyErrors");
