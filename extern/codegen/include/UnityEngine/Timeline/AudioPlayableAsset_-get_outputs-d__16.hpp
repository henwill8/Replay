// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.Timeline.AudioPlayableAsset
#include "UnityEngine/Timeline/AudioPlayableAsset.hpp"
// Including type: System.Collections.Generic.IEnumerable`1
#include "System/Collections/Generic/IEnumerable_1.hpp"
// Including type: UnityEngine.Playables.PlayableBinding
#include "UnityEngine/Playables/PlayableBinding.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Skipping declaration: IEnumerator because it is already included!
}
// Completed forward declares
// Type namespace: UnityEngine.Timeline
namespace UnityEngine::Timeline {
  // Size: 0x48
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: CFF1BC
  class AudioPlayableAsset::$get_outputs$d__16 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>, public System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private UnityEngine.Playables.PlayableBinding <>2__current
    // Size: 0x20
    // Offset: 0x18
    UnityEngine::Playables::PlayableBinding $$2__current;
    // Field size check
    static_assert(sizeof(UnityEngine::Playables::PlayableBinding) == 0x20);
    // private System.Int32 <>l__initialThreadId
    // Size: 0x4
    // Offset: 0x38
    int $$l__initialThreadId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$l__initialThreadId and: $$4__this
    char __padding2[0x4] = {};
    // public UnityEngine.Timeline.AudioPlayableAsset <>4__this
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::Timeline::AudioPlayableAsset* $$4__this;
    // Field size check
    static_assert(sizeof(UnityEngine::Timeline::AudioPlayableAsset*) == 0x8);
    // Creating value type constructor for type: $get_outputs$d__16
    $get_outputs$d__16(int $$1__state_ = {}, UnityEngine::Playables::PlayableBinding $$2__current_ = {}, int $$l__initialThreadId_ = {}, UnityEngine::Timeline::AudioPlayableAsset* $$4__this_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, $$l__initialThreadId{$$l__initialThreadId_}, $$4__this{$$4__this_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>
    operator System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerable_1<UnityEngine::Playables::PlayableBinding>*>(this);
    }
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>
    operator System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x172B8E8
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioPlayableAsset::$get_outputs$d__16* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::Timeline::AudioPlayableAsset::$get_outputs$d__16::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioPlayableAsset::$get_outputs$d__16*, creationType>($$1__state)));
    }
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x172BAE0
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x172BAE4
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private UnityEngine.Playables.PlayableBinding System.Collections.Generic.IEnumerator<UnityEngine.Playables.PlayableBinding>.get_Current()
    // Offset: 0x172BB80
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    UnityEngine::Playables::PlayableBinding System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x172BB90
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x172BBF0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
    // private System.Collections.Generic.IEnumerator`1<UnityEngine.Playables.PlayableBinding> System.Collections.Generic.IEnumerable<UnityEngine.Playables.PlayableBinding>.GetEnumerator()
    // Offset: 0x172BC58
    // Implemented from: System.Collections.Generic.IEnumerable`1
    // Base method: System.Collections.Generic.IEnumerator`1<T> IEnumerable_1::GetEnumerator()
    System::Collections::Generic::IEnumerator_1<UnityEngine::Playables::PlayableBinding>* System_Collections_Generic_IEnumerable_1_GetEnumerator();
    // private System.Collections.IEnumerator System.Collections.IEnumerable.GetEnumerator()
    // Offset: 0x172BD0C
    // Implemented from: System.Collections.IEnumerable
    // Base method: System.Collections.IEnumerator IEnumerable::GetEnumerator()
    System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator();
  }; // UnityEngine.Timeline.AudioPlayableAsset/<get_outputs>d__16
  #pragma pack(pop)
  static check_size<sizeof(AudioPlayableAsset::$get_outputs$d__16), 64 + sizeof(UnityEngine::Timeline::AudioPlayableAsset*)> __UnityEngine_Timeline_AudioPlayableAsset_$get_outputs$d__16SizeCheck;
  static_assert(sizeof(AudioPlayableAsset::$get_outputs$d__16) == 0x48);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Timeline::AudioPlayableAsset::$get_outputs$d__16*, "UnityEngine.Timeline", "AudioPlayableAsset/<get_outputs>d__16");
