// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LeaderboardScoreUploader
#include "GlobalNamespace/LeaderboardScoreUploader.hpp"
// Including type: System.MulticastDelegate
#include "System/MulticastDelegate.hpp"
// Including type: PlatformLeaderboardsModel
#include "GlobalNamespace/PlatformLeaderboardsModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: HMAsyncRequest
  class HMAsyncRequest;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: IAsyncResult
  class IAsyncResult;
  // Forward declaring type: AsyncCallback
  class AsyncCallback;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x70
  #pragma pack(push, 1)
  // Autogenerated type: LeaderboardScoreUploader/UploadScoreCallback
  // [] Offset: FFFFFFFF
  class LeaderboardScoreUploader::UploadScoreCallback : public System::MulticastDelegate {
    public:
    // Creating value type constructor for type: UploadScoreCallback
    UploadScoreCallback() noexcept {}
    // public System.Void .ctor(System.Object object, System.IntPtr method)
    // Offset: 0xFD5310
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LeaderboardScoreUploader::UploadScoreCallback* New_ctor(::Il2CppObject* object, System::IntPtr method) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LeaderboardScoreUploader::UploadScoreCallback*, creationType>(object, method)));
    }
    // public HMAsyncRequest Invoke(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler)
    // Offset: 0xFD4D30
    GlobalNamespace::HMAsyncRequest* Invoke(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler);
    // public System.IAsyncResult BeginInvoke(LeaderboardScoreUploader/ScoreData scoreData, PlatformLeaderboardsModel/UploadScoreCompletionHandler completionHandler, System.AsyncCallback callback, System.Object object)
    // Offset: 0xFD5324
    System::IAsyncResult* BeginInvoke(GlobalNamespace::LeaderboardScoreUploader::ScoreData* scoreData, GlobalNamespace::PlatformLeaderboardsModel::UploadScoreCompletionHandler* completionHandler, System::AsyncCallback* callback, ::Il2CppObject* object);
    // public HMAsyncRequest EndInvoke(System.IAsyncResult result)
    // Offset: 0xFD5354
    GlobalNamespace::HMAsyncRequest* EndInvoke(System::IAsyncResult* result);
  }; // LeaderboardScoreUploader/UploadScoreCallback
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LeaderboardScoreUploader::UploadScoreCallback*, "", "LeaderboardScoreUploader/UploadScoreCallback");
