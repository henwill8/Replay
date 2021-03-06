// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BasicBeatmapObjectManager
#include "GlobalNamespace/BasicBeatmapObjectManager.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x12
  #pragma pack(push, 1)
  // Autogenerated type: BasicBeatmapObjectManager/InitData
  // [] Offset: FFFFFFFF
  class BasicBeatmapObjectManager::InitData : public ::Il2CppObject {
    public:
    // public readonly System.Boolean disappearingArrows
    // Size: 0x1
    // Offset: 0x10
    bool disappearingArrows;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public readonly System.Boolean ghostNotes
    // Size: 0x1
    // Offset: 0x11
    bool ghostNotes;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: InitData
    InitData(bool disappearingArrows_ = {}, bool ghostNotes_ = {}) noexcept : disappearingArrows{disappearingArrows_}, ghostNotes{ghostNotes_} {}
    // public System.Void .ctor(System.Boolean disappearingArrows, System.Boolean ghostNotes)
    // Offset: 0x1066A9C
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static BasicBeatmapObjectManager::InitData* New_ctor(bool disappearingArrows, bool ghostNotes) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::BasicBeatmapObjectManager::InitData::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<BasicBeatmapObjectManager::InitData*, creationType>(disappearingArrows, ghostNotes)));
    }
  }; // BasicBeatmapObjectManager/InitData
  #pragma pack(pop)
  static check_size<sizeof(BasicBeatmapObjectManager::InitData), 17 + sizeof(bool)> __GlobalNamespace_BasicBeatmapObjectManager_InitDataSizeCheck;
  static_assert(sizeof(BasicBeatmapObjectManager::InitData) == 0x12);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BasicBeatmapObjectManager::InitData*, "", "BasicBeatmapObjectManager/InitData");
