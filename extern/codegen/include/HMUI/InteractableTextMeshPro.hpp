// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.UIBehaviour
#include "UnityEngine/EventSystems/UIBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: CanvasGroup
  class CanvasGroup;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.InteractableTextMeshPro
  class InteractableTextMeshPro : public UnityEngine::EventSystems::UIBehaviour {
    public:
    // private System.Single _interactionAlpha
    // Offset: 0x18
    float interactionAlpha;
    // private System.Single _noInteractionAlpha
    // Offset: 0x1C
    float noInteractionAlpha;
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x20
    TMPro::TextMeshProUGUI* text;
    // private readonly System.Collections.Generic.List`1<UnityEngine.CanvasGroup> _canvasGroupCache
    // Offset: 0x28
    System::Collections::Generic::List_1<UnityEngine::CanvasGroup*>* canvasGroupCache;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected override System.Void OnCanvasGroupChanged()
    // Offset: 0x107ACD8
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::OnCanvasGroupChanged()
    void OnCanvasGroupChanged();
    // public System.Void .ctor()
    // Offset: 0x107AE70
    // Implemented from: UnityEngine.EventSystems.UIBehaviour
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static InteractableTextMeshPro* New_ctor();
  }; // HMUI.InteractableTextMeshPro
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::InteractableTextMeshPro*, "HMUI", "InteractableTextMeshPro");
#pragma pack(pop)
