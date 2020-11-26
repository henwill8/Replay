// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: BeatmapCharacteristicCollectionSO
  class BeatmapCharacteristicCollectionSO;
  // Forward declaring type: BeatmapCharacteristicSO
  class BeatmapCharacteristicSO;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: SimpleTextDropdown
  class SimpleTextDropdown;
  // Forward declaring type: DropdownWithTableView
  class DropdownWithTableView;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: BeatmapCharacteristicsDropdown
  class BeatmapCharacteristicsDropdown : public UnityEngine::MonoBehaviour {
    public:
    // Nested type: GlobalNamespace::BeatmapCharacteristicsDropdown::$$c
    class $$c;
    // private HMUI.SimpleTextDropdown _simpleTextDropdown
    // Offset: 0x18
    HMUI::SimpleTextDropdown* simpleTextDropdown;
    // private BeatmapCharacteristicCollectionSO _beatmapCharacteristicCollection
    // Offset: 0x20
    GlobalNamespace::BeatmapCharacteristicCollectionSO* beatmapCharacteristicCollection;
    // private System.Action`1<BeatmapCharacteristicSO> didSelectCellWithIdxEvent
    // Offset: 0x28
    System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* didSelectCellWithIdxEvent;
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_didSelectCellWithIdxEvent(System.Action`1<BeatmapCharacteristicSO> value)
    // Offset: 0x1A7CB60
    void add_didSelectCellWithIdxEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // public System.Void remove_didSelectCellWithIdxEvent(System.Action`1<BeatmapCharacteristicSO> value)
    // Offset: 0x1A7CC04
    void remove_didSelectCellWithIdxEvent(System::Action_1<GlobalNamespace::BeatmapCharacteristicSO*>* value);
    // protected System.Void Start()
    // Offset: 0x1A7CCA8
    void Start();
    // protected System.Void OnDestroy()
    // Offset: 0x1A7CE40
    void OnDestroy();
    // public BeatmapCharacteristicSO GetSelectedBeatmapCharacteristic()
    // Offset: 0x1A7CF1C
    GlobalNamespace::BeatmapCharacteristicSO* GetSelectedBeatmapCharacteristic();
    // public System.Void SelectCellWithBeatmapCharacteristic(BeatmapCharacteristicSO beatmapCharacteristic)
    // Offset: 0x1A7CF6C
    void SelectCellWithBeatmapCharacteristic(GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);
    // private System.Void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI.DropdownWithTableView dropdownWithTableView, System.Int32 idx)
    // Offset: 0x1A7D018
    void HandleSimpleTextDropdownDidSelectCellWithIdx(HMUI::DropdownWithTableView* dropdownWithTableView, int idx);
    // public System.Void .ctor()
    // Offset: 0x1A7D0BC
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static BeatmapCharacteristicsDropdown* New_ctor();
  }; // BeatmapCharacteristicsDropdown
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BeatmapCharacteristicsDropdown*, "", "BeatmapCharacteristicsDropdown");
#pragma pack(pop)
