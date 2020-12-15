// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.Image
#include "UnityEngine/UI/Image.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedCanvasSettingsHelper
  class CurvedCanvasSettingsHelper;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: VertexHelper
  class VertexHelper;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Skipping declaration: Color32 because it is already included!
  // Forward declaring type: Rect
  struct Rect;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.GradientImage
  class GradientImage : public UnityEngine::UI::Image {
    public:
    // private UnityEngine.Color _color0
    // Offset: 0xF8
    UnityEngine::Color color0;
    // private UnityEngine.Color _color1
    // Offset: 0x108
    UnityEngine::Color color1;
    // private readonly HMUI.CurvedCanvasSettingsHelper _curvedCanvasSettingsHelper
    // Offset: 0x118
    HMUI::CurvedCanvasSettingsHelper* curvedCanvasSettingsHelper;
    // Get static field: static private readonly UnityEngine.Vector2 kVec2Zero
    static UnityEngine::Vector2 _get_kVec2Zero();
    // Set static field: static private readonly UnityEngine.Vector2 kVec2Zero
    static void _set_kVec2Zero(UnityEngine::Vector2 value);
    // Get static field: static private readonly UnityEngine.Vector3 kVec3Zero
    static UnityEngine::Vector3 _get_kVec3Zero();
    // Set static field: static private readonly UnityEngine.Vector3 kVec3Zero
    static void _set_kVec3Zero(UnityEngine::Vector3 value);
    // Get static field: static private readonly UnityEngine.Vector4 kVec4Zero
    static UnityEngine::Vector4 _get_kVec4Zero();
    // Set static field: static private readonly UnityEngine.Vector4 kVec4Zero
    static void _set_kVec4Zero(UnityEngine::Vector4 value);
    // Get static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static ::Array<UnityEngine::Vector2>* _get_s_VertScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_VertScratch
    static void _set_s_VertScratch(::Array<UnityEngine::Vector2>* value);
    // Get static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static ::Array<UnityEngine::Vector2>* _get_s_UVScratch();
    // Set static field: static private readonly UnityEngine.Vector2[] s_UVScratch
    static void _set_s_UVScratch(::Array<UnityEngine::Vector2>* value);
    // Get static field: static private readonly UnityEngine.Color[] s_ColorScratch
    static ::Array<UnityEngine::Color>* _get_s_ColorScratch();
    // Set static field: static private readonly UnityEngine.Color[] s_ColorScratch
    static void _set_s_ColorScratch(::Array<UnityEngine::Color>* value);
    // Get static field: static private readonly UnityEngine.Vector3[] s_Xy
    static ::Array<UnityEngine::Vector3>* _get_s_Xy();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Xy
    static void _set_s_Xy(::Array<UnityEngine::Vector3>* value);
    // Get static field: static private readonly UnityEngine.Vector3[] s_Uv
    static ::Array<UnityEngine::Vector3>* _get_s_Uv();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Uv
    static void _set_s_Uv(::Array<UnityEngine::Vector3>* value);
    // public UnityEngine.Color get_color0()
    // Offset: 0x10B07B4
    UnityEngine::Color get_color0();
    // public System.Void set_color0(UnityEngine.Color value)
    // Offset: 0x10B07C4
    void set_color0(UnityEngine::Color value);
    // public UnityEngine.Color get_color1()
    // Offset: 0x10B080C
    UnityEngine::Color get_color1();
    // public System.Void set_color1(UnityEngine.Color value)
    // Offset: 0x10B0820
    void set_color1(UnityEngine::Color value);
    // private System.Void GenerateSimpleSprite(UnityEngine.UI.VertexHelper vh, System.Boolean lPreserveAspect, System.Single curvedUIRadius)
    // Offset: 0x10B09F0
    void GenerateSimpleSprite(UnityEngine::UI::VertexHelper* vh, bool lPreserveAspect, float curvedUIRadius);
    // private System.Void GenerateSlicedSprite(UnityEngine.UI.VertexHelper vh, System.Single curvedUIRadius)
    // Offset: 0x10B0E78
    void GenerateSlicedSprite(UnityEngine::UI::VertexHelper* vh, float curvedUIRadius);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color0, UnityEngine.Color32 color1, UnityEngine.Vector2 uv0Min, UnityEngine.Vector2 uv0Max, System.Single elementWidthScale, System.Single curvedUIRadius)
    // Offset: 0x10B3C20
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color0, UnityEngine::Color32 color1, UnityEngine::Vector2 uv0Min, UnityEngine::Vector2 uv0Max, float elementWidthScale, float curvedUIRadius);
    // protected override System.Void OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0x10B0868
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::OnPopulateMesh(UnityEngine.UI.VertexHelper toFill)
    void OnPopulateMesh(UnityEngine::UI::VertexHelper* toFill);
    // private System.Void GenerateTiledSprite(UnityEngine.UI.VertexHelper toFill)
    // Offset: 0x10B1878
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::GenerateTiledSprite(UnityEngine.UI.VertexHelper toFill)
    void GenerateTiledSprite(UnityEngine::UI::VertexHelper* toFill);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs)
    // Offset: 0x10B41E4
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector3[] quadPositions, UnityEngine.Color32 color, UnityEngine.Vector3[] quadUVs)
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, ::Array<UnityEngine::Vector3>* quadPositions, UnityEngine::Color32 color, ::Array<UnityEngine::Vector3>* quadUVs);
    // static private System.Void AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax)
    // Offset: 0x10B3FD8
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::AddQuad(UnityEngine.UI.VertexHelper vertexHelper, UnityEngine.Vector2 posMin, UnityEngine.Vector2 posMax, UnityEngine.Color32 color, UnityEngine.Vector2 uvMin, UnityEngine.Vector2 uvMax)
    static void AddQuad(UnityEngine::UI::VertexHelper* vertexHelper, UnityEngine::Vector2 posMin, UnityEngine::Vector2 posMax, UnityEngine::Color32 color, UnityEngine::Vector2 uvMin, UnityEngine::Vector2 uvMax);
    // private UnityEngine.Vector4 GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect rect)
    // Offset: 0x10B3B04
    // Implemented from: UnityEngine.UI.Image
    // Base method: UnityEngine.Vector4 Image::GetAdjustedBorders(UnityEngine.Vector4 border, UnityEngine.Rect rect)
    UnityEngine::Vector4 GetAdjustedBorders(UnityEngine::Vector4 border, UnityEngine::Rect rect);
    // private System.Void GenerateFilledSprite(UnityEngine.UI.VertexHelper toFill, System.Boolean preserveAspect)
    // Offset: 0x10B2824
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::GenerateFilledSprite(UnityEngine.UI.VertexHelper toFill, System.Boolean preserveAspect)
    void GenerateFilledSprite(UnityEngine::UI::VertexHelper* toFill, bool preserveAspect);
    // static private System.Boolean RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner)
    // Offset: 0x10B436C
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Boolean Image::RadialCut(UnityEngine.Vector3[] xy, UnityEngine.Vector3[] uv, System.Single fill, System.Boolean invert, System.Int32 corner)
    static bool RadialCut(::Array<UnityEngine::Vector3>* xy, ::Array<UnityEngine::Vector3>* uv, float fill, bool invert, int corner);
    // static private System.Void RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner)
    // Offset: 0x10B44D8
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::RadialCut(UnityEngine.Vector3[] xy, System.Single cos, System.Single sin, System.Boolean invert, System.Int32 corner)
    static void RadialCut(::Array<UnityEngine::Vector3>* xy, float cos, float sin, bool invert, int corner);
    // private UnityEngine.Vector4 GetDrawingDimensions(System.Boolean shouldPreserveAspect)
    // Offset: 0x10B3660
    // Implemented from: UnityEngine.UI.Image
    // Base method: UnityEngine.Vector4 Image::GetDrawingDimensions(System.Boolean shouldPreserveAspect)
    UnityEngine::Vector4 GetDrawingDimensions(bool shouldPreserveAspect);
    // public System.Void .ctor()
    // Offset: 0x10B4A50
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::.ctor()
    // Base method: System.Void MaskableGraphic::.ctor()
    // Base method: System.Void Graphic::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static GradientImage* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x10B4AE4
    // Implemented from: UnityEngine.UI.Image
    // Base method: System.Void Image::.cctor()
    // Base method: System.Void Graphic::.cctor()
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // HMUI.GradientImage
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::GradientImage*, "HMUI", "GradientImage");
#pragma pack(pop)