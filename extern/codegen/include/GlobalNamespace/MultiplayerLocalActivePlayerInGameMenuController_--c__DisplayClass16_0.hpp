// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerLocalActivePlayerInGameMenuController
#include "GlobalNamespace/MultiplayerLocalActivePlayerInGameMenuController.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x11
  #pragma pack(push, 1)
  // Autogenerated type: MultiplayerLocalActivePlayerInGameMenuController/<>c__DisplayClass16_0
  // [] Offset: FFFFFFFF
  // [CompilerGeneratedAttribute] Offset: D312F0
  class MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass16_0 : public ::Il2CppObject {
    public:
    // public System.Boolean value
    // Size: 0x1
    // Offset: 0x10
    bool value;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: $$c__DisplayClass16_0
    $$c__DisplayClass16_0(bool value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator bool
    constexpr operator bool() const noexcept {
      return value;
    }
    // System.Void <get_canShowInGameMenu>b__0(System.Boolean newValue)
    // Offset: 0xFE1E34
    void $get_canShowInGameMenu$b__0(bool newValue);
    // public System.Void .ctor()
    // Offset: 0xFE110C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass16_0* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass16_0::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass16_0*, creationType>()));
    }
  }; // MultiplayerLocalActivePlayerInGameMenuController/<>c__DisplayClass16_0
  #pragma pack(pop)
  static check_size<sizeof(MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass16_0), 16 + sizeof(bool)> __GlobalNamespace_MultiplayerLocalActivePlayerInGameMenuController_$$c__DisplayClass16_0SizeCheck;
  static_assert(sizeof(MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass16_0) == 0x11);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLocalActivePlayerInGameMenuController::$$c__DisplayClass16_0*, "", "MultiplayerLocalActivePlayerInGameMenuController/<>c__DisplayClass16_0");
