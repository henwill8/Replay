// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: NoteController
  class NoteController;
  // Forward declaring type: MaterialPropertyBlockController
  class MaterialPropertyBlockController;
  // Forward declaring type: ColorManager
  class ColorManager;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: SpriteRenderer
  class SpriteRenderer;
  // Forward declaring type: MeshRenderer
  class MeshRenderer;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`2<T1, T2>
  template<typename T1, typename T2>
  class Action_2;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x68
  #pragma pack(push, 1)
  // Autogenerated type: ColorNoteVisuals
  // [] Offset: FFFFFFFF
  class ColorNoteVisuals : public UnityEngine::MonoBehaviour {
    public:
    // private System.Single _arrowGlowIntensity
    // Size: 0x4
    // Offset: 0x18
    float arrowGlowIntensity;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // Padding between fields: arrowGlowIntensity and: noteController
    char __padding0[0x4] = {};
    // [SpaceAttribute] Offset: 0xD3779C
    // private NoteController _noteController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::NoteController* noteController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::NoteController*) == 0x8);
    // [SpaceAttribute] Offset: 0xD377D4
    // private UnityEngine.SpriteRenderer _arrowGlowSpriteRenderer
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::SpriteRenderer* arrowGlowSpriteRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // private UnityEngine.SpriteRenderer _circleGlowSpriteRenderer
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::SpriteRenderer* circleGlowSpriteRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::SpriteRenderer*) == 0x8);
    // private MaterialPropertyBlockController[] _materialPropertyBlockControllers
    // Size: 0x8
    // Offset: 0x38
    ::Array<GlobalNamespace::MaterialPropertyBlockController*>* materialPropertyBlockControllers;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::MaterialPropertyBlockController*>*) == 0x8);
    // private UnityEngine.MeshRenderer _arrowMeshRenderer
    // Size: 0x8
    // Offset: 0x40
    UnityEngine::MeshRenderer* arrowMeshRenderer;
    // Field size check
    static_assert(sizeof(UnityEngine::MeshRenderer*) == 0x8);
    // [InjectAttribute] Offset: 0xD3783C
    // private readonly ColorManager _colorManager
    // Size: 0x8
    // Offset: 0x48
    GlobalNamespace::ColorManager* colorManager;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorManager*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3784C
    // private System.Action`2<ColorNoteVisuals,NoteController> didInitEvent
    // Size: 0x8
    // Offset: 0x50
    System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteController*>* didInitEvent;
    // Field size check
    static_assert(sizeof(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteController*>*) == 0x8);
    // private UnityEngine.Color _noteColor
    // Size: 0x10
    // Offset: 0x58
    UnityEngine::Color noteColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Creating value type constructor for type: ColorNoteVisuals
    ColorNoteVisuals(float arrowGlowIntensity_ = {}, GlobalNamespace::NoteController* noteController_ = {}, UnityEngine::SpriteRenderer* arrowGlowSpriteRenderer_ = {}, UnityEngine::SpriteRenderer* circleGlowSpriteRenderer_ = {}, ::Array<GlobalNamespace::MaterialPropertyBlockController*>* materialPropertyBlockControllers_ = {}, UnityEngine::MeshRenderer* arrowMeshRenderer_ = {}, GlobalNamespace::ColorManager* colorManager_ = {}, System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteController*>* didInitEvent_ = {}, UnityEngine::Color noteColor_ = {}) noexcept : arrowGlowIntensity{arrowGlowIntensity_}, noteController{noteController_}, arrowGlowSpriteRenderer{arrowGlowSpriteRenderer_}, circleGlowSpriteRenderer{circleGlowSpriteRenderer_}, materialPropertyBlockControllers{materialPropertyBlockControllers_}, arrowMeshRenderer{arrowMeshRenderer_}, colorManager{colorManager_}, didInitEvent{didInitEvent_}, noteColor{noteColor_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // [DoesNotRequireDomainReloadInitAttribute] Offset: 0xD3785C
    // Get static field: static private readonly System.Int32 _colorId
    static int _get__colorId();
    // Set static field: static private readonly System.Int32 _colorId
    static void _set__colorId(int value);
    // public System.Void add_didInitEvent(System.Action`2<ColorNoteVisuals,NoteController> value)
    // Offset: 0x103F480
    void add_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteController*>* value);
    // public System.Void remove_didInitEvent(System.Action`2<ColorNoteVisuals,NoteController> value)
    // Offset: 0x103F524
    void remove_didInitEvent(System::Action_2<GlobalNamespace::ColorNoteVisuals*, GlobalNamespace::NoteController*>* value);
    // public UnityEngine.Color get_noteColor()
    // Offset: 0x103F5C8
    UnityEngine::Color get_noteColor();
    // private System.Void set_showArrow(System.Boolean value)
    // Offset: 0x103F5D4
    void set_showArrow(bool value);
    // private System.Void set_showCircle(System.Boolean value)
    // Offset: 0x103F61C
    void set_showCircle(bool value);
    // protected System.Void Awake()
    // Offset: 0x103F63C
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x103F760
    void OnDestroy();
    // private System.Void HandleNoteControllerDidInit(NoteController noteController)
    // Offset: 0x103F880
    void HandleNoteControllerDidInit(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteControllerNoteDidPassJumpThreeQuarters(NoteController noteController)
    // Offset: 0x103FA84
    void HandleNoteControllerNoteDidPassJumpThreeQuarters(GlobalNamespace::NoteController* noteController);
    // private System.Void HandleNoteDidStartDissolving(NoteController noteController, System.Single duration)
    // Offset: 0x103FABC
    void HandleNoteDidStartDissolving(GlobalNamespace::NoteController* noteController, float duration);
    // public System.Void .ctor()
    // Offset: 0x103FB00
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorNoteVisuals* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorNoteVisuals::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorNoteVisuals*, creationType>()));
    }
    // static private System.Void .cctor()
    // Offset: 0x103FB14
    // Implemented from: UnityEngine.Object
    // Base method: System.Void Object::.cctor()
    static void _cctor();
  }; // ColorNoteVisuals
  #pragma pack(pop)
  static check_size<sizeof(ColorNoteVisuals), 88 + sizeof(UnityEngine::Color)> __GlobalNamespace_ColorNoteVisualsSizeCheck;
  static_assert(sizeof(ColorNoteVisuals) == 0x68);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorNoteVisuals*, "", "ColorNoteVisuals");
