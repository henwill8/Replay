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
  // Forward declaring type: ILobbyStateDataModel
  class ILobbyStateDataModel;
  // Forward declaring type: ILobbyPlayersDataModel
  class ILobbyPlayersDataModel;
  // Forward declaring type: ILobbyGameStateController
  class ILobbyGameStateController;
  // Forward declaring type: INodePoseSyncStateManager
  class INodePoseSyncStateManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x30
  #pragma pack(push, 1)
  // Autogenerated type: LobbyDataModelsManager
  // [] Offset: FFFFFFFF
  class LobbyDataModelsManager : public ::Il2CppObject {
    public:
    // [InjectAttribute] Offset: 0xD35FF0
    // private readonly ILobbyStateDataModel _lobbyStateDataModel
    // Size: 0x8
    // Offset: 0x10
    GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyStateDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xD36000
    // private readonly ILobbyPlayersDataModel _lobbyPlayersDataModel
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyPlayersDataModel*) == 0x8);
    // [InjectAttribute] Offset: 0xD36010
    // private readonly ILobbyGameStateController _lobbyGameStateController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ILobbyGameStateController* lobbyGameStateController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ILobbyGameStateController*) == 0x8);
    // [InjectAttribute] Offset: 0xD36020
    // private readonly INodePoseSyncStateManager _nodePoseSyncStateManager
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::INodePoseSyncStateManager*) == 0x8);
    // Creating value type constructor for type: LobbyDataModelsManager
    LobbyDataModelsManager(GlobalNamespace::ILobbyStateDataModel* lobbyStateDataModel_ = {}, GlobalNamespace::ILobbyPlayersDataModel* lobbyPlayersDataModel_ = {}, GlobalNamespace::ILobbyGameStateController* lobbyGameStateController_ = {}, GlobalNamespace::INodePoseSyncStateManager* nodePoseSyncStateManager_ = {}) noexcept : lobbyStateDataModel{lobbyStateDataModel_}, lobbyPlayersDataModel{lobbyPlayersDataModel_}, lobbyGameStateController{lobbyGameStateController_}, nodePoseSyncStateManager{nodePoseSyncStateManager_} {}
    // public System.Void Activate()
    // Offset: 0x10E6028
    void Activate();
    // public System.Void Deactivate()
    // Offset: 0x10E6238
    void Deactivate();
    // public System.Void .ctor()
    // Offset: 0x10E63D4
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static LobbyDataModelsManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::LobbyDataModelsManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<LobbyDataModelsManager*, creationType>()));
    }
  }; // LobbyDataModelsManager
  #pragma pack(pop)
  static check_size<sizeof(LobbyDataModelsManager), 40 + sizeof(GlobalNamespace::INodePoseSyncStateManager*)> __GlobalNamespace_LobbyDataModelsManagerSizeCheck;
  static_assert(sizeof(LobbyDataModelsManager) == 0x30);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LobbyDataModelsManager*, "", "LobbyDataModelsManager");
