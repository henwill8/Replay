// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: PackLevelListHeaderTableCell
  class PackLevelListHeaderTableCell : public HMUI::TableCell {
    public:
    // private UnityEngine.Color _selectedHighlightElementsColor
    // Offset: 0x50
    UnityEngine::Color selectedHighlightElementsColor;
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x60
    TMPro::TextMeshProUGUI* text;
    // private UnityEngine.UI.Image _bgImage
    // Offset: 0x68
    UnityEngine::UI::Image* bgImage;
    // private UnityEngine.UI.Image _highlightImage
    // Offset: 0x70
    UnityEngine::UI::Image* highlightImage;
    // private UnityEngine.UI.Image _arrowImage
    // Offset: 0x78
    UnityEngine::UI::Image* arrowImage;
    // private System.Threading.CancellationTokenSource _cancellationTokenSource
    // Offset: 0x80
    System::Threading::CancellationTokenSource* cancellationTokenSource;
    // public System.Void set_text(System.String value)
    // Offset: 0xF03534
    void set_text(::Il2CppString* value);
    // public System.String get_text()
    // Offset: 0xF03550
    ::Il2CppString* get_text();
    // private System.Void RefreshVisuals()
    // Offset: 0xF03570
    void RefreshVisuals();
    // protected override System.Void SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0xF0356C
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::SelectionDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void SelectionDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // protected override System.Void HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    // Offset: 0xF03600
    // Implemented from: HMUI.SelectableCell
    // Base method: System.Void SelectableCell::HighlightDidChange(HMUI.SelectableCell/TransitionType transitionType)
    void HighlightDidChange(HMUI::SelectableCell::TransitionType transitionType);
    // public System.Void .ctor()
    // Offset: 0xF03604
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static PackLevelListHeaderTableCell* New_ctor();
  }; // PackLevelListHeaderTableCell
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PackLevelListHeaderTableCell*, "", "PackLevelListHeaderTableCell");
#pragma pack(pop)
