// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StandardLevelInfoSaveData
  class StandardLevelInfoSaveData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StandardLevelLoader
  class StandardLevelLoader : public ::Il2CppObject {
    public:
    // static public StandardLevelInfoSaveData LoadStandardLevelSaveData(System.String levelInfoFilenamePath)
    // Offset: 0xF449B4
    static GlobalNamespace::StandardLevelInfoSaveData* LoadStandardLevelSaveData(::Il2CppString* levelInfoFilenamePath);
  }; // StandardLevelLoader
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StandardLevelLoader*, "", "StandardLevelLoader");
#pragma pack(pop)