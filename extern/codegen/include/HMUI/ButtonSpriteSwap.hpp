// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
// Including type: HMUI.NoTransitionsButton
#include "HMUI/NoTransitionsButton.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x49
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.ButtonSpriteSwap
  // [] Offset: FFFFFFFF
  class ButtonSpriteSwap : public UnityEngine::MonoBehaviour {
    public:
    // private UnityEngine.Sprite _normalStateSprite
    // Size: 0x8
    // Offset: 0x18
    UnityEngine::Sprite* normalStateSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _highlightStateSprite
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::Sprite* highlightStateSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _pressedStateSprite
    // Size: 0x8
    // Offset: 0x28
    UnityEngine::Sprite* pressedStateSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _disabledStateSprite
    // Size: 0x8
    // Offset: 0x30
    UnityEngine::Sprite* disabledStateSprite;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // [SpaceAttribute] Offset: 0xD19000
    // private HMUI.NoTransitionsButton _button
    // Size: 0x8
    // Offset: 0x38
    HMUI::NoTransitionsButton* button;
    // Field size check
    static_assert(sizeof(HMUI::NoTransitionsButton*) == 0x8);
    // private UnityEngine.UI.Image[] _images
    // Size: 0x8
    // Offset: 0x40
    ::Array<UnityEngine::UI::Image*>* images;
    // Field size check
    static_assert(sizeof(::Array<UnityEngine::UI::Image*>*) == 0x8);
    // private System.Boolean _didStart
    // Size: 0x1
    // Offset: 0x48
    bool didStart;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: ButtonSpriteSwap
    ButtonSpriteSwap(UnityEngine::Sprite* normalStateSprite_ = {}, UnityEngine::Sprite* highlightStateSprite_ = {}, UnityEngine::Sprite* pressedStateSprite_ = {}, UnityEngine::Sprite* disabledStateSprite_ = {}, HMUI::NoTransitionsButton* button_ = {}, ::Array<UnityEngine::UI::Image*>* images_ = {}, bool didStart_ = {}) noexcept : normalStateSprite{normalStateSprite_}, highlightStateSprite{highlightStateSprite_}, pressedStateSprite{pressedStateSprite_}, disabledStateSprite{disabledStateSprite_}, button{button_}, images{images_}, didStart{didStart_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // protected System.Void Awake()
    // Offset: 0x11F8298
    void Awake();
    // protected System.Void Start()
    // Offset: 0x11F832C
    void Start();
    // protected System.Void OnEnable()
    // Offset: 0x11F842C
    void OnEnable();
    // protected System.Void OnDestroy()
    // Offset: 0x11F8448
    void OnDestroy();
    // private System.Void HandleButtonSelectionStateDidChange(HMUI.NoTransitionsButton/SelectionState state)
    // Offset: 0x11F8350
    void HandleButtonSelectionStateDidChange(HMUI::NoTransitionsButton::SelectionState state);
    // public System.Void .ctor()
    // Offset: 0x11F8524
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ButtonSpriteSwap* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::ButtonSpriteSwap::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ButtonSpriteSwap*, creationType>()));
    }
  }; // HMUI.ButtonSpriteSwap
  #pragma pack(pop)
  static check_size<sizeof(ButtonSpriteSwap), 72 + sizeof(bool)> __HMUI_ButtonSpriteSwapSizeCheck;
  static_assert(sizeof(ButtonSpriteSwap) == 0x49);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::ButtonSpriteSwap*, "HMUI", "ButtonSpriteSwap");
