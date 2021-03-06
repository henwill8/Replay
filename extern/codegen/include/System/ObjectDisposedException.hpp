// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.InvalidOperationException
#include "System/InvalidOperationException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Size: 0x90
  #pragma pack(push, 1)
  // Autogenerated type: System.ObjectDisposedException
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CA80B8
  class ObjectDisposedException : public System::InvalidOperationException {
    public:
    // private System.String objectName
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* objectName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: ObjectDisposedException
    ObjectDisposedException(::Il2CppString* objectName_ = {}) noexcept : objectName{objectName_} {}
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return objectName;
    }
    // public System.Void .ctor(System.String objectName, System.String message)
    // Offset: 0x1B2120C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDisposedException* New_ctor(::Il2CppString* objectName, ::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ObjectDisposedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDisposedException*, creationType>(objectName, message)));
    }
    // public System.String get_ObjectName()
    // Offset: 0x1B213E4
    ::Il2CppString* get_ObjectName();
    // private System.Void .ctor()
    // Offset: 0x1B211AC
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDisposedException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ObjectDisposedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDisposedException*, creationType>()));
    }
    // public System.Void .ctor(System.String objectName)
    // Offset: 0x1B21258
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.String objectName)
    // Base method: System.Void SystemException::.ctor(System.String objectName)
    // Base method: System.Void Exception::.ctor(System.String objectName)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDisposedException* New_ctor(::Il2CppString* objectName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ObjectDisposedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDisposedException*, creationType>(objectName)));
    }
    // public override System.String get_Message()
    // Offset: 0x1B212C4
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B21460
    // Implemented from: System.InvalidOperationException
    // Base method: System.Void InvalidOperationException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ObjectDisposedException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::ObjectDisposedException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ObjectDisposedException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1B21500
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.ObjectDisposedException
  #pragma pack(pop)
  static check_size<sizeof(ObjectDisposedException), 136 + sizeof(::Il2CppString*)> __System_ObjectDisposedExceptionSizeCheck;
  static_assert(sizeof(ObjectDisposedException) == 0x90);
}
DEFINE_IL2CPP_ARG_TYPE(System::ObjectDisposedException*, "System", "ObjectDisposedException");
