// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestTools.EnumerableRetryTestCommand
#include "UnityEngine/TestTools/EnumerableRetryTestCommand.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: UnityTestExecutionContext
  class UnityTestExecutionContext;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Autogenerated type: UnityEngine.TestTools.EnumerableRetryTestCommand/<ExecuteEnumerable>d__3
  class EnumerableRetryTestCommand::$ExecuteEnumerable$d__3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<::Il2CppObject*>, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Offset: 0x10
    int $$1__state;
    // private System.Object <>2__current
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // private System.Int32 <>l__initialThreadId
    // Offset: 0x20
    int $$l__initialThreadId;
    // private NUnit.Framework.Internal.ITestExecutionContext context
    // Offset: 0x28
    NUnit::Framework::Internal::ITestExecutionContext* context;
    // public NUnit.Framework.Internal.ITestExecutionContext <>3__context
    // Offset: 0x30
    NUnit::Framework::Internal::ITestExecutionContext* $$3__context;
    // public UnityEngine.TestTools.EnumerableRetryTestCommand <>4__this
    // Offset: 0x38
    UnityEngine::TestTools::EnumerableRetryTestCommand* $$4__this;
    // private UnityEngine.TestRunner.NUnitExtensions.Runner.UnityTestExecutionContext <unityContext>5__2
    // Offset: 0x40
    UnityEngine::TestRunner::NUnitExtensions::Runner::UnityTestExecutionContext* $unityContext$5__2;
    // private System.Int32 <count>5__3
    // Offset: 0x48
    int $count$5__3;
    // private System.Collections.IEnumerator <>7__wrap3
    // Offset: 0x50
    System::Collections::IEnumerator* $$7__wrap3;
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerable_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<::Il2CppObject*>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x118E624
    static EnumerableRetryTestCommand::$ExecuteEnumerable$d__3* New_ctor(int $$1__state);
    // private System.Void <>m__Finally1()
    // Offset: 0x118E678
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x118E65C
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x118E744
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x118ECEC
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x118ECF4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x118ED54
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<System.Object> System.Collections.Generic.IEnumerable<System.Object>.GetEnumerator()
    // Offset: 0x118ED5C
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<::Il2CppObject*>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x118EE20
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.TestTools.EnumerableRetryTestCommand/<ExecuteEnumerable>d__3
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::EnumerableRetryTestCommand::$ExecuteEnumerable$d__3*, "UnityEngine.TestTools", "EnumerableRetryTestCommand/<ExecuteEnumerable>d__3");
#pragma pack(pop)