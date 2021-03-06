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
  // Forward declaring type: BeatmapData
  class BeatmapData;
  // Forward declaring type: IReadonlyBeatmapData
  class IReadonlyBeatmapData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: BeatmapDataStaticLightsTransform
  // [] Offset: FFFFFFFF
  class BeatmapDataStaticLightsTransform : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: BeatmapDataStaticLightsTransform
    BeatmapDataStaticLightsTransform() noexcept {}
    // static public BeatmapData CreateTransformedData(IReadonlyBeatmapData beatmapData)
    // Offset: 0x10717C0
    static GlobalNamespace::BeatmapData* CreateTransformedData(GlobalNamespace::IReadonlyBeatmapData* beatmapData);
    // public System.Void .ctor()
    // Offset: 0x1071B98
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BeatmapDataStaticLightsTransform* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BeatmapDataStaticLightsTransform::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BeatmapDataStaticLightsTransform*, creationType>()));
    }
  }; // BeatmapDataStaticLightsTransform
  #pragma pack(pop)
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapDataStaticLightsTransform*, "", "BeatmapDataStaticLightsTransform");
