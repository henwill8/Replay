// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: AudioClipLoaderSO
#include "GlobalNamespace/AudioClipLoaderSO.hpp"
// Including type: System.Collections.Generic.IEnumerator`1
#include "System/Collections/Generic/IEnumerator_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
}
// Forward declaring namespace: UnityEngine::Networking
namespace UnityEngine::Networking {
  // Forward declaring type: UnityWebRequest
  class UnityWebRequest;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: AudioClipLoaderSO/<LoadAudioFileCoroutine>d__3
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D309C0
  class AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3 : public ::Il2CppObject/*, public System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*/ {
    public:
    // private System.Int32 <>1__state
    // Size: 0x4
    // Offset: 0x10
    int $$1__state;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: $$1__state and: $$2__current
    char __padding0[0x4] = {};
    // private System.Object <>2__current
    // Size: 0x8
    // Offset: 0x18
    ::Il2CppObject* $$2__current;
    // Field size check
    static_assert(sizeof(::Il2CppObject*) == 0x8);
    // public System.String filePath
    // Size: 0x8
    // Offset: 0x20
    ::Il2CppString* filePath;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Action`1<UnityEngine.AudioClip> finishCallback
    // Size: 0x8
    // Offset: 0x28
    System::Action_1<UnityEngine::AudioClip*>* finishCallback;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::AudioClip*>*) == 0x8);
    // public AudioClipLoaderSO <>4__this
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::AudioClipLoaderSO* $$4__this;
    // Field size check
    static_assert(sizeof(GlobalNamespace::AudioClipLoaderSO*) == 0x8);
    // private UnityEngine.Networking.UnityWebRequest <www>5__2
    // Size: 0x8
    // Offset: 0x38
    UnityEngine::Networking::UnityWebRequest* $www$5__2;
    // Field size check
    static_assert(sizeof(UnityEngine::Networking::UnityWebRequest*) == 0x8);
    // Creating value type constructor for type: $LoadAudioFileCoroutine$d__3
    $LoadAudioFileCoroutine$d__3(int $$1__state_ = {}, ::Il2CppObject* $$2__current_ = {}, ::Il2CppString* filePath_ = {}, System::Action_1<UnityEngine::AudioClip*>* finishCallback_ = {}, GlobalNamespace::AudioClipLoaderSO* $$4__this_ = {}, UnityEngine::Networking::UnityWebRequest* $www$5__2_ = {}) noexcept : $$1__state{$$1__state_}, $$2__current{$$2__current_}, filePath{filePath_}, finishCallback{finishCallback_}, $$4__this{$$4__this_}, $www$5__2{$www$5__2_} {}
    // Creating interface conversion operator: operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>
    operator System::Collections::Generic::IEnumerator_1<::Il2CppObject*>() noexcept {
      return *reinterpret_cast<System::Collections::Generic::IEnumerator_1<::Il2CppObject*>*>(this);
    }
    // public System.Void .ctor(System.Int32 <>1__state)
    // Offset: 0x102F6DC
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3* New_ctor(int $$1__state) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3*, creationType>($$1__state)));
    }
    // private System.Void <>m__Finally1()
    // Offset: 0x102F72C
    void $$m__Finally1();
    // private System.Void System.IDisposable.Dispose()
    // Offset: 0x102F710
    // Implemented from: System.IDisposable
    // Base method: System.Void IDisposable::Dispose()
    void System_IDisposable_Dispose();
    // private System.Boolean MoveNext()
    // Offset: 0x102F7EC
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Boolean IEnumerator::MoveNext()
    bool MoveNext();
    // Creating proxy method: System_Collections_IEnumerator_MoveNext
    // Maps to method: MoveNext
    bool System_Collections_IEnumerator_MoveNext();
    // private System.Object System.Collections.Generic.IEnumerator<System.Object>.get_Current()
    // Offset: 0x102FA48
    // Implemented from: System.Collections.Generic.IEnumerator`1
    // Base method: T IEnumerator_1::get_Current()
    ::Il2CppObject* System_Collections_Generic_IEnumerator_1_get_Current();
    // private System.Void System.Collections.IEnumerator.Reset()
    // Offset: 0x102FA50
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Void IEnumerator::Reset()
    void System_Collections_IEnumerator_Reset();
    // private System.Object System.Collections.IEnumerator.get_Current()
    // Offset: 0x102FAB0
    // Implemented from: System.Collections.IEnumerator
    // Base method: System.Object IEnumerator::get_Current()
    ::Il2CppObject* System_Collections_IEnumerator_get_Current();
  }; // AudioClipLoaderSO/<LoadAudioFileCoroutine>d__3
  #pragma pack(pop)
  static check_size<sizeof(AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3), 56 + sizeof(UnityEngine::Networking::UnityWebRequest*)> __GlobalNamespace_AudioClipLoaderSO_$LoadAudioFileCoroutine$d__3SizeCheck;
  static_assert(sizeof(AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AudioClipLoaderSO::$LoadAudioFileCoroutine$d__3*, "", "AudioClipLoaderSO/<LoadAudioFileCoroutine>d__3");
