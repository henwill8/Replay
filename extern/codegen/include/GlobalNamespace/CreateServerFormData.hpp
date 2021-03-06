// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Including type: BeatmapDifficultyMask
#include "GlobalNamespace/BeatmapDifficultyMask.hpp"
// Including type: GameplayModifierMask
#include "GlobalNamespace/GameplayModifierMask.hpp"
// Including type: SongPackMask
#include "GlobalNamespace/SongPackMask.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // WARNING Layout: Sequential may not be correctly taken into account!
  // Autogenerated type: CreateServerFormData
  // [] Offset: FFFFFFFF
  struct CreateServerFormData/*, public System::ValueType*/ {
    public:
    // public System.Boolean usePassword
    // Size: 0x1
    // Offset: 0x0
    bool usePassword;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Padding between fields: usePassword and: password
    char __padding0[0x7] = {};
    // public System.String password
    // Size: 0x8
    // Offset: 0x8
    ::Il2CppString* password;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // public System.Int32 maxPlayers
    // Size: 0x4
    // Offset: 0x10
    int maxPlayers;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // public System.Boolean allowInviteOthers
    // Size: 0x1
    // Offset: 0x14
    bool allowInviteOthers;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public System.Boolean netDiscoverable
    // Size: 0x1
    // Offset: 0x15
    bool netDiscoverable;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // public BeatmapDifficultyMask difficulties
    // Size: 0x1
    // Offset: 0x16
    GlobalNamespace::BeatmapDifficultyMask difficulties;
    // Field size check
    static_assert(sizeof(GlobalNamespace::BeatmapDifficultyMask) == 0x1);
    // Padding between fields: difficulties and: modifiers
    char __padding5[0x1] = {};
    // public GameplayModifierMask modifiers
    // Size: 0x2
    // Offset: 0x18
    GlobalNamespace::GameplayModifierMask modifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierMask) == 0x2);
    // Padding between fields: modifiers and: songPacks
    char __padding6[0x6] = {};
    // public SongPackMask songPacks
    // Size: 0x10
    // Offset: 0x20
    GlobalNamespace::SongPackMask songPacks;
    // Field size check
    static_assert(sizeof(GlobalNamespace::SongPackMask) == 0x10);
    // Creating value type constructor for type: CreateServerFormData
    constexpr CreateServerFormData(bool usePassword_ = {}, ::Il2CppString* password_ = {}, int maxPlayers_ = {}, bool allowInviteOthers_ = {}, bool netDiscoverable_ = {}, GlobalNamespace::BeatmapDifficultyMask difficulties_ = {}, GlobalNamespace::GameplayModifierMask modifiers_ = {}, GlobalNamespace::SongPackMask songPacks_ = {}) noexcept : usePassword{usePassword_}, password{password_}, maxPlayers{maxPlayers_}, allowInviteOthers{allowInviteOthers_}, netDiscoverable{netDiscoverable_}, difficulties{difficulties_}, modifiers{modifiers_}, songPacks{songPacks_} {}
    // Creating interface conversion operator: operator System::ValueType
    operator System::ValueType() noexcept {
      return *reinterpret_cast<System::ValueType*>(this);
    }
  }; // CreateServerFormData
  #pragma pack(pop)
  static check_size<sizeof(CreateServerFormData), 32 + sizeof(GlobalNamespace::SongPackMask)> __GlobalNamespace_CreateServerFormDataSizeCheck;
  static_assert(sizeof(CreateServerFormData) == 0x30);
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::CreateServerFormData, "", "CreateServerFormData");
