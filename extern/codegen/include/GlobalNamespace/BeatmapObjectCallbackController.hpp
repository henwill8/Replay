// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: BeatmapEventType
#include "GlobalNamespace/BeatmapEventType.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IAudioTimeSource
  class IAudioTimeSource;
  // Forward declaring type: EnvironmentKeywords
  class EnvironmentKeywords;
  // Forward declaring type: BeatmapObjectData
  class BeatmapObjectData;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: HashSet`1<T>
  template<typename T>
  class HashSet_1;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
  // Forward declaring type: Action
  class Action;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectCallbackController
  // [] Offset: FFFFFFFF
  class BeatmapObjectCallbackController : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapObjectCallbackController::InitData
    class InitData;
    // Nested type: GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData
    class BeatmapObjectCallbackData;
    // Nested type: GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData
    class BeatmapEventCallbackData;
    // Nested type: GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallback
    class BeatmapObjectCallback;
    // Nested type: GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallback
    class BeatmapEventCallback;
    // [InjectAttribute] Offset: 0xD37390
    // private readonly BeatmapObjectCallbackController/InitData _initData
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapObjectCallbackController::InitData* initData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectCallbackController::InitData*) == 0x8);
    // [InjectAttribute] Offset: 0xD373A0
    // private readonly IAudioTimeSource _audioTimeSource
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::IAudioTimeSource* audioTimeSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IAudioTimeSource*) == 0x8);
    // [InjectAttribute] Offset: 0xD373B0
    // private readonly EnvironmentKeywords _environmentKeywords
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::EnvironmentKeywords* environmentKeywords;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnvironmentKeywords*) == 0x8);
    // private readonly System.Collections.Generic.List`1<BeatmapObjectData> _beatmapObjectDataCallbackCacheList
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>* beatmapObjectDataCallbackCacheList;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD373C0
    // private System.Action`1<BeatmapEventData> beatmapEventDidTriggerEvent
    // Size: 0x8
    // Offset: 0x38
    System::Action_1<GlobalNamespace::BeatmapEventData*>* beatmapEventDidTriggerEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<GlobalNamespace::BeatmapEventData*>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD373D0
    // private System.Action callbacksForThisFrameWereProcessedEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action* callbacksForThisFrameWereProcessedEvent;
    // Field size check
    static_assert(sizeof(System::Action*) == 0x8);
    // private readonly System.Collections.Generic.List`1<BeatmapObjectCallbackController/BeatmapObjectCallbackData> _beatmapObjectCallbackData
    // Size: 0x8
    // Offset: 0x48
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData*>* beatmapObjectCallbackData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData*>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<BeatmapObjectCallbackController/BeatmapEventCallbackData> _beatmapEventCallbackData
    // Size: 0x8
    // Offset: 0x50
    System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData*>* beatmapEventCallbackData;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData*>*) == 0x8);
    // private System.Int32 _nextEventIndex
    // Size: 0x4
    // Offset: 0x58
    int nextEventIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Single _spawningStartTime
    // Size: 0x4
    // Offset: 0x5C
    float spawningStartTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private IReadonlyBeatmapData _beatmapData
    // Size: 0x8
    // Offset: 0x60
    GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    // Field size check
    static_assert(sizeof(GlobalNamespace::IReadonlyBeatmapData*) == 0x8);
    // private readonly System.Collections.Generic.HashSet`1<BeatmapEventType> _validEvents
    // Size: 0x8
    // Offset: 0x68
    System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>* validEvents;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*) == 0x8);
    // Creating value type constructor for type: BeatmapObjectCallbackController
    BeatmapObjectCallbackController(GlobalNamespace::BeatmapObjectCallbackController::InitData* initData_ = {}, GlobalNamespace::IAudioTimeSource* audioTimeSource_ = {}, GlobalNamespace::EnvironmentKeywords* environmentKeywords_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectData*>* beatmapObjectDataCallbackCacheList_ = {}, System::Action_1<GlobalNamespace::BeatmapEventData*>* beatmapEventDidTriggerEvent_ = {}, System::Action* callbacksForThisFrameWereProcessedEvent_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData*>* beatmapObjectCallbackData_ = {}, System::Collections::Generic::List_1<GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData*>* beatmapEventCallbackData_ = {}, int nextEventIndex_ = {}, float spawningStartTime_ = {}, GlobalNamespace::IReadonlyBeatmapData* beatmapData_ = {}, System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>* validEvents_ = {}) noexcept : initData{initData_}, audioTimeSource{audioTimeSource_}, environmentKeywords{environmentKeywords_}, beatmapObjectDataCallbackCacheList{beatmapObjectDataCallbackCacheList_}, beatmapEventDidTriggerEvent{beatmapEventDidTriggerEvent_}, callbacksForThisFrameWereProcessedEvent{callbacksForThisFrameWereProcessedEvent_}, beatmapObjectCallbackData{beatmapObjectCallbackData_}, beatmapEventCallbackData{beatmapEventCallbackData_}, nextEventIndex{nextEventIndex_}, spawningStartTime{spawningStartTime_}, beatmapData{beatmapData_}, validEvents{validEvents_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_beatmapEventDidTriggerEvent(System.Action`1<BeatmapEventData> value)
    // Offset: 0xF5597C
    void add_beatmapEventDidTriggerEvent(System::Action_1<GlobalNamespace::BeatmapEventData*>* value);
    // public System.Void remove_beatmapEventDidTriggerEvent(System.Action`1<BeatmapEventData> value)
    // Offset: 0xF55A20
    void remove_beatmapEventDidTriggerEvent(System::Action_1<GlobalNamespace::BeatmapEventData*>* value);
    // public System.Void add_callbacksForThisFrameWereProcessedEvent(System.Action value)
    // Offset: 0xF55AC4
    void add_callbacksForThisFrameWereProcessedEvent(System::Action* value);
    // public System.Void remove_callbacksForThisFrameWereProcessedEvent(System.Action value)
    // Offset: 0xF55B68
    void remove_callbacksForThisFrameWereProcessedEvent(System::Action* value);
    // protected System.Void Start()
    // Offset: 0xF55C0C
    void Start();
    // protected System.Void LateUpdate()
    // Offset: 0xF563F8
    void LateUpdate();
    // public BeatmapObjectCallbackController/BeatmapObjectCallbackData AddBeatmapObjectCallback(BeatmapObjectCallbackController/BeatmapObjectCallback callback, System.Single aheadTime)
    // Offset: 0xF579B8
    GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData* AddBeatmapObjectCallback(GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallback* callback, float aheadTime);
    // public System.Void RemoveBeatmapObjectCallback(BeatmapObjectCallbackController/BeatmapObjectCallbackData callbackData)
    // Offset: 0xF57C2C
    void RemoveBeatmapObjectCallback(GlobalNamespace::BeatmapObjectCallbackController::BeatmapObjectCallbackData* callbackData);
    // public BeatmapObjectCallbackController/BeatmapEventCallbackData AddBeatmapEventCallback(BeatmapObjectCallbackController/BeatmapEventCallback callback, System.Single aheadTime)
    // Offset: 0xF57CA0
    GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData* AddBeatmapEventCallback(GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallback* callback, float aheadTime);
    // public System.Void RemoveBeatmapEventCallback(BeatmapObjectCallbackController/BeatmapEventCallbackData callbackData)
    // Offset: 0xF57D9C
    void RemoveBeatmapEventCallback(GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData* callbackData);
    // public System.Void SendBeatmapEventDidTriggerEvent(BeatmapEventData beatmapEventData)
    // Offset: 0xF5791C
    void SendBeatmapEventDidTriggerEvent(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // public System.Void SetNewBeatmapData(IReadonlyBeatmapData beatmapData)
    // Offset: 0xF55C3C
    void SetNewBeatmapData(GlobalNamespace::IReadonlyBeatmapData* beatmapData);
    // public System.Void Pause()
    // Offset: 0xF57E10
    void Pause();
    // public System.Void Resume()
    // Offset: 0xF57E1C
    void Resume();
    // public System.Void .ctor()
    // Offset: 0xF57E28
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectCallbackController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectCallbackController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectCallbackController*, creationType>()));
    }
  }; // BeatmapObjectCallbackController
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectCallbackController), 104 + sizeof(System::Collections::Generic::HashSet_1<GlobalNamespace::BeatmapEventType>*)> __GlobalNamespace_BeatmapObjectCallbackControllerSizeCheck;
  static_assert(sizeof(BeatmapObjectCallbackController) == 0x70);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectCallbackController*, "", "BeatmapObjectCallbackController");
