// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.TaskUpdater`1
#include "Zenject/TaskUpdater_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: Zenject
namespace Zenject {
  // Forward declaring type: IFixedTickable
  class IFixedTickable;
}
// Completed forward declares
// Type namespace: Zenject
namespace Zenject {
  // WARNING Size may be invalid!
  // Autogenerated type: Zenject.FixedTickablesTaskUpdater
  // [] Offset: FFFFFFFF
  class FixedTickablesTaskUpdater : public Zenject::TaskUpdater_1<Zenject::IFixedTickable*> {
    public:
    // Creating value type constructor for type: FixedTickablesTaskUpdater
    FixedTickablesTaskUpdater() noexcept {}
    // protected System.Void UpdateItem(Zenject.IFixedTickable task)
    // Offset: 0x14E6584
    void UpdateItem(Zenject::IFixedTickable* task);
    // public System.Void .ctor()
    // Offset: 0x14E6630
    // Implemented from: Zenject.TaskUpdater`1
    // Base method: System.Void TaskUpdater_1::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FixedTickablesTaskUpdater* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("Zenject::FixedTickablesTaskUpdater::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FixedTickablesTaskUpdater*, creationType>()));
    }
  }; // Zenject.FixedTickablesTaskUpdater
}
DEFINE_IL2CPP_ARG_TYPE(Zenject::FixedTickablesTaskUpdater*, "Zenject", "FixedTickablesTaskUpdater");
