// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: BtsResultsEnvironmentController
#include "GlobalNamespace/BtsResultsEnvironmentController.hpp"
// Including type: BTSCharacterDataModel
#include "GlobalNamespace/BTSCharacterDataModel.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BTSCharacter
  class BTSCharacter;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BtsResultsEnvironmentController/<>c__DisplayClass5_0
  class BtsResultsEnvironmentController::$$c__DisplayClass5_0 : public ::Il2CppObject {
    public:
    // public System.Int32 prefabId
    // Offset: 0x10
    int prefabId;
    // public BTSCharacter btsCharacterInstance
    // Offset: 0x18
    GlobalNamespace::BTSCharacter* btsCharacterInstance;
    // System.Boolean <Setup>b__0(BTSCharacterDataModel/PrefabWithId prefabWithId)
    // Offset: 0x1A325AC
    bool $Setup$b__0(GlobalNamespace::BTSCharacterDataModel::PrefabWithId* prefabWithId);
    // System.Boolean <Setup>b__1(BtsResultsEnvironmentController/BTSResultCharacterPlaceWithAnimation placeWithAnimation)
    // Offset: 0x1A325D0
    bool $Setup$b__1(GlobalNamespace::BtsResultsEnvironmentController::BTSResultCharacterPlaceWithAnimation* placeWithAnimation);
    // public System.Void .ctor()
    // Offset: 0x1A3211C
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static BtsResultsEnvironmentController::$$c__DisplayClass5_0* New_ctor();
  }; // BtsResultsEnvironmentController/<>c__DisplayClass5_0
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BtsResultsEnvironmentController::$$c__DisplayClass5_0*, "", "BtsResultsEnvironmentController/<>c__DisplayClass5_0");
#pragma pack(pop)
