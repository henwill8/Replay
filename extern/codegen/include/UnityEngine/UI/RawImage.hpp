// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.MaskableGraphic
#include "UnityEngine/UI/MaskableGraphic.hpp"
// Including type: UnityEngine.Rect
#include "UnityEngine/Rect.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Texture
  class Texture;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.RawImage
  class RawImage : public UnityEngine::UI::MaskableGraphic {
    public:
    // private UnityEngine.Texture m_Texture
    // Offset: 0xC0
    UnityEngine::Texture* m_Texture;
    // private UnityEngine.Rect m_UVRect
    // Offset: 0xC8
    UnityEngine::Rect m_UVRect;
    // public UnityEngine.Texture get_texture()
    // Offset: 0x15677C0
    UnityEngine::Texture* get_texture();
    // public System.Void set_texture(UnityEngine.Texture value)
    // Offset: 0x15677C8
    void set_texture(UnityEngine::Texture* value);
    // public UnityEngine.Rect get_uvRect()
    // Offset: 0x1567894
    UnityEngine::Rect get_uvRect();
    // public System.Void set_uvRect(UnityEngine.Rect value)
    // Offset: 0x15678A0
    void set_uvRect(UnityEngine::Rect value);
    // protected System.Void .ctor()
    // Offset: 0x15675E8
    // Implemented from: UnityEngine.UI.MaskableGraphic
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static RawImage* New_ctor();
    // public override UnityEngine.Texture get_mainTexture()
    // Offset: 0x1567640
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: UnityEngine.Texture Graphic::get_mainTexture()
    UnityEngine::Texture* get_mainTexture();
    // public override System.Void SetNativeSize()
    // Offset: 0x1567930
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::SetNativeSize()
    void SetNativeSize();
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    // Offset: 0x1567AF4
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnPopulateMesh(UnityEngine.UI.VertexHelper vh)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* vh);
    // protected override System.Void OnDidApplyAnimationProperties()
    // Offset: 0x1567F2C
    // Implemented from: UnityEngine.UI.Graphic
    // Base method: System.Void Graphic::OnDidApplyAnimationProperties()
    void OnDidApplyAnimationProperties();
  }; // UnityEngine.UI.RawImage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::RawImage*, "UnityEngine.UI", "RawImage");
#pragma pack(pop)
