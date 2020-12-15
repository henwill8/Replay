// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PersistentScriptableObject
#include "GlobalNamespace/PersistentScriptableObject.hpp"
// Including type: IBeatmapLevelCollection
#include "GlobalNamespace/IBeatmapLevelCollection.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapLevelSO
  class BeatmapLevelSO;
  // Forward declaring type: IPreviewBeatmapLevel
  class IPreviewBeatmapLevel;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapLevelCollectionSO
  class BeatmapLevelCollectionSO : public GlobalNamespace::PersistentScriptableObject/*, public GlobalNamespace::IBeatmapLevelCollection*/ {
    public:
    // private BeatmapLevelSO[] _beatmapLevels
    // Offset: 0x18
    ::Array<GlobalNamespace::BeatmapLevelSO*>* beatmapLevels;
    // Creating interface conversion operator: operator GlobalNamespace::IBeatmapLevelCollection
    operator GlobalNamespace::IBeatmapLevelCollection() noexcept {
      return *reinterpret_cast<GlobalNamespace::IBeatmapLevelCollection*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public IPreviewBeatmapLevel[] get_beatmapLevels()
    // Offset: 0x1A83B20
    // Implemented from: IBeatmapLevelCollection
    // Base method: IPreviewBeatmapLevel[] IBeatmapLevelCollection::get_beatmapLevels()
    ::Array<GlobalNamespace::IPreviewBeatmapLevel*>* get_beatmapLevels();
    // public System.Void .ctor()
    // Offset: 0x1A83B28
    // Implemented from: PersistentScriptableObject
    // Base method: System.Void PersistentScriptableObject::.ctor()
    // Base method: System.Void ScriptableObject::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapLevelCollectionSO* New_ctor();
  }; // BeatmapLevelCollectionSO
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelCollectionSO*, "", "BeatmapLevelCollectionSO");
#pragma pack(pop)