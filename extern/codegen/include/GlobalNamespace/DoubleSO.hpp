// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ObservableVariableSO`1
#include "GlobalNamespace/ObservableVariableSO_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // WARNING Size may be invalid!
  // Autogenerated type: DoubleSO
  // [] Offset: FFFFFFFF
  class DoubleSO : public GlobalNamespace::ObservableVariableSO_1<double> {
    public:
    // Creating value type constructor for type: DoubleSO
    DoubleSO() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1106A24
    // Implemented from: ObservableVariableSO`1
    // Base method: System.Void ObservableVariableSO_1::.ctor()
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DoubleSO* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::DoubleSO::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DoubleSO*, creationType>()));
    }
  }; // DoubleSO
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::DoubleSO*, "", "DoubleSO");
