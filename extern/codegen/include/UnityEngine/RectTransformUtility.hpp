// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Vector3
  struct Vector3;
  // Forward declaring type: Vector2
  struct Vector2;
  // Forward declaring type: Transform
  class Transform;
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Rect
  struct Rect;
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Ray
  struct Ray;
}
// Completed forward declares
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.RectTransformUtility
  class RectTransformUtility : public ::Il2CppObject {
    public:
    // Get static field: static private readonly UnityEngine.Vector3[] s_Corners
    static ::Array<UnityEngine::Vector3>* _get_s_Corners();
    // Set static field: static private readonly UnityEngine.Vector3[] s_Corners
    static void _set_s_Corners(::Array<UnityEngine::Vector3>* value);
    // static public UnityEngine.Vector2 PixelAdjustPoint(UnityEngine.Vector2 point, UnityEngine.Transform elementTransform, UnityEngine.Canvas canvas)
    // Offset: 0x19FDDA8
    static UnityEngine::Vector2 PixelAdjustPoint(UnityEngine::Vector2 point, UnityEngine::Transform* elementTransform, UnityEngine::Canvas* canvas);
    // static public UnityEngine.Rect PixelAdjustRect(UnityEngine.RectTransform rectTransform, UnityEngine.Canvas canvas)
    // Offset: 0x19FDEC4
    static UnityEngine::Rect PixelAdjustRect(UnityEngine::RectTransform* rectTransform, UnityEngine::Canvas* canvas);
    // static private System.Boolean PointInRectangle(UnityEngine.Vector2 screenPoint, UnityEngine.RectTransform rect, UnityEngine.Camera cam)
    // Offset: 0x19FDFCC
    static bool PointInRectangle(UnityEngine::Vector2 screenPoint, UnityEngine::RectTransform* rect, UnityEngine::Camera* cam);
    // static public System.Boolean RectangleContainsScreenPoint(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam)
    // Offset: 0x19FE0C8
    static bool RectangleContainsScreenPoint(UnityEngine::RectTransform* rect, UnityEngine::Vector2 screenPoint, UnityEngine::Camera* cam);
    // static public System.Boolean ScreenPointToWorldPointInRectangle(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, out UnityEngine.Vector3 worldPoint)
    // Offset: 0x19FE154
    static bool ScreenPointToWorldPointInRectangle(UnityEngine::RectTransform* rect, UnityEngine::Vector2 screenPoint, UnityEngine::Camera* cam, UnityEngine::Vector3& worldPoint);
    // static public System.Boolean ScreenPointToLocalPointInRectangle(UnityEngine.RectTransform rect, UnityEngine.Vector2 screenPoint, UnityEngine.Camera cam, out UnityEngine.Vector2 localPoint)
    // Offset: 0x19FE514
    static bool ScreenPointToLocalPointInRectangle(UnityEngine::RectTransform* rect, UnityEngine::Vector2 screenPoint, UnityEngine::Camera* cam, UnityEngine::Vector2& localPoint);
    // static public UnityEngine.Ray ScreenPointToRay(UnityEngine.Camera cam, UnityEngine.Vector2 screenPos)
    // Offset: 0x19FE374
    static UnityEngine::Ray ScreenPointToRay(UnityEngine::Camera* cam, UnityEngine::Vector2 screenPos);
    // static public UnityEngine.Vector2 WorldToScreenPoint(UnityEngine.Camera cam, UnityEngine.Vector3 worldPoint)
    // Offset: 0x19FE658
    static UnityEngine::Vector2 WorldToScreenPoint(UnityEngine::Camera* cam, UnityEngine::Vector3 worldPoint);
    // static public System.Void FlipLayoutOnAxis(UnityEngine.RectTransform rect, System.Int32 axis, System.Boolean keepPositioning, System.Boolean recursive)
    // Offset: 0x19FE768
    static void FlipLayoutOnAxis(UnityEngine::RectTransform* rect, int axis, bool keepPositioning, bool recursive);
    // static public System.Void FlipLayoutAxes(UnityEngine.RectTransform rect, System.Boolean keepPositioning, System.Boolean recursive)
    // Offset: 0x19FEA0C
    static void FlipLayoutAxes(UnityEngine::RectTransform* rect, bool keepPositioning, bool recursive);
    // static private UnityEngine.Vector2 GetTransposed(UnityEngine.Vector2 input)
    // Offset: 0x19FECD4
    static UnityEngine::Vector2 GetTransposed(UnityEngine::Vector2 input);
    // static private System.Void .cctor()
    // Offset: 0x19FED0C
    static void _cctor();
    // static private System.Void PixelAdjustPoint_Injected(ref UnityEngine.Vector2 point, UnityEngine.Transform elementTransform, UnityEngine.Canvas canvas, out UnityEngine.Vector2 ret)
    // Offset: 0x19FDE5C
    static void PixelAdjustPoint_Injected(UnityEngine::Vector2& point, UnityEngine::Transform* elementTransform, UnityEngine::Canvas* canvas, UnityEngine::Vector2& ret);
    // static private System.Void PixelAdjustRect_Injected(UnityEngine.RectTransform rectTransform, UnityEngine.Canvas canvas, out UnityEngine.Rect ret)
    // Offset: 0x19FDF74
    static void PixelAdjustRect_Injected(UnityEngine::RectTransform* rectTransform, UnityEngine::Canvas* canvas, UnityEngine::Rect& ret);
    // static private System.Boolean PointInRectangle_Injected(ref UnityEngine.Vector2 screenPoint, UnityEngine.RectTransform rect, UnityEngine.Camera cam)
    // Offset: 0x19FE070
    static bool PointInRectangle_Injected(UnityEngine::Vector2& screenPoint, UnityEngine::RectTransform* rect, UnityEngine::Camera* cam);
  }; // UnityEngine.RectTransformUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::RectTransformUtility*, "UnityEngine", "RectTransformUtility");
#pragma pack(pop)