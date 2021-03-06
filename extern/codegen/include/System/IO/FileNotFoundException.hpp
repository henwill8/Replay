// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.IO.IOException
#include "System/IO/IOException.hpp"
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
// Type namespace: System.IO
namespace System::IO {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: System.IO.FileNotFoundException
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CA9EEC
  class FileNotFoundException : public System::IO::IOException {
    public:
    // private System.String _fileName
    // Size: 0x8
    // Offset: 0x90
    ::Il2CppString* fileName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String _fusionLog
    // Size: 0x8
    // Offset: 0x98
    ::Il2CppString* fusionLog;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: FileNotFoundException
    FileNotFoundException(::Il2CppString* fileName_ = {}, ::Il2CppString* fusionLog_ = {}) noexcept : fileName{fileName_}, fusionLog{fusionLog_} {}
    // Deleting conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept = delete;
    // public System.Void .ctor(System.String message, System.String fileName)
    // Offset: 0x174CE1C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileNotFoundException* New_ctor(::Il2CppString* message, ::Il2CppString* fileName) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileNotFoundException*, creationType>(message, fileName)));
    }
    // private System.Void SetMessageField()
    // Offset: 0x174EAB8
    void SetMessageField();
    // public System.String get_FusionLog()
    // Offset: 0x174EF78
    ::Il2CppString* get_FusionLog();
    // public System.Void .ctor()
    // Offset: 0x174E9C4
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor()
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileNotFoundException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileNotFoundException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x174EA4C
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.String message)
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileNotFoundException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileNotFoundException*, creationType>(message)));
    }
    // public override System.String get_Message()
    // Offset: 0x174EA94
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
    // public override System.String ToString()
    // Offset: 0x174EB54
    // Implemented from: System.Exception
    // Base method: System.String Exception::ToString()
    ::Il2CppString* ToString();
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x174EE20
    // Implemented from: System.IO.IOException
    // Base method: System.Void IOException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FileNotFoundException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::IO::FileNotFoundException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FileNotFoundException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x174EF80
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
  }; // System.IO.FileNotFoundException
  #pragma pack(pop)
  static check_size<sizeof(FileNotFoundException), 152 + sizeof(::Il2CppString*)> __System_IO_FileNotFoundExceptionSizeCheck;
  static_assert(sizeof(FileNotFoundException) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(System::IO::FileNotFoundException*, "System.IO", "FileNotFoundException");
