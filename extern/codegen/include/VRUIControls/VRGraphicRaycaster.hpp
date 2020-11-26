// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine/EventSystems/BaseRaycaster.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedCanvasSettingsHelper
  class CurvedCanvasSettingsHelper;
}
// Forward declaring namespace: VRUIControls
namespace VRUIControls {
  // Forward declaring type: PhysicsRaycasterWithCache
  class PhysicsRaycasterWithCache;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Canvas
  class Canvas;
  // Forward declaring type: Ray
  struct Ray;
  // Forward declaring type: Camera
  class Camera;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Graphic
  class Graphic;
}
// Completed forward declares
// Type namespace: VRUIControls
namespace VRUIControls {
  // Autogenerated type: VRUIControls.VRGraphicRaycaster
  class VRGraphicRaycaster : public UnityEngine::EventSystems::BaseRaycaster {
    public:
    // Nested type: VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult
    struct VRGraphicRaycastResult;
    // Nested type: VRUIControls::VRGraphicRaycaster::$$c
    class $$c;
    // Autogenerated type: VRUIControls.VRGraphicRaycaster/VRGraphicRaycastResult
    struct VRGraphicRaycastResult : public System::ValueType {
      public:
      // public readonly UnityEngine.UI.Graphic graphic
      // Offset: 0x0
      UnityEngine::UI::Graphic* graphic;
      // public readonly System.Single distance
      // Offset: 0x8
      float distance;
      // public readonly UnityEngine.Vector3 position
      // Offset: 0xC
      UnityEngine::Vector3 position;
      // public readonly UnityEngine.Vector2 insideRootCanvasPosition
      // Offset: 0x18
      UnityEngine::Vector2 insideRootCanvasPosition;
      // Creating value type constructor for type: VRGraphicRaycastResult
      constexpr VRGraphicRaycastResult(UnityEngine::UI::Graphic* graphic_ = {}, float distance_ = {}, UnityEngine::Vector3 position_ = {}, UnityEngine::Vector2 insideRootCanvasPosition_ = {}) noexcept : graphic{graphic_}, distance{distance_}, position{position_}, insideRootCanvasPosition{insideRootCanvasPosition_} {}
      // public System.Void .ctor(UnityEngine.UI.Graphic graphic, System.Single distance, UnityEngine.Vector3 position, UnityEngine.Vector2 insideRootCanvasPosition)
      // Offset: 0xCB5D38
      // ABORTED: conflicts with another method.  VRGraphicRaycastResult(UnityEngine::UI::Graphic* graphic, float distance, UnityEngine::Vector3 position, UnityEngine::Vector2 insideRootCanvasPosition);
    }; // VRUIControls.VRGraphicRaycaster/VRGraphicRaycastResult
    // private UnityEngine.LayerMask _blockingMask
    // Offset: 0x20
    UnityEngine::LayerMask blockingMask;
    // private readonly VRUIControls.PhysicsRaycasterWithCache _physicsRaycaster
    // Offset: 0x28
    VRUIControls::PhysicsRaycasterWithCache* physicsRaycaster;
    // private UnityEngine.Canvas _canvas
    // Offset: 0x30
    UnityEngine::Canvas* canvas;
    // private readonly System.Collections.Generic.List`1<VRUIControls.VRGraphicRaycaster/VRGraphicRaycastResult> _raycastResults
    // Offset: 0x38
    System::Collections::Generic::List_1<VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult>* raycastResults;
    // private readonly HMUI.CurvedCanvasSettingsHelper _curvedCanvasSettingsHelper
    // Offset: 0x40
    HMUI::CurvedCanvasSettingsHelper* curvedCanvasSettingsHelper;
    // static field const value: static private System.Single kPhysics3DRaycastDistance
    static constexpr const float kPhysics3DRaycastDistance = 6;
    // Get static field: static private System.Single kPhysics3DRaycastDistance
    static float _get_kPhysics3DRaycastDistance();
    // Set static field: static private System.Single kPhysics3DRaycastDistance
    static void _set_kPhysics3DRaycastDistance(float value);
    // Get static field: static private readonly System.Single[] _ray2DCircleIntersectionDistances
    static ::Array<float>* _get__ray2DCircleIntersectionDistances();
    // Set static field: static private readonly System.Single[] _ray2DCircleIntersectionDistances
    static void _set__ray2DCircleIntersectionDistances(::Array<float>* value);
    // static private System.Void RaycastCanvas(UnityEngine.Canvas canvas, UnityEngine.Ray ray, System.Single hitDistance, System.Single curvedUIRadius, System.Collections.Generic.List`1<VRUIControls.VRGraphicRaycaster/VRGraphicRaycastResult> results)
    // Offset: 0x1990454
    static void RaycastCanvas(UnityEngine::Canvas* canvas, UnityEngine::Ray ray, float hitDistance, float curvedUIRadius, System::Collections::Generic::List_1<VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult>* results);
    // public override UnityEngine.Camera get_eventCamera()
    // Offset: 0x198FDC8
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: UnityEngine.Camera BaseRaycaster::get_eventCamera()
    UnityEngine::Camera* get_eventCamera();
    // protected override System.Void OnEnable()
    // Offset: 0x198FDD0
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::OnEnable()
    void OnEnable();
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x198FE50
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
    // public System.Void .ctor()
    // Offset: 0x19910B4
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    static VRGraphicRaycaster* New_ctor();
    // static private System.Void .cctor()
    // Offset: 0x199116C
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // VRUIControls.VRGraphicRaycaster
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::VRGraphicRaycaster*, "VRUIControls", "VRGraphicRaycaster");
DEFINE_IL2CPP_ARG_TYPE(VRUIControls::VRGraphicRaycaster::VRGraphicRaycastResult, "VRUIControls", "VRGraphicRaycaster/VRGraphicRaycastResult");
#pragma pack(pop)
