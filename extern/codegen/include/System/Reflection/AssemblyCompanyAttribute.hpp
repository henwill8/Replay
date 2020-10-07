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
  // Autogenerated type: System.Reflection.AssemblyCompanyAttribute
  class AssemblyCompanyAttribute : public System::Attribute {
    public:
    // private System.String m_company
    // Offset: 0x10
    ::Il2CppString* m_company;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_company;
    }
    // public System.Void .ctor(System.String company)
    // Offset: 0x1368908
    static AssemblyCompanyAttribute* New_ctor(::Il2CppString* company);
  }; // System.Reflection.AssemblyCompanyAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyCompanyAttribute*, "System.Reflection", "AssemblyCompanyAttribute");
#pragma pack(pop)
