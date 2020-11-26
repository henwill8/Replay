// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.TestRunner.Utils.TestRunCallbackListener
#include "UnityEngine/TestRunner/Utils/TestRunCallbackListener.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Forward declaring namespace: UnityEngine::TestRunner
namespace UnityEngine::TestRunner {
  // Forward declaring type: ITestRunCallback
  class ITestRunCallback;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.Utils
namespace UnityEngine::TestRunner::Utils {
  // Autogenerated type: UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c__DisplayClass1_0
  class TestRunCallbackListener::$$c__DisplayClass1_0 : public ::Il2CppObject {
    public:
    // public NUnit.Framework.Interfaces.ITest testsToRun
    // Offset: 0x10
    NUnit::Framework::Interfaces::ITest* testsToRun;
    // Creating conversion operator: operator NUnit::Framework::Interfaces::ITest*
    constexpr operator NUnit::Framework::Interfaces::ITest*() const noexcept {
      return testsToRun;
    }
    // System.Void <RunStarted>b__0(UnityEngine.TestRunner.ITestRunCallback callback)
    // Offset: 0x118D004
    void $RunStarted$b__0(UnityEngine::TestRunner::ITestRunCallback* callback);
    // public System.Void .ctor()
    // Offset: 0x118C6D0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TestRunCallbackListener::$$c__DisplayClass1_0* New_ctor();
  }; // UnityEngine.TestRunner.Utils.TestRunCallbackListener/<>c__DisplayClass1_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::Utils::TestRunCallbackListener::$$c__DisplayClass1_0*, "UnityEngine.TestRunner.Utils", "TestRunCallbackListener/<>c__DisplayClass1_0");
#pragma pack(pop)
