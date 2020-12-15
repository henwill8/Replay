// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.LogType
#include "UnityEngine/LogType.hpp"
// Completed includes
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Autogenerated type: UnityEngine.TestTools.Logging.LogEvent
  class LogEvent : public ::Il2CppObject {
    public:
    // private System.String <Message>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Message;
    // private System.String <StackTrace>k__BackingField
    // Offset: 0x18
    ::Il2CppString* StackTrace;
    // private UnityEngine.LogType <LogType>k__BackingField
    // Offset: 0x20
    UnityEngine::LogType LogType;
    // private System.Boolean <IsHandled>k__BackingField
    // Offset: 0x24
    bool IsHandled;
    // public System.String get_Message()
    // Offset: 0x119075C
    ::Il2CppString* get_Message();
    // public System.Void set_Message(System.String value)
    // Offset: 0x1190764
    void set_Message(::Il2CppString* value);
    // public System.String get_StackTrace()
    // Offset: 0x119076C
    ::Il2CppString* get_StackTrace();
    // public System.Void set_StackTrace(System.String value)
    // Offset: 0x1190774
    void set_StackTrace(::Il2CppString* value);
    // public UnityEngine.LogType get_LogType()
    // Offset: 0x119077C
    UnityEngine::LogType get_LogType();
    // public System.Void set_LogType(UnityEngine.LogType value)
    // Offset: 0x1190784
    void set_LogType(UnityEngine::LogType value);
    // public System.Boolean get_IsHandled()
    // Offset: 0x119078C
    bool get_IsHandled();
    // public System.Void set_IsHandled(System.Boolean value)
    // Offset: 0x1190794
    void set_IsHandled(bool value);
    // public override System.String ToString()
    // Offset: 0x11907A0
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x1190824
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LogEvent* New_ctor();
  }; // UnityEngine.TestTools.Logging.LogEvent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Logging::LogEvent*, "UnityEngine.TestTools.Logging", "LogEvent");
#pragma pack(pop)