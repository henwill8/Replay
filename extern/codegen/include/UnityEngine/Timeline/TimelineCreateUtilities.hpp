// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TrackAsset
  class TrackAsset;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: ScriptableObject
  class ScriptableObject;
  // Forward declaring type: Object
  class Object;
  // Forward declaring type: AnimationClip
  class AnimationClip;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Type
  class Type;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.TimelineCreateUtilities
  // [] Offset: FFFFFFFF
  class TimelineCreateUtilities : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_0
    class $$c__DisplayClass0_0;
    // Nested type: UnityEngine::Timeline::TimelineCreateUtilities::$$c__DisplayClass0_1
    class $$c__DisplayClass0_1;
    // Creating value type constructor for type: TimelineCreateUtilities
    TimelineCreateUtilities() noexcept {}
    // static public System.String GenerateUniqueActorName(System.Collections.Generic.List`1<UnityEngine.ScriptableObject> tracks, System.String name)
    // Offset: 0x2231EE8
    static ::Il2CppString* GenerateUniqueActorName(System::Collections::Generic::List_1<UnityEngine::ScriptableObject*>* tracks, ::Il2CppString* name);
    // static public System.Void SaveAssetIntoObject(UnityEngine.Object childAsset, UnityEngine.Object masterAsset)
    // Offset: 0x223224C
    static void SaveAssetIntoObject(UnityEngine::Object* childAsset, UnityEngine::Object* masterAsset);
    // static public UnityEngine.AnimationClip CreateAnimationClipForTrack(System.String name, UnityEngine.Timeline.TrackAsset track, System.Boolean isLegacy)
    // Offset: 0x22317F0
    static UnityEngine::AnimationClip* CreateAnimationClipForTrack(::Il2CppString* name, UnityEngine::Timeline::TrackAsset* track, bool isLegacy);
    // static public System.Boolean ValidateParentTrack(UnityEngine.Timeline.TrackAsset parent, System.Type childType)
    // Offset: 0x22324C0
    static bool ValidateParentTrack(UnityEngine::Timeline::TrackAsset* parent, System::Type* childType);
  }; // UnityEngine.Timeline.TimelineCreateUtilities
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::TimelineCreateUtilities*, "UnityEngine.Timeline", "TimelineCreateUtilities");
