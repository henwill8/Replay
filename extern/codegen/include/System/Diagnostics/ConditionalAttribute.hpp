// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Attribute
#include "System/Attribute.hpp"
// Completed includes
// Type namespace: System.Diagnostics
namespace System::Diagnostics {
  // Autogenerated type: System.Diagnostics.ConditionalAttribute
  class ConditionalAttribute : public System::Attribute {
    public:
    // private System.String m_conditionString
    // Offset: 0x10
    ::Il2CppString* m_conditionString;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_conditionString;
    }
    // public System.Void .ctor(System.String conditionString)
    // Offset: 0x1677668
    static ConditionalAttribute* New_ctor(::Il2CppString* conditionString);
  }; // System.Diagnostics.ConditionalAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Diagnostics::ConditionalAttribute*, "System.Diagnostics", "ConditionalAttribute");
#pragma pack(pop)