// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: OculusBeatmapDataAssetFileModel
#include "GlobalNamespace/OculusBeatmapDataAssetFileModel.hpp"
// Including type: System.Threading.CancellationToken
#include "System/Threading/CancellationToken.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: TaskCompletionSource`1<TResult>
  template<typename TResult>
  class TaskCompletionSource_1;
}
// Forward declaring namespace: Oculus::Platform
namespace Oculus::Platform {
  // Forward declaring type: Message`1<T>
  template<typename T>
  class Message_1;
}
// Forward declaring namespace: Oculus::Platform::Models
namespace Oculus::Platform::Models {
  // Forward declaring type: AssetFileDeleteResult
  class AssetFileDeleteResult;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: OculusBeatmapDataAssetFileModel/<>c__DisplayClass13_0
  class OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0 : public ::Il2CppObject {
    public:
    // public OculusBeatmapDataAssetFileModel <>4__this
    // Offset: 0x10
    GlobalNamespace::OculusBeatmapDataAssetFileModel* $$4__this;
    // public System.String levelId
    // Offset: 0x18
    ::Il2CppString* levelId;
    // public System.Threading.CancellationToken cancellationToken
    // Offset: 0x20
    System::Threading::CancellationToken cancellationToken;
    // public System.Threading.Tasks.TaskCompletionSource`1<System.Boolean> taskSource
    // Offset: 0x28
    System::Threading::Tasks::TaskCompletionSource_1<bool>* taskSource;
    // System.Void <TryDeleteAssetBundleFileForPreviewLevelAsync>b__0(Oculus.Platform.Message`1<Oculus.Platform.Models.AssetFileDeleteResult> msg)
    // Offset: 0x1005EB8
    void $TryDeleteAssetBundleFileForPreviewLevelAsync$b__0(Oculus::Platform::Message_1<Oculus::Platform::Models::AssetFileDeleteResult*>* msg);
    // public System.Void .ctor()
    // Offset: 0x1005EB0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0* New_ctor();
  }; // OculusBeatmapDataAssetFileModel/<>c__DisplayClass13_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OculusBeatmapDataAssetFileModel::$$c__DisplayClass13_0*, "", "OculusBeatmapDataAssetFileModel/<>c__DisplayClass13_0");
#pragma pack(pop)
