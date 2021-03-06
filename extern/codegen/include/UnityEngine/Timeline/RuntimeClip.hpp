// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.RuntimeClipBase
#include "UnityEngine/Timeline/RuntimeClipBase.hpp"
// Including type: UnityEngine.Playables.Playable
#include "UnityEngine/Playables/Playable.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::Timeline
namespace UnityEngine::Timeline {
  // Forward declaring type: TimelineClip
  class TimelineClip;
}
// Forward declaring namespace: UnityEngine::Playables
namespace UnityEngine::Playables {
  // Forward declaring type: FrameData
  struct FrameData;
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x3C
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.RuntimeClip
  // [] Offset: FFFFFFFF
  class RuntimeClip : public UnityEngine::Timeline::RuntimeClipBase {
    public:
    // Writing base type padding for base size: 0x14 to desired offset: 0x18
    char ___base_padding[0x4] = {};
    // private UnityEngine.Timeline.TimelineClip m_Clip
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Timeline::TimelineClip* m_Clip;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::TimelineClip*) == 0x8);
    // private UnityEngine.Playables.Playable m_Playable
    // Size: 0xC
    // Offset: 0x20
    UnityEngine::Playables::Playable m_Playable;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::Playable) == 0xC);
    // Padding between fields: m_Playable and: m_ParentMixer
    char __padding1[0x4] = {};
    // private UnityEngine.Playables.Playable m_ParentMixer
    // Size: 0xC
    // Offset: 0x30
    UnityEngine::Playables::Playable m_ParentMixer;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::Playable) == 0xC);
    // Creating value type constructor for type: RuntimeClip
    RuntimeClip(UnityEngine::Timeline::TimelineClip* m_Clip_ = {}, UnityEngine::Playables::Playable m_Playable_ = {}, UnityEngine::Playables::Playable m_ParentMixer_ = {}) noexcept : m_Clip{m_Clip_}, m_Playable{m_Playable_}, m_ParentMixer{m_ParentMixer_} {}
    // Deleting conversion operator: operator int
    constexpr operator int() const noexcept = delete;
    // public System.Void .ctor(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer)
    // Offset: 0x17289C4
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static RuntimeClip* New_ctor(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::RuntimeClip::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<RuntimeClip*, creationType>(clip, clipPlayable, parentMixer)));
    }
    // private System.Void Create(UnityEngine.Timeline.TimelineClip clip, UnityEngine.Playables.Playable clipPlayable, UnityEngine.Playables.Playable parentMixer)
    // Offset: 0x173546C
    void Create(UnityEngine::Timeline::TimelineClip* clip, UnityEngine::Playables::Playable clipPlayable, UnityEngine::Playables::Playable parentMixer);
    // public UnityEngine.Timeline.TimelineClip get_clip()
    // Offset: 0x1735504
    UnityEngine::Timeline::TimelineClip* get_clip();
    // public UnityEngine.Playables.Playable get_mixer()
    // Offset: 0x173550C
    UnityEngine::Playables::Playable get_mixer();
    // public UnityEngine.Playables.Playable get_playable()
    // Offset: 0x1735518
    UnityEngine::Playables::Playable get_playable();
    // public System.Void SetTime(System.Double time)
    // Offset: 0x1735638
    void SetTime(double time);
    // public System.Void SetDuration(System.Double duration)
    // Offset: 0x1735698
    void SetDuration(double duration);
    // public override System.Double get_start()
    // Offset: 0x173542C
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_start()
    double get_start();
    // public override System.Double get_duration()
    // Offset: 0x1735448
    // Implemented from: UnityEngine.Timeline.RuntimeClipBase
    // Base method: System.Double RuntimeClipBase::get_duration()
    double get_duration();
    // public override System.Void set_enable(System.Boolean value)
    // Offset: 0x1735524
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::set_enable(System.Boolean value)
    void set_enable(bool value);
    // public override System.Void EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    // Offset: 0x17356F8
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::EvaluateAt(System.Double localTime, UnityEngine.Playables.FrameData frameData)
    void EvaluateAt(double localTime, UnityEngine::Playables::FrameData frameData);
    // public override System.Void Reset()
    // Offset: 0x17358AC
    // Implemented from: UnityEngine.Timeline.RuntimeElement
    // Base method: System.Void RuntimeElement::Reset()
    void Reset();
  }; // UnityEngine.Timeline.RuntimeClip
  #pragma pack(pop)
  static check_size<sizeof(RuntimeClip), 48 + sizeof(UnityEngine::Playables::Playable)> __UnityEngine_Timeline_RuntimeClipSizeCheck;
  static_assert(sizeof(RuntimeClip) == 0x3C);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::RuntimeClip*, "UnityEngine.Timeline", "RuntimeClip");
