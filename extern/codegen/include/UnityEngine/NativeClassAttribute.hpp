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
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.NativeClassAttribute
  class NativeClassAttribute : public System::Attribute {
    public:
    // private System.String <QualifiedNativeName>k__BackingField
    // Offset: 0x10
    ::Il2CppString* QualifiedNativeName;
    // private System.String <Declaration>k__BackingField
    // Offset: 0x18
    ::Il2CppString* Declaration;
    // private System.Void set_QualifiedNativeName(System.String value)
    // Offset: 0x19753C4
    void set_QualifiedNativeName(::Il2CppString* value);
    // private System.Void set_Declaration(System.String value)
    // Offset: 0x19753CC
    void set_Declaration(::Il2CppString* value);
    // public System.Void .ctor(System.String qualifiedCppName)
    // Offset: 0x19753D4
    static NativeClassAttribute* New_ctor(::Il2CppString* qualifiedCppName);
    // public System.Void .ctor(System.String qualifiedCppName, System.String declaration)
    // Offset: 0x1975460
    static NativeClassAttribute* New_ctor(::Il2CppString* qualifiedCppName, ::Il2CppString* declaration);
  }; // UnityEngine.NativeClassAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::NativeClassAttribute*, "UnityEngine", "NativeClassAttribute");
#pragma pack(pop)
