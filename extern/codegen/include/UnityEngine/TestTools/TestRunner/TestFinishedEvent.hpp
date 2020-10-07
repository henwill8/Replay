// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Events.UnityEvent`1
#include "UnityEngine/Events/UnityEvent_1.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITestResult
  class ITestResult;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Autogenerated type: UnityEngine.TestTools.TestRunner.TestFinishedEvent
  class TestFinishedEvent : public UnityEngine::Events::UnityEvent_1<NUnit::Framework::Interfaces::ITestResult*> {
    public:
    // public System.Void .ctor()
    // Offset: 0xE48FA4
    // Implemented from: UnityEngine.Events.UnityEvent`1
    // Base method: System.Void UnityEvent`1::.ctor()
    // Base method: System.Void UnityEventBase::.ctor()
    // Base method: System.Void Object::.ctor()
    static TestFinishedEvent* New_ctor();
  }; // UnityEngine.TestTools.TestRunner.TestFinishedEvent
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::TestFinishedEvent*, "UnityEngine.TestTools.TestRunner", "TestFinishedEvent");
#pragma pack(pop)
