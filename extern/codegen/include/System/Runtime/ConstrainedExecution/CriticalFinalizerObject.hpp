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
// Type namespace: System.Runtime.ConstrainedExecution
namespace System::Runtime::ConstrainedExecution {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Runtime.ConstrainedExecution.CriticalFinalizerObject
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CABF40
  class CriticalFinalizerObject : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: CriticalFinalizerObject
    CriticalFinalizerObject() noexcept {}
    // protected System.Void .ctor()
    // Offset: 0x130A930
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CriticalFinalizerObject* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Runtime::ConstrainedExecution::CriticalFinalizerObject::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CriticalFinalizerObject*, creationType>()));
    }
    // protected override System.Void Finalize()
    // Offset: 0x130A938
    // Implemented from: System.Object
    // Base method: System.Void Object::Finalize()
    void Finalize();
  }; // System.Runtime.ConstrainedExecution.CriticalFinalizerObject
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::ConstrainedExecution::CriticalFinalizerObject*, "System.Runtime.ConstrainedExecution", "CriticalFinalizerObject");
