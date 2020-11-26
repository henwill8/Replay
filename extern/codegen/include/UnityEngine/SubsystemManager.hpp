// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.SubsystemManager
  class SubsystemManager : public ::Il2CppObject {
    public:
    // Get static field: static private System.Action reloadSubsytemsStarted
    static System::Action* _get_reloadSubsytemsStarted();
    // Set static field: static private System.Action reloadSubsytemsStarted
    static void _set_reloadSubsytemsStarted(System::Action* value);
    // Get static field: static private System.Action reloadSubsytemsCompleted
    static System::Action* _get_reloadSubsytemsCompleted();
    // Set static field: static private System.Action reloadSubsytemsCompleted
    static void _set_reloadSubsytemsCompleted(System::Action* value);
    // static private System.Void .cctor()
    // Offset: 0x1A0819C
    static void _cctor();
    // static System.Void ReportSingleSubsystemAnalytics(System.String id)
    // Offset: 0x1A07750
    static void ReportSingleSubsystemAnalytics(::Il2CppString* id);
    // static System.Void StaticConstructScriptingClassMap()
    // Offset: 0x1A081D0
    static void StaticConstructScriptingClassMap();
    // static private System.Void Internal_ReloadSubsystemsStarted()
    // Offset: 0x1A08204
    static void Internal_ReloadSubsystemsStarted();
    // static private System.Void Internal_ReloadSubsystemsCompleted()
    // Offset: 0x1A082AC
    static void Internal_ReloadSubsystemsCompleted();
  }; // UnityEngine.SubsystemManager
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::SubsystemManager*, "UnityEngine", "SubsystemManager");
#pragma pack(pop)
