// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableView
#include "HMUI/TableView.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableCell
  class TableCell;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x104
  #pragma pack(push, 1)
  // Autogenerated type: TableViewWithDetailCell
  // [] Offset: FFFFFFFF
  class TableViewWithDetailCell : public HMUI::TableView/*, public HMUI::TableView::IDataSource*/ {
    public:
    // Nested type: GlobalNamespace::TableViewWithDetailCell::IDataSource
    class IDataSource;
    // [CompilerGeneratedAttribute] Offset: 0xD18158
    // private System.Action`2<TableViewWithDetailCell,System.Int32> didSelectContentCellEvent
    // Size: 0x8
    // Offset: 0xE8
    System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* didSelectContentCellEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD18168
    // private System.Action`2<TableViewWithDetailCell,System.Int32> didDeselectContentCellEvent
    // Size: 0x8
    // Offset: 0xF0
    System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* didDeselectContentCellEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>*) == 0x8);
    // private TableViewWithDetailCell/IDataSource _dataSource
    // Size: 0x8
    // Offset: 0xF8
    GlobalNamespace::TableViewWithDetailCell::IDataSource* dataSource;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TableViewWithDetailCell::IDataSource*) == 0x8);
    // private System.Int32 _selectedId
    // Size: 0x4
    // Offset: 0x100
    int selectedId;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Creating value type constructor for type: TableViewWithDetailCell
    TableViewWithDetailCell(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* didSelectContentCellEvent_ = {}, System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* didDeselectContentCellEvent_ = {}, GlobalNamespace::TableViewWithDetailCell::IDataSource* dataSource_ = {}, int selectedId_ = {}) noexcept : didSelectContentCellEvent{didSelectContentCellEvent_}, didDeselectContentCellEvent{didDeselectContentCellEvent_}, dataSource{dataSource_}, selectedId{selectedId_} {}
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // public System.Void add_didSelectContentCellEvent(System.Action`2<TableViewWithDetailCell,System.Int32> value)
    // Offset: 0x2247A4C
    void add_didSelectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* value);
    // public System.Void remove_didSelectContentCellEvent(System.Action`2<TableViewWithDetailCell,System.Int32> value)
    // Offset: 0x2247AF0
    void remove_didSelectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* value);
    // public System.Void add_didDeselectContentCellEvent(System.Action`2<TableViewWithDetailCell,System.Int32> value)
    // Offset: 0x2247B94
    void add_didDeselectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* value);
    // public System.Void remove_didDeselectContentCellEvent(System.Action`2<TableViewWithDetailCell,System.Int32> value)
    // Offset: 0x2247C38
    void remove_didDeselectContentCellEvent(System::Action_2<GlobalNamespace::TableViewWithDetailCell*, int>* value);
    // public TableViewWithDetailCell/IDataSource get_dataSource()
    // Offset: 0x2247CDC
    GlobalNamespace::TableViewWithDetailCell::IDataSource* get_dataSource();
    // public System.Void set_dataSource(TableViewWithDetailCell/IDataSource value)
    // Offset: 0x2247CE4
    void set_dataSource(GlobalNamespace::TableViewWithDetailCell::IDataSource* value);
    // public System.Void ReloadData(System.Int32 currentNewIndex)
    // Offset: 0x2248100
    void ReloadData(int currentNewIndex);
    // public System.Single CellSize()
    // Offset: 0x2247D3C
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize();
    // public System.Int32 NumberOfCells()
    // Offset: 0x2247DEC
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells();
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0x2247EB0
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx);
    // public override System.Void ReloadData()
    // Offset: 0x22480CC
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::ReloadData()
    void ReloadData();
    // protected override System.Void DidSelectCellWithIdx(System.Int32 idx)
    // Offset: 0x2248148
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::DidSelectCellWithIdx(System.Int32 idx)
    void DidSelectCellWithIdx(int idx);
    // public System.Void .ctor()
    // Offset: 0x2248280
    // Implemented from: HMUI.TableView
    // Base method: System.Void TableView::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TableViewWithDetailCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::TableViewWithDetailCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TableViewWithDetailCell*, creationType>()));
    }
  }; // TableViewWithDetailCell
  #pragma pack(pop)
  static check_size<sizeof(TableViewWithDetailCell), 256 + sizeof(int)> __GlobalNamespace_TableViewWithDetailCellSizeCheck;
  static_assert(sizeof(TableViewWithDetailCell) == 0x104);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TableViewWithDetailCell*, "", "TableViewWithDetailCell");
