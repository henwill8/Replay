// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodBase
  class MethodBase;
}
// Completed forward declares
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x48
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: System.Diagnostics.StackFrame
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CAE4B4
  // [MonoTODOAttribute] Offset: CAE4B4
  class StackFrame : public ::Il2CppObject {
    public:
    // private System.Int32 ilOffset
    // Size: 0x4
    // Offset: 0x10
    int ilOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 nativeOffset
    // Size: 0x4
    // Offset: 0x14
    int nativeOffset;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int64 methodAddress
    // Size: 0x8
    // Offset: 0x18
    int64_t methodAddress;
    // Field size check
    static_assert(sizeof(int64_t) == 0x8);
    // private System.UInt32 methodIndex
    // Size: 0x4
    // Offset: 0x20
    uint methodIndex;
    // Field size check
    static_assert(sizeof(uint) == 0x4);
    // Padding between fields: methodIndex and: methodBase
    char __padding3[0x4] = {};
    // private System.Reflection.MethodBase methodBase
    // Size: 0x8
    // Offset: 0x28
    System::Reflection::MethodBase* methodBase;
    // Field size check
    static_assert(sizeof(System::Reflection::MethodBase*) == 0x8);
    // private System.String fileName
    // Size: 0x8
    // Offset: 0x30
    ::Il2CppString* fileName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Int32 lineNumber
    // Size: 0x4
    // Offset: 0x38
    int lineNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Int32 columnNumber
    // Size: 0x4
    // Offset: 0x3C
    int columnNumber;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.String internalMethodName
    // Size: 0x8
    // Offset: 0x40
    ::Il2CppString* internalMethodName;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // Creating value type constructor for type: StackFrame
    StackFrame(int ilOffset_ = {}, int nativeOffset_ = {}, int64_t methodAddress_ = {}, uint methodIndex_ = {}, System::Reflection::MethodBase* methodBase_ = {}, ::Il2CppString* fileName_ = {}, int lineNumber_ = {}, int columnNumber_ = {}, ::Il2CppString* internalMethodName_ = {}) noexcept : ilOffset{ilOffset_}, nativeOffset{nativeOffset_}, methodAddress{methodAddress_}, methodIndex{methodIndex_}, methodBase{methodBase_}, fileName{fileName_}, lineNumber{lineNumber_}, columnNumber{columnNumber_}, internalMethodName{internalMethodName_} {}
    // static field const value: static public System.Int32 OFFSET_UNKNOWN
    static constexpr const int OFFSET_UNKNOWN = -1;
    // Get static field: static public System.Int32 OFFSET_UNKNOWN
    static int _get_OFFSET_UNKNOWN();
    // Set static field: static public System.Int32 OFFSET_UNKNOWN
    static void _set_OFFSET_UNKNOWN(int value);
    // static private System.Boolean get_frame_info(System.Int32 skip, System.Boolean needFileInfo, out System.Reflection.MethodBase method, out System.Int32 iloffset, out System.Int32 native_offset, out System.String file, out System.Int32 line, out System.Int32 column)
    // Offset: 0x1A0F420
    static bool get_frame_info(int skip, bool needFileInfo, System::Reflection::MethodBase*& method, int& iloffset, int& native_offset, ::Il2CppString*& file, int& line, int& column);
    // public System.Void .ctor(System.Int32 skipFrames, System.Boolean fNeedFileInfo)
    // Offset: 0x1A0F484
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackFrame* New_ctor(int skipFrames, bool fNeedFileInfo) {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::StackFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackFrame*, creationType>(skipFrames, fNeedFileInfo)));
    }
    // public System.Int32 GetFileLineNumber()
    // Offset: 0x1A0F4F0
    int GetFileLineNumber();
    // public System.String GetFileName()
    // Offset: 0x1A0F4F8
    ::Il2CppString* GetFileName();
    // System.String GetSecureFileName()
    // Offset: 0x1A0F500
    ::Il2CppString* GetSecureFileName();
    // public System.Int32 GetILOffset()
    // Offset: 0x1A0F5DC
    int GetILOffset();
    // public System.Reflection.MethodBase GetMethod()
    // Offset: 0x1A0F5E4
    System::Reflection::MethodBase* GetMethod();
    // public System.Int32 GetNativeOffset()
    // Offset: 0x1A0F5EC
    int GetNativeOffset();
    // System.Int64 GetMethodAddress()
    // Offset: 0x1A0F5F4
    int64_t GetMethodAddress();
    // System.UInt32 GetMethodIndex()
    // Offset: 0x1A0F5FC
    uint GetMethodIndex();
    // System.String GetInternalMethodName()
    // Offset: 0x1A0F604
    ::Il2CppString* GetInternalMethodName();
    // public System.Void .ctor()
    // Offset: 0x1A0F428
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static StackFrame* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::StackFrame::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<StackFrame*, creationType>()));
    }
    // public override System.String ToString()
    // Offset: 0x1A0F60C
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
  }; // System.Diagnostics.StackFrame
  #pragma pack(pop)
  static check_size<sizeof(StackFrame), 64 + sizeof(::Il2CppString*)> __System_Diagnostics_StackFrameSizeCheck;
  static_assert(sizeof(StackFrame) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::StackFrame*, "System.Diagnostics", "StackFrame");
