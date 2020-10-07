// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestNameGenerator
#include "NUnit/Framework/Internal/TestNameGenerator.hpp"
// Including type: NUnit.Framework.Internal.TestNameGenerator/NameFragment
#include "NUnit/Framework/Internal/TestNameGenerator_NameFragment.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Reflection
namespace System::Reflection {
  // Forward declaring type: MethodInfo
  class MethodInfo;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Autogenerated type: NUnit.Framework.Internal.TestNameGenerator/TestIDFragment
  class TestNameGenerator::TestIDFragment : public NUnit::Framework::Internal::TestNameGenerator::NameFragment {
    public:
    // public override System.String GetText(System.Reflection.MethodInfo method, System.Object[] args)
    // Offset: 0x18F70FC
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NameFragment
    // Base method: System.String NameFragment::GetText(System.Reflection.MethodInfo method, System.Object[] args)
    ::Il2CppString* GetText(System::Reflection::MethodInfo* method, ::Array<::Il2CppObject*>* args);
    // public override System.String GetText(NUnit.Framework.Internal.TestMethod testMethod, System.Object[] args)
    // Offset: 0x18F7144
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NameFragment
    // Base method: System.String NameFragment::GetText(NUnit.Framework.Internal.TestMethod testMethod, System.Object[] args)
    ::Il2CppString* GetText(NUnit::Framework::Internal::TestMethod* testMethod, ::Array<::Il2CppObject*>* args);
    // public System.Void .ctor()
    // Offset: 0x18F5E10
    // Implemented from: NUnit.Framework.Internal.TestNameGenerator/NameFragment
    // Base method: System.Void NameFragment::.ctor()
    // Base method: System.Void Object::.ctor()
    static TestNameGenerator::TestIDFragment* New_ctor();
  }; // NUnit.Framework.Internal.TestNameGenerator/TestIDFragment
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestNameGenerator::TestIDFragment*, "NUnit.Framework.Internal", "TestNameGenerator/TestIDFragment");
#pragma pack(pop)
