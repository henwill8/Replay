// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
  // Forward declaring type: Dictionary`2<TKey, TValue>
  template<typename TKey, typename TValue>
  class Dictionary_2;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TMP_Text
  class TMP_Text;
}
// Forward declaring namespace: UnityEngine::Rendering
namespace UnityEngine::Rendering {
  // Forward declaring type: ScriptableRenderContext
  struct ScriptableRenderContext;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Camera
  class Camera;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Size: 0x40
  #pragma pack(push, 1)
  // Autogenerated type: TMPro.TMP_UpdateManager
  // [] Offset: FFFFFFFF
  class TMP_UpdateManager : public ::Il2CppObject {
    public:
    // private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_LayoutRebuildQueue
    // Size: 0x8
    // Offset: 0x10
    System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_LayoutRebuildQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Text*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_LayoutQueueLookup
    // Size: 0x8
    // Offset: 0x18
    System::Collections::Generic::Dictionary_2<int, int>* m_LayoutQueueLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_GraphicRebuildQueue
    // Size: 0x8
    // Offset: 0x20
    System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_GraphicRebuildQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Text*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_GraphicQueueLookup
    // Size: 0x8
    // Offset: 0x28
    System::Collections::Generic::Dictionary_2<int, int>* m_GraphicQueueLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    // private readonly System.Collections.Generic.List`1<TMPro.TMP_Text> m_InternalUpdateQueue
    // Size: 0x8
    // Offset: 0x30
    System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_InternalUpdateQueue;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TMP_Text*>*) == 0x8);
    // private System.Collections.Generic.Dictionary`2<System.Int32,System.Int32> m_InternalUpdateLookup
    // Size: 0x8
    // Offset: 0x38
    System::Collections::Generic::Dictionary_2<int, int>* m_InternalUpdateLookup;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::Dictionary_2<int, int>*) == 0x8);
    // Creating value type constructor for type: TMP_UpdateManager
    TMP_UpdateManager(System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_LayoutRebuildQueue_ = {}, System::Collections::Generic::Dictionary_2<int, int>* m_LayoutQueueLookup_ = {}, System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_GraphicRebuildQueue_ = {}, System::Collections::Generic::Dictionary_2<int, int>* m_GraphicQueueLookup_ = {}, System::Collections::Generic::List_1<TMPro::TMP_Text*>* m_InternalUpdateQueue_ = {}, System::Collections::Generic::Dictionary_2<int, int>* m_InternalUpdateLookup_ = {}) noexcept : m_LayoutRebuildQueue{m_LayoutRebuildQueue_}, m_LayoutQueueLookup{m_LayoutQueueLookup_}, m_GraphicRebuildQueue{m_GraphicRebuildQueue_}, m_GraphicQueueLookup{m_GraphicQueueLookup_}, m_InternalUpdateQueue{m_InternalUpdateQueue_}, m_InternalUpdateLookup{m_InternalUpdateLookup_} {}
    // Get static field: static private TMPro.TMP_UpdateManager s_Instance
    static TMPro::TMP_UpdateManager* _get_s_Instance();
    // Set static field: static private TMPro.TMP_UpdateManager s_Instance
    static void _set_s_Instance(TMPro::TMP_UpdateManager* value);
    // static public TMPro.TMP_UpdateManager get_instance()
    // Offset: 0x12BEE4C
    static TMPro::TMP_UpdateManager* get_instance();
    // static System.Void RegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0x12BF108
    static void RegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // private System.Void InternalRegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0x12BF134
    void InternalRegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // static public System.Void RegisterTextElementForLayoutRebuild(TMPro.TMP_Text element)
    // Offset: 0x12BF204
    static void RegisterTextElementForLayoutRebuild(TMPro::TMP_Text* element);
    // private System.Boolean InternalRegisterTextElementForLayoutRebuild(TMPro.TMP_Text element)
    // Offset: 0x12BF230
    bool InternalRegisterTextElementForLayoutRebuild(TMPro::TMP_Text* element);
    // static public System.Void RegisterTextElementForGraphicRebuild(TMPro.TMP_Text element)
    // Offset: 0x12BF300
    static void RegisterTextElementForGraphicRebuild(TMPro::TMP_Text* element);
    // private System.Boolean InternalRegisterTextElementForGraphicRebuild(TMPro.TMP_Text element)
    // Offset: 0x12BF32C
    bool InternalRegisterTextElementForGraphicRebuild(TMPro::TMP_Text* element);
    // private System.Void OnBeginFrameRendering(UnityEngine.Rendering.ScriptableRenderContext renderContext, UnityEngine.Camera[] cameras)
    // Offset: 0x12BF3FC
    void OnBeginFrameRendering(UnityEngine::Rendering::ScriptableRenderContext renderContext, ::Array<UnityEngine::Camera*>* cameras);
    // private System.Void OnCameraPreCull(UnityEngine.Camera cam)
    // Offset: 0x12BF5D0
    void OnCameraPreCull(UnityEngine::Camera* cam);
    // private System.Void DoRebuilds()
    // Offset: 0x12BF400
    void DoRebuilds();
    // static System.Void UnRegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0x12BF5D4
    static void UnRegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // static public System.Void UnRegisterTextElementForRebuild(TMPro.TMP_Text element)
    // Offset: 0x12BF6A0
    static void UnRegisterTextElementForRebuild(TMPro::TMP_Text* element);
    // private System.Void InternalUnRegisterTextElementForGraphicRebuild(TMPro.TMP_Text element)
    // Offset: 0x12BF6EC
    void InternalUnRegisterTextElementForGraphicRebuild(TMPro::TMP_Text* element);
    // private System.Void InternalUnRegisterTextElementForLayoutRebuild(TMPro.TMP_Text element)
    // Offset: 0x12BF78C
    void InternalUnRegisterTextElementForLayoutRebuild(TMPro::TMP_Text* element);
    // private System.Void InternalUnRegisterTextObjectForUpdate(TMPro.TMP_Text textObject)
    // Offset: 0x12BF600
    void InternalUnRegisterTextObjectForUpdate(TMPro::TMP_Text* textObject);
    // protected System.Void .ctor()
    // Offset: 0x12BEED0
    // Implemented from: System.Object
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static TMP_UpdateManager* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("TMPro::TMP_UpdateManager::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<TMP_UpdateManager*, creationType>()));
    }
  }; // TMPro.TMP_UpdateManager
  #pragma pack(pop)
  static check_size<sizeof(TMP_UpdateManager), 56 + sizeof(System::Collections::Generic::Dictionary_2<int, int>*)> __TMPro_TMP_UpdateManagerSizeCheck;
  static_assert(sizeof(TMP_UpdateManager) == 0x40);
}
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_UpdateManager*, "TMPro", "TMP_UpdateManager");
