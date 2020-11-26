// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.SystemException
#include "System/SystemException.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Exception because it is already included!
}
// Forward declaring namespace: System::Runtime::Serialization
namespace System::Runtime::Serialization {
  // Forward declaring type: SerializationInfo
  class SerializationInfo;
  // Forward declaring type: StreamingContext
  struct StreamingContext;
}
// Completed forward declares
// Type namespace: System
namespace System {
  // Autogenerated type: System.FormatException
  class FormatException : public System::SystemException {
    public:
    // public System.Void .ctor()
    // Offset: 0x112BA60
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static FormatException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x1127C34
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static FormatException* New_ctor(::Il2CppString* message);
    // public System.Void .ctor(System.String message, System.Exception innerException)
    // Offset: 0x112BAC4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message, System.Exception innerException)
    // Base method: System.Void Exception::.ctor(System.String message, System.Exception innerException)
    static FormatException* New_ctor(::Il2CppString* message, System::Exception* innerException);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x112BAF4
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static FormatException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.FormatException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::FormatException*, "System", "FormatException");
#pragma pack(pop)
