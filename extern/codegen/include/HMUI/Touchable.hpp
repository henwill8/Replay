// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Graphic
#include "UnityEngine/UI/Graphic.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.Touchable
  class Touchable : public UnityEngine::UI::Graphic {
    public:
    // private System.Single _skew
    // Offset: 0x8C
    float skew;
    // public System.Single get_skew()
    // Offset: 0x197F420
    float get_skew();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x197F428
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* vh);
    // public System.Void .ctor()
    // Offset: 0x197F444
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static Touchable* New_ctor();
  }; // HMUI.Touchable
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::Touchable*, "HMUI", "Touchable");
#pragma pack(pop)
