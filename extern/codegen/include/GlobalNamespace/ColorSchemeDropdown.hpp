// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.DropdownWithTableView
#include "HMUI/DropdownWithTableView.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeView
  class ColorSchemeView;
  // Forward declaring type: ColorSchemeTableCell
  class ColorSchemeTableCell;
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: IReadOnlyList`1<T>
  template<typename T>
  class IReadOnlyList_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
  // Skipping declaration: TableView because it is already included!
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ColorSchemeDropdown
  class ColorSchemeDropdown : public HMUI::DropdownWithTableView/*, public HMUI::TableView::IDataSource*/ {
    public:
    // private TMPro.TextMeshProUGUI _text
    // Offset: 0x48
    TMPro::TextMeshProUGUI* text;
    // private ColorSchemeView _colorSchemeView
    // Offset: 0x50
    GlobalNamespace::ColorSchemeView* colorSchemeView;
    // private ColorSchemeTableCell _cellPrefab
    // Offset: 0x58
    GlobalNamespace::ColorSchemeTableCell* cellPrefab;
    // private System.String _cellReuseIdentifier
    // Offset: 0x60
    ::Il2CppString* cellReuseIdentifier;
    // private System.Single _cellSize
    // Offset: 0x68
    float cellSize;
    // private System.Collections.Generic.IReadOnlyList`1<ColorScheme> _colorSchemes
    // Offset: 0x70
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::ColorScheme*>* colorSchemes;
    // private System.Boolean _initialized
    // Offset: 0x78
    bool initialized;
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // private System.Void LazyInit()
    // Offset: 0x1A51034
    void LazyInit();
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<ColorScheme> colorSchemes)
    // Offset: 0x1A511CC
    void SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::ColorScheme*>* colorSchemes);
    // private System.Void HandleDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x1A51844
    void HandleDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // private System.Void RefreshUI(ColorScheme colorScheme)
    // Offset: 0x1A5134C
    void RefreshUI(GlobalNamespace::ColorScheme* colorScheme);
    // protected override System.Void OnDestroy()
    // Offset: 0x1A510E0
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::OnDestroy()
    void OnDestroy();
    // public System.Void Init(HMUI.TableView/IDataSource initTableViewDataSource)
    // Offset: 0x1A5116C
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::Init(HMUI.TableView/IDataSource initTableViewDataSource)
    void Init(HMUI::TableView::IDataSource* initTableViewDataSource);
    // public System.Single CellSize()
    // Offset: 0x1A513EC
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x1A513F4
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x1A514B0
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
    // public override System.Void SelectCellWithIdx(System.Int32 idx)
    // Offset: 0x1A51768
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::SelectCellWithIdx(System.Int32 idx)
    void SelectCellWithIdx(int idx);
    // public System.Void .ctor()
    // Offset: 0x1A51AD8
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ColorSchemeDropdown* New_ctor();
  }; // ColorSchemeDropdown
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeDropdown*, "", "ColorSchemeDropdown");
#pragma pack(pop)
