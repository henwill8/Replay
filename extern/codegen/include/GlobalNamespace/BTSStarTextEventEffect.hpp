// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`3<T1, T2, T3>
  template<typename T1, typename T2, typename T3>
  class Action_3;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BTSStarTextEventEffect
  class BTSStarTextEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BTSStarTextEventEffect::StarTextSprite
    class StarTextSprite;
    // Nested type: GlobalNamespace::BTSStarTextEventEffect::StartTextPosition
    class StartTextPosition;
    // private BTSStarTextEventEffect/StarTextSprite[] _starTextSprites
    // Offset: 0x18
    ::Array<GlobalNamespace::BTSStarTextEventEffect::StarTextSprite*>* starTextSprites;
    // private BTSStarTextEventEffect/StartTextPosition[] _startTextPositions
    // Offset: 0x20
    ::Array<GlobalNamespace::BTSStarTextEventEffect::StartTextPosition*>* startTextPositions;
    // private readonly BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Offset: 0x28
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // private readonly IAudioTimeSource _audioTimeSource
    // Offset: 0x30
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // private System.Action`3<UnityEngine.Sprite,UnityEngine.Transform,System.Single> startStarTextAnimationEvent
    // Offset: 0x38
    System::Action_3<UnityEngine::Sprite*, UnityEngine::Transform*, float>* startStarTextAnimationEvent;
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,BTSStarTextEventEffect/StarTextSprite> _idsToStarTextSpriteDictionary
    // Offset: 0x40
    System::Collections::Generic::Dictionary_2<int, GlobalNamespace::BTSStarTextEventEffect::StarTextSprite*>* idsToStarTextSpriteDictionary;
    // private readonly System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Transform> _idsToStarTextPositionDictionary
    // Offset: 0x48
    System::Collections::Generic::Dictionary_2<int, UnityEngine::Transform*>* idsToStarTextPositionDictionary;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private BeatmapEventType kStarTextAppearEventType
    static constexpr const int kStarTextAppearEventType = 41;
    // Get static field: static private BeatmapEventType kStarTextAppearEventType
    static GlobalNamespace::BeatmapEventType _get_kStarTextAppearEventType();
    // Set static field: static private BeatmapEventType kStarTextAppearEventType
    static void _set_kStarTextAppearEventType(GlobalNamespace::BeatmapEventType value);
    // public System.Void add_startStarTextAnimationEvent(System.Action`3<UnityEngine.Sprite,UnityEngine.Transform,System.Single> value)
    // Offset: 0x1A4C154
    void add_startStarTextAnimationEvent(System::Action_3<UnityEngine::Sprite*, UnityEngine::Transform*, float>* value);
    // public System.Void remove_startStarTextAnimationEvent(System.Action`3<UnityEngine.Sprite,UnityEngine.Transform,System.Single> value)
    // Offset: 0x1A4C288
    void remove_startStarTextAnimationEvent(System::Action_3<UnityEngine::Sprite*, UnityEngine::Transform*, float>* value);
    // protected System.Void Start()
    // Offset: 0x1A4C5E4
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1A4C73C
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0x1A4C7D0
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void .ctor()
    // Offset: 0x1A4C9D0
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BTSStarTextEventEffect* New_ctor();
  }; // BTSStarTextEventEffect
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEventEffect*, "", "BTSStarTextEventEffect");
#pragma pack(pop)