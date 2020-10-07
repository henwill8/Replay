// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.Task
#include "System/Threading/Tasks/Task.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: TimerCallback
  class TimerCallback;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.Task/<>c
  class Task::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly System.Threading.Tasks.Task/<>c <>9
    static System::Threading::Tasks::Task::$$c* _get_$$9();
    // Set static field: static public readonly System.Threading.Tasks.Task/<>c <>9
    static void _set_$$9(System::Threading::Tasks::Task::$$c* value);
    // Get static field: static public System.Action`1<System.Object> <>9__276_0
    static System::Action_1<::Il2CppObject*>* _get_$$9__276_0();
    // Set static field: static public System.Action`1<System.Object> <>9__276_0
    static void _set_$$9__276_0(System::Action_1<::Il2CppObject*>* value);
    // Get static field: static public System.Threading.TimerCallback <>9__276_1
    static System::Threading::TimerCallback* _get_$$9__276_1();
    // Set static field: static public System.Threading.TimerCallback <>9__276_1
    static void _set_$$9__276_1(System::Threading::TimerCallback* value);
    // static private System.Void .cctor()
    // Offset: 0xCE6ED0
    static void _cctor();
    // System.Void <Delay>b__276_0(System.Object state)
    // Offset: 0xCE6F40
    void $Delay$b__276_0(::Il2CppObject* state);
    // System.Void <Delay>b__276_1(System.Object state)
    // Offset: 0xCE70BC
    void $Delay$b__276_1(::Il2CppObject* state);
    // System.Threading.Tasks.Task/ContingentProperties <.cctor>b__295_0()
    // Offset: 0xCE7124
    System::Threading::Tasks::Task::ContingentProperties* $_cctor$b__295_0();
    // System.Boolean <.cctor>b__295_1(System.Threading.Tasks.Task t)
    // Offset: 0xCE7190
    bool $_cctor$b__295_1(System::Threading::Tasks::Task* t);
    // System.Boolean <.cctor>b__295_2(System.Object tc)
    // Offset: 0xCE71BC
    bool $_cctor$b__295_2(::Il2CppObject* tc);
    // public System.Void .ctor()
    // Offset: 0xCE6F38
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static Task::$$c* New_ctor();
  }; // System.Threading.Tasks.Task/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::Task::$$c*, "System.Threading.Tasks", "Task/<>c");
#pragma pack(pop)
