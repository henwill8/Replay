// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AsyncHelper
#include "GlobalNamespace/AsyncHelper.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`1<TResult>
  template<typename TResult>
  class Func_1;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task
  class Task;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: AsyncHelper/<>c__DisplayClass1_0
  class AsyncHelper::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0::$$RunSync$b__0$d
    struct $$RunSync$b__0$d;
    // public System.Func`1<System.Threading.Tasks.Task> asyncTask
    // Offset: 0x10
    System::Func_1<System::Threading::Tasks::Task*>* asyncTask;
    // Creating conversion operator: operator System::Func_1<System::Threading::Tasks::Task*>*
    constexpr operator System::Func_1<System::Threading::Tasks::Task*>*() const noexcept {
      return asyncTask;
    }
    // System.Threading.Tasks.Task <RunSync>b__0()
    // Offset: 0x102A580
    System::Threading::Tasks::Task* $RunSync$b__0();
    // public System.Void .ctor()
    // Offset: 0x102A578
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static AsyncHelper::$$c__DisplayClass1_0* New_ctor();
  }; // AsyncHelper/<>c__DisplayClass1_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AsyncHelper::$$c__DisplayClass1_0*, "", "AsyncHelper/<>c__DisplayClass1_0");
#pragma pack(pop)
