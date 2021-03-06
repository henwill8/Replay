// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.Test
#include "NUnit/Framework/Internal/Test.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestCaseParameters
  class TestCaseParameters;
  // Forward declaring type: TestResult
  class TestResult;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
  // Forward declaring type: TNode
  class TNode;
  // Skipping declaration: ITest because it is already included!
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IList`1<T>
  template<typename T>
  class IList_1;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x80
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestMethod
  // [] Offset: FFFFFFFF
  class TestMethod : public NUnit::Framework::Internal::Test {
    public:
    // Writing base type padding for base size: 0x75 to desired offset: 0x78
    char ___base_padding[0x3] = {};
    // public NUnit.Framework.Internal.TestCaseParameters parms
    // Size: 0x8
    // Offset: 0x78
    NUnit::Framework::Internal::TestCaseParameters* parms;
    // Field size check
    static_assert(sizeof(NUnit::Framework::Internal::TestCaseParameters*) == 0x8);
    // Creating value type constructor for type: TestMethod
    TestMethod(NUnit::Framework::Internal::TestCaseParameters* parms_ = {}) noexcept : parms{parms_} {}
    // Creating conversion operator: operator NUnit::Framework::Internal::TestCaseParameters*
    constexpr operator NUnit::Framework::Internal::TestCaseParameters*() const noexcept {
      return parms;
    }
    // public System.Void .ctor(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test parentSuite)
    // Offset: 0x2225D58
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestMethod* New_ctor(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* parentSuite) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestMethod::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestMethod*, creationType>(method, parentSuite)));
    }
    // System.Boolean get_HasExpectedResult()
    // Offset: 0x2225E28
    bool get_HasExpectedResult();
    // System.Object get_ExpectedResult()
    // Offset: 0x2225E48
    ::Il2CppObject* get_ExpectedResult();
    // System.Object[] get_Arguments()
    // Offset: 0x2225E60
    ::Array<::Il2CppObject*>* get_Arguments();
    // public override NUnit.Framework.Internal.TestResult MakeTestResult()
    // Offset: 0x2225E80
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Internal.TestResult Test::MakeTestResult()
    NUnit::Framework::Internal::TestResult* MakeTestResult();
    // public override System.Boolean get_HasChildren()
    // Offset: 0x2225EE0
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Boolean Test::get_HasChildren()
    bool get_HasChildren();
    // public override NUnit.Framework.Interfaces.TNode AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    // Offset: 0x2225EE8
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: NUnit.Framework.Interfaces.TNode Test::AddToXml(NUnit.Framework.Interfaces.TNode parentNode, System.Boolean recursive)
    NUnit::Framework::Interfaces::TNode* AddToXml(NUnit::Framework::Interfaces::TNode* parentNode, bool recursive);
    // public override System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> get_Tests()
    // Offset: 0x2225FBC
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.Collections.Generic.IList`1<NUnit.Framework.Interfaces.ITest> Test::get_Tests()
    System::Collections::Generic::IList_1<NUnit::Framework::Interfaces::ITest*>* get_Tests();
    // public override System.String get_XmlElementName()
    // Offset: 0x2226008
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_XmlElementName()
    ::Il2CppString* get_XmlElementName();
    // public override System.String get_MethodName()
    // Offset: 0x2226050
    // Implemented from: NUnit.Framework.Internal.Test
    // Base method: System.String Test::get_MethodName()
    ::Il2CppString* get_MethodName();
  }; // NUnit.Framework.Internal.TestMethod
  #pragma pack(pop)
  static check_size<sizeof(TestMethod), 120 + sizeof(NUnit::Framework::Internal::TestCaseParameters*)> __NUnit_Framework_Internal_TestMethodSizeCheck;
  static_assert(sizeof(TestMethod) == 0x80);
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestMethod*, "NUnit.Framework.Internal", "TestMethod");
