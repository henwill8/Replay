// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.Internal.TestSuite
#include "NUnit/Framework/Internal/TestSuite.hpp"
// Including type: NUnit.Framework.Interfaces.IDisposableFixture
#include "NUnit/Framework/Interfaces/IDisposableFixture.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ITypeInfo
  class ITypeInfo;
}
// Completed forward declares
// Type namespace: NUnit.Framework.Internal
namespace NUnit::Framework::Internal {
  // Size: 0x89
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.Internal.TestFixture
  // [] Offset: FFFFFFFF
  class TestFixture : public NUnit::Framework::Internal::TestSuite/*, public NUnit::Framework::Interfaces::IDisposableFixture*/ {
    public:
    // Creating value type constructor for type: TestFixture
    TestFixture() noexcept {}
    // Creating interface conversion operator: operator NUnit::Framework::Interfaces::IDisposableFixture
    operator NUnit::Framework::Interfaces::IDisposableFixture() noexcept {
      return *reinterpret_cast<NUnit::Framework::Interfaces::IDisposableFixture*>(this);
    }
    // public System.Void .ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    // Offset: 0x22258C0
    // Implemented from: NUnit.Framework.Internal.TestSuite
    // Base method: System.Void TestSuite::.ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    // Base method: System.Void Test::.ctor(NUnit.Framework.Interfaces.ITypeInfo fixtureType)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TestFixture* New_ctor(NUnit::Framework::Interfaces::ITypeInfo* fixtureType) {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::Internal::TestFixture::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TestFixture*, creationType>(fixtureType)));
    }
  }; // NUnit.Framework.Internal.TestFixture
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::Internal::TestFixture*, "NUnit.Framework.Internal", "TestFixture");
