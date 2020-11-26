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
// Type namespace: UnityEngine.Scripting
namespace UnityEngine::Scripting {
  // Autogenerated type: UnityEngine.Scripting.RequiredByNativeCodeAttribute
  class RequiredByNativeCodeAttribute : public System::Attribute {
    public:
    // private System.String <Name>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Name;
    // private System.Boolean <Optional>k__BackingField
    // Offset: 0x18
    bool Optional;
    // private System.Boolean <GenerateProxy>k__BackingField
    // Offset: 0x19
    bool GenerateProxy;
    // public System.Void .ctor(System.String name)
    // Offset: 0x1A04908
    static RequiredByNativeCodeAttribute* New_ctor(::Il2CppString* name);
    // public System.Void set_Name(System.String value)
    // Offset: 0x1A0493C
    void set_Name(::Il2CppString* value);
    // public System.Void set_Optional(System.Boolean value)
    // Offset: 0x1A04944
    void set_Optional(bool value);
    // public System.Void set_GenerateProxy(System.Boolean value)
    // Offset: 0x1A04950
    void set_GenerateProxy(bool value);
    // public System.Void .ctor()
    // Offset: 0x1A04900
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static RequiredByNativeCodeAttribute* New_ctor();
  }; // UnityEngine.Scripting.RequiredByNativeCodeAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Scripting::RequiredByNativeCodeAttribute*, "UnityEngine.Scripting", "RequiredByNativeCodeAttribute");
#pragma pack(pop)
