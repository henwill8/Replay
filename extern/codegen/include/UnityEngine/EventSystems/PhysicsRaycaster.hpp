// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.EventSystems.BaseRaycaster
#include "UnityEngine/EventSystems/BaseRaycaster.hpp"
// Including type: UnityEngine.LayerMask
#include "UnityEngine/LayerMask.hpp"
// Including type: UnityEngine.RaycastHit
#include "UnityEngine/RaycastHit.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
  // Forward declaring type: Ray
  struct Ray;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Completed forward declares
// Type namespace: UnityEngine.EventSystems
namespace UnityEngine::EventSystems {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: UnityEngine.EventSystems.PhysicsRaycaster
  // [] Offset: FFFFFFFF
  // [AddComponentMenu] Offset: CEF76C
  // [RequireComponent] Offset: CEF76C
  class PhysicsRaycaster : public UnityEngine::EventSystems::BaseRaycaster {
    public:
    // Nested type: UnityEngine::EventSystems::PhysicsRaycaster::RaycastHitComparer
    class RaycastHitComparer;
    // protected UnityEngine.Camera m_EventCamera
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Camera* m_EventCamera;
    // Field size check
    static_assert(sizeof(UnityEngine::Camera*) == 0x8);
    // protected UnityEngine.LayerMask m_EventMask
    // Size: 0x4
    // Offset: 0x28
    UnityEngine::LayerMask m_EventMask;
    // Field size check
    static_assert(sizeof(UnityEngine::LayerMask) == 0x4);
    // protected System.Int32 m_MaxRayIntersections
    // Size: 0x4
    // Offset: 0x2C
    int m_MaxRayIntersections;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // protected System.Int32 m_LastMaxRayIntersections
    // Size: 0x4
    // Offset: 0x30
    int m_LastMaxRayIntersections;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // Padding between fields: m_LastMaxRayIntersections and: m_Hits
    char __padding3[0x4] = {};
    // private UnityEngine.RaycastHit[] m_Hits
    // Size: 0x8
    // Offset: 0x38
    ::Array<UnityEngine::RaycastHit>* m_Hits;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::RaycastHit>*) == 0x8);
    // Creating value type constructor for type: PhysicsRaycaster
    PhysicsRaycaster(UnityEngine::Camera* m_EventCamera_ = {}, UnityEngine::LayerMask m_EventMask_ = {}, int m_MaxRayIntersections_ = {}, int m_LastMaxRayIntersections_ = {}, ::Array<UnityEngine::RaycastHit>* m_Hits_ = {}) noexcept : m_EventCamera{m_EventCamera_}, m_EventMask{m_EventMask_}, m_MaxRayIntersections{m_MaxRayIntersections_}, m_LastMaxRayIntersections{m_LastMaxRayIntersections_}, m_Hits{m_Hits_} {}
    // static field const value: static protected System.Int32 kNoEventMaskSet
    static constexpr const int kNoEventMaskSet = -1;
    // Get static field: static protected System.Int32 kNoEventMaskSet
    static int _get_kNoEventMaskSet();
    // Set static field: static protected System.Int32 kNoEventMaskSet
    static void _set_kNoEventMaskSet(int value);
    // public System.Int32 get_depth()
    // Offset: 0x12F6668
    int get_depth();
    // public System.Int32 get_finalEventMask()
    // Offset: 0x12F64D4
    int get_finalEventMask();
    // public UnityEngine.LayerMask get_eventMask()
    // Offset: 0x12F6728
    UnityEngine::LayerMask get_eventMask();
    // public System.Void set_eventMask(UnityEngine.LayerMask value)
    // Offset: 0x12F6730
    void set_eventMask(UnityEngine::LayerMask value);
    // public System.Int32 get_maxRayIntersections()
    // Offset: 0x12F6738
    int get_maxRayIntersections();
    // public System.Void set_maxRayIntersections(System.Int32 value)
    // Offset: 0x12F6740
    void set_maxRayIntersections(int value);
    // protected System.Boolean ComputeRayAndDistance(UnityEngine.EventSystems.PointerEventData eventData, ref UnityEngine.Ray ray, ref System.Int32 eventDisplayIndex, ref System.Single distanceToClipPlane)
    // Offset: 0x12F6178
    bool ComputeRayAndDistance(UnityEngine::EventSystems::PointerEventData* eventData, UnityEngine::Ray& ray, int& eventDisplayIndex, float& distanceToClipPlane);
    // protected System.Void .ctor()
    // Offset: 0x12F5BD8
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::.ctor()
    // Base method: System.Void UIBehaviour::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static PhysicsRaycaster* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("UnityEngine::EventSystems::PhysicsRaycaster::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<PhysicsRaycaster*, creationType>()));
    }
    // public override UnityEngine.Camera get_eventCamera()
    // Offset: 0x12F65A8
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: UnityEngine.Camera BaseRaycaster::get_eventCamera()
    UnityEngine::Camera* get_eventCamera();
    // public override System.Void Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    // Offset: 0x12F6748
    // Implemented from: UnityEngine.EventSystems.BaseRaycaster
    // Base method: System.Void BaseRaycaster::Raycast(UnityEngine.EventSystems.PointerEventData eventData, System.Collections.Generic.List`1<UnityEngine.EventSystems.RaycastResult> resultAppendList)
    void Raycast(UnityEngine::EventSystems::PointerEventData* eventData, System::Collections::Generic::List_1<UnityEngine::EventSystems::RaycastResult>* resultAppendList);
  }; // UnityEngine.EventSystems.PhysicsRaycaster
  #pragma pack(pop)
  static check_size<sizeof(PhysicsRaycaster), 56 + sizeof(::Array<UnityEngine::RaycastHit>*)> __UnityEngine_EventSystems_PhysicsRaycasterSizeCheck;
  static_assert(sizeof(PhysicsRaycaster) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::EventSystems::PhysicsRaycaster*, "UnityEngine.EventSystems", "PhysicsRaycaster");
