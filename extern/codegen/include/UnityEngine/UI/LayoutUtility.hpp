// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: ILayoutElement
  class ILayoutElement;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: RectTransform
  class RectTransform;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Func`2<T, TResult>
  template<typename T, typename TResult>
  class Func_2;
}
// Completed forward declares
// Type namespace: UnityEngine.UI
namespace UnityEngine::UI {
  // Autogenerated type: UnityEngine.UI.LayoutUtility
  class LayoutUtility : public ::Il2CppObject {
    public:
    // Nested type: UnityEngine::UI::LayoutUtility::$$c
    class $$c;
    // static public System.Single GetMinSize(UnityEngine.RectTransform rect, System.Int32 axis)
    // Offset: 0x156309C
    static float GetMinSize(UnityEngine::RectTransform* rect, int axis);
    // static public System.Single GetPreferredSize(UnityEngine.RectTransform rect, System.Int32 axis)
    // Offset: 0x15632A8
    static float GetPreferredSize(UnityEngine::RectTransform* rect, int axis);
    // static public System.Single GetFlexibleSize(UnityEngine.RectTransform rect, System.Int32 axis)
    // Offset: 0x1563684
    static float GetFlexibleSize(UnityEngine::RectTransform* rect, int axis);
    // static public System.Single GetMinWidth(UnityEngine.RectTransform rect)
    // Offset: 0x15630A8
    static float GetMinWidth(UnityEngine::RectTransform* rect);
    // static public System.Single GetPreferredWidth(UnityEngine.RectTransform rect)
    // Offset: 0x15632B4
    static float GetPreferredWidth(UnityEngine::RectTransform* rect);
    // static public System.Single GetFlexibleWidth(UnityEngine.RectTransform rect)
    // Offset: 0x1563690
    static float GetFlexibleWidth(UnityEngine::RectTransform* rect);
    // static public System.Single GetMinHeight(UnityEngine.RectTransform rect)
    // Offset: 0x15631A8
    static float GetMinHeight(UnityEngine::RectTransform* rect);
    // static public System.Single GetPreferredHeight(UnityEngine.RectTransform rect)
    // Offset: 0x156349C
    static float GetPreferredHeight(UnityEngine::RectTransform* rect);
    // static public System.Single GetFlexibleHeight(UnityEngine.RectTransform rect)
    // Offset: 0x1563790
    static float GetFlexibleHeight(UnityEngine::RectTransform* rect);
    // static public System.Single GetLayoutProperty(UnityEngine.RectTransform rect, System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> property, System.Single defaultValue)
    // Offset: 0x1563890
    static float GetLayoutProperty(UnityEngine::RectTransform* rect, System::Func_2<UnityEngine::UI::ILayoutElement*, float>* property, float defaultValue);
    // static public System.Single GetLayoutProperty(UnityEngine.RectTransform rect, System.Func`2<UnityEngine.UI.ILayoutElement,System.Single> property, System.Single defaultValue, out UnityEngine.UI.ILayoutElement source)
    // Offset: 0x15638B4
    static float GetLayoutProperty(UnityEngine::RectTransform* rect, System::Func_2<UnityEngine::UI::ILayoutElement*, float>* property, float defaultValue, UnityEngine::UI::ILayoutElement*& source);
  }; // UnityEngine.UI.LayoutUtility
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UI::LayoutUtility*, "UnityEngine.UI", "LayoutUtility");
#pragma pack(pop)
