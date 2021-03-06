// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.DropdownWithTableView
#include "HMUI/DropdownWithTableView.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
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
  // Size: 0x79
  #pragma pack(push, 1)
  // Autogenerated type: ColorSchemeDropdown
  // [] Offset: FFFFFFFF
  class ColorSchemeDropdown : public HMUI::DropdownWithTableView/*, public HMUI::TableView::IDataSource*/ {
    public:
    // Writing base type padding for base size: 0x44 to desired offset: 0x48
    char ___base_padding[0x4] = {};
    // private TMPro.TextMeshProUGUI _text
    // Size: 0x8
    // Offset: 0x48
    TMPro::TextMeshProUGUI* text;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private ColorSchemeView _colorSchemeView
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::ColorSchemeView* colorSchemeView;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeView*) == 0x8);
    // private ColorSchemeTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::ColorSchemeTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeTableCell*) == 0x8);
    // private System.String _cellReuseIdentifier
    // Size: 0x8
    // Offset: 0x60
    ::Il2CppString* cellReuseIdentifier;
    // Field size check
    static_assert(sizeof(::Il2CppString*) == 0x8);
    // private System.Single _cellSize
    // Size: 0x4
    // Offset: 0x68
    float cellSize;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: cellSize and: colorSchemes
    char __padding4[0x4] = {};
    // private System.Collections.Generic.IReadOnlyList`1<ColorScheme> _colorSchemes
    // Size: 0x8
    // Offset: 0x70
    System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::ColorScheme*>* colorSchemes;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::ColorScheme*>*) == 0x8);
    // private System.Boolean _initialized
    // Size: 0x1
    // Offset: 0x78
    bool initialized;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ColorSchemeDropdown
    ColorSchemeDropdown(TMPro::TextMeshProUGUI* text_ = {}, GlobalNamespace::ColorSchemeView* colorSchemeView_ = {}, GlobalNamespace::ColorSchemeTableCell* cellPrefab_ = {}, ::Il2CppString* cellReuseIdentifier_ = {}, float cellSize_ = {}, System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::ColorScheme*>* colorSchemes_ = {}, bool initialized_ = {}) noexcept : text{text_}, colorSchemeView{colorSchemeView_}, cellPrefab{cellPrefab_}, cellReuseIdentifier{cellReuseIdentifier_}, cellSize{cellSize_}, colorSchemes{colorSchemes_}, initialized{initialized_} {}
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // private System.Void LazyInit()
    // Offset: 0x10408F4
    void LazyInit();
    // public System.Void SetData(System.Collections.Generic.IReadOnlyList`1<ColorScheme> colorSchemes)
    // Offset: 0x1040A8C
    void SetData(System::Collections::Generic::IReadOnlyList_1<GlobalNamespace::ColorScheme*>* colorSchemes);
    // private System.Void HandleDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x1041104
    void HandleDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // private System.Void RefreshUI(ColorScheme colorScheme)
    // Offset: 0x1040C0C
    void RefreshUI(GlobalNamespace::ColorScheme* colorScheme);
    // protected override System.Void OnDestroy()
    // Offset: 0x10409A0
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::OnDestroy()
    void OnDestroy();
    // public System.Void Init(HMUI.TableView/IDataSource initTableViewDataSource)
    // Offset: 0x1040A2C
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::Init(HMUI.TableView/IDataSource initTableViewDataSource)
    void Init(HMUI::TableView::IDataSource* initTableViewDataSource);
    // public System.Single CellSize()
    // Offset: 0x1040CAC
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x1040CB4
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x1040D70
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
    // public override System.Void SelectCellWithIdx(System.Int32 idx)
    // Offset: 0x1041028
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::SelectCellWithIdx(System.Int32 idx)
    void SelectCellWithIdx(int idx);
    // public System.Void .ctor()
    // Offset: 0x1041398
    // Implemented from: HMUI.DropdownWithTableView
    // Base method: System.Void DropdownWithTableView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSchemeDropdown* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorSchemeDropdown::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSchemeDropdown*, creationType>()));
    }
  }; // ColorSchemeDropdown
  #pragma pack(pop)
  static check_size<sizeof(ColorSchemeDropdown), 120 + sizeof(bool)> __GlobalNamespace_ColorSchemeDropdownSizeCheck;
  static_assert(sizeof(ColorSchemeDropdown) == 0x79);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeDropdown*, "", "ColorSchemeDropdown");
