// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.InvalidOperationException
#include "System/InvalidOperationException.hpp"
// Including type: System.Net.WebExceptionStatus
#include "System/Net/WebExceptionStatus.hpp"
// Including type: System.Net.WebExceptionInternalStatus
#include "System/Net/WebExceptionInternalStatus.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Net
namespace System::Net {
  // Forward declaring type: WebResponse
  class WebResponse;
}
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System.Net
namespace System::Net {
  // Size: 0x9C
  #pragma pack(push, 1)
  // Autogenerated type: System.Net.WebException
  // [] Offset: FFFFFFFF
  class WebException : public System::InvalidOperationException {
    public:
    // private System.Net.WebExceptionStatus m_Status
    // Size: 0x4
    // Offset: 0x88
    System::Net::WebExceptionStatus m_Status;
    // Field size check
    static_assert(sizeof(System::Net::WebExceptionStatus) == 0x4);
    // Padding between fields: m_Status and: m_Response
    char __padding0[0x4] = {};
    // private System.Net.WebResponse m_Response
    // Size: 0x8
    // Offset: 0x90
    System::Net::WebResponse* m_Response;
    // Field size check
    static_assert(sizeof(System::Net::WebResponse*) == 0x8);
    // private System.Net.WebExceptionInternalStatus m_InternalStatus
    // Size: 0x4
    // Offset: 0x98
    System::Net::WebExceptionInternalStatus m_InternalStatus;
    // Field size check
    static_assert(sizeof(System::Net::WebExceptionInternalStatus) == 0x4);
    // Creating value type constructor for type: WebException
    WebException(System::Net::WebExceptionStatus m_Status_ = {}, System::Net::WebResponse* m_Response_ = {}, System::Net::WebExceptionInternalStatus m_InternalStatus_ = {}) noexcept : m_Status{m_Status_}, m_Response{m_Response_}, m_InternalStatus{m_InternalStatus_} {}
    // public System.Void .ctor(System.String message, System.Net.WebExceptionStatus status)
    // Offset: 0x143A908
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::Il2CppString* message, System::Net::WebExceptionStatus status) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, status)));
    }
    // System.Void .ctor(System.String message, System.Net.WebExceptionStatus status, System.Net.WebExceptionInternalStatus internalStatus, System.Exception innerException)
    // Offset: 0x143FE84
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::Il2CppString* message, System::Net::WebExceptionStatus status, System::Net::WebExceptionInternalStatus internalStatus, System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, status, internalStatus, innerException)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException, System.Net.WebExceptionStatus status, System.Net.WebResponse response)
    // Offset: 0x14395C0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::Il2CppString* message, System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, innerException, status, response)));
    }
    // System.Void .ctor(System.String message, System.String data, System.Exception innerException, System.Net.WebExceptionStatus status, System.Net.WebResponse response)
    // Offset: 0x14406E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::Il2CppString* message, ::Il2CppString* data, System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, data, innerException, status, response)));
    }
    // System.Void .ctor(System.String message, System.Exception innerException, System.Net.WebExceptionStatus status, System.Net.WebResponse response, System.Net.WebExceptionInternalStatus internalStatus)
    // Offset: 0x14406D0
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::Il2CppString* message, System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response, System::Net::WebExceptionInternalStatus internalStatus) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, innerException, status, response, internalStatus)));
    }
    // System.Void .ctor(System.String message, System.String data, System.Exception innerException, System.Net.WebExceptionStatus status, System.Net.WebResponse response, System.Net.WebExceptionInternalStatus internalStatus)
    // Offset: 0x14407C8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::Il2CppString* message, ::Il2CppString* data, System::Exception* innerException, System::Net::WebExceptionStatus status, System::Net::WebResponse* response, System::Net::WebExceptionInternalStatus internalStatus) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, data, innerException, status, response, internalStatus)));
    }
    // public System.Net.WebExceptionStatus get_Status()
    // Offset: 0x14408D8
    System::Net::WebExceptionStatus get_Status();
    // public System.Void .ctor()
    // Offset: 0x144069C
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x14406AC
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message)));
    }
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x14406C0
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(::Il2CppString* message, System::Exception* innerException) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(message, innerException)));
    }
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x14408B4
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static WebException* New_ctor(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Net::WebException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<WebException*, creationType>(serializationInfo, streamingContext)));
    }
    // private System.Void System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x14408C4
    // Implemented from: System.Runtime.Serialization.ISerializable
    // Base method: System.Void ISerializable::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    // Offset: 0x14408D0
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo serializationInfo, System.Runtime.Serialization.StreamingContext streamingContext)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    // Skipping redundant proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
  }; // System.Net.WebException
  #pragma pack(pop)
  static check_size<sizeof(WebException), 152 + sizeof(System::Net::WebExceptionInternalStatus)> __System_Net_WebExceptionSizeCheck;
  static_assert(sizeof(WebException) == 0x9C);
}
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebException*, "System.Net", "WebException");
