// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine._Scripting.APIUpdating
namespace UnityEngine::_Scripting::APIUpdating {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine._Scripting.APIUpdating.APIUpdaterRuntimeHelpers
  // [] Offset: FFFFFFFF
  class APIUpdaterRuntimeHelpers : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: APIUpdaterRuntimeHelpers
    APIUpdaterRuntimeHelpers() noexcept {}
    // static System.Boolean GetMovedFromAttributeDataForType(System.Type sourceType, out System.String assembly, out System.String nsp, out System.String klass)
    // Offset: 0x1ABFFEC
    static bool GetMovedFromAttributeDataForType(System::Type* sourceType, ::Il2CppString*& assembly, ::Il2CppString*& nsp, ::Il2CppString*& klass);
    // static System.Boolean GetObsoleteTypeRedirection(System.Type sourceType, out System.String assemblyName, out System.String nsp, out System.String className)
    // Offset: 0x1AC0160
    static bool GetObsoleteTypeRedirection(System::Type* sourceType, ::Il2CppString*& assemblyName, ::Il2CppString*& nsp, ::Il2CppString*& className);
  }; // UnityEngine._Scripting.APIUpdating.APIUpdaterRuntimeHelpers
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::_Scripting::APIUpdating::APIUpdaterRuntimeHelpers*, "UnityEngine._Scripting.APIUpdating", "APIUpdaterRuntimeHelpers");
