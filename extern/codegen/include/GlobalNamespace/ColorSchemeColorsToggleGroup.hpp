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
  // Forward declaring type: ColorSchemeColorToggleController
  class ColorSchemeColorToggleController;
  // Forward declaring type: ColorScheme
  class ColorScheme;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: ToggleBinder
  class ToggleBinder;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x60
  #pragma pack(push, 1)
  // Autogenerated type: ColorSchemeColorsToggleGroup
  // [] Offset: FFFFFFFF
  class ColorSchemeColorsToggleGroup : public UnityEngine::MonoBehaviour {
    public:
    // private ColorSchemeColorToggleController _saberAColorToggleController
    // Size: 0x8
    // Offset: 0x18
    GlobalNamespace::ColorSchemeColorToggleController* saberAColorToggleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorToggleController*) == 0x8);
    // private ColorSchemeColorToggleController _saberBColorToggleController
    // Size: 0x8
    // Offset: 0x20
    GlobalNamespace::ColorSchemeColorToggleController* saberBColorToggleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorToggleController*) == 0x8);
    // private ColorSchemeColorToggleController _environmentColor0ToggleController
    // Size: 0x8
    // Offset: 0x28
    GlobalNamespace::ColorSchemeColorToggleController* environmentColor0ToggleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorToggleController*) == 0x8);
    // private ColorSchemeColorToggleController _environmentColor1ToggleController
    // Size: 0x8
    // Offset: 0x30
    GlobalNamespace::ColorSchemeColorToggleController* environmentColor1ToggleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorToggleController*) == 0x8);
    // private ColorSchemeColorToggleController _obstaclesColorToggleController
    // Size: 0x8
    // Offset: 0x38
    GlobalNamespace::ColorSchemeColorToggleController* obstaclesColorToggleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorToggleController*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3E7DC
    // private System.Action`1<UnityEngine.Color> selectedColorDidChangeEvent
    // Size: 0x8
    // Offset: 0x40
    System::Action_1<UnityEngine::Color>* selectedColorDidChangeEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<UnityEngine::Color>*) == 0x8);
    // private HMUI.ToggleBinder _toggleBinder
    // Size: 0x8
    // Offset: 0x48
    HMUI::ToggleBinder* toggleBinder;
    // Field size check
    static_assert(sizeof(HMUI::ToggleBinder*) == 0x8);
    // private ColorSchemeColorToggleController _selectedColorToggleController
    // Size: 0x8
    // Offset: 0x50
    GlobalNamespace::ColorSchemeColorToggleController* selectedColorToggleController;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorSchemeColorToggleController*) == 0x8);
    // private ColorScheme _colorScheme
    // Size: 0x8
    // Offset: 0x58
    GlobalNamespace::ColorScheme* colorScheme;
    // Field size check
    static_assert(sizeof(GlobalNamespace::ColorScheme*) == 0x8);
    // Creating value type constructor for type: ColorSchemeColorsToggleGroup
    ColorSchemeColorsToggleGroup(GlobalNamespace::ColorSchemeColorToggleController* saberAColorToggleController_ = {}, GlobalNamespace::ColorSchemeColorToggleController* saberBColorToggleController_ = {}, GlobalNamespace::ColorSchemeColorToggleController* environmentColor0ToggleController_ = {}, GlobalNamespace::ColorSchemeColorToggleController* environmentColor1ToggleController_ = {}, GlobalNamespace::ColorSchemeColorToggleController* obstaclesColorToggleController_ = {}, System::Action_1<UnityEngine::Color>* selectedColorDidChangeEvent_ = {}, HMUI::ToggleBinder* toggleBinder_ = {}, GlobalNamespace::ColorSchemeColorToggleController* selectedColorToggleController_ = {}, GlobalNamespace::ColorScheme* colorScheme_ = {}) noexcept : saberAColorToggleController{saberAColorToggleController_}, saberBColorToggleController{saberBColorToggleController_}, environmentColor0ToggleController{environmentColor0ToggleController_}, environmentColor1ToggleController{environmentColor1ToggleController_}, obstaclesColorToggleController{obstaclesColorToggleController_}, selectedColorDidChangeEvent{selectedColorDidChangeEvent_}, toggleBinder{toggleBinder_}, selectedColorToggleController{selectedColorToggleController_}, colorScheme{colorScheme_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void add_selectedColorDidChangeEvent(System.Action`1<UnityEngine.Color> value)
    // Offset: 0x1040154
    void add_selectedColorDidChangeEvent(System::Action_1<UnityEngine::Color>* value);
    // public System.Void remove_selectedColorDidChangeEvent(System.Action`1<UnityEngine.Color> value)
    // Offset: 0x10401F8
    void remove_selectedColorDidChangeEvent(System::Action_1<UnityEngine::Color>* value);
    // public UnityEngine.Color get_color()
    // Offset: 0x104029C
    UnityEngine::Color get_color();
    // public System.Void set_color(UnityEngine.Color value)
    // Offset: 0x10402B4
    void set_color(UnityEngine::Color value);
    // public System.Void SetColorScheme(ColorScheme colorScheme)
    // Offset: 0x10402CC
    void SetColorScheme(GlobalNamespace::ColorScheme* colorScheme);
    // protected System.Void Awake()
    // Offset: 0x10403CC
    void Awake();
    // protected System.Void OnDestroy()
    // Offset: 0x1040604
    void OnDestroy();
    // private System.Void HandleToggleWasSelected(ColorSchemeColorToggleController toggleController, System.Boolean isOn)
    // Offset: 0x1040620
    void HandleToggleWasSelected(GlobalNamespace::ColorSchemeColorToggleController* toggleController, bool isOn);
    // public ColorScheme CreateColorSchemeFromEditedColors()
    // Offset: 0x10406BC
    GlobalNamespace::ColorScheme* CreateColorSchemeFromEditedColors();
    // private System.Void <Awake>b__15_0(System.Boolean isOn)
    // Offset: 0x10408A4
    void $Awake$b__15_0(bool isOn);
    // private System.Void <Awake>b__15_1(System.Boolean isOn)
    // Offset: 0x10408B4
    void $Awake$b__15_1(bool isOn);
    // private System.Void <Awake>b__15_2(System.Boolean isOn)
    // Offset: 0x10408C4
    void $Awake$b__15_2(bool isOn);
    // private System.Void <Awake>b__15_3(System.Boolean isOn)
    // Offset: 0x10408D4
    void $Awake$b__15_3(bool isOn);
    // private System.Void <Awake>b__15_4(System.Boolean isOn)
    // Offset: 0x10408E4
    void $Awake$b__15_4(bool isOn);
    // public System.Void .ctor()
    // Offset: 0x104089C
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static ColorSchemeColorsToggleGroup* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::ColorSchemeColorsToggleGroup::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<ColorSchemeColorsToggleGroup*, creationType>()));
    }
  }; // ColorSchemeColorsToggleGroup
  #pragma pack(pop)
  static check_size<sizeof(ColorSchemeColorsToggleGroup), 88 + sizeof(GlobalNamespace::ColorScheme*)> __GlobalNamespace_ColorSchemeColorsToggleGroupSizeCheck;
  static_assert(sizeof(ColorSchemeColorsToggleGroup) == 0x60);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSchemeColorsToggleGroup*, "", "ColorSchemeColorsToggleGroup");
