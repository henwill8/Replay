// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.TypeIdentifiers
#include "System/TypeIdentifiers.hpp"
// Including type: System.TypeNames/ATypeName
#include "System/TypeNames_ATypeName.hpp"
// Including type: System.TypeIdentifier
#include "System/TypeIdentifier.hpp"
// Completed includes
// Type namespace: System
namespace System {
  // Autogenerated type: System.TypeIdentifiers/Display
  class TypeIdentifiers::Display : public System::TypeNames::ATypeName, public System::TypeIdentifier {
    public:
    // private System.String displayName
    // Offset: 0x10
    ::Il2CppString* displayName;
    // private System.String internal_name
    // Offset: 0x18
    ::Il2CppString* internal_name;
    // System.Void .ctor(System.String displayName)
    // Offset: 0x1799E00
    static TypeIdentifiers::Display* New_ctor(::Il2CppString* displayName);
    // private System.String GetInternalName()
    // Offset: 0x1799E98
    ::Il2CppString* GetInternalName();
    // public override System.String get_DisplayName()
    // Offset: 0x1799E4C
    // Implemented from: System.TypeNames/ATypeName
    // Base method: System.String ATypeName::get_DisplayName()
    ::Il2CppString* get_DisplayName();
    // public System.String get_InternalName()
    // Offset: 0x1799E54
    // Implemented from: System.TypeIdentifier
    // Base method: System.String TypeIdentifier::get_InternalName()
    ::Il2CppString* get_InternalName();
  }; // System.TypeIdentifiers/Display
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::TypeIdentifiers::Display*, "System", "TypeIdentifiers/Display");
#pragma pack(pop)
