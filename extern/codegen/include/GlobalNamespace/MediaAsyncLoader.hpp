// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationToken
  struct CancellationToken;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AudioClip
  class AudioClip;
  // Forward declaring type: Texture2D
  class Texture2D;
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: MediaAsyncLoader
  // [] Offset: FFFFFFFF
  class MediaAsyncLoader : public ::Il2CppObject {
    public:
    // Nested type: GlobalNamespace::MediaAsyncLoader::$LoadWebpage$d__0
    struct $LoadWebpage$d__0;
    // Nested type: GlobalNamespace::MediaAsyncLoader::$LoadAudioClipAsync$d__1
    struct $LoadAudioClipAsync$d__1;
    // Nested type: GlobalNamespace::MediaAsyncLoader::$LoadTextureAsync$d__2
    struct $LoadTextureAsync$d__2;
    // Nested type: GlobalNamespace::MediaAsyncLoader::$LoadSpriteAsync$d__3
    struct $LoadSpriteAsync$d__3;
    // Creating value type constructor for type: MediaAsyncLoader
    MediaAsyncLoader() noexcept {}
    // static public System.Threading.Tasks.Task`1<System.String> LoadWebpage(System.String uri, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x22A9C10
    static System::Threading::Tasks::Task_1<::Il2CppString*>* LoadWebpage(::Il2CppString* uri, System::Threading::CancellationToken cancellationToken);
    // static public System.Threading.Tasks.Task`1<UnityEngine.AudioClip> LoadAudioClipAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x22A9D48
    static System::Threading::Tasks::Task_1<UnityEngine::AudioClip*>* LoadAudioClipAsync(::Il2CppString* path, System::Threading::CancellationToken cancellationToken);
    // static public System.Threading.Tasks.Task`1<UnityEngine.Texture2D> LoadTextureAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x22A9E80
    static System::Threading::Tasks::Task_1<UnityEngine::Texture2D*>* LoadTextureAsync(::Il2CppString* path, System::Threading::CancellationToken cancellationToken);
    // static public System.Threading.Tasks.Task`1<UnityEngine.Sprite> LoadSpriteAsync(System.String path, System.Threading.CancellationToken cancellationToken)
    // Offset: 0x22A9FB8
    static System::Threading::Tasks::Task_1<UnityEngine::Sprite*>* LoadSpriteAsync(::Il2CppString* path, System::Threading::CancellationToken cancellationToken);
    // static public System.Void Log(System.String message)
    // Offset: 0x22AA0F0
    static void Log(::Il2CppString* message);
    // public System.Void .ctor()
    // Offset: 0x22AA158
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MediaAsyncLoader* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MediaAsyncLoader::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MediaAsyncLoader*, creationType>()));
    }
  }; // MediaAsyncLoader
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MediaAsyncLoader*, "", "MediaAsyncLoader");
