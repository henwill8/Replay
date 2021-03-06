// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.AudioClip
#include "UnityEngine/AudioClip.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.AudioClip/PCMSetPositionCallback
  // [] Offset: FFFFFFFF
  class AudioClip::PCMSetPositionCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: PCMSetPositionCallback
    PCMSetPositionCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0x22BB100
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AudioClip::PCMSetPositionCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::AudioClip::PCMSetPositionCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AudioClip::PCMSetPositionCallback*, creationType>(object, method)));
    }
    // public System.Void Invoke(System.Int32 position)
    // Offset: 0x22BAE50
    void Invoke(int position);
    // public System.IAsyncResult BeginInvoke(System.Int32 position, System.AsyncCallback callback, System.Object object)
    // Offset: 0x22BB114
    System::IAsyncResult* BeginInvoke(int position, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public System.Void EndInvoke(System.IAsyncResult result)
    // Offset: 0x22BB1A0
    void EndInvoke(System::IAsyncResult* result);
  }; // UnityEngine.AudioClip/PCMSetPositionCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::AudioClip::PCMSetPositionCallback*, "UnityEngine", "AudioClip/PCMSetPositionCallback");
