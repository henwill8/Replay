// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: ModifiersSelectionView
#include "GlobalNamespace/ModifiersSelectionView.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifiers
  class GameplayModifiers;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: EditableModifiersSelectionView
  class EditableModifiersSelectionView : public GlobalNamespace::ModifiersSelectionView {
    public:
    // private UnityEngine.UI.Button _editButton
    // Offset: 0x30
    UnityEngine::UI::Button* editButton;
    // private UnityEngine.UI.Button _clearButton
    // Offset: 0x38
    UnityEngine::UI::Button* clearButton;
    // private System.Boolean _showClearButton
    // Offset: 0x40
    bool showClearButton;
    // private UnityEngine.CanvasGroup _modifiersListCanvasGroup
    // Offset: 0x48
    UnityEngine::CanvasGroup* modifiersListCanvasGroup;
    // private System.Boolean _interactable
    // Offset: 0x50
    bool interactable;
    // public UnityEngine.UI.Button get_editButton()
    // Offset: 0x1A5F348
    UnityEngine::UI::Button* get_editButton();
    // public UnityEngine.UI.Button get_clearButton()
    // Offset: 0x1A5F350
    UnityEngine::UI::Button* get_clearButton();
    // public System.Boolean get_interactable()
    // Offset: 0x1A5F358
    bool get_interactable();
    // public System.Void set_interactable(System.Boolean value)
    // Offset: 0x1A4ED30
    void set_interactable(bool value);
    // public override System.Void SetGameplayModifiers(GameplayModifiers gameplayModifiers)
    // Offset: 0x1A5F360
    // Implemented from: ModifiersSelectionView
    // Base method: System.Void ModifiersSelectionView::SetGameplayModifiers(GameplayModifiers gameplayModifiers)
    void SetGameplayModifiers(GlobalNamespace::GameplayModifiers* gameplayModifiers);
    // public System.Void .ctor()
    // Offset: 0x1A5F3D0
    // Implemented from: ModifiersSelectionView
    // Base method: System.Void ModifiersSelectionView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static EditableModifiersSelectionView* New_ctor();
  }; // EditableModifiersSelectionView
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EditableModifiersSelectionView*, "", "EditableModifiersSelectionView");
#pragma pack(pop)
