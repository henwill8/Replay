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
// Type namespace: System.Runtime.CompilerServices
namespace System::Runtime::CompilerServices {
  // Autogenerated type: System.Runtime.CompilerServices.InternalsVisibleToAttribute
  class InternalsVisibleToAttribute : public System::Attribute {
    public:
    // private System.String _assemblyName
    // Offset: 0x10
    ::Il2CppString* assemblyName;
    // private System.Boolean _allInternalsVisible
    // Offset: 0x18
    bool allInternalsVisible;
    // public System.Void .ctor(System.String assemblyName)
    // Offset: 0x11631E4
    static InternalsVisibleToAttribute* New_ctor(::Il2CppString* assemblyName);
    // public System.String get_AssemblyName()
    // Offset: 0x1163220
    ::Il2CppString* get_AssemblyName();
    // public System.Boolean get_AllInternalsVisible()
    // Offset: 0x1163228
    bool get_AllInternalsVisible();
    // public System.Void set_AllInternalsVisible(System.Boolean value)
    // Offset: 0x1163230
    void set_AllInternalsVisible(bool value);
  }; // System.Runtime.CompilerServices.InternalsVisibleToAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::CompilerServices::InternalsVisibleToAttribute*, "System.Runtime.CompilerServices", "InternalsVisibleToAttribute");
#pragma pack(pop)