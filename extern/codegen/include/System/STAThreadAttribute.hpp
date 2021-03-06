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
// Type namespace: System
namespace System {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.STAThreadAttribute
  // [] Offset: FFFFFFFF
  // [ComVisibleAttribute] Offset: CA83B0
  // [AttributeUsageAttribute] Offset: CA83B0
  class STAThreadAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: STAThreadAttribute
    STAThreadAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1767984
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static STAThreadAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::STAThreadAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<STAThreadAttribute*, creationType>()));
    }
  }; // System.STAThreadAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::STAThreadAttribute*, "System", "STAThreadAttribute");
