// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectData
#include "GlobalNamespace/BeatmapObjectData.hpp"
// Including type: NoteType
#include "GlobalNamespace/NoteType.hpp"
// Including type: NoteCutDirection
#include "GlobalNamespace/NoteCutDirection.hpp"
// Including type: NoteLineLayer
#include "GlobalNamespace/NoteLineLayer.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: NoteData
  class NoteData : public GlobalNamespace::BeatmapObjectData {
    public:
    // private NoteType <noteType>k__BackingField
    // Offset: 0x20
    GlobalNamespace::NoteType noteType;
    // private NoteCutDirection <cutDirection>k__BackingField
    // Offset: 0x24
    GlobalNamespace::NoteCutDirection cutDirection;
    // private NoteLineLayer <noteLineLayer>k__BackingField
    // Offset: 0x28
    GlobalNamespace::NoteLineLayer noteLineLayer;
    // private NoteLineLayer <startNoteLineLayer>k__BackingField
    // Offset: 0x2C
    GlobalNamespace::NoteLineLayer startNoteLineLayer;
    // private System.Int32 <flipLineIndex>k__BackingField
    // Offset: 0x30
    int flipLineIndex;
    // private System.Single <flipYSide>k__BackingField
    // Offset: 0x34
    float flipYSide;
    // private System.Single <timeToNextBasicNote>k__BackingField
    // Offset: 0x38
    float timeToNextBasicNote;
    // private System.Single <timeToPrevBasicNote>k__BackingField
    // Offset: 0x3C
    float timeToPrevBasicNote;
    // public NoteType get_noteType()
    // Offset: 0xC19324
    GlobalNamespace::NoteType get_noteType();
    // private System.Void set_noteType(NoteType value)
    // Offset: 0xC1932C
    void set_noteType(GlobalNamespace::NoteType value);
    // public NoteCutDirection get_cutDirection()
    // Offset: 0xC19334
    GlobalNamespace::NoteCutDirection get_cutDirection();
    // private System.Void set_cutDirection(NoteCutDirection value)
    // Offset: 0xC1933C
    void set_cutDirection(GlobalNamespace::NoteCutDirection value);
    // public NoteLineLayer get_noteLineLayer()
    // Offset: 0xC19344
    GlobalNamespace::NoteLineLayer get_noteLineLayer();
    // private System.Void set_noteLineLayer(NoteLineLayer value)
    // Offset: 0xC1934C
    void set_noteLineLayer(GlobalNamespace::NoteLineLayer value);
    // public NoteLineLayer get_startNoteLineLayer()
    // Offset: 0xC19354
    GlobalNamespace::NoteLineLayer get_startNoteLineLayer();
    // private System.Void set_startNoteLineLayer(NoteLineLayer value)
    // Offset: 0xC1935C
    void set_startNoteLineLayer(GlobalNamespace::NoteLineLayer value);
    // public System.Int32 get_flipLineIndex()
    // Offset: 0xC19364
    int get_flipLineIndex();
    // private System.Void set_flipLineIndex(System.Int32 value)
    // Offset: 0xC1936C
    void set_flipLineIndex(int value);
    // public System.Single get_flipYSide()
    // Offset: 0xC19374
    float get_flipYSide();
    // private System.Void set_flipYSide(System.Single value)
    // Offset: 0xC1937C
    void set_flipYSide(float value);
    // public System.Single get_timeToNextBasicNote()
    // Offset: 0xC19384
    float get_timeToNextBasicNote();
    // public System.Void set_timeToNextBasicNote(System.Single value)
    // Offset: 0xC1938C
    void set_timeToNextBasicNote(float value);
    // public System.Single get_timeToPrevBasicNote()
    // Offset: 0xC19394
    float get_timeToPrevBasicNote();
    // private System.Void set_timeToPrevBasicNote(System.Single value)
    // Offset: 0xC1939C
    void set_timeToPrevBasicNote(float value);
    // public System.Void .ctor(System.Int32 id, System.Single time, System.Int32 lineIndex, NoteLineLayer noteLineLayer, NoteLineLayer startNoteLineLayer, NoteType noteType, NoteCutDirection cutDirection, System.Single timeToNextBasicNote, System.Single timeToPrevBasicNote)
    // Offset: 0xC194D8
    static NoteData* New_ctor(int id, float time, int lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteLineLayer startNoteLineLayer, GlobalNamespace::NoteType noteType, GlobalNamespace::NoteCutDirection cutDirection, float timeToNextBasicNote, float timeToPrevBasicNote);
    // public System.Void .ctor(System.Int32 id, System.Single time, System.Int32 lineIndex, NoteLineLayer noteLineLayer, NoteLineLayer startNoteLineLayer, NoteType noteType, NoteCutDirection cutDirection, System.Single timeToNextBasicNote, System.Single timeToPrevBasicNote, System.Int32 flipLineIndex, System.Single flipYSide)
    // Offset: 0xC19454
    static NoteData* New_ctor(int id, float time, int lineIndex, GlobalNamespace::NoteLineLayer noteLineLayer, GlobalNamespace::NoteLineLayer startNoteLineLayer, GlobalNamespace::NoteType noteType, GlobalNamespace::NoteCutDirection cutDirection, float timeToNextBasicNote, float timeToPrevBasicNote, int flipLineIndex, float flipYSide);
    // public System.Void SetNoteFlipToNote(NoteData targetNote)
    // Offset: 0xC1954C
    void SetNoteFlipToNote(GlobalNamespace::NoteData* targetNote);
    // public System.Void SwitchNoteType()
    // Offset: 0xC195C8
    void SwitchNoteType();
    // public System.Void MirrorTransformCutDirection()
    // Offset: 0xC195EC
    void MirrorTransformCutDirection();
    // public System.Void SetNoteToAnyCutDirection()
    // Offset: 0xC19610
    void SetNoteToAnyCutDirection();
    // public System.Void TransformNoteAOrBToRandomType()
    // Offset: 0xC1961C
    void TransformNoteAOrBToRandomType();
    // public System.Void SetNoteStartLineLayer(NoteLineLayer lineLayer)
    // Offset: 0xC1967C
    void SetNoteStartLineLayer(GlobalNamespace::NoteLineLayer lineLayer);
    // public override BeatmapObjectData GetCopy()
    // Offset: 0xC193A4
    // Implemented from: BeatmapObjectData
    // Base method: BeatmapObjectData BeatmapObjectData::GetCopy()
    GlobalNamespace::BeatmapObjectData* GetCopy();
    // public override System.Void MirrorLineIndex(System.Int32 lineCount)
    // Offset: 0xC19684
    // Implemented from: BeatmapObjectData
    // Base method: System.Void BeatmapObjectData::MirrorLineIndex(System.Int32 lineCount)
    void MirrorLineIndex(int lineCount);
  }; // NoteData
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteData*, "", "NoteData");
#pragma pack(pop)
