// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: JetBrains.Annotations
namespace JetBrains::Annotations {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: JetBrains.Annotations.CannotApplyEqualityOperatorAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: CF43B4
  class CannotApplyEqualityOperatorAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: CannotApplyEqualityOperatorAttribute
    CannotApplyEqualityOperatorAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x22BCFD4
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CannotApplyEqualityOperatorAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("JetBrains::Annotations::CannotApplyEqualityOperatorAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CannotApplyEqualityOperatorAttribute*, creationType>()));
    }
  }; // JetBrains.Annotations.CannotApplyEqualityOperatorAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(JetBrains::Annotations::CannotApplyEqualityOperatorAttribute*, "JetBrains.Annotations", "CannotApplyEqualityOperatorAttribute");
