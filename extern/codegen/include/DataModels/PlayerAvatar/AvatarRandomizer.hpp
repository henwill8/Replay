// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: DataModels::PlayerAvatar
namespace DataModels::PlayerAvatar {
  // Forward declaring type: RandomizeAvatarColorMap
  class RandomizeAvatarColorMap;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: AvatarData
  class AvatarData;
  // Forward declaring type: AvatarPartsModel
  class AvatarPartsModel;
}
// Completed forward declares
// Type namespace: DataModels.PlayerAvatar
namespace DataModels::PlayerAvatar {
  // Size: 0x10
  #pragma pack(push, 1)
  // Autogenerated type: DataModels.PlayerAvatar.AvatarRandomizer
  // [] Offset: FFFFFFFF
  class AvatarRandomizer : public ::Il2CppObject {
    public:
    // Creating value type constructor for type: AvatarRandomizer
    AvatarRandomizer() noexcept {}
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD4586C
    // Get static field: static private readonly DataModels.PlayerAvatar.RandomizeAvatarColorMap[] _randomizeColorsParamsCollection
    static ::Array<DataModels::PlayerAvatar::RandomizeAvatarColorMap*>* _get__randomizeColorsParamsCollection();
    // Set static field: static private readonly DataModels.PlayerAvatar.RandomizeAvatarColorMap[] _randomizeColorsParamsCollection
    static void _set__randomizeColorsParamsCollection(::Array<DataModels::PlayerAvatar::RandomizeAvatarColorMap*>* value);
    // static private System.Void .cctor()
    // Offset: 0x1048128
    static void _cctor();
    // static public System.Void RandomizeAll(AvatarData avatarData, AvatarPartsModel avatarPartsModel)
    // Offset: 0x1048784
    static void RandomizeAll(GlobalNamespace::AvatarData* avatarData, GlobalNamespace::AvatarPartsModel* avatarPartsModel);
    // static public System.Void RandomizeModels(AvatarData avatarData, AvatarPartsModel avatarPartsModel)
    // Offset: 0x1048800
    static void RandomizeModels(GlobalNamespace::AvatarData* avatarData, GlobalNamespace::AvatarPartsModel* avatarPartsModel);
    // static public System.Void RandomizeColors(AvatarData avatarData)
    // Offset: 0x1048968
    static void RandomizeColors(GlobalNamespace::AvatarData* avatarData);
  }; // DataModels.PlayerAvatar.AvatarRandomizer
  #pragma pack(pop)
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(DataModels::PlayerAvatar::AvatarRandomizer*, "DataModels.PlayerAvatar", "AvatarRandomizer");
