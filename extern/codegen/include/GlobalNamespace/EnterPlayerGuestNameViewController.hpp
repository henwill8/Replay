// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: HMUI.ViewController
#include "HMUI/ViewController.hpp"
// Including type: System.Int32
#include "System/Int32.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: StringSignal
  class StringSignal;
  // Forward declaring type: GuestNameButtonsListItemsList
  class GuestNameButtonsListItemsList;
  // Forward declaring type: PlayerDataModel
  class PlayerDataModel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: UIKeyboard
  class UIKeyboard;
  // Forward declaring type: InputFieldView
  class InputFieldView;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0xA0
  #pragma pack(push, 1)
  // Autogenerated type: EnterPlayerGuestNameViewController
  // [] Offset: FFFFFFFF
  class EnterPlayerGuestNameViewController : public HMUI::ViewController {
    public:
    // Nested type: GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate
    class FinishDelegate;
    // Nested type: GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_0
    class $$c__DisplayClass10_0;
    // Nested type: GlobalNamespace::EnterPlayerGuestNameViewController::$$c__DisplayClass10_1
    class $$c__DisplayClass10_1;
    // [SignalSenderAttribute] Offset: 0xD41884
    // private StringSignal _playerNameWasEnteredSignal
    // Size: 0x8
    // Offset: 0x70
    GlobalNamespace::StringSignal* playerNameWasEnteredSignal;
    // Field size check
    static_assert(sizeof(GlobalNamespace::StringSignal*) == 0x8);
    // [SpaceAttribute] Offset: 0xD418BC
    // private HMUI.UIKeyboard _uiKeyboard
    // Size: 0x8
    // Offset: 0x78
    HMUI::UIKeyboard* uiKeyboard;
    // Field size check
    static_assert(sizeof(HMUI::UIKeyboard*) == 0x8);
    // private HMUI.InputFieldView _nameInputFieldView
    // Size: 0x8
    // Offset: 0x80
    HMUI::InputFieldView* nameInputFieldView;
    // Field size check
    static_assert(sizeof(HMUI::InputFieldView*) == 0x8);
    // private GuestNameButtonsListItemsList _guestNameButtonsListItemsList
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::GuestNameButtonsListItemsList* guestNameButtonsListItemsList;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GuestNameButtonsListItemsList*) == 0x8);
    // [InjectAttribute] Offset: 0xD41914
    // private readonly PlayerDataModel _playerDataModel
    // Size: 0x8
    // Offset: 0x90
    GlobalNamespace::PlayerDataModel* playerDataModel;
    // Field size check
    static_assert(sizeof(GlobalNamespace::PlayerDataModel*) == 0x8);
    // private EnterPlayerGuestNameViewController/FinishDelegate _didFinishCallback
    // Size: 0x8
    // Offset: 0x98
    GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate* didFinishCallback;
    // Field size check
    static_assert(sizeof(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate*) == 0x8);
    // Creating value type constructor for type: EnterPlayerGuestNameViewController
    EnterPlayerGuestNameViewController(GlobalNamespace::StringSignal* playerNameWasEnteredSignal_ = {}, HMUI::UIKeyboard* uiKeyboard_ = {}, HMUI::InputFieldView* nameInputFieldView_ = {}, GlobalNamespace::GuestNameButtonsListItemsList* guestNameButtonsListItemsList_ = {}, GlobalNamespace::PlayerDataModel* playerDataModel_ = {}, GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate* didFinishCallback_ = {}) noexcept : playerNameWasEnteredSignal{playerNameWasEnteredSignal_}, uiKeyboard{uiKeyboard_}, nameInputFieldView{nameInputFieldView_}, guestNameButtonsListItemsList{guestNameButtonsListItemsList_}, playerDataModel{playerDataModel_}, didFinishCallback{didFinishCallback_} {}
    // static field const value: static private System.Int32 kMaxPlayerNameCompoundLength
    static constexpr const int kMaxPlayerNameCompoundLength = 40;
    // Get static field: static private System.Int32 kMaxPlayerNameCompoundLength
    static int _get_kMaxPlayerNameCompoundLength();
    // Set static field: static private System.Int32 kMaxPlayerNameCompoundLength
    static void _set_kMaxPlayerNameCompoundLength(int value);
    // static field const value: static private System.Int32 kMaxShowPlayer
    static constexpr const int kMaxShowPlayer = 5;
    // Get static field: static private System.Int32 kMaxShowPlayer
    static int _get_kMaxShowPlayer();
    // Set static field: static private System.Int32 kMaxShowPlayer
    static void _set_kMaxShowPlayer(int value);
    // public System.Void Init(EnterPlayerGuestNameViewController/FinishDelegate didFinishCallback)
    // Offset: 0x104F638
    void Init(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate* didFinishCallback);
    // private System.Void OkButtonPressed()
    // Offset: 0x104F978
    void OkButtonPressed();
    // protected override System.Void DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    // Offset: 0x104F640
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidActivate(System.Boolean firstActivation, System.Boolean addedToHierarchy, System.Boolean screenSystemEnabling)
    void DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling);
    // protected override System.Void DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    // Offset: 0x104F8B0
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::DidDeactivate(System.Boolean removedFromHierarchy, System.Boolean screenSystemDisabling)
    void DidDeactivate(bool removedFromHierarchy, bool screenSystemDisabling);
    // public System.Void .ctor()
    // Offset: 0x104FE64
    // Implemented from: HMUI.ViewController
    // Base method: System.Void ViewController::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static EnterPlayerGuestNameViewController* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::EnterPlayerGuestNameViewController::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<EnterPlayerGuestNameViewController*, creationType>()));
    }
  }; // EnterPlayerGuestNameViewController
  #pragma pack(pop)
  static check_size<sizeof(EnterPlayerGuestNameViewController), 152 + sizeof(GlobalNamespace::EnterPlayerGuestNameViewController::FinishDelegate*)> __GlobalNamespace_EnterPlayerGuestNameViewControllerSizeCheck;
  static_assert(sizeof(EnterPlayerGuestNameViewController) == 0xA0);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnterPlayerGuestNameViewController*, "", "EnterPlayerGuestNameViewController");
