// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
#pragma pack(push, 8)
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TMPro.TMP_DefaultControls
#include "TMPro/TMP_DefaultControls.hpp"
// Including type: System.ValueType
#include "System/ValueType.hpp"
// Completed includes
// Begin forward declares
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: TMPro
namespace TMPro {
  // Autogenerated type: TMPro.TMP_DefaultControls/Resources
  struct TMP_DefaultControls::Resources : public System::ValueType {
    public:
    // public UnityEngine.Sprite standard
    // Offset: 0x0
    UnityEngine::Sprite* standard;
    // public UnityEngine.Sprite background
    // Offset: 0x8
    UnityEngine::Sprite* background;
    // public UnityEngine.Sprite inputField
    // Offset: 0x10
    UnityEngine::Sprite* inputField;
    // public UnityEngine.Sprite knob
    // Offset: 0x18
    UnityEngine::Sprite* knob;
    // public UnityEngine.Sprite checkmark
    // Offset: 0x20
    UnityEngine::Sprite* checkmark;
    // public UnityEngine.Sprite dropdown
    // Offset: 0x28
    UnityEngine::Sprite* dropdown;
    // public UnityEngine.Sprite mask
    // Offset: 0x30
    UnityEngine::Sprite* mask;
    // Creating value type constructor for type: Resources
    constexpr Resources(UnityEngine::Sprite* standard_ = {}, UnityEngine::Sprite* background_ = {}, UnityEngine::Sprite* inputField_ = {}, UnityEngine::Sprite* knob_ = {}, UnityEngine::Sprite* checkmark_ = {}, UnityEngine::Sprite* dropdown_ = {}, UnityEngine::Sprite* mask_ = {}) noexcept : standard{standard_}, background{background_}, inputField{inputField_}, knob{knob_}, checkmark{checkmark_}, dropdown{dropdown_}, mask{mask_} {}
  }; // TMPro.TMP_DefaultControls/Resources
}
#include "extern/beatsaber-hook/shared/utils/il2cpp-type-check.hpp"
DEFINE_IL2CPP_ARG_TYPE(TMPro::TMP_DefaultControls::Resources, "TMPro", "TMP_DefaultControls/Resources");
#pragma pack(pop)
