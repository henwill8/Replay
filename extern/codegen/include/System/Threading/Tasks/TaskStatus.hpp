// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.TaskStatus
  struct TaskStatus : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: TaskStatus
    constexpr TaskStatus(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public System.Threading.Tasks.TaskStatus Created
    static constexpr const int Created = 0;
    // Get static field: static public System.Threading.Tasks.TaskStatus Created
    static System::Threading::Tasks::TaskStatus _get_Created();
    // Set static field: static public System.Threading.Tasks.TaskStatus Created
    static void _set_Created(System::Threading::Tasks::TaskStatus value);
    // static field const value: static public System.Threading.Tasks.TaskStatus WaitingForActivation
    static constexpr const int WaitingForActivation = 1;
    // Get static field: static public System.Threading.Tasks.TaskStatus WaitingForActivation
    static System::Threading::Tasks::TaskStatus _get_WaitingForActivation();
    // Set static field: static public System.Threading.Tasks.TaskStatus WaitingForActivation
    static void _set_WaitingForActivation(System::Threading::Tasks::TaskStatus value);
    // static field const value: static public System.Threading.Tasks.TaskStatus WaitingToRun
    static constexpr const int WaitingToRun = 2;
    // Get static field: static public System.Threading.Tasks.TaskStatus WaitingToRun
    static System::Threading::Tasks::TaskStatus _get_WaitingToRun();
    // Set static field: static public System.Threading.Tasks.TaskStatus WaitingToRun
    static void _set_WaitingToRun(System::Threading::Tasks::TaskStatus value);
    // static field const value: static public System.Threading.Tasks.TaskStatus Running
    static constexpr const int Running = 3;
    // Get static field: static public System.Threading.Tasks.TaskStatus Running
    static System::Threading::Tasks::TaskStatus _get_Running();
    // Set static field: static public System.Threading.Tasks.TaskStatus Running
    static void _set_Running(System::Threading::Tasks::TaskStatus value);
    // static field const value: static public System.Threading.Tasks.TaskStatus WaitingForChildrenToComplete
    static constexpr const int WaitingForChildrenToComplete = 4;
    // Get static field: static public System.Threading.Tasks.TaskStatus WaitingForChildrenToComplete
    static System::Threading::Tasks::TaskStatus _get_WaitingForChildrenToComplete();
    // Set static field: static public System.Threading.Tasks.TaskStatus WaitingForChildrenToComplete
    static void _set_WaitingForChildrenToComplete(System::Threading::Tasks::TaskStatus value);
    // static field const value: static public System.Threading.Tasks.TaskStatus RanToCompletion
    static constexpr const int RanToCompletion = 5;
    // Get static field: static public System.Threading.Tasks.TaskStatus RanToCompletion
    static System::Threading::Tasks::TaskStatus _get_RanToCompletion();
    // Set static field: static public System.Threading.Tasks.TaskStatus RanToCompletion
    static void _set_RanToCompletion(System::Threading::Tasks::TaskStatus value);
    // static field const value: static public System.Threading.Tasks.TaskStatus Canceled
    static constexpr const int Canceled = 6;
    // Get static field: static public System.Threading.Tasks.TaskStatus Canceled
    static System::Threading::Tasks::TaskStatus _get_Canceled();
    // Set static field: static public System.Threading.Tasks.TaskStatus Canceled
    static void _set_Canceled(System::Threading::Tasks::TaskStatus value);
    // static field const value: static public System.Threading.Tasks.TaskStatus Faulted
    static constexpr const int Faulted = 7;
    // Get static field: static public System.Threading.Tasks.TaskStatus Faulted
    static System::Threading::Tasks::TaskStatus _get_Faulted();
    // Set static field: static public System.Threading.Tasks.TaskStatus Faulted
    static void _set_Faulted(System::Threading::Tasks::TaskStatus value);
  }; // System.Threading.Tasks.TaskStatus
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Threading::Tasks::TaskStatus, "System.Threading.Tasks", "TaskStatus");
#pragma pack(pop)
