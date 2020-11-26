// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.UI.ILayoutController
#include "UnityEngine/UI/ILayoutController.hpp"
// Completed includes
// Type namespace: 
namespace GlobalNamespace {
  // Autogenerated type: StartMiddleEndButtonsGroup
  class StartMiddleEndButtonsGroup : public UnityEngine::MonoBehaviour/*, public UnityEngine::UI::ILayoutController*/ {
    public:
    // Creating interface conversion operator: operator UnityEngine::UI::ILayoutController
    operator UnityEngine::UI::ILayoutController() noexcept {
      return *reinterpret_cast<UnityEngine::UI::ILayoutController*>(this);
    }
    // public System.Void SetLayoutHorizontal()
    // Offset: 0xF455CC
    // Implemented from: UnityEngine.UI.ILayoutController
    // Base method: System.Void ILayoutController::SetLayoutHorizontal()
    void SetLayoutHorizontal();
    // public System.Void SetLayoutVertical()
    // Offset: 0xF456D0
    // Implemented from: UnityEngine.UI.ILayoutController
    // Base method: System.Void ILayoutController::SetLayoutVertical()
    void SetLayoutVertical();
    // public System.Void .ctor()
    // Offset: 0xF456D4
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static StartMiddleEndButtonsGroup* New_ctor();
  }; // StartMiddleEndButtonsGroup
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StartMiddleEndButtonsGroup*, "", "StartMiddleEndButtonsGroup");
#pragma pack(pop)
