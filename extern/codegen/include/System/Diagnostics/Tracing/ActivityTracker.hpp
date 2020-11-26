// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Diagnostics::Tracing
namespace System::Diagnostics::Tracing {
  // Forward declaring type: EventActivityOptions
  struct EventActivityOptions;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: AsyncLocal`1<T>
  template<typename T>
  class AsyncLocal_1;
  // Forward declaring type: AsyncLocalValueChangedArgs`1<T>
  template<typename T>
  struct AsyncLocalValueChangedArgs_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Guid
  struct Guid;
}
// Completed forward declares
// Type namespace: System.Diagnostics.Tracing
namespace System::Diagnostics::Tracing {
  // Autogenerated type: System.Diagnostics.Tracing.ActivityTracker
  class ActivityTracker : public ::Il2CppObject {
    public:
    // Nested type: System::Diagnostics::Tracing::ActivityTracker::ActivityInfo
    class ActivityInfo;
    // private System.Threading.AsyncLocal`1<System.Diagnostics.Tracing.ActivityTracker/ActivityInfo> m_current
    // Offset: 0x10
    System::Threading::AsyncLocal_1<System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*>* m_current;
    // private System.Boolean m_checkedForEnable
    // Offset: 0x18
    bool m_checkedForEnable;
    // Get static field: static private System.Diagnostics.Tracing.ActivityTracker s_activityTrackerInstance
    static System::Diagnostics::Tracing::ActivityTracker* _get_s_activityTrackerInstance();
    // Set static field: static private System.Diagnostics.Tracing.ActivityTracker s_activityTrackerInstance
    static void _set_s_activityTrackerInstance(System::Diagnostics::Tracing::ActivityTracker* value);
    // Get static field: static private System.Int64 m_nextId
    static int64_t _get_m_nextId();
    // Set static field: static private System.Int64 m_nextId
    static void _set_m_nextId(int64_t value);
    // public System.Void OnStart(System.String providerName, System.String activityName, System.Int32 task, ref System.Guid activityId, ref System.Guid relatedActivityId, System.Diagnostics.Tracing.EventActivityOptions options)
    // Offset: 0x12C3684
    void OnStart(::Il2CppString* providerName, ::Il2CppString* activityName, int task, System::Guid& activityId, System::Guid& relatedActivityId, System::Diagnostics::Tracing::EventActivityOptions options);
    // public System.Void OnStop(System.String providerName, System.String activityName, System.Int32 task, ref System.Guid activityId)
    // Offset: 0x12C3CF0
    void OnStop(::Il2CppString* providerName, ::Il2CppString* activityName, int task, System::Guid& activityId);
    // public System.Void Enable()
    // Offset: 0x12C3A40
    void Enable();
    // static public System.Diagnostics.Tracing.ActivityTracker get_Instance()
    // Offset: 0x12C40A4
    static System::Diagnostics::Tracing::ActivityTracker* get_Instance();
    // private System.Diagnostics.Tracing.ActivityTracker/ActivityInfo FindActiveActivity(System.String name, System.Diagnostics.Tracing.ActivityTracker/ActivityInfo startLocation)
    // Offset: 0x12C3CA4
    System::Diagnostics::Tracing::ActivityTracker::ActivityInfo* FindActiveActivity(::Il2CppString* name, System::Diagnostics::Tracing::ActivityTracker::ActivityInfo* startLocation);
    // private System.String NormalizeActivityName(System.String providerName, System.String activityName, System.Int32 task)
    // Offset: 0x12C3B0C
    ::Il2CppString* NormalizeActivityName(::Il2CppString* providerName, ::Il2CppString* activityName, int task);
    // private System.Void ActivityChanging(System.Threading.AsyncLocalValueChangedArgs`1<System.Diagnostics.Tracing.ActivityTracker/ActivityInfo> args)
    // Offset: 0x12C410C
    void ActivityChanging(System::Threading::AsyncLocalValueChangedArgs_1<System::Diagnostics::Tracing::ActivityTracker::ActivityInfo*> args);
    // static private System.Void .cctor()
    // Offset: 0x12C43FC
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x12C43F4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static ActivityTracker* New_ctor();
  }; // System.Diagnostics.Tracing.ActivityTracker
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::Tracing::ActivityTracker*, "System.Diagnostics.Tracing", "ActivityTracker");
#pragma pack(pop)
