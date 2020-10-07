// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: System.Enum
#include "System/Enum.hpp"
// Completed includes
// Type namespace: UnityEngine
namespace UnityEngine {
  // Autogenerated type: UnityEngine.DrivenTransformProperties
  struct DrivenTransformProperties : public System::Enum {
    public:
    // public System.Int32 value__
    // Offset: 0x0
    int value;
    // Creating value type constructor for type: DrivenTransformProperties
    constexpr DrivenTransformProperties(int value_ = {}) noexcept : value{value_} {}
    // Creating conversion operator: operator int
    constexpr operator int() const noexcept {
      return value;
    }
    // static field const value: static public UnityEngine.DrivenTransformProperties None
    static constexpr const int None = 0;
    // Get static field: static public UnityEngine.DrivenTransformProperties None
    static UnityEngine::DrivenTransformProperties _get_None();
    // Set static field: static public UnityEngine.DrivenTransformProperties None
    static void _set_None(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties All
    static constexpr const int All = -1;
    // Get static field: static public UnityEngine.DrivenTransformProperties All
    static UnityEngine::DrivenTransformProperties _get_All();
    // Set static field: static public UnityEngine.DrivenTransformProperties All
    static void _set_All(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties AnchoredPositionX
    static constexpr const int AnchoredPositionX = 2;
    // Get static field: static public UnityEngine.DrivenTransformProperties AnchoredPositionX
    static UnityEngine::DrivenTransformProperties _get_AnchoredPositionX();
    // Set static field: static public UnityEngine.DrivenTransformProperties AnchoredPositionX
    static void _set_AnchoredPositionX(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties AnchoredPositionY
    static constexpr const int AnchoredPositionY = 4;
    // Get static field: static public UnityEngine.DrivenTransformProperties AnchoredPositionY
    static UnityEngine::DrivenTransformProperties _get_AnchoredPositionY();
    // Set static field: static public UnityEngine.DrivenTransformProperties AnchoredPositionY
    static void _set_AnchoredPositionY(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties AnchoredPositionZ
    static constexpr const int AnchoredPositionZ = 8;
    // Get static field: static public UnityEngine.DrivenTransformProperties AnchoredPositionZ
    static UnityEngine::DrivenTransformProperties _get_AnchoredPositionZ();
    // Set static field: static public UnityEngine.DrivenTransformProperties AnchoredPositionZ
    static void _set_AnchoredPositionZ(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties Rotation
    static constexpr const int Rotation = 16;
    // Get static field: static public UnityEngine.DrivenTransformProperties Rotation
    static UnityEngine::DrivenTransformProperties _get_Rotation();
    // Set static field: static public UnityEngine.DrivenTransformProperties Rotation
    static void _set_Rotation(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties ScaleX
    static constexpr const int ScaleX = 32;
    // Get static field: static public UnityEngine.DrivenTransformProperties ScaleX
    static UnityEngine::DrivenTransformProperties _get_ScaleX();
    // Set static field: static public UnityEngine.DrivenTransformProperties ScaleX
    static void _set_ScaleX(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties ScaleY
    static constexpr const int ScaleY = 64;
    // Get static field: static public UnityEngine.DrivenTransformProperties ScaleY
    static UnityEngine::DrivenTransformProperties _get_ScaleY();
    // Set static field: static public UnityEngine.DrivenTransformProperties ScaleY
    static void _set_ScaleY(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties ScaleZ
    static constexpr const int ScaleZ = 128;
    // Get static field: static public UnityEngine.DrivenTransformProperties ScaleZ
    static UnityEngine::DrivenTransformProperties _get_ScaleZ();
    // Set static field: static public UnityEngine.DrivenTransformProperties ScaleZ
    static void _set_ScaleZ(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties AnchorMinX
    static constexpr const int AnchorMinX = 256;
    // Get static field: static public UnityEngine.DrivenTransformProperties AnchorMinX
    static UnityEngine::DrivenTransformProperties _get_AnchorMinX();
    // Set static field: static public UnityEngine.DrivenTransformProperties AnchorMinX
    static void _set_AnchorMinX(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties AnchorMinY
    static constexpr const int AnchorMinY = 512;
    // Get static field: static public UnityEngine.DrivenTransformProperties AnchorMinY
    static UnityEngine::DrivenTransformProperties _get_AnchorMinY();
    // Set static field: static public UnityEngine.DrivenTransformProperties AnchorMinY
    static void _set_AnchorMinY(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties AnchorMaxX
    static constexpr const int AnchorMaxX = 1024;
    // Get static field: static public UnityEngine.DrivenTransformProperties AnchorMaxX
    static UnityEngine::DrivenTransformProperties _get_AnchorMaxX();
    // Set static field: static public UnityEngine.DrivenTransformProperties AnchorMaxX
    static void _set_AnchorMaxX(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties AnchorMaxY
    static constexpr const int AnchorMaxY = 2048;
    // Get static field: static public UnityEngine.DrivenTransformProperties AnchorMaxY
    static UnityEngine::DrivenTransformProperties _get_AnchorMaxY();
    // Set static field: static public UnityEngine.DrivenTransformProperties AnchorMaxY
    static void _set_AnchorMaxY(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties SizeDeltaX
    static constexpr const int SizeDeltaX = 4096;
    // Get static field: static public UnityEngine.DrivenTransformProperties SizeDeltaX
    static UnityEngine::DrivenTransformProperties _get_SizeDeltaX();
    // Set static field: static public UnityEngine.DrivenTransformProperties SizeDeltaX
    static void _set_SizeDeltaX(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties SizeDeltaY
    static constexpr const int SizeDeltaY = 8192;
    // Get static field: static public UnityEngine.DrivenTransformProperties SizeDeltaY
    static UnityEngine::DrivenTransformProperties _get_SizeDeltaY();
    // Set static field: static public UnityEngine.DrivenTransformProperties SizeDeltaY
    static void _set_SizeDeltaY(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties PivotX
    static constexpr const int PivotX = 16384;
    // Get static field: static public UnityEngine.DrivenTransformProperties PivotX
    static UnityEngine::DrivenTransformProperties _get_PivotX();
    // Set static field: static public UnityEngine.DrivenTransformProperties PivotX
    static void _set_PivotX(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties PivotY
    static constexpr const int PivotY = 32768;
    // Get static field: static public UnityEngine.DrivenTransformProperties PivotY
    static UnityEngine::DrivenTransformProperties _get_PivotY();
    // Set static field: static public UnityEngine.DrivenTransformProperties PivotY
    static void _set_PivotY(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties AnchoredPosition
    static constexpr const int AnchoredPosition = 6;
    // Get static field: static public UnityEngine.DrivenTransformProperties AnchoredPosition
    static UnityEngine::DrivenTransformProperties _get_AnchoredPosition();
    // Set static field: static public UnityEngine.DrivenTransformProperties AnchoredPosition
    static void _set_AnchoredPosition(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties AnchoredPosition3D
    static constexpr const int AnchoredPosition3D = 14;
    // Get static field: static public UnityEngine.DrivenTransformProperties AnchoredPosition3D
    static UnityEngine::DrivenTransformProperties _get_AnchoredPosition3D();
    // Set static field: static public UnityEngine.DrivenTransformProperties AnchoredPosition3D
    static void _set_AnchoredPosition3D(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties Scale
    static constexpr const int Scale = 224;
    // Get static field: static public UnityEngine.DrivenTransformProperties Scale
    static UnityEngine::DrivenTransformProperties _get_Scale();
    // Set static field: static public UnityEngine.DrivenTransformProperties Scale
    static void _set_Scale(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties AnchorMin
    static constexpr const int AnchorMin = 768;
    // Get static field: static public UnityEngine.DrivenTransformProperties AnchorMin
    static UnityEngine::DrivenTransformProperties _get_AnchorMin();
    // Set static field: static public UnityEngine.DrivenTransformProperties AnchorMin
    static void _set_AnchorMin(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties AnchorMax
    static constexpr const int AnchorMax = 3072;
    // Get static field: static public UnityEngine.DrivenTransformProperties AnchorMax
    static UnityEngine::DrivenTransformProperties _get_AnchorMax();
    // Set static field: static public UnityEngine.DrivenTransformProperties AnchorMax
    static void _set_AnchorMax(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties Anchors
    static constexpr const int Anchors = 3840;
    // Get static field: static public UnityEngine.DrivenTransformProperties Anchors
    static UnityEngine::DrivenTransformProperties _get_Anchors();
    // Set static field: static public UnityEngine.DrivenTransformProperties Anchors
    static void _set_Anchors(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties SizeDelta
    static constexpr const int SizeDelta = 12288;
    // Get static field: static public UnityEngine.DrivenTransformProperties SizeDelta
    static UnityEngine::DrivenTransformProperties _get_SizeDelta();
    // Set static field: static public UnityEngine.DrivenTransformProperties SizeDelta
    static void _set_SizeDelta(UnityEngine::DrivenTransformProperties value);
    // static field const value: static public UnityEngine.DrivenTransformProperties Pivot
    static constexpr const int Pivot = 49152;
    // Get static field: static public UnityEngine.DrivenTransformProperties Pivot
    static UnityEngine::DrivenTransformProperties _get_Pivot();
    // Set static field: static public UnityEngine.DrivenTransformProperties Pivot
    static void _set_Pivot(UnityEngine::DrivenTransformProperties value);
  }; // UnityEngine.DrivenTransformProperties
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::DrivenTransformProperties, "UnityEngine", "DrivenTransformProperties");
#pragma pack(pop)
