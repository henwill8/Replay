// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: GameplayModifierInfoListItemsList
  class GameplayModifierInfoListItemsList;
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: MissionLevelModifiersViewController
  class MissionLevelModifiersViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::MissionLevelModifiersViewController::$$c__DisplayClass7_0
    class $$c__DisplayClass7_0;
    // private GameplayModifiersModelSO _gameplayModifiersModel
    // Offset: 0x70
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiersModel;
    // private GameplayModifierInfoListItemsList _gameplayModifierInfoListItemsList
    // Offset: 0x78
    GlobalNamespace::GameplayModifierInfoListItemsList* gameplayModifierInfoListItemsList;
    // private UnityEngine.GameObject _modifiersPanel
    // Offset: 0x80
    UnityEngine::GameObject* modifiersPanel;
    // private TMPro.TextMeshProUGUI _titleText
    // Offset: 0x88
    TMPro::TextMeshProUGUI* titleText;
    // private GameplayModifiers _gameplayModifiers
    // Offset: 0x90
    GlobalNamespace::GameplayModifiers* gameplayModifiers;
    // public System.Void Setup(GameplayModifiers gameplayModifiers)
    // Offset: 0x101A138
    void Setup(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Void RefreshContent()
    // Offset: 0x101A17C
    void RefreshContent();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x101A2DC
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // public System.Void .ctor()
    // Offset: 0x101A2E8
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static MissionLevelModifiersViewController* New_ctor();
  }; // MissionLevelModifiersViewController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MissionLevelModifiersViewController*, "", "MissionLevelModifiersViewController");
#pragma pack(pop)
