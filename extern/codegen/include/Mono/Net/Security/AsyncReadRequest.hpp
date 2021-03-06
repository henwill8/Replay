// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Mono.Net.Security.AsyncReadOrWriteRequest
#include "Mono/Net/Security/AsyncReadOrWriteRequest.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Mono::Net::Security
namespace Mono::Net::Security {
  // Forward declaring type: MobileAuthenticatedStream
  class MobileAuthenticatedStream;
  // Forward declaring type: AsyncOperationStatus
  struct AsyncOperationStatus;
}
// Completed forward declares
// Type namespace: Mono.Net.Security
namespace Mono::Net::Security {
  // Size: 0x44
  #pragma pack(push, 1)
  // Autogenerated type: Mono.Net.Security.AsyncReadRequest
  // [] Offset: FFFFFFFF
  class AsyncReadRequest : public Mono::Net::Security::AsyncReadOrWriteRequest {
    public:
    // Creating value type constructor for type: AsyncReadRequest
    AsyncReadRequest() noexcept {}
    // public System.Void .ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean sync, System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    // Offset: 0x14A29C4
    // Implemented from: Mono.Net.Security.AsyncReadOrWriteRequest
    // Base method: System.Void AsyncReadOrWriteRequest::.ctor(Mono.Net.Security.MobileAuthenticatedStream parent, System.Boolean sync, System.Byte[] buffer, System.Int32 offset, System.Int32 size)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AsyncReadRequest* New_ctor(Mono::Net::Security::MobileAuthenticatedStream* parent, bool sync, ::Array<uint8_t>* buffer, int offset, int size) {
      static auto ___internal__logger = ::Logger::get().WithContext("Mono::Net::Security::AsyncReadRequest::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AsyncReadRequest*, creationType>(parent, sync, buffer, offset, size)));
    }
    // protected override Mono.Net.Security.AsyncOperationStatus Run(Mono.Net.Security.AsyncOperationStatus status)
    // Offset: 0x14A29CC
    // Implemented from: Mono.Net.Security.AsyncProtocolRequest
    // Base method: Mono.Net.Security.AsyncOperationStatus AsyncProtocolRequest::Run(Mono.Net.Security.AsyncOperationStatus status)
    Mono::Net::Security::AsyncOperationStatus Run(Mono::Net::Security::AsyncOperationStatus status);
  }; // Mono.Net.Security.AsyncReadRequest
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(Mono::Net::Security::AsyncReadRequest*, "Mono.Net.Security", "AsyncReadRequest");
