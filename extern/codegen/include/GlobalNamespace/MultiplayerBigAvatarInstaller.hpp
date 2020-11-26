// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: Zenject.MonoInstaller
#include "Zenject/MonoInstaller.hpp"
// Including type: SaberManager
#include "GlobalNamespace/SaberManager.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerBigAvatarInstaller
  class MultiplayerBigAvatarInstaller : public Zenject::MonoInstaller {
    public:
    // private readonly IConnectedPlayer _connectedPlayer
    // Offset: 0x20
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // private readonly SaberManager/InitData _saberManagerInitData
    // Offset: 0x28
    GlobalNamespace::SaberManager::InitData* saberManagerInitData;
    // public override System.Void InstallBindings()
    // Offset: 0xFA7428
    // Implemented from: Zenject.MonoInstallerBase
    // Base method: System.Void MonoInstallerBase::InstallBindings()
    void InstallBindings();
    // public System.Void .ctor()
    // Offset: 0xFA74E0
    // Implemented from: Zenject.MonoInstaller
    // Base method: System.Void MonoInstaller::.ctor()
    // Base method: System.Void MonoInstallerBase::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerBigAvatarInstaller* New_ctor();
  }; // MultiplayerBigAvatarInstaller
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerBigAvatarInstaller*, "", "MultiplayerBigAvatarInstaller");
#pragma pack(pop)
