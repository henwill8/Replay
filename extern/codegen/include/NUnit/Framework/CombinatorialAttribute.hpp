// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: NUnit.Framework.CombiningStrategyAttribute
#include "NUnit/Framework/CombiningStrategyAttribute.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: NUnit.Framework
namespace NUnit::Framework {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: NUnit.Framework.CombinatorialAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: D2504C
  class CombinatorialAttribute : public NUnit::Framework::CombiningStrategyAttribute {
    public:
    // Creating value type constructor for type: CombinatorialAttribute
    CombinatorialAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1696A9C
    // Implemented from: NUnit.Framework.NUnitAttribute
    // Base method: System.Void NUnitAttribute::.ctor()
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static CombinatorialAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("NUnit::Framework::CombinatorialAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<CombinatorialAttribute*, creationType>()));
    }
  }; // NUnit.Framework.CombinatorialAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(NUnit::Framework::CombinatorialAttribute*, "NUnit.Framework", "CombinatorialAttribute");
