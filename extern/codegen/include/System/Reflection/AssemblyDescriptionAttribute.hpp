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
// Type namespace: System.Reflection
namespace System::Reflection {
  // Autogenerated type: System.Reflection.AssemblyDescriptionAttribute
  class AssemblyDescriptionAttribute : public System::Attribute {
    public:
    // private System.String m_description
    // Offset: 0x10
    ::Il2CppString* m_description;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_description;
    }
    // public System.Void .ctor(System.String description)
    // Offset: 0x1368A08
    static AssemblyDescriptionAttribute* New_ctor(::Il2CppString* description);
  }; // System.Reflection.AssemblyDescriptionAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyDescriptionAttribute*, "System.Reflection", "AssemblyDescriptionAttribute");
#pragma pack(pop)
