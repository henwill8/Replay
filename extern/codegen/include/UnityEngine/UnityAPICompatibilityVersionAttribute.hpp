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
  // Autogenerated type: UnityEngine.UnityAPICompatibilityVersionAttribute
  class UnityAPICompatibilityVersionAttribute : public System::Attribute {
    public:
    // private System.String _version
    // Offset: 0x10
    ::Il2CppString* version;
    // private System.String[] _configurationAssembliesHashes
    // Offset: 0x18
    ::Array<::Il2CppString*>* configurationAssembliesHashes;
    // public System.Void .ctor(System.String version, System.String[] configurationAssembliesHashes)
    // Offset: 0x139A66C
    static UnityAPICompatibilityVersionAttribute* New_ctor(::Il2CppString* version, ::Array<::Il2CppString*>* configurationAssembliesHashes);
  }; // UnityEngine.UnityAPICompatibilityVersionAttribute
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UnityAPICompatibilityVersionAttribute*, "UnityEngine", "UnityAPICompatibilityVersionAttribute");
#pragma pack(pop)
