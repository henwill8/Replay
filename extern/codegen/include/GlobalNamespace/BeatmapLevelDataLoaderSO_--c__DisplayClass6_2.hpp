// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapLevelDataLoaderSO
#include "GlobalNamespace/BeatmapLevelDataLoaderSO.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: AssetBundleRequest
  class AssetBundleRequest;
  // Forward declaring type: AsyncOperation
  class AsyncOperation;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapLevelDataLoaderSO/<>c__DisplayClass6_2
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D30CD0
  class BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2 : public ::Il2CppObject {
    public:
    // public UnityEngine.AssetBundleRequest assetBundleRequest
    // Size: 0x8
    // Offset: 0x10
    UnityEngine::AssetBundleRequest* assetBundleRequest;
    // Field size check
    static_assert(sizeof(UnityEngine::AssetBundleRequest*) == 0x8);
    // public BeatmapLevelDataLoaderSO/<>c__DisplayClass6_1 CS$<>8__locals2
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1* CS$$$8__locals2;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1*) == 0x8);
    // Creating value type constructor for type: $$c__DisplayClass6_2
    $$c__DisplayClass6_2(UnityEngine::AssetBundleRequest* assetBundleRequest_ = {}, GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1* CS$$$8__locals2_ = {}) noexcept : assetBundleRequest{assetBundleRequest_}, CS$$$8__locals2{CS$$$8__locals2_} {}
    // System.Void <LoadBeatmalLevelDataAsync>b__1(UnityEngine.AsyncOperation asyncOperation2)
    // Offset: 0x1074930
    void $LoadBeatmalLevelDataAsync$b__1(UnityEngine::AsyncOperation* asyncOperation2);
    // public System.Void .ctor()
    // Offset: 0x1074928
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2*, creationType>()));
    }
  }; // BeatmapLevelDataLoaderSO/<>c__DisplayClass6_2
  #pragma pack(pop)
  static check_size<sizeof(BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2), 24 + sizeof(GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_1*)> __GlobalNamespace_BeatmapLevelDataLoaderSO_$$c__DisplayClass6_2SizeCheck;
  static_assert(sizeof(BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapLevelDataLoaderSO::$$c__DisplayClass6_2*, "", "BeatmapLevelDataLoaderSO/<>c__DisplayClass6_2");
