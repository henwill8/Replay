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
  // Autogenerated type: System.Reflection.AssemblyKeyFileAttribute
  class AssemblyKeyFileAttribute : public System::Attribute {
    public:
    // private System.String m_keyFile
    // Offset: 0x10
    ::Il2CppString* m_keyFile;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return m_keyFile;
    }
    // public System.Void .ctor(System.String keyFile)
    // Offset: 0x1720788
    static AssemblyKeyFileAttribute* New_ctor(::Il2CppString* keyFile);
  }; // System.Reflection.AssemblyKeyFileAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Reflection::AssemblyKeyFileAttribute*, "System.Reflection", "AssemblyKeyFileAttribute");
#pragma pack(pop)