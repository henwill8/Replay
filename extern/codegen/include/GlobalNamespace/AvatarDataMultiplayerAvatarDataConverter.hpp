// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerAvatarData
  struct MultiplayerAvatarData;
  // Forward declaring type: AvatarData
  class AvatarData;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: AvatarDataMultiplayerAvatarDataConverter
  // [] Offset: FFFFFFFF
  // [ExtensionAttribute] Offset: FFFFFFFF
  class AvatarDataMultiplayerAvatarDataConverter : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AvatarDataMultiplayerAvatarDataConverter
    AvatarDataMultiplayerAvatarDataConverter() noexcept {}
    // static public MultiplayerAvatarData CreateMultiplayerAvatarData(AvatarData avatarData)
    // Offset: 0x10329F0
    static GlobalNamespace::MultiplayerAvatarData CreateMultiplayerAvatarData(GlobalNamespace::AvatarData* avatarData);
    // static public AvatarData CreateAvatarData(MultiplayerAvatarData multiplayerAvatarData)
    // Offset: 0x1032B74
    static GlobalNamespace::AvatarData* CreateAvatarData(GlobalNamespace::MultiplayerAvatarData multiplayerAvatarData);
  }; // AvatarDataMultiplayerAvatarDataConverter
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::AvatarDataMultiplayerAvatarDataConverter*, "", "AvatarDataMultiplayerAvatarDataConverter");
