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
  // Forward declaring type: BloomFogSO
  class BloomFogSO;
  // Forward declaring type: BeatmapObjectCallbackController
  class BeatmapObjectCallbackController;
  // Forward declaring type: BeatmapEventData
  class BeatmapEventData;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: FogSwitchEventEffect
  // [] Offset: FFFFFFFF
  class FogSwitchEventEffect : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::FogSwitchEventEffect::$AnimateToFogCoroutine$d__8
    class $AnimateToFogCoroutine$d__8;
    // private BloomFogSO _bloomFog
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BloomFogSO* bloomFog;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BloomFogSO*) == 0x8);
    // private BeatmapEventType _event
    // Size: 0x4
    // Offset: 0x20
    GlobalNamespace::BeatmapEventType event;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapEventType) == 0x4);
    // Padding between fields: event and: beatmapObjectCallbackController
    char __padding1[0x4] = {};
    // [InjectAttribute] Offset: 0xD38D98
    // private readonly BeatmapObjectCallbackController _beatmapObjectCallbackController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectCallbackController*) == 0x8);
    // Creating value type constructor for type: FogSwitchEventEffect
    FogSwitchEventEffect(GlobalNamespace::BloomFogSO* bloomFog_ = {}, GlobalNamespace::BeatmapEventType event_ = {}, GlobalNamespace::BeatmapObjectCallbackController* beatmapObjectCallbackController_ = {}) noexcept : bloomFog{bloomFog_}, event{event_}, beatmapObjectCallbackController{beatmapObjectCallbackController_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // static field const value: static private System.Single kTransitionDuration
    static constexpr const float kTransitionDuration = 2;
    // Get static field: static private System.Single kTransitionDuration
    static float _get_kTransitionDuration();
    // Set static field: static private System.Single kTransitionDuration
    static void _set_kTransitionDuration(float value);
    // protected System.Void Start()
    // Offset: 0xF302CC
    void Start();
    // private System.Void OnDestroy()
    // Offset: 0xF30360
    void OnDestroy();
    // private System.Void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(BeatmapEventData beatmapEventData)
    // Offset: 0xF3043C
    void HandleBeatmapObjectCallbackControllerBeatmapEventDidTrigger(GlobalNamespace::BeatmapEventData* beatmapEventData);
    // private System.Void AnimateToFog(System.Single duration, System.Single value)
    // Offset: 0xF30490
    void AnimateToFog(float duration, float value);
    // private System.Collections.IEnumerator AnimateToFogCoroutine(System.Single duration, System.Single value)
    // Offset: 0xF304E0
    System::Collections::IEnumerator* AnimateToFogCoroutine(float duration, float value);
    // public System.Void .ctor()
    // Offset: 0xF3059C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static FogSwitchEventEffect* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::FogSwitchEventEffect::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<FogSwitchEventEffect*, creationType>()));
    }
  }; // FogSwitchEventEffect
  #pragma pack(pop)
  static check_size<sizeof(FogSwitchEventEffect), 40 + sizeof(GlobalNamespace::BeatmapObjectCallbackController*)> __GlobalNamespace_FogSwitchEventEffectSizeCheck;
  static_assert(sizeof(FogSwitchEventEffect) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::FogSwitchEventEffect*, "", "FogSwitchEventEffect");
