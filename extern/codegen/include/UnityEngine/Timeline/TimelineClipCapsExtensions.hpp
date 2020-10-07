// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
  // Forward declaring type: ClipCaps
  struct ClipCaps;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Autogenerated type: UnityEngine.Timeline.TimelineClipCapsExtensions
  class TimelineClipCapsExtensions : public ::Il2CppObject {
    public:
    // static public System.Boolean SupportsLooping(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x1905BE8
    static bool SupportsLooping(UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean SupportsExtrapolation(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x1905C08
    static bool SupportsExtrapolation(UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean SupportsClipIn(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x1905C28
    static bool SupportsClipIn(UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean SupportsSpeedMultiplier(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x1905C48
    static bool SupportsSpeedMultiplier(UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean SupportsBlending(UnityEngine.Timeline.TimelineClip clip)
    // Offset: 0x1905C68
    static bool SupportsBlending(UnityEngine::Timeline::TimelineClip* clip);
    // static public System.Boolean HasAll(UnityEngine.Timeline.ClipCaps caps, UnityEngine.Timeline.ClipCaps flags)
    // Offset: 0x1905C88
    static bool HasAll(UnityEngine::Timeline::ClipCaps caps, UnityEngine::Timeline::ClipCaps flags);
    // static public System.Boolean HasAny(UnityEngine.Timeline.ClipCaps caps, UnityEngine.Timeline.ClipCaps flags)
    // Offset: 0x1905C94
    static bool HasAny(UnityEngine::Timeline::ClipCaps caps, UnityEngine::Timeline::ClipCaps flags);
  }; // UnityEngine.Timeline.TimelineClipCapsExtensions
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineClipCapsExtensions*, "UnityEngine.Timeline", "TimelineClipCapsExtensions");
#pragma pack(pop)
