// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Threading.Tasks.Task`1
#include "System/Threading/Tasks/Task_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Delegate
  class Delegate;
}
// Completed forward declares
// Type namespace: System.Threading.Tasks
namespace System::Threading::Tasks {
  // Autogenerated type: System.Threading.Tasks.ContinuationResultTaskFromResultTask`2
  template<typename TAntecedentResult, typename TResult>
  class ContinuationResultTaskFromResultTask_2 : public System::Threading::Tasks::Task_1<TResult> {
    public:
    // private System.Threading.Tasks.Task`1<TAntecedentResult> m_antecedent
    // Offset: 0x0
    System::Threading::Tasks::Task_1<TAntecedentResult>* m_antecedent;
    // public System.Void .ctor(System.Threading.Tasks.Task`1<TAntecedentResult> antecedent, System.Delegate function, System.Object state, System.Threading.Tasks.TaskCreationOptions creationOptions, System.Threading.Tasks.InternalTaskOptions internalOptions, ref System.Threading.StackCrawlMark stackMark)
    // Offset: 0xFFFFFFFF
    static ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>* New_ctor(System::Threading::Tasks::Task_1<TAntecedentResult>* antecedent, System::Delegate* function, ::Il2CppObject* state, System::Threading::Tasks::TaskCreationOptions creationOptions, System::Threading::Tasks::InternalTaskOptions internalOptions, System::Threading::StackCrawlMark& stackMark) {
      return THROW_UNLESS((il2cpp_utils::New<ContinuationResultTaskFromResultTask_2<TAntecedentResult, TResult>*>(antecedent, function, state, creationOptions, internalOptions, stackMark)));
    }
    // override System.Void InnerInvoke()
    // Offset: 0xFFFFFFFF
    // Implemented from: System.Threading.Tasks.Task`1
    // Base method: System.Void Task_1::InnerInvoke()
    void InnerInvoke() {
      THROW_UNLESS(il2cpp_utils::RunMethod(this, "InnerInvoke"));
    }
  }; // System.Threading.Tasks.ContinuationResultTaskFromResultTask`2
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Threading::Tasks::ContinuationResultTaskFromResultTask_2, "System.Threading.Tasks", "ContinuationResultTaskFromResultTask`2");
#pragma pack(pop)
