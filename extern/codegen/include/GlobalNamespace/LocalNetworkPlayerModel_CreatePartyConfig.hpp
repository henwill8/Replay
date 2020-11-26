// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: LocalNetworkPlayerModel
#include "GlobalNamespace/LocalNetworkPlayerModel.hpp"
// Including type: BaseNetworkPlayerModel/PartyConfig
#include "GlobalNamespace/BaseNetworkPlayerModel_PartyConfig.hpp"
// Including type: INetworkPlayerModelPartyConfig`1
#include "GlobalNamespace/INetworkPlayerModelPartyConfig_1.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: LocalNetworkPlayerModel/CreatePartyConfig
  class LocalNetworkPlayerModel::CreatePartyConfig : public GlobalNamespace::BaseNetworkPlayerModel::PartyConfig/*, public GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::LocalNetworkPlayerModel*>*/ {
    public:
    // public System.Boolean anyoneCanJoin
    // Offset: 0x38
    bool anyoneCanJoin;
    // public System.Boolean otherPlayersCanInvite
    // Offset: 0x39
    bool otherPlayersCanInvite;
    // Creating interface conversion operator: operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::LocalNetworkPlayerModel*>
    operator GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::LocalNetworkPlayerModel*>() noexcept {
      return *reinterpret_cast<GlobalNamespace::INetworkPlayerModelPartyConfig_1<GlobalNamespace::LocalNetworkPlayerModel*>*>(this);
    }
    // public System.Void .ctor()
    // Offset: 0x1A6B30C
    // Implemented from: BaseNetworkPlayerModel/PartyConfig
    // Base method: System.Void PartyConfig::.ctor()
    // Base method: System.Void Object::.ctor()
    static LocalNetworkPlayerModel::CreatePartyConfig* New_ctor();
  }; // LocalNetworkPlayerModel/CreatePartyConfig
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::LocalNetworkPlayerModel::CreatePartyConfig*, "", "LocalNetworkPlayerModel/CreatePartyConfig");
#pragma pack(pop)
