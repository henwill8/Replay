// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BeatmapObjectCallbackController
#include "GlobalNamespace/BeatmapObjectCallbackController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x20
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapObjectCallbackController/BeatmapEventCallbackData
  // [] Offset: FFFFFFFF
  class BeatmapObjectCallbackController::BeatmapEventCallbackData : public ::Il2CppObject {
    public:
    // public readonly BeatmapObjectCallbackController/BeatmapEventCallback callback
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallback* callback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallback*) == 0x8);
    // public System.Single aheadTime
    // Size: 0x4
    // Offset: 0x18
    float aheadTime;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Int32 nextEventIndex
    // Size: 0x4
    // Offset: 0x1C
    int nextEventIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: BeatmapEventCallbackData
    BeatmapEventCallbackData(GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallback* callback_ = {}, float aheadTime_ = {}, int nextEventIndex_ = {}) noexcept : callback{callback_}, aheadTime{aheadTime_}, nextEventIndex{nextEventIndex_} {}
    // public System.Void .ctor(BeatmapObjectCallbackController/BeatmapEventCallback callback, System.Single aheadTime)
    // Offset: 0xF57D50
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapObjectCallbackController::BeatmapEventCallbackData* New_ctor(GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallback* callback, float aheadTime) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapObjectCallbackController::BeatmapEventCallbackData*, creationType>(callback, aheadTime)));
    }
  }; // BeatmapObjectCallbackController/BeatmapEventCallbackData
  #pragma pack(pop)
  static check_size<sizeof(BeatmapObjectCallbackController::BeatmapEventCallbackData), 28 + sizeof(int)> __GlobalNamespace_BeatmapObjectCallbackController_BeatmapEventCallbackDataSizeCheck;
  static_assert(sizeof(BeatmapObjectCallbackController::BeatmapEventCallbackData) == 0x20);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapObjectCallbackController::BeatmapEventCallbackData*, "", "BeatmapObjectCallbackController/BeatmapEventCallbackData");
