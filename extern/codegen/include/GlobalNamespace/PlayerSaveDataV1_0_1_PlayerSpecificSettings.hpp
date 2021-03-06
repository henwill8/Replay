// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: PlayerSaveDataV1_0_1
#include "GlobalNamespace/PlayerSaveDataV1_0_1.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x1C
  #pragma pack(push, 1)
  // Autogenerated type: PlayerSaveDataV1_0_1/PlayerSpecificSettings
  // [] Offset: FFFFFFFF
  class PlayerSaveDataV1_0_1::PlayerSpecificSettings : public ::Il2CppObject {
    public:
    // public System.Boolean staticLights
    // Size: 0x1
    // Offset: 0x10
    bool staticLights;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean leftHanded
    // Size: 0x1
    // Offset: 0x11
    bool leftHanded;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean swapColors
    // Size: 0x1
    // Offset: 0x12
    bool swapColors;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: swapColors and: playerHeight
    char __padding2[0x1] = {};
    // public System.Single playerHeight
    // Size: 0x4
    // Offset: 0x14
    float playerHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // public System.Boolean disableSFX
    // Size: 0x1
    // Offset: 0x18
    bool disableSFX;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean reduceDebris
    // Size: 0x1
    // Offset: 0x19
    bool reduceDebris;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean advancedHud
    // Size: 0x1
    // Offset: 0x1A
    bool advancedHud;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean noTextsAndHuds
    // Size: 0x1
    // Offset: 0x1B
    bool noTextsAndHuds;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: PlayerSpecificSettings
    PlayerSpecificSettings(bool staticLights_ = {}, bool leftHanded_ = {}, bool swapColors_ = {}, float playerHeight_ = {}, bool disableSFX_ = {}, bool reduceDebris_ = {}, bool advancedHud_ = {}, bool noTextsAndHuds_ = {}) noexcept : staticLights{staticLights_}, leftHanded{leftHanded_}, swapColors{swapColors_}, playerHeight{playerHeight_}, disableSFX{disableSFX_}, reduceDebris{reduceDebris_}, advancedHud{advancedHud_}, noTextsAndHuds{noTextsAndHuds_} {}
    // public System.Void .ctor()
    // Offset: 0xFBB1CC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PlayerSaveDataV1_0_1::PlayerSpecificSettings* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PlayerSaveDataV1_0_1::PlayerSpecificSettings*, creationType>()));
    }
  }; // PlayerSaveDataV1_0_1/PlayerSpecificSettings
  #pragma pack(pop)
  static check_size<sizeof(PlayerSaveDataV1_0_1::PlayerSpecificSettings), 27 + sizeof(bool)> __GlobalNamespace_PlayerSaveDataV1_0_1_PlayerSpecificSettingsSizeCheck;
  static_assert(sizeof(PlayerSaveDataV1_0_1::PlayerSpecificSettings) == 0x1C);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PlayerSaveDataV1_0_1::PlayerSpecificSettings*, "", "PlayerSaveDataV1_0_1/PlayerSpecificSettings");
