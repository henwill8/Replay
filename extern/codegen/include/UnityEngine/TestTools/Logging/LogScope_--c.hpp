// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.Logging.LogScope
#include "UnityEngine/TestTools/Logging/LogScope.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Forward declaring namespace: UnityEngine::TestTools::Logging
namespace UnityEngine::TestTools::Logging {
  // Forward declaring type: LogEvent
  class LogEvent;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.Logging
namespace UnityEngine::TestTools::Logging {
  // Autogenerated type: UnityEngine.TestTools.Logging.LogScope/<>c
  class LogScope::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.TestTools.Logging.LogScope/<>c <>9
    static UnityEngine::TestTools::Logging::LogScope::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.TestTools.Logging.LogScope/<>c <>9
    static void _set_$$9(UnityEngine::TestTools::Logging::LogScope::$$c* value);
    // Get static field: static public System.Func`2<UnityEngine.TestTools.Logging.LogEvent,System.Boolean> <>9__53_0
    static System::Func_2<UnityEngine::TestTools::Logging::LogEvent*, bool>* _get_$$9__53_0();
    // Set static field: static public System.Func`2<UnityEngine.TestTools.Logging.LogEvent,System.Boolean> <>9__53_0
    static void _set_$$9__53_0(System::Func_2<UnityEngine::TestTools::Logging::LogEvent*, bool>* value);
    // static private System.Void .cctor()
    // Offset: 0x11918E4
    static void _cctor();
    // System.Boolean <NoUnexpectedReceived>b__53_0(UnityEngine.TestTools.Logging.LogEvent x)
    // Offset: 0x1191954
    bool $NoUnexpectedReceived$b__53_0(UnityEngine::TestTools::Logging::LogEvent* x);
    // public System.Void .ctor()
    // Offset: 0x119194C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LogScope::$$c* New_ctor();
  }; // UnityEngine.TestTools.Logging.LogScope/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::Logging::LogScope::$$c*, "UnityEngine.TestTools.Logging", "LogScope/<>c");
#pragma pack(pop)
