// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: SceneSetupData
#include "GlobalNamespace/SceneSetupData.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapEditorSceneSetupData
  class BeatmapEditorSceneSetupData : public GlobalNamespace::SceneSetupData {
    public:
    // private System.String _levelDirPath
    // Offset: 0x10
    ::Il2CppString* levelDirPath;
    // private System.String _levelAssetPath
    // Offset: 0x18
    ::Il2CppString* levelAssetPath;
    // public System.String get_levelDirPath()
    // Offset: 0x1A82E4C
    ::Il2CppString* get_levelDirPath();
    // public System.String get_levelAssetPath()
    // Offset: 0x1A82E54
    ::Il2CppString* get_levelAssetPath();
    // public System.Void .ctor(System.String levelDirPath, System.String levelAssetPath)
    // Offset: 0x1A82E5C
    static BeatmapEditorSceneSetupData* New_ctor(::Il2CppString* levelDirPath, ::Il2CppString* levelAssetPath);
  }; // BeatmapEditorSceneSetupData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapEditorSceneSetupData*, "", "BeatmapEditorSceneSetupData");
#pragma pack(pop)
