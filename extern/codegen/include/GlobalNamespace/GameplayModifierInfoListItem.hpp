// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: UnityEngine.MonoBehaviour
#include "UnityEngine/MonoBehaviour.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: HoverHint
  class HoverHint;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x28
  #pragma pack(push, 1)
  // Autogenerated type: GameplayModifierInfoListItem
  // [] Offset: FFFFFFFF
  class GameplayModifierInfoListItem : public UnityEngine::MonoBehaviour {
    public:
    // private HMUI.HoverHint _hoverHint
    // Size: 0x8
    // Offset: 0x18
    HMUI::HoverHint* hoverHint;
    // Field size check
    static_assert(sizeof(HMUI::HoverHint*) == 0x8);
    // private UnityEngine.UI.Image _iconImage
    // Size: 0x8
    // Offset: 0x20
    UnityEngine::UI::Image* iconImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // Creating value type constructor for type: GameplayModifierInfoListItem
    GameplayModifierInfoListItem(HMUI::HoverHint* hoverHint_ = {}, UnityEngine::UI::Image* iconImage_ = {}) noexcept : hoverHint{hoverHint_}, iconImage{iconImage_} {}
    // Deleting conversion operator: operator System::IntPtr
    constexpr operator System::IntPtr() const noexcept = delete;
    // public System.Void set_modifierIcon(UnityEngine.Sprite value)
    // Offset: 0xF37EC8
    void set_modifierIcon(UnityEngine::Sprite* value);
    // public System.Void set_hoverHintText(System.String value)
    // Offset: 0xF37EE4
    void set_hoverHintText(::Il2CppString* value);
    // public System.Void .ctor()
    // Offset: 0xF3BF70
    // Implemented from: UnityEngine.MonoBehaviour
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameplayModifierInfoListItem* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameplayModifierInfoListItem::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameplayModifierInfoListItem*, creationType>()));
    }
  }; // GameplayModifierInfoListItem
  #pragma pack(pop)
  static check_size<sizeof(GameplayModifierInfoListItem), 32 + sizeof(UnityEngine::UI::Image*)> __GlobalNamespace_GameplayModifierInfoListItemSizeCheck;
  static_assert(sizeof(GameplayModifierInfoListItem) == 0x28);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameplayModifierInfoListItem*, "", "GameplayModifierInfoListItem");
