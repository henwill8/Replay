// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
#include "UnityEngine/TestRunner/NUnitExtensions/Runner/UnityWorkItem.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::NUnitExtensions::Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Forward declaring type: WorkItemFactory
  class WorkItemFactory;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
  // Forward declaring type: TestSuiteResult
  class TestSuiteResult;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestFilter
  class ITestFilter;
  // Forward declaring type: ResultState
  class ResultState;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: TestCommand
  class TestCommand;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework::Internal::Execution
namespace NUnit::Framework::Internal::Execution {
  // Forward declaring type: CountdownEvent
  class CountdownEvent;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerable
  class IEnumerable;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.NUnitExtensions.Runner
namespace UnityEngine::TestRunner::NUnitExtensions::Runner {
  // Autogenerated type: UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem
  class CompositeWorkItem : public UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem {
    public:
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::UnityWorkItemOrderComparer
    class UnityWorkItemOrderComparer;
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$PerformWork$d__12
    class $PerformWork$d__12;
    // Nested type: UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem::$RunChildren$d__16
    class $RunChildren$d__16;
    // private readonly NUnit.Framework.Internal.TestSuite _suite
    // Offset: 0x58
    NUnit::Framework::Internal::TestSuite* suite;
    // private readonly NUnit.Framework.Internal.TestSuiteResult _suiteResult
    // Offset: 0x60
    NUnit::Framework::Internal::TestSuiteResult* suiteResult;
    // private readonly NUnit.Framework.Interfaces.ITestFilter _childFilter
    // Offset: 0x68
    NUnit::Framework::Interfaces::ITestFilter* childFilter;
    // private NUnit.Framework.Internal.Commands.TestCommand _setupCommand
    // Offset: 0x70
    NUnit::Framework::Internal::Commands::TestCommand* setupCommand;
    // private NUnit.Framework.Internal.Commands.TestCommand _teardownCommand
    // Offset: 0x78
    NUnit::Framework::Internal::Commands::TestCommand* teardownCommand;
    // private System.Collections.Generic.List`1<UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem> <Children>k__BackingField
    // Offset: 0x80
    System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>* Children;
    // private System.Int32 _countOrder
    // Offset: 0x88
    int countOrder;
    // private NUnit.Framework.Internal.Execution.CountdownEvent _childTestCountdown
    // Offset: 0x90
    NUnit::Framework::Internal::Execution::CountdownEvent* childTestCountdown;
    // public System.Collections.Generic.List`1<UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem> get_Children()
    // Offset: 0x117E834
    System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>* get_Children();
    // private System.Void set_Children(System.Collections.Generic.List`1<UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem> value)
    // Offset: 0x117E83C
    void set_Children(System::Collections::Generic::List_1<UnityEngine::TestRunner::NUnitExtensions::Runner::UnityWorkItem*>* value);
    // public System.Void .ctor(NUnit.Framework.Internal.TestSuite suite, NUnit.Framework.Interfaces.ITestFilter childFilter, UnityEngine.TestRunner.NUnitExtensions.Runner.WorkItemFactory factory)
    // Offset: 0x117E844
    static CompositeWorkItem* New_ctor(NUnit::Framework::Internal::TestSuite* suite, NUnit::Framework::Interfaces::ITestFilter* childFilter, UnityEngine::TestRunner::NUnitExtensions::Runner::WorkItemFactory* factory);
    // private System.Boolean CheckForCancellation()
    // Offset: 0x117EAF0
    bool CheckForCancellation();
    // private System.Void InitializeSetUpAndTearDownCommands()
    // Offset: 0x117EBC8
    void InitializeSetUpAndTearDownCommands();
    // private System.Void PerformOneTimeSetUp()
    // Offset: 0x117F10C
    void PerformOneTimeSetUp();
    // private System.Collections.IEnumerable RunChildren()
    // Offset: 0x117F56C
    System::Collections::IEnumerable* RunChildren();
    // private System.Void CreateChildWorkItems()
    // Offset: 0x117F630
    void CreateChildWorkItems();
    // private System.Void SortChildren()
    // Offset: 0x117FDBC
    void SortChildren();
    // private System.Void SkipFixture(NUnit.Framework.Interfaces.ResultState resultState, System.String message, System.String stackTrace)
    // Offset: 0x117FE54
    void SkipFixture(NUnit::Framework::Interfaces::ResultState* resultState, ::Il2CppString* message, ::Il2CppString* stackTrace);
    // private System.Void SkipChildren(NUnit.Framework.Internal.TestSuite suite, NUnit.Framework.Interfaces.ResultState resultState, System.String message)
    // Offset: 0x117FF60
    void SkipChildren(NUnit::Framework::Internal::TestSuite* suite, NUnit::Framework::Interfaces::ResultState* resultState, ::Il2CppString* message);
    // private System.Void PerformOneTimeTearDown()
    // Offset: 0x11804BC
    void PerformOneTimeTearDown();
    // private System.String GetSkipReason()
    // Offset: 0x11804E4
    ::Il2CppString* GetSkipReason();
    // private System.String GetProviderStackTrace()
    // Offset: 0x11805DC
    ::Il2CppString* GetProviderStackTrace();
    // private System.Void CountDownChildTest()
    // Offset: 0x11806D4
    void CountDownChildTest();
    // protected override System.Collections.IEnumerable PerformWork()
    // Offset: 0x117EA2C
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
    // Base method: System.Collections.IEnumerable UnityWorkItem::PerformWork()
    System::Collections::IEnumerable* PerformWork();
    // public override System.Void Cancel(System.Boolean force)
    // Offset: 0x1180CE8
    // Implemented from: UnityEngine.TestRunner.NUnitExtensions.Runner.UnityWorkItem
    // Base method: System.Void UnityWorkItem::Cancel(System.Boolean force)
    void Cancel(bool force);
  }; // UnityEngine.TestRunner.NUnitExtensions.Runner.CompositeWorkItem
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::NUnitExtensions::Runner::CompositeWorkItem*, "UnityEngine.TestRunner.NUnitExtensions.Runner", "CompositeWorkItem");
#pragma pack(pop)