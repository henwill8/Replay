// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.DelegatingTestCommand
#include "NUnit/Framework/Internal/Commands/DelegatingTestCommand.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Skipping declaration: TestCommand because it is already included!
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools
namespace UnityEngine::TestTools {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.ImmediateEnumerableCommand
  // [] Offset: FFFFFFFF
  class ImmediateEnumerableCommand : public NUnit::Framework::Internal::Commands::DelegatingTestCommand {
    public:
    // Creating value type constructor for type: ImmediateEnumerableCommand
    ImmediateEnumerableCommand() noexcept {}
    // public System.Void .ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    // Offset: 0x132CDD8
    // Implemented from: NUnit.Framework.Internal.Commands.DelegatingTestCommand
    // Base method: System.Void DelegatingTestCommand::.ctor(NUnit.Framework.Internal.Commands.TestCommand innerCommand)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ImmediateEnumerableCommand* New_ctor(NUnit::Framework::Internal::Commands::TestCommand* innerCommand) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::ImmediateEnumerableCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ImmediateEnumerableCommand*, creationType>(innerCommand)));
    }
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x1337D5C
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // UnityEngine.TestTools.ImmediateEnumerableCommand
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::ImmediateEnumerableCommand*, "UnityEngine.TestTools", "ImmediateEnumerableCommand");
