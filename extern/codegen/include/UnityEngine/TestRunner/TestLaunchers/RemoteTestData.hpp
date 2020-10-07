// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Interfaces.RunState
#include "NUnit/Framework/Interfaces/RunState.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::TestRunner::TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITest
  class ITest;
}
// Completed forward declares
// Type namespace: UnityEngine.TestRunner.TestLaunchers
namespace UnityEngine::TestRunner::TestLaunchers {
  // Autogenerated type: UnityEngine.TestRunner.TestLaunchers.RemoteTestData
  class RemoteTestData : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::TestRunner::TestLaunchers::RemoteTestData::$$c
    class $$c;
    // public System.String id
    // Offset: 0x10
    ::Il2CppString* id;
    // public System.String name
    // Offset: 0x18
    ::Il2CppString* name;
    // public System.String fullName
    // Offset: 0x20
    ::Il2CppString* fullName;
    // public System.Int32 testCaseCount
    // Offset: 0x28
    int testCaseCount;
    // public System.Int32 ChildIndex
    // Offset: 0x2C
    int ChildIndex;
    // public System.Boolean hasChildren
    // Offset: 0x30
    bool hasChildren;
    // public System.Boolean isSuite
    // Offset: 0x31
    bool isSuite;
    // public System.String[] childrenIds
    // Offset: 0x38
    ::Array<::Il2CppString*>* childrenIds;
    // public System.Int32 testCaseTimeout
    // Offset: 0x40
    int testCaseTimeout;
    // public System.String[] Categories
    // Offset: 0x48
    ::Array<::Il2CppString*>* Categories;
    // public System.Boolean IsTestAssembly
    // Offset: 0x50
    bool IsTestAssembly;
    // public NUnit.Framework.Interfaces.RunState RunState
    // Offset: 0x54
    NUnit::Framework::Interfaces::RunState RunState;
    // public System.String Description
    // Offset: 0x58
    ::Il2CppString* Description;
    // public System.String SkipReason
    // Offset: 0x60
    ::Il2CppString* SkipReason;
    // public System.String ParentId
    // Offset: 0x68
    ::Il2CppString* ParentId;
    // public System.String UniqueName
    // Offset: 0x70
    ::Il2CppString* UniqueName;
    // public System.String ParentUniqueName
    // Offset: 0x78
    ::Il2CppString* ParentUniqueName;
    // public System.String ParentFullName
    // Offset: 0x80
    ::Il2CppString* ParentFullName;
    // System.Void .ctor(NUnit.Framework.Interfaces.ITest test)
    // Offset: 0xE3C9A8
    static RemoteTestData* New_ctor(NUnit::Framework::Interfaces::ITest* test);
  }; // UnityEngine.TestRunner.TestLaunchers.RemoteTestData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestRunner::TestLaunchers::RemoteTestData*, "UnityEngine.TestRunner.TestLaunchers", "RemoteTestData");
#pragma pack(pop)
