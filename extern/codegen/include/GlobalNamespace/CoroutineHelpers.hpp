// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: CoroutineHelpers
  // [] Offset: FFFFFFFF
  class CoroutineHelpers : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::CoroutineHelpers::$ExecuteAfterDelayCoroutine$d__0
    class $ExecuteAfterDelayCoroutine$d__0;
    // Creating value type constructor for type: CoroutineHelpers
    CoroutineHelpers() noexcept {}
    // static public System.Collections.IEnumerator ExecuteAfterDelayCoroutine(System.Action action, System.Single time)
    // Offset: 0x1105B90
    static System::Collections::IEnumerator* ExecuteAfterDelayCoroutine(System::Action* action, float time);
    // public System.Void .ctor()
    // Offset: 0x1105C48
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CoroutineHelpers* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::CoroutineHelpers::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CoroutineHelpers*, creationType>()));
    }
  }; // CoroutineHelpers
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CoroutineHelpers*, "", "CoroutineHelpers");
