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
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: System.Diagnostics.DebuggerHiddenAttribute
  // [] Offset: FFFFFFFF
  // [AttributeUsageAttribute] Offset: CAE24C
  // [ComVisibleAttribute] Offset: CAE24C
  class DebuggerHiddenAttribute : public System::Attribute {
    public:
    // Creating value type constructor for type: DebuggerHiddenAttribute
    DebuggerHiddenAttribute() noexcept {}
    // public System.Void .ctor()
    // Offset: 0x1A0F318
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static DebuggerHiddenAttribute* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("System::Diagnostics::DebuggerHiddenAttribute::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<DebuggerHiddenAttribute*, creationType>()));
    }
  }; // System.Diagnostics.DebuggerHiddenAttribute
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::DebuggerHiddenAttribute*, "System.Diagnostics", "DebuggerHiddenAttribute");
