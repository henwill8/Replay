// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectData
#include "GlobalNamespace/BeatmapObjectData.hpp"
// Including type: OffsetDirection
#include "GlobalNamespace/OffsetDirection.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectType
  struct BeatmapObjectType;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: WaypointData
  class WaypointData : public GlobalNamespace::BeatmapObjectData {
    public:
    // private OffsetDirection <offsetDirection>k__BackingField
    // Offset: 0x18
    GlobalNamespace::OffsetDirection offsetDirection;
    // private NoteLineLayer <noteLineLayer>k__BackingField
    // Offset: 0x1C
    GlobalNamespace::NoteLineLayer noteLineLayer;
    // public OffsetDirection get_offsetDirection()
    // Offset: 0x19F6E88
    GlobalNamespace::OffsetDirection get_offsetDirection();
    // private System.Void set_offsetDirection(OffsetDirection value)
    // Offset: 0x19F6E90
    void set_offsetDirection(GlobalNamespace::OffsetDirection value);
    // public NoteLineLayer get_noteLineLayer()
    // Offset: 0x19F6E98
    GlobalNamespace::NoteLineLayer get_noteLineLayer();
    // private System.Void set_noteLineLayer(NoteLineLayer value)
    // Offset: 0x19F6EA0
    void set_noteLineLayer(GlobalNamespace::NoteLineLayer value);
    // public System.Void .ctor(System.Single time, System.Int32 lineIndex, NoteLineLayer noteLineLayer, OffsetDirection offsetDirection)
    // Offset: 0x19F6F20
    static WaypointData* New_ctor(float time, int lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::OffsetDirection offsetDirection);
    // private System.Void MirrorTransformOffsetDirection()
    // Offset: 0x19F6F84
    void MirrorTransformOffsetDirection();
    // public override BeatmapObjectType get_beatmapObjectType()
    // Offset: 0x19F6E80
    // Implemented from: BeatmapObjectData
    // Base method: BeatmapObjectType BeatmapObjectData::get_beatmapObjectType()
    GlobalNamespace::BeatmapObjectType get_beatmapObjectType();
    // public override BeatmapObjectData GetCopy()
    // Offset: 0x19F6EA8
    // Implemented from: BeatmapObjectData
    // Base method: BeatmapObjectData BeatmapObjectData::GetCopy()
    GlobalNamespace::BeatmapObjectData* GetCopy();
    // public override System.Void MirrorLineIndex(System.Int32 lineCount)
    // Offset: 0x19F6F70
    // Implemented from: BeatmapObjectData
    // Base method: System.Void BeatmapObjectData::MirrorLineIndex(System.Int32 lineCount)
    void MirrorLineIndex(int lineCount);
  }; // WaypointData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::WaypointData*, "", "WaypointData");
#pragma pack(pop)
