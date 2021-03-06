// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.Interactable
#include "HMUI/Interactable.hpp"
// Including type: UnityEngine.EventSystems.IPointerDownHandler
#include "UnityEngine/EventSystems/IPointerDownHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerUpHandler
#include "UnityEngine/EventSystems/IPointerUpHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerEnterHandler
#include "UnityEngine/EventSystems/IPointerEnterHandler.hpp"
// Including type: UnityEngine.EventSystems.IPointerExitHandler
#include "UnityEngine/EventSystems/IPointerExitHandler.hpp"
// Including type: UnityEngine.Color
#include "UnityEngine/Color.hpp"
// Including type: AlphabetScrollInfo
#include "GlobalNamespace/AlphabetScrollInfo.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: TableView
  class TableView;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
}
// Forward declaring namespace: System::Collections::Generic
namespace System::Collections::Generic {
  // Forward declaring type: List`1<T>
  template<typename T>
  class List_1;
}
// Forward declaring namespace: System::Collections
namespace System::Collections {
  // Forward declaring type: IEnumerator
  class IEnumerator;
}
// Forward declaring namespace: UnityEngine::EventSystems
namespace UnityEngine::EventSystems {
  // Forward declaring type: PointerEventData
  class PointerEventData;
}
// Completed forward declares
// Type namespace: HMUI
namespace HMUI {
  // Size: 0x6D
  #pragma pack(push, 1)
  // Autogenerated type: HMUI.AlphabetScrollbar
  // [] Offset: FFFFFFFF
  // [RequireComponent] Offset: D17664
  class AlphabetScrollbar : public HMUI::Interactable/*, public UnityEngine::EventSystems::IPointerDownHandler, public UnityEngine::EventSystems::IPointerUpHandler, public UnityEngine::EventSystems::IPointerEnterHandler, public UnityEngine::EventSystems::IPointerExitHandler*/ {
    public:
    // Writing base type padding for base size: 0x19 to desired offset: 0x20
    char ___base_padding[0x7] = {};
    // Nested type: HMUI::AlphabetScrollbar::$PointerMoveInsideCoroutine$d__18
    class $PointerMoveInsideCoroutine$d__18;
    // private HMUI.TableView _tableView
    // Size: 0x8
    // Offset: 0x20
    HMUI::TableView* tableView;
    // Field size check
    static_assert(sizeof(HMUI::TableView*) == 0x8);
    // [SpaceAttribute] Offset: 0xD181E0
    // private System.Single _characterHeight
    // Size: 0x4
    // Offset: 0x28
    float characterHeight;
    // Field size check
    static_assert(sizeof(float) == 0x4);
    // private UnityEngine.Color _normalColor
    // Size: 0x10
    // Offset: 0x2C
    UnityEngine::Color normalColor;
    // Field size check
    static_assert(sizeof(UnityEngine::Color) == 0x10);
    // Padding between fields: normalColor and: textPrefab
    char __padding2[0x4] = {};
    // [SpaceAttribute] Offset: 0xD18228
    // private TMPro.TextMeshProUGUI _textPrefab
    // Size: 0x8
    // Offset: 0x40
    TMPro::TextMeshProUGUI* textPrefab;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private TMPro.TextMeshProUGUI[] _prealocatedTexts
    // Size: 0x8
    // Offset: 0x48
    ::Array<TMPro::TextMeshProUGUI*>* prealocatedTexts;
    // Field size check
    static_assert(sizeof(::Array<TMPro::TextMeshProUGUI*>*) == 0x8);
    // private UnityEngine.UI.Image _highlightImage
    // Size: 0x8
    // Offset: 0x50
    UnityEngine::UI::Image* highlightImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // private AlphabetScrollInfo/Data[] _characterScrollData
    // Size: 0x8
    // Offset: 0x58
    ::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* characterScrollData;
    // Field size check
    static_assert(sizeof(::Array<GlobalNamespace::AlphabetScrollInfo::Data*>*) == 0x8);
    // private System.Collections.Generic.List`1<TMPro.TextMeshProUGUI> _texts
    // Size: 0x8
    // Offset: 0x60
    System::Collections::Generic::List_1<TMPro::TextMeshProUGUI*>* texts;
    // Field size check
    static_assert(sizeof(System::Collections::Generic::List_1<TMPro::TextMeshProUGUI*>*) == 0x8);
    // private System.Int32 _highlightedCharactedIndex
    // Size: 0x4
    // Offset: 0x68
    int highlightedCharactedIndex;
    // Field size check
    static_assert(sizeof(int) == 0x4);
    // private System.Boolean _pointerIsDown
    // Size: 0x1
    // Offset: 0x6C
    bool pointerIsDown;
    // Field size check
    static_assert(sizeof(bool) == 0x1);
    // Creating value type constructor for type: AlphabetScrollbar
    AlphabetScrollbar(HMUI::TableView* tableView_ = {}, float characterHeight_ = {}, UnityEngine::Color normalColor_ = {}, TMPro::TextMeshProUGUI* textPrefab_ = {}, ::Array<TMPro::TextMeshProUGUI*>* prealocatedTexts_ = {}, UnityEngine::UI::Image* highlightImage_ = {}, ::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* characterScrollData_ = {}, System::Collections::Generic::List_1<TMPro::TextMeshProUGUI*>* texts_ = {}, int highlightedCharactedIndex_ = {}, bool pointerIsDown_ = {}) noexcept : tableView{tableView_}, characterHeight{characterHeight_}, normalColor{normalColor_}, textPrefab{textPrefab_}, prealocatedTexts{prealocatedTexts_}, highlightImage{highlightImage_}, characterScrollData{characterScrollData_}, texts{texts_}, highlightedCharactedIndex{highlightedCharactedIndex_}, pointerIsDown{pointerIsDown_} {}
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerDownHandler
    operator UnityEngine::EventSystems::IPointerDownHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerDownHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerUpHandler
    operator UnityEngine::EventSystems::IPointerUpHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerUpHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerEnterHandler
    operator UnityEngine::EventSystems::IPointerEnterHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerEnterHandler*>(this);
    }
    // Creating interface conversion operator: operator UnityEngine::EventSystems::IPointerExitHandler
    operator UnityEngine::EventSystems::IPointerExitHandler() noexcept {
      return *reinterpret_cast<UnityEngine::EventSystems::IPointerExitHandler*>(this);
    }
    // protected System.Void Awake()
    // Offset: 0x11F5B14
    void Awake();
    // public System.Void SetData(AlphabetScrollInfo/Data[] characterScrollData)
    // Offset: 0x11F5B34
    void SetData(::Array<GlobalNamespace::AlphabetScrollInfo::Data*>* characterScrollData);
    // private System.Void PrepareTransforms()
    // Offset: 0x11F5DBC
    void PrepareTransforms();
    // private System.Void RefreshHighlight()
    // Offset: 0x11F6424
    void RefreshHighlight();
    // private System.Collections.IEnumerator PointerMoveInsideCoroutine(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x11F635C
    System::Collections::IEnumerator* PointerMoveInsideCoroutine(UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Int32 GetPointerCharacterIndex(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x11F61A4
    int GetPointerCharacterIndex(UnityEngine::EventSystems::PointerEventData* eventData);
    // private System.Void InitText(TMPro.TextMeshProUGUI text, System.Char character)
    // Offset: 0x11F5CBC
    void InitText(TMPro::TextMeshProUGUI* text, ::Il2CppChar character);
    // public System.Void OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x11F6134
    // Implemented from: UnityEngine.EventSystems.IPointerDownHandler
    // Base method: System.Void IPointerDownHandler::OnPointerDown(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerDown(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x11F6328
    // Implemented from: UnityEngine.EventSystems.IPointerUpHandler
    // Base method: System.Void IPointerUpHandler::OnPointerUp(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerUp(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x11F6330
    // Implemented from: UnityEngine.EventSystems.IPointerEnterHandler
    // Base method: System.Void IPointerEnterHandler::OnPointerEnter(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerEnter(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    // Offset: 0x11F63F4
    // Implemented from: UnityEngine.EventSystems.IPointerExitHandler
    // Base method: System.Void IPointerExitHandler::OnPointerExit(UnityEngine.EventSystems.PointerEventData eventData)
    void OnPointerExit(UnityEngine::EventSystems::PointerEventData* eventData);
    // public System.Void .ctor()
    // Offset: 0x11F6540
    // Implemented from: HMUI.Interactable
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static AlphabetScrollbar* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("HMUI::AlphabetScrollbar::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<AlphabetScrollbar*, creationType>()));
    }
  }; // HMUI.AlphabetScrollbar
  #pragma pack(pop)
  static check_size<sizeof(AlphabetScrollbar), 108 + sizeof(bool)> __HMUI_AlphabetScrollbarSizeCheck;
  static_assert(sizeof(AlphabetScrollbar) == 0x6D);
}
DEFINE_IL2CPP_ARG_TYPE(HMUI::AlphabetScrollbar*, "HMUI", "AlphabetScrollbar");
