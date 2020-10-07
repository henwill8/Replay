// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: ColorSchemeTableCell
  class ColorSchemeTableCell;
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
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
  // Autogenerated type: ColorSchemesTableViewDataSource
  class ColorSchemesTableViewDataSource : public ::Il2CppObject, public HMUI::TableView::IDataSource {
    public:
    // private ColorSchemeTableCell _colorSchemeCellPrefab
    // Offset: 0x10
    GlobalNamespace::ColorSchemeTableCell* colorSchemeCellPrefab;
    // private System.String _cellReuseIdentifier
    // Offset: 0x18
    ::Il2CppString* cellReuseIdentifier;
    // private System.Single _cellHeight
    // Offset: 0x20
    float cellHeight;
    // private System.Collections.Generic.List`1<ColorScheme> _colorSchemes
    // Offset: 0x28
    System::Collections::Generic::List_1<GlobalNamespace::ColorScheme*>* colorSchemes;
    // public System.Collections.Generic.List`1<ColorScheme> get_colorSchemes()
    // Offset: 0xBE0B14
    System::Collections::Generic::List_1<GlobalNamespace::ColorScheme*>* get_colorSchemes();
    // public System.Void .ctor(ColorSchemesTableViewDataSource dataSource)
    // Offset: 0xBE0B1C
    static ColorSchemesTableViewDataSource* New_ctor(GlobalNamespace::ColorSchemesTableViewDataSource* dataSource);
    // public System.Void SetData(System.Collections.Generic.List`1<ColorScheme> colorSchemes)
    // Offset: 0xBE0BD4
    void SetData(System::Collections::Generic::List_1<GlobalNamespace::ColorScheme*>* colorSchemes);
    // public System.Single CellSize()
    // Offset: 0xBE0BDC
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0xBE0BE4
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0xBE0C38
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
  }; // ColorSchemesTableViewDataSource
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemesTableViewDataSource*, "", "ColorSchemesTableViewDataSource");
#pragma pack(pop)
