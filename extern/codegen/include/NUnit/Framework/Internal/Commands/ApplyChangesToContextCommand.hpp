// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IApplyToContext
  class IApplyToContext;
}
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
  // Forward declaring type: TestResult
  class TestResult;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Autogenerated type: NUnit.Framework.Internal.Commands.ApplyChangesToContextCommand
  class ApplyChangesToContextCommand : public NUnit::Framework::Internal::Commands::DelegatingTestCommand {
    public:
    // private System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.IApplyToContext> _changes
    // Offset: 0x20
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::IApplyToContext*>* changes;
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand, System.Collections.Generic.IEnumerable`1<NUnit.Framework.Interfaces.IApplyToContext> changes)
    // Offset: 0x13EDCCC
    static ApplyChangesToContextCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand, System::Collections::Generic::IEnumerable_1<NUnit::Framework::Interfaces::IApplyToContext*>* changes);
    // public System.Void ApplyChanges(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x13EDD54
    void ApplyChanges(NUnit::Framework::Internal::ITestExecutionContext* context);
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x13EE038
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.ApplyChangesToContextCommand
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::ApplyChangesToContextCommand*, "NUnit.Framework.Internal.Commands", "ApplyChangesToContextCommand");
#pragma pack(pop)