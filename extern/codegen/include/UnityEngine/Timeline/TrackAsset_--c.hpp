// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.TrackAsset
#include "UnityEngine/Timeline/TrackAsset.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Comparison`1<T>
  template<typename T>
  class Comparison_1;
}
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.TrackAsset/<>c
  class TrackAsset::$$c : public ::Il2CppObject {
    public:
    // Get static field: static public readonly UnityEngine.Timeline.TrackAsset/<>c <>9
    static UnityEngine::Timeline::TrackAsset::$$c* _get_$$9();
    // Set static field: static public readonly UnityEngine.Timeline.TrackAsset/<>c <>9
    static void _set_$$9(UnityEngine::Timeline::TrackAsset::$$c* value);
    // Get static field: static public System.Comparison`1<UnityEngine.Timeline.TimelineClip> <>9__120_0
    static System::Comparison_1<UnityEngine::Timeline::TimelineClip*>* _get_$$9__120_0();
    // Set static field: static public System.Comparison`1<UnityEngine.Timeline.TimelineClip> <>9__120_0
    static void _set_$$9__120_0(System::Comparison_1<UnityEngine::Timeline::TimelineClip*>* value);
    // static private System.Void .cctor()
    // Offset: 0x190EC10
    static void _cctor();
    // System.Int32 <SortClips>b__120_0(UnityEngine.Timeline.TimelineClip clip1, UnityEngine.Timeline.TimelineClip clip2)
    // Offset: 0x190EC80
    int $SortClips$b__120_0(UnityEngine::Timeline::TimelineClip* clip1, UnityEngine::Timeline::TimelineClip* clip2);
    // public System.Void .ctor()
    // Offset: 0x190EC78
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static TrackAsset::$$c* New_ctor();
  }; // UnityEngine.Timeline.TrackAsset/<>c
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TrackAsset::$$c*, "UnityEngine.Timeline", "TrackAsset/<>c");
#pragma pack(pop)
