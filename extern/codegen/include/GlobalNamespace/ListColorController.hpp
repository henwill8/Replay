// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: IncDecColorController
#include "GlobalNamespace/IncDecColorController.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Color
  struct Color;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: ListColorController
  class ListColorController : public GlobalNamespace::IncDecColorController {
    public:
    // private System.Int32 _idx
    // Offset: 0x20
    int idx;
    // private System.Int32 _numberOfElements
    // Offset: 0x24
    int numberOfElements;
    // protected System.Boolean GetInitValues(out System.Int32 idx, out System.Int32 numberOfElements)
    // Offset: 0xFFFFFFFF
    bool GetInitValues(int& idx, int& numberOfElements);
    // protected System.Void ApplyValue(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    void ApplyValue(int idx);
    // protected UnityEngine.Color ColorForValue(System.Int32 idx)
    // Offset: 0xFFFFFFFF
    UnityEngine::Color ColorForValue(int idx);
    // protected System.Void OnEnable()
    // Offset: 0x1AC8460
    void OnEnable();
    // private System.Void RefreshUI()
    // Offset: 0x1AC84A4
    void RefreshUI();
    // public System.Void Refresh(System.Boolean applyValue)
    // Offset: 0x1AC850C
    void Refresh(bool applyValue);
    // protected override System.Void IncButtonPressed()
    // Offset: 0x1AC856C
    // Implemented from: IncDecColorController
    // Base method: System.Void IncDecColorController::IncButtonPressed()
    void IncButtonPressed();
    // protected override System.Void DecButtonPressed()
    // Offset: 0x1AC85B8
    // Implemented from: IncDecColorController
    // Base method: System.Void IncDecColorController::DecButtonPressed()
    void DecButtonPressed();
    // protected System.Void .ctor()
    // Offset: 0x1AC85FC
    // Implemented from: IncDecColorController
    // Base method: System.Void IncDecColorController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static ListColorController* New_ctor();
  }; // ListColorController
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ListColorController*, "", "ListColorController");
#pragma pack(pop)
