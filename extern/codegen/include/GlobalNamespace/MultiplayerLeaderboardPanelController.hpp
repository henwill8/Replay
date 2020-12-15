// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerLeaderboardPanelItem
  class MultiplayerLeaderboardPanelItem;
  // Forward declaring type: MultiplayerScoreProvider
  class MultiplayerScoreProvider;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerLeaderboardPanelController
  class MultiplayerLeaderboardPanelController : public UnityEngine::MonoBehaviour {
    public:
    // private MultiplayerLeaderboardPanelItem[] _items
    // Offset: 0x18
    ::Array<GlobalNamespace::MultiplayerLeaderboardPanelItem*>* items;
    // private readonly MultiplayerScoreProvider _scoreProvider
    // Offset: 0x20
    GlobalNamespace::MultiplayerScoreProvider* scoreProvider;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFB56BC
    void Start();
    // protected System.Void Update()
    // Offset: 0xFB5760
    void Update();
    // public System.Void .ctor()
    // Offset: 0xFB5D04
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerLeaderboardPanelController* New_ctor();
  }; // MultiplayerLeaderboardPanelController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerLeaderboardPanelController*, "", "MultiplayerLeaderboardPanelController");
#pragma pack(pop)