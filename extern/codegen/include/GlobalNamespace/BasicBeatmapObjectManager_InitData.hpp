// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BasicBeatmapObjectManager
#include "GlobalNamespace/BasicBeatmapObjectManager.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BasicBeatmapObjectManager/InitData
  class BasicBeatmapObjectManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean disappearingArrows
    // Offset: 0x10
    bool disappearingArrows;
    // public readonly System.Boolean ghostNotes
    // Offset: 0x11
    bool ghostNotes;
    // public System.Void .ctor(System.Boolean disappearingArrows, System.Boolean ghostNotes)
    // Offset: 0x1A76C88
    static BasicBeatmapObjectManager::InitData* New_ctor(bool disappearingArrows, bool ghostNotes);
  }; // BasicBeatmapObjectManager/InitData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicBeatmapObjectManager::InitData*, "", "BasicBeatmapObjectManager/InitData");
#pragma pack(pop)