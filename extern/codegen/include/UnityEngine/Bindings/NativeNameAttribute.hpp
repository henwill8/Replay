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
// Type namespace: UnityEngine.Bindings
namespace UnityEngine::Bindings {
  // Autogenerated type: UnityEngine.Bindings.NativeNameAttribute
  class NativeNameAttribute : public System::Attribute {
    public:
    // private System.String <Name>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Name;
    // Creating conversion operator: operator ::Il2CppString*
    constexpr operator ::Il2CppString*() const noexcept {
      return Name;
    }
    // public System.Void set_Name(System.String value)
    // Offset: 0x1974F80
    void set_Name(::Il2CppString* value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x1974F88
    static NativeNameAttribute* New_ctor(::Il2CppString* name);
  }; // UnityEngine.Bindings.NativeNameAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeNameAttribute*, "UnityEngine.Bindings", "NativeNameAttribute");
#pragma pack(pop)
