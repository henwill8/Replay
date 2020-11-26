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
  // Forward declaring type: Canvas
  class Canvas;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedCanvasSettings
  class CurvedCanvasSettings;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Autogenerated type: HMUI.CurvedCanvasSettingsHelper
  class CurvedCanvasSettingsHelper : public ::Il2CppObject {
    public:
    // private UnityEngine.Canvas _cachedCanvas
    // Offset: 0x10
    UnityEngine::Canvas* cachedCanvas;
    // private System.Boolean _cachedCanvasIsRootCanvas
    // Offset: 0x18
    bool cachedCanvasIsRootCanvas;
    // private HMUI.CurvedCanvasSettings _curvedCanvasSettings
    // Offset: 0x20
    HMUI::CurvedCanvasSettings* curvedCanvasSettings;
    // private System.Boolean _hasCachedData
    // Offset: 0x28
    bool hasCachedData;
    // Get static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,HMUI.CurvedCanvasSettings> _curvedCanvasCache
    static System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, HMUI::CurvedCanvasSettings*>* _get__curvedCanvasCache();
    // Set static field: static private System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,HMUI.CurvedCanvasSettings> _curvedCanvasCache
    static void _set__curvedCanvasCache(System::Collections::Generic::Dictionary_2<UnityEngine::Canvas*, HMUI::CurvedCanvasSettings*>* value);
    // static private System.Void NoDomainReloadInit()
    // Offset: 0x10ABE88
    static void NoDomainReloadInit();
    // public System.Void Reset()
    // Offset: 0x10ABF18
    void Reset();
    // public HMUI.CurvedCanvasSettings GetCurvedCanvasSettings(UnityEngine.Canvas canvas)
    // Offset: 0x10ABF54
    HMUI::CurvedCanvasSettings* GetCurvedCanvasSettings(UnityEngine::Canvas* canvas);
    // static private HMUI.CurvedCanvasSettings GetCurvedCanvasSettingsForCanvas(UnityEngine.Canvas canvas)
    // Offset: 0x10AC1A8
    static HMUI::CurvedCanvasSettings* GetCurvedCanvasSettingsForCanvas(UnityEngine::Canvas* canvas);
    // static private System.Void .cctor()
    // Offset: 0x10AC2C4
    static void _cctor();
    // public System.Void .ctor()
    // Offset: 0x10AC2BC
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    static CurvedCanvasSettingsHelper* New_ctor();
  }; // HMUI.CurvedCanvasSettingsHelper
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(HMUI::CurvedCanvasSettingsHelper*, "HMUI", "CurvedCanvasSettingsHelper");
#pragma pack(pop)
