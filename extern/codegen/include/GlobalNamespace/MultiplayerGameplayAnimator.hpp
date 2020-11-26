// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: MultiplayerController
#include "GlobalNamespace/MultiplayerController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSO
  class ColorSO;
  // Forward declaring type: LightsAnimator
  class LightsAnimator;
  // Forward declaring type: MultiplayerLeadPlayerProvider
  class MultiplayerLeadPlayerProvider;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
}
// Forward declaring namespace: Tweening
namespace Tweening {
  // Forward declaring type: TweeningManager
  class TweeningManager;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MultiplayerGameplayAnimator
  class MultiplayerGameplayAnimator : public UnityEngine::MonoBehaviour {
    public:
    // protected ColorSO _activeLightsColor
    // Offset: 0x18
    GlobalNamespace::ColorSO* activeLightsColor;
    // protected ColorSO _leadingLightsColor
    // Offset: 0x20
    GlobalNamespace::ColorSO* leadingLightsColor;
    // protected ColorSO _failedLightsColor
    // Offset: 0x28
    GlobalNamespace::ColorSO* failedLightsColor;
    // protected System.Single _leadingSwitchCrossFadeDuration
    // Offset: 0x30
    float leadingSwitchCrossFadeDuration;
    // protected LightsAnimator[] _gameplayLightsAnimators
    // Offset: 0x38
    ::Array<GlobalNamespace::LightsAnimator*>* gameplayLightsAnimators;
    // protected LightsAnimator[] _allLightsAnimators
    // Offset: 0x40
    ::Array<GlobalNamespace::LightsAnimator*>* allLightsAnimators;
    // private readonly MultiplayerLeadPlayerProvider _leadPlayerProvider
    // Offset: 0x48
    GlobalNamespace::MultiplayerLeadPlayerProvider* leadPlayerProvider;
    // private readonly MultiplayerController _multiplayerController
    // Offset: 0x50
    GlobalNamespace::MultiplayerController* multiplayerController;
    // protected readonly Tweening.TweeningManager tweeningManager
    // Offset: 0x58
    Tweening::TweeningManager* tweeningManager;
    // protected readonly IConnectedPlayer connectedPlayer
    // Offset: 0x60
    GlobalNamespace::IConnectedPlayer* connectedPlayer;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Start()
    // Offset: 0xFAA04C
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0xFAA2EC
    void OnDestroy();
    // protected System.Void AnimateNewLeaderSelected(System.Boolean isLeading)
    // Offset: 0xFFFFFFFF
    void AnimateNewLeaderSelected(bool isLeading);
    // protected System.Void HandleStateChanged(MultiplayerController/State state)
    // Offset: 0xFAA994
    void HandleStateChanged(GlobalNamespace::MultiplayerController::State state);
    // private System.Void HandleNewLeaderWasSelected(System.String userId)
    // Offset: 0xFB2C54
    void HandleNewLeaderWasSelected(::Il2CppString* userId);
    // protected System.Void .ctor()
    // Offset: 0xFAAC4C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MultiplayerGameplayAnimator* New_ctor();
  }; // MultiplayerGameplayAnimator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MultiplayerGameplayAnimator*, "", "MultiplayerGameplayAnimator");
#pragma pack(pop)
