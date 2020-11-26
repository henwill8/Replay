// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.TableCell
#include "HMUI/TableCell.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: GameObject
  class GameObject;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ITableCellOwner
  class ITableCellOwner;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: TableCellWithSeparator
  class TableCellWithSeparator : public HMUI::TableCell {
    public:
    // private UnityEngine.GameObject _separator
    // Offset: 0x50
    UnityEngine::GameObject* separator;
    // public override System.Void TableViewSetup(HMUI.ITableCellOwner tableCellOwner, System.Int32 idx)
    // Offset: 0x19831E0
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::TableViewSetup(HMUI.ITableCellOwner tableCellOwner, System.Int32 idx)
    void TableViewSetup(HMUI::ITableCellOwner* tableCellOwner, int idx);
    // public System.Void .ctor()
    // Offset: 0x19832D4
    // Implemented from: HMUI.TableCell
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static TableCellWithSeparator* New_ctor();
  }; // TableCellWithSeparator
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TableCellWithSeparator*, "", "TableCellWithSeparator");
#pragma pack(pop)
