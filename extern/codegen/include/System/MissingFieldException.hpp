// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.MissingMemberException
#include "System/MissingMemberException.hpp"
// Completed includes
// Begin forward declares
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
  // Autogenerated type: System.MissingFieldException
  class MissingFieldException : public System::MissingMemberException {
    public:
    // public System.Void .ctor(System.String className, System.String fieldName)
    // Offset: 0x13B5DF8
    static MissingFieldException* New_ctor(::Il2CppString* className, ::Il2CppString* fieldName);
    // public System.Void .ctor()
    // Offset: 0x13B5914
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor()
    // Base method: System.Void MemberAccessException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissingFieldException* New_ctor();
    // public System.Void .ctor(System.String message)
    // Offset: 0x13B59D0
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor(System.String message)
    // Base method: System.Void MemberAccessException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    static MissingFieldException* New_ctor(::Il2CppString* message);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x13B5A00
    // Implemented from: System.MissingMemberException
    // Base method: System.Void MissingMemberException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void MemberAccessException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    static MissingFieldException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public override System.String get_Message()
    // Offset: 0x13B5B64
    // Implemented from: System.MissingMemberException
    // Base method: System.String MissingMemberException::get_Message()
    ::Il2CppString* get_Message();
  }; // System.MissingFieldException
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::MissingFieldException*, "System", "MissingFieldException");
#pragma pack(pop)