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
  // Autogenerated type: UnityEngine.Bindings.NativeMethodAttribute
  class NativeMethodAttribute : public System::Attribute {
    public:
    // private System.String <Name>k__BackingField
    // Offset: 0x10
    ::Il2CppString* Name;
    // private System.Boolean <IsThreadSafe>k__BackingField
    // Offset: 0x18
    bool IsThreadSafe;
    // private System.Boolean <IsFreeFunction>k__BackingField
    // Offset: 0x19
    bool IsFreeFunction;
    // private System.Boolean <ThrowsException>k__BackingField
    // Offset: 0x1A
    bool ThrowsException;
    // private System.Boolean <HasExplicitThis>k__BackingField
    // Offset: 0x1B
    bool HasExplicitThis;
    // public System.Void set_Name(System.String value)
    // Offset: 0x1A04298
    void set_Name(::Il2CppString* value);
    // public System.Void set_IsThreadSafe(System.Boolean value)
    // Offset: 0x1A042A0
    void set_IsThreadSafe(bool value);
    // public System.Void set_IsFreeFunction(System.Boolean value)
    // Offset: 0x1A042AC
    void set_IsFreeFunction(bool value);
    // public System.Void set_ThrowsException(System.Boolean value)
    // Offset: 0x1A042B8
    void set_ThrowsException(bool value);
    // public System.Void set_HasExplicitThis(System.Boolean value)
    // Offset: 0x1A042C4
    void set_HasExplicitThis(bool value);
    // public System.Void .ctor(System.String name)
    // Offset: 0x1A042D0
    static NativeMethodAttribute* New_ctor(::Il2CppString* name);
    // public System.Void .ctor(System.String name, System.Boolean isFreeFunction)
    // Offset: 0x1A04090
    static NativeMethodAttribute* New_ctor(::Il2CppString* name, bool isFreeFunction);
    // public System.Void .ctor(System.String name, System.Boolean isFreeFunction, System.Boolean isThreadSafe)
    // Offset: 0x1A040F0
    static NativeMethodAttribute* New_ctor(::Il2CppString* name, bool isFreeFunction, bool isThreadSafe);
    // public System.Void .ctor()
    // Offset: 0x1A04060
    // Implemented from: System.Attribute
    // Base method: System.Void Attribute::.ctor()
    // Base method: System.Void Object::.ctor()
    static NativeMethodAttribute* New_ctor();
  }; // UnityEngine.Bindings.NativeMethodAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Bindings::NativeMethodAttribute*, "UnityEngine.Bindings", "NativeMethodAttribute");
#pragma pack(pop)
