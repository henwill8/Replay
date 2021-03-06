// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
}
// Forward declaring namespace: System::Net::Security
namespace System::Net::Security {
  // Forward declaring type: RemoteCertificateValidationCallback
  class RemoteCertificateValidationCallback;
  // Forward declaring type: SslPolicyErrors
  struct SslPolicyErrors;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: ExecutionContext
  class ExecutionContext;
}
// Forward declaring namespace: System::Security::Cryptography::X509Certificates
namespace System::Security::Cryptography::X509Certificates {
  // Forward declaring type: X509Certificate
  class X509Certificate;
  // Forward declaring type: X509Chain
  class X509Chain;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.ServerCertValidationCallback
  // [] Offset: FFFFFFFF
  class ServerCertValidationCallback : public ::Il2CppObject {
    public:
    // Nested type: System::Net::ServerCertValidationCallback::CallbackContext
    class CallbackContext;
    // private readonly System.Net.Security.RemoteCertificateValidationCallback m_ValidationCallback
    // Size: 0x8
    // Offset: 0x10
    System::Net::Security::RemoteCertificateValidationCallback* m_ValidationCallback;
    // Field size check
    static_assert(sizeof(System::Net::Security::RemoteCertificateValidationCallback*) == 0x8);
    // private readonly System.Threading.ExecutionContext m_Context
    // Size: 0x8
    // Offset: 0x18
    System::Threading::ExecutionContext* m_Context;
    // Field size check
    static_assert(sizeof(System::Threading::ExecutionContext*) == 0x8);
    // Creating value type constructor for type: ServerCertValidationCallback
    ServerCertValidationCallback(System::Net::Security::RemoteCertificateValidationCallback* m_ValidationCallback_ = {}, System::Threading::ExecutionContext* m_Context_ = {}) noexcept : m_ValidationCallback{m_ValidationCallback_}, m_Context{m_Context_} {}
    // System.Void .ctor(System.Net.Security.RemoteCertificateValidationCallback validationCallback)
    // Offset: 0x135C910
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ServerCertValidationCallback* New_ctor(System::Net::Security::RemoteCertificateValidationCallback* validationCallback) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::ServerCertValidationCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ServerCertValidationCallback*, creationType>(validationCallback)));
    }
    // System.Void Callback(System.Object state)
    // Offset: 0x135C9AC
    void Callback(::Il2CppObject* state);
    // System.Boolean Invoke(System.Object request, System.Security.Cryptography.X509Certificates.X509Certificate certificate, System.Security.Cryptography.X509Certificates.X509Chain chain, System.Net.Security.SslPolicyErrors sslPolicyErrors)
    // Offset: 0x135CA5C
    bool Invoke(::Il2CppObject* request, System::Security::Cryptography::X509Certificates::X509Certificate* certificate, System::Security::Cryptography::X509Certificates::X509Chain* chain, System::Net::Security::SslPolicyErrors sslPolicyErrors);
  }; // System.Net.ServerCertValidationCallback
  #pragma pack(pop)
  static check_size<sizeof(ServerCertValidationCallback), 24 + sizeof(System::Threading::ExecutionContext*)> __System_Net_ServerCertValidationCallbackSizeCheck;
  static_assert(sizeof(ServerCertValidationCallback) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::ServerCertValidationCallback*, "System.Net", "ServerCertValidationCallback");
