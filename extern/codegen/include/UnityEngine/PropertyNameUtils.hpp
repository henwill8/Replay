// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: PropertyName
  struct PropertyName;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.PropertyNameUtils
  class PropertyNameUtils : public ::Il2CppObject {
    public:
    // static public UnityEngine.PropertyName PropertyNameFromString(System.String name)
    // Offset: 0x1736140
    static UnityEngine::PropertyName PropertyNameFromString(::Il2CppString* name);
    // static private System.Void PropertyNameFromString_Injected(System.String name, out UnityEngine.PropertyName ret)
    // Offset: 0x17362CC
    static void PropertyNameFromString_Injected(::Il2CppString* name, UnityEngine::PropertyName& ret);
  }; // UnityEngine.PropertyNameUtils
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PropertyNameUtils*, "UnityEngine", "PropertyNameUtils");
#pragma pack(pop)
