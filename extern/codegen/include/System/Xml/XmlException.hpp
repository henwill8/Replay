// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.SystemException
#include "System/SystemException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
}
// Completed forward declares
// Type namespace: System.Xml
namespace System::Xml {
  // Size: 0xB0
  #pragma pack(push, 1)
  // Autogenerated type: System.Xml.XmlException
  // [] Offset: FFFFFFFF
  class XmlException : public System::SystemException {
    public:
    // private System.String res
    // Size: 0x8
    // Offset: 0x88
    ::Il2CppString* res;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String[] args
    // Size: 0x8
    // Offset: 0x90
    ::Array<::Il2CppString*>* args;
    // Field size check
    static_assert(sizeof(::Array<::Il2CppString*>*) == 0x8);
    // private System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0x98
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 linePosition
    // Size: 0x4
    // Offset: 0x9C
    int linePosition;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // [OptionalFieldAttribute] Offset: 0xCB5128
    // private System.String sourceUri
    // Size: 0x8
    // Offset: 0xA0
    ::Il2CppString* sourceUri;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.String message
    // Size: 0x8
    // Offset: 0xA8
    ::Il2CppString* message;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: XmlException
    XmlException(::Il2CppString* res_ = {}, ::Array<::Il2CppString*>* args_ = {}, int lineNumber_ = {}, int linePosition_ = {}, ::Il2CppString* sourceUri_ = {}, ::Il2CppString* message_ = {}) noexcept : res{res_}, args{args_}, lineNumber{lineNumber_}, linePosition{linePosition_}, sourceUri{sourceUri_}, message{message_} {}
    // public System.Void .ctor(System.String message, System.Exception innerException, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x1872F30
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* message, System::Exception* innerException, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(message, innerException, lineNumber, linePosition)));
    }
    // System.Void .ctor(System.String message, System.Exception innerException, System.Int32 lineNumber, System.Int32 linePosition, System.String sourceUri)
    // Offset: 0x1872F38
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* message, System::Exception* innerException, int lineNumber, int linePosition, ::Il2CppString* sourceUri) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(message, innerException, lineNumber, linePosition, sourceUri)));
    }
    // System.Void .ctor(System.String res, System.String[] args)
    // Offset: 0x1873188
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* res, ::Array<::Il2CppString*>* args) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, args)));
    }
    // System.Void .ctor(System.String res, System.String arg)
    // Offset: 0x186A970
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* res, ::Il2CppString* arg) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, arg)));
    }
    // System.Void .ctor(System.String res, System.String arg, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x186E728
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* res, ::Il2CppString* arg, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, arg, lineNumber, linePosition)));
    }
    // System.Void .ctor(System.String res, System.String[] args, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x186E890
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* res, ::Array<::Il2CppString*>* args, int lineNumber, int linePosition) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, args, lineNumber, linePosition)));
    }
    // System.Void .ctor(System.String res, System.String[] args, System.Exception innerException, System.Int32 lineNumber, System.Int32 linePosition, System.String sourceUri)
    // Offset: 0x187319C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* res, ::Array<::Il2CppString*>* args, System::Exception* innerException, int lineNumber, int linePosition, ::Il2CppString* sourceUri) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(res, args, innerException, lineNumber, linePosition, sourceUri)));
    }
    // static private System.String FormatUserMessage(System.String message, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x187308C
    static ::Il2CppString* FormatUserMessage(::Il2CppString* message, int lineNumber, int linePosition);
    // static private System.String CreateMessage(System.String res, System.String[] args, System.Int32 lineNumber, System.Int32 linePosition)
    // Offset: 0x1872B1C
    static ::Il2CppString* CreateMessage(::Il2CppString* res, ::Array<::Il2CppString*>* args, int lineNumber, int linePosition);
    // static System.String[] BuildCharExceptionArgs(System.String data, System.Int32 invCharIndex)
    // Offset: 0x186E354
    static ::Array<::Il2CppString*>* BuildCharExceptionArgs(::Il2CppString* data, int invCharIndex);
    // static System.String[] BuildCharExceptionArgs(System.Char invChar, System.Char nextChar)
    // Offset: 0x186EDCC
    static ::Array<::Il2CppString*>* BuildCharExceptionArgs(::Il2CppChar invChar, ::Il2CppChar nextChar);
    // protected System.Void .ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x18727A8
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Base method: System.Void Exception::.ctor(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(info, context)));
    }
    // public override System.Void GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    // Offset: 0x1872DDC
    // Implemented from: System.Exception
    // Base method: System.Void Exception::GetObjectData(System.Runtime.Serialization.SerializationInfo info, System.Runtime.Serialization.StreamingContext context)
    void GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // Creating proxy method: System_Runtime_Serialization_ISerializable_GetObjectData
    // Maps to method: GetObjectData
    void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo* info, System::Runtime::Serialization::StreamingContext context);
    // public System.Void .ctor()
    // Offset: 0x1872F04
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor()
    // Base method: System.Void Exception::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>()));
    }
    // public System.Void .ctor(System.String message)
    // Offset: 0x1872F1C
    // Implemented from: System.SystemException
    // Base method: System.Void SystemException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static XmlException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Xml::XmlException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<XmlException*, creationType>(message)));
    }
    // public override System.String get_Message()
    // Offset: 0x1873250
    // Implemented from: System.Exception
    // Base method: System.String Exception::get_Message()
    ::Il2CppString* get_Message();
  }; // System.Xml.XmlException
  #pragma pack(pop)
  static check_size<sizeof(XmlException), 168 + sizeof(::Il2CppString*)> __System_Xml_XmlExceptionSizeCheck;
  static_assert(sizeof(XmlException) == 0xB0);
}
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlException*, "System.Xml", "XmlException");
