// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.UI.ICanvasElement
#include "UnityEngine/UI/ICanvasElement.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ObjectPool`1<T>
  template<typename T>
  class ObjectPool_1;
  // Forward declaring type: CanvasUpdate
  struct CanvasUpdate;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
  // Forward declaring type: Component
  class Component;
  // Forward declaring type: Transform
  class Transform;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: UnityEngine::Events
namespace UnityEngine::Events {
  // Forward declaring type: UnityAction`1<T0>
  template<typename T0>
  class UnityAction_1;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.LayoutRebuilder
  class LayoutRebuilder : public ::Il2CppObject/*, public UnityEngine::UI::ICanvasElement*/ {
    public:
    // Nested type: UnityEngine::UI::LayoutRebuilder::$$c
    class $$c;
    // private UnityEngine.RectTransform m_ToRebuild
    // Offset: 0x10
    UnityEngine::RectTransform* m_ToRebuild;
    // private System.Int32 m_CachedHashFromTransform
    // Offset: 0x18
    int m_CachedHashFromTransform;
    // Creating interface conversion operator: operator UnityEngine::UI::ICanvasElement
    operator UnityEngine::UI::ICanvasElement() noexcept {
      return *reinterpret_cast<UnityEngine::UI::ICanvasElement*>(this);
    }
    // Get static field: static private UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder> s_Rebuilders
    static UnityEngine::UI::ObjectPool_1<UnityEngine::UI::LayoutRebuilder*>* _get_s_Rebuilders();
    // Set static field: static private UnityEngine.UI.ObjectPool`1<UnityEngine.UI.LayoutRebuilder> s_Rebuilders
    static void _set_s_Rebuilders(UnityEngine::UI::ObjectPool_1<UnityEngine::UI::LayoutRebuilder*>* value);
    // private System.Void Initialize(UnityEngine.RectTransform controller)
    // Offset: 0x1561AC4
    void Initialize(UnityEngine::RectTransform* controller);
    // private System.Void Clear()
    // Offset: 0x1561B08
    void Clear();
    // static private System.Void .cctor()
    // Offset: 0x1561B38
    static void _cctor();
    // static private System.Void ReapplyDrivenProperties(UnityEngine.RectTransform driven)
    // Offset: 0x1561C50
    static void ReapplyDrivenProperties(UnityEngine::RectTransform* driven);
    // static private System.Void StripDisabledBehavioursFromList(System.Collections.Generic.List`1<UnityEngine.Component> components)
    // Offset: 0x1561D2C
    static void StripDisabledBehavioursFromList(System::Collections::Generic::List_1<UnityEngine::Component*>* components);
    // static public System.Void ForceRebuildLayoutImmediate(UnityEngine.RectTransform layoutRoot)
    // Offset: 0x1561E28
    static void ForceRebuildLayoutImmediate(UnityEngine::RectTransform* layoutRoot);
    // private System.Void PerformLayoutControl(UnityEngine.RectTransform rect, UnityEngine.Events.UnityAction`1<UnityEngine.Component> action)
    // Offset: 0x15624C0
    void PerformLayoutControl(UnityEngine::RectTransform* rect, UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* action);
    // private System.Void PerformLayoutCalculation(UnityEngine.RectTransform rect, UnityEngine.Events.UnityAction`1<UnityEngine.Component> action)
    // Offset: 0x15621F4
    void PerformLayoutCalculation(UnityEngine::RectTransform* rect, UnityEngine::Events::UnityAction_1<UnityEngine::Component*>* action);
    // static public System.Void MarkLayoutForRebuild(UnityEngine.RectTransform rect)
    // Offset: 0x15604AC
    static void MarkLayoutForRebuild(UnityEngine::RectTransform* rect);
    // static private System.Boolean ValidController(UnityEngine.RectTransform layoutRoot, System.Collections.Generic.List`1<UnityEngine.Component> comps)
    // Offset: 0x15627C4
    static bool ValidController(UnityEngine::RectTransform* layoutRoot, System::Collections::Generic::List_1<UnityEngine::Component*>* comps);
    // static private System.Void MarkLayoutRootForRebuild(UnityEngine.RectTransform controller)
    // Offset: 0x15629A0
    static void MarkLayoutRootForRebuild(UnityEngine::RectTransform* controller);
    // public UnityEngine.Transform get_transform()
    // Offset: 0x1561CB4
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: UnityEngine.Transform ICanvasElement::get_transform()
    UnityEngine::Transform* get_transform();
    // Creating proxy method: UnityEngine_UI_ICanvasElement_get_transform
    // Maps to method: get_transform
    UnityEngine::Transform* UnityEngine_UI_ICanvasElement_get_transform();
    // public System.Boolean IsDestroyed()
    // Offset: 0x1561CBC
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Boolean ICanvasElement::IsDestroyed()
    bool IsDestroyed();
    // public System.Void Rebuild(UnityEngine.UI.CanvasUpdate executing)
    // Offset: 0x1561EF0
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::Rebuild(UnityEngine.UI.CanvasUpdate executing)
    void Rebuild(UnityEngine::UI::CanvasUpdate executing);
    // public System.Void LayoutComplete()
    // Offset: 0x1562AE8
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::LayoutComplete()
    void LayoutComplete();
    // public System.Void GraphicUpdateComplete()
    // Offset: 0x1562B6C
    // Implemented from: UnityEngine.UI.ICanvasElement
    // Base method: System.Void ICanvasElement::GraphicUpdateComplete()
    void GraphicUpdateComplete();
    // public override System.Int32 GetHashCode()
    // Offset: 0x1562B70
    // Implemented from: System.Object
    // Base method: System.Int32 Object::GetHashCode()
    int GetHashCode();
    // public override System.Boolean Equals(System.Object obj)
    // Offset: 0x1562B78
    // Implemented from: System.Object
    // Base method: System.Boolean Object::Equals(System.Object obj)
    bool Equals(::Il2CppObject* obj);
    // public override System.String ToString()
    // Offset: 0x1562BCC
    // Implemented from: System.Object
    // Base method: System.String Object::ToString()
    ::Il2CppString* ToString();
    // public System.Void .ctor()
    // Offset: 0x1562C20
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static LayoutRebuilder* New_ctor();
  }; // UnityEngine.UI.LayoutRebuilder
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutRebuilder*, "UnityEngine.UI", "LayoutRebuilder");
#pragma pack(pop)