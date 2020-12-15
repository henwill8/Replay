// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: MultiplayerGameplayAnimator
#include "GlobalNamespace/MultiplayerGameplayAnimator.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: MultiplayerBigAvatarAnimator
  class MultiplayerBigAvatarAnimator;
  // Forward declaring type: ScaleAnimator
  class ScaleAnimator;
  // Forward declaring type: MultiplayerConnectedPlayerLevelFailController
  class MultiplayerConnectedPlayerLevelFailController;
  // Forward declaring type: MultiplayerLayoutProvider
  class MultiplayerLayoutProvider;
  // Forward declaring type: MultiplayerConnectedPlayerSpectatingSpot
  class MultiplayerConnectedPlayerSpectatingSpot;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerConnectedPlayerGameplayAnimator
  class MultiplayerConnectedPlayerGameplayAnimator : public GlobalNamespace::MultiplayerGameplayAnimator {
    public:
    // private MultiplayerBigAvatarAnimator _bigAvatarAnimator
    // Offset: 0x68
    GlobalNamespace::MultiplayerBigAvatarAnimator* bigAvatarAnimator;
    // private ScaleAnimator _avatarScaleAnimator
    // Offset: 0x70
    GlobalNamespace::ScaleAnimator* avatarScaleAnimator;
    // private System.Single _defaultLightsWidth
    // Offset: 0x78
    float defaultLightsWidth;
    // private System.Single _observedLightsWidth
    // Offset: 0x7C
    float observedLightsWidth;
    // private readonly MultiplayerConnectedPlayerLevelFailController _failController
    // Offset: 0x80
    GlobalNamespace::MultiplayerConnectedPlayerLevelFailController* failController;
    // private readonly MultiplayerLayoutProvider _multiplayerLayoutProvider
    // Offset: 0x88
    GlobalNamespace::MultiplayerLayoutProvider* multiplayerLayoutProvider;
    // private readonly MultiplayerConnectedPlayerSpectatingSpot _playerSpectatingSpot
    // Offset: 0x90
    GlobalNamespace::MultiplayerConnectedPlayerSpectatingSpot* playerSpectatingSpot;
    // private System.Void TransitionIntoFailedState()
    // Offset: 0xFAA5C4
    void TransitionIntoFailedState();
    // private System.Void HandlePlayerDidFail()
    // Offset: 0xFAABA8
    void HandlePlayerDidFail();
    // private System.Void HandleIsObservedChanged(System.Boolean isObserved)
    // Offset: 0xFAABAC
    void HandleIsObservedChanged(bool isObserved);
    // protected override System.Void Start()
    // Offset: 0xFA9FA8
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::Start()
    void Start();
    // protected override System.Void OnDestroy()
    // Offset: 0xFAA19C
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::OnDestroy()
    void OnDestroy();
    // protected override System.Void AnimateNewLeaderSelected(System.Boolean isLeading)
    // Offset: 0xFAA72C
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::AnimateNewLeaderSelected(System.Boolean isLeading)
    void AnimateNewLeaderSelected(bool isLeading);
    // protected override System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0xFAA884
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::HandleStateChanged(MultiplayerController/State state)
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
    // public System.Void .ctor()
    // Offset: 0xFAAC38
    // Implemented from: MultiplayerGameplayAnimator
    // Base method: System.Void MultiplayerGameplayAnimator::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerConnectedPlayerGameplayAnimator* New_ctor();
  }; // MultiplayerConnectedPlayerGameplayAnimator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerConnectedPlayerGameplayAnimator*, "", "MultiplayerConnectedPlayerGameplayAnimator");
#pragma pack(pop)