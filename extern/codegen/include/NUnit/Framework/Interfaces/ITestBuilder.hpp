// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IEnumerable`1<T>
  template<typename T>
  class IEnumerable_1;
}
// Forward declaring namespace: NUnit::Framework::Internal
namespace NUnit::Framework::Internal {
  // Forward declaring type: TestMethod
  class TestMethod;
  // Forward declaring type: Test
  class Test;
}
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: IMethodInfo
  class IMethodInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Interfaces
namespace NUnit::Framework::Interfaces {
  // Size: 0x0
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Interfaces.ITestBuilder
  // [] Offset: FFFFFFFF
  class ITestBuilder {
    public:
    // Creating value type constructor for type: ITestBuilder
    ITestBuilder() noexcept {}
    // public System.Collections.Generic.IEnumerable`1<NUnit.Framework.Internal.TestMethod> BuildFrom(NUnit.Framework.Interfaces.IMethodInfo method, NUnit.Framework.Internal.Test suite)
    // Offset: 0xFFFFFFFF
    System::Collections::Generic::IEnumerable_1<NUnit::Framework::Internal::TestMethod*>* BuildFrom(NUnit::Framework::Interfaces::IMethodInfo* method, NUnit::Framework::Internal::Test* suite);
  }; // NUnit.Framework.Interfaces.ITestBuilder
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Interfaces::ITestBuilder*, "NUnit.Framework.Interfaces", "ITestBuilder");
