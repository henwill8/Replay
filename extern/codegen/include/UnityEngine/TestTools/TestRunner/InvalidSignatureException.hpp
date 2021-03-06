// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.ResultStateException
#include "NUnit/Framework/ResultStateException.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: NUnit::Framework::Interfaces
namespace NUnit::Framework::Interfaces {
  // Forward declaring type: ResultState
  class ResultState;
}
// Completed forward declares
// Type namespace: UnityEngine.TestTools.TestRunner
namespace UnityEngine::TestTools::TestRunner {
  // Size: 0x88
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.TestTools.TestRunner.InvalidSignatureException
  // [] Offset: FFFFFFFF
  class InvalidSignatureException : public NUnit::Framework::ResultStateException {
    public:
    // Creating value type constructor for type: InvalidSignatureException
    InvalidSignatureException() noexcept {}
    // public System.Void .ctor(System.String message)
    // Offset: 0x133E2A8
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: System.Void ResultStateException::.ctor(System.String message)
    // Base method: System.Void Exception::.ctor(System.String message)
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static InvalidSignatureException* New_ctor(::Il2CppString* message) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::TestTools::TestRunner::InvalidSignatureException::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<InvalidSignatureException*, creationType>(message)));
    }
    // public override NUnit.Framework.Interfaces.ResultState get_ResultState()
    // Offset: 0x133E2B0
    // Implemented from: NUnit.Framework.ResultStateException
    // Base method: NUnit.Framework.Interfaces.ResultState ResultStateException::get_ResultState()
    NUnit::Framework::Interfaces::ResultState* get_ResultState();
  }; // UnityEngine.TestTools.TestRunner.InvalidSignatureException
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::TestTools::TestRunner::InvalidSignatureException*, "UnityEngine.TestTools.TestRunner", "InvalidSignatureException");
