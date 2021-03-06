// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.TableView/IDataSource
#include "HMUI/TableView_IDataSource.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System
namespace System {
  // Skipping declaration: Enum because it is already included!
  // Forward declaring type: String
  class String;
}
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: TextOnlyTableCell
  class TextOnlyTableCell;
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
  // WARNING Size may be invalid!
  // Autogenerated type: EnumTableViewDataSource`1
  // [] Offset: FFFFFFFF
  template<typename T>
  class EnumTableViewDataSource_1 : public UnityEngine::MonoBehaviour/*, public HMUI::TableView::IDataSource*/ {
    public:
    // private TextOnlyTableCell _cellPrefab
    // Size: 0x8
    // Offset: 0x0
    GlobalNamespace::TextOnlyTableCell* cellPrefab;
    // Field size check
    static_assert(sizeof(GlobalNamespace::TextOnlyTableCell*) == 0x8);
    // private System.Single _cellHeight
    // Size: 0x4
    // Offset: 0x0
    float cellHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private readonly T[] _values
    // Size: 0x8
    // Offset: 0x0
    ::Array<T>* values;
    // Field size check
    static_assert(sizeof(::Array<T>*) == 0x8);
    // Creating value type constructor for type: EnumTableViewDataSource_1
    EnumTableViewDataSource_1(GlobalNamespace::TextOnlyTableCell* cellPrefab_ = {}, float cellHeight_ = {}, ::Array<T>* values_ = {}) noexcept : cellPrefab{cellPrefab_}, cellHeight{cellHeight_}, values{values_} {}
    // Creating interface conversion operator: operator HMUI::TableView::IDataSource
    operator HMUI::TableView::IDataSource() noexcept {
      return *reinterpret_cast<HMUI::TableView::IDataSource*>(this);
    }
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // Autogenerated static field getter
    // Get static field: static private System.String kCellReuseIdentifier
    static ::Il2CppString* _get_kCellReuseIdentifier() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnumTableViewDataSource_1::_get_kCellReuseIdentifier");
      return THROW_UNLESS(il2cpp_utils::GetFieldValue<::Il2CppString*>(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumTableViewDataSource_1<T>*>::get(), "kCellReuseIdentifier"));
    }
    // Autogenerated static field setter
    // Set static field: static private System.String kCellReuseIdentifier
    static void _set_kCellReuseIdentifier(::Il2CppString* value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnumTableViewDataSource_1::_set_kCellReuseIdentifier");
      THROW_UNLESS(il2cpp_utils::SetFieldValue(il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<EnumTableViewDataSource_1<T>*>::get(), "kCellReuseIdentifier", value));
    }
    // public System.Int32 GetIdForValue(T value)
    // Offset: 0xFFFFFFFF
    int GetIdForValue(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnumTableViewDataSource_1::GetIdForValue");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetIdForValue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method, value);
    }
    // public System.String GetLabelForId(System.Int32 id)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetLabelForId(int id) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnumTableViewDataSource_1::GetLabelForId");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetLabelForId", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(id)));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, id);
    }
    // public T GetValueForId(System.Int32 id)
    // Offset: 0xFFFFFFFF
    T GetValueForId(int id) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnumTableViewDataSource_1::GetValueForId");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetValueForId", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(id)));
      return ::il2cpp_utils::RunMethodThrow<T, false>(this, ___internal__method, id);
    }
    // public System.String GetLabelForValue(T value)
    // Offset: 0xFFFFFFFF
    ::Il2CppString* GetLabelForValue(T value) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnumTableViewDataSource_1::GetLabelForValue");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "GetLabelForValue", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(value)));
      return ::il2cpp_utils::RunMethodThrow<::Il2CppString*, false>(this, ___internal__method, value);
    }
    // public System.Single CellSize()
    // Offset: 0xFFFFFFFF
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Single IDataSource::CellSize()
    float CellSize() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnumTableViewDataSource_1::CellSize");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CellSize", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<float, false>(this, ___internal__method);
    }
    // public System.Int32 NumberOfCells()
    // Offset: 0xFFFFFFFF
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: System.Int32 IDataSource::NumberOfCells()
    int NumberOfCells() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnumTableViewDataSource_1::NumberOfCells");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "NumberOfCells", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes()));
      return ::il2cpp_utils::RunMethodThrow<int, false>(this, ___internal__method);
    }
    // public HMUI.TableCell CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    // Offset: 0xFFFFFFFF
    // Implemented from: HMUI.TableView/IDataSource
    // Base method: HMUI.TableCell IDataSource::CellForIdx(HMUI.TableView tableView, System.Int32 idx)
    HMUI::TableCell* CellForIdx(HMUI::TableView* tableView, int idx) {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnumTableViewDataSource_1::CellForIdx");
      static auto* ___internal__method = THROW_UNLESS(::il2cpp_utils::FindMethod(this, "CellForIdx", std::vector<Il2CppClass*>{}, ::il2cpp_utils::ExtractTypes(tableView, idx)));
      return ::il2cpp_utils::RunMethodThrow<HMUI::TableCell*, false>(this, ___internal__method, tableView, idx);
    }
    // protected System.Void .ctor()
    // Offset: 0xFFFFFFFF
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnumTableViewDataSource_1<T>* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnumTableViewDataSource_1::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnumTableViewDataSource_1<T>*, creationType>()));
    }
  }; // EnumTableViewDataSource`1
  // Could not write size check! Type: EnumTableViewDataSource`1 is generic, or has no fields that are valid for size checks!
}
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::EnumTableViewDataSource_1, "", "EnumTableViewDataSource`1");
