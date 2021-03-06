// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Commands.TestCommand
#include "NUnit/Framework/Internal/Commands/TestCommand.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal::Commands
namespace NUnit::Framework::Internal::Commands {
  // Forward declaring type: SetUpTearDownItem
  class SetUpTearDownItem;
  // Forward declaring type: TestActionItem
  class TestActionItem;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestSuite
  class TestSuite;
  // Forward declaring type: TestResult
  class TestResult;
  // Forward declaring type: ITestExecutionContext
  class ITestExecutionContext;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal.Commands
namespace NUnit::Framework::Internal::Commands {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.Commands.OneTimeTearDownCommand
  // [] Offset: FFFFFFFF
  class OneTimeTearDownCommand : public NUnit::Framework::Internal::Commands::TestCommand {
    public:
    // Nested type: NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::$$c__DisplayClass2
    class $$c__DisplayClass2;
    // private System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.SetUpTearDownItem> _setUpTearDownItems
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>* setUpTearDownItems;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>*) == 0x8);
    // private System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.TestActionItem> _actions
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>* actions;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>*) == 0x8);
    // Creating value type constructor for type: OneTimeTearDownCommand
    OneTimeTearDownCommand(System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>* setUpTearDownItems_ = {}, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>* actions_ = {}) noexcept : setUpTearDownItems{setUpTearDownItems_}, actions{actions_} {}
    // Deleting conversion operator: operator NUnit::Framework::Internal::Test*
    constexpr operator NUnit::Framework::Internal::Test*() const noexcept = delete;
    // public System.Void .ctor(NUnit.Framework.Internal.TestSuite suite, System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.SetUpTearDownItem> setUpTearDownItems, System.Collections.Generic.List`1<NUnit.Framework.Internal.Commands.TestActionItem> actions)
    // Offset: 0x16AB5C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static OneTimeTearDownCommand* New_ctor(NUnit::Framework::Internal::TestSuite* suite, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::SetUpTearDownItem*>* setUpTearDownItems, System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>* actions) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::Commands::OneTimeTearDownCommand::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<OneTimeTearDownCommand*, creationType>(suite, setUpTearDownItems, actions)));
    }
    // public override NUnit.Framework.Internal.TestResult Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    // Offset: 0x16AB628
    // Implemented from: NUnit.Framework.Internal.Commands.TestCommand
    // Base method: NUnit.Framework.Internal.TestResult TestCommand::Execute(NUnit.Framework.Internal.ITestExecutionContext context)
    NUnit::Framework::Internal::TestResult* Execute(NUnit::Framework::Internal::ITestExecutionContext* context);
  }; // NUnit.Framework.Internal.Commands.OneTimeTearDownCommand
  #pragma pack(pop)
  static check_size<sizeof(OneTimeTearDownCommand), 32 + sizeof(System::Collections::Generic::List_1<NUnit::Framework::Internal::Commands::TestActionItem*>*)> __NUnit_Framework_Internal_Commands_OneTimeTearDownCommandSizeCheck;
  static_assert(sizeof(OneTimeTearDownCommand) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::Commands::OneTimeTearDownCommand*, "NUnit.Framework.Internal.Commands", "OneTimeTearDownCommand");
