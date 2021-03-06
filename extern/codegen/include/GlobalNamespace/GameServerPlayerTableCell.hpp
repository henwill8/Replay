// Autogenerated from CppHeaderCreator
// Created by Sc2ad
// =========================================================================
#pragma once
// Begin includes
#include "extern/beatsaber-hook/shared/utils/typedefs.h"
// Including type: TableCellWithSeparator
#include "GlobalNamespace/TableCellWithSeparator.hpp"
// Including type: AdditionalContentModel/EntitlementStatus
#include "GlobalNamespace/AdditionalContentModel.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-methods.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-properties.hpp"
#include "extern/beatsaber-hook/shared/utils/il2cpp-utils-fields.hpp"
#include "extern/beatsaber-hook/shared/utils/utils.h"
// Completed includes
// Begin forward declares
// Forward declaring namespace: GlobalNamespace
namespace GlobalNamespace {
  // Forward declaring type: GameplayModifierInfoListItemsList
  class GameplayModifierInfoListItemsList;
  // Forward declaring type: GameplayModifiersModelSO
  class GameplayModifiersModelSO;
  // Forward declaring type: IConnectedPlayer
  class IConnectedPlayer;
  // Forward declaring type: ILobbyPlayerDataModel
  class ILobbyPlayerDataModel;
}
// Forward declaring namespace: HMUI
namespace HMUI {
  // Forward declaring type: CurvedTextMeshPro
  class CurvedTextMeshPro;
  // Forward declaring type: ImageView
  class ImageView;
  // Forward declaring type: HoverHint
  class HoverHint;
  // Forward declaring type: ButtonBinder
  class ButtonBinder;
}
// Forward declaring namespace: UnityEngine::UI
namespace UnityEngine::UI {
  // Forward declaring type: Image
  class Image;
  // Forward declaring type: Button
  class Button;
}
// Forward declaring namespace: TMPro
namespace TMPro {
  // Forward declaring type: TextMeshProUGUI
  class TextMeshProUGUI;
}
// Forward declaring namespace: UnityEngine
namespace UnityEngine {
  // Forward declaring type: Sprite
  class Sprite;
}
// Forward declaring namespace: System
namespace System {
  // Forward declaring type: Action`1<T>
  template<typename T>
  class Action_1;
}
// Forward declaring namespace: System::Threading
namespace System::Threading {
  // Forward declaring type: CancellationTokenSource
  class CancellationTokenSource;
}
// Forward declaring namespace: System::Threading::Tasks
namespace System::Threading::Tasks {
  // Forward declaring type: Task`1<TResult>
  template<typename TResult>
  class Task_1;
}
// Completed forward declares
// Type namespace: 
namespace GlobalNamespace {
  // Size: 0x100
  #pragma pack(push, 1)
  // Autogenerated type: GameServerPlayerTableCell
  // [] Offset: FFFFFFFF
  class GameServerPlayerTableCell : public GlobalNamespace::TableCellWithSeparator {
    public:
    // Nested type: GlobalNamespace::GameServerPlayerTableCell::$$c__DisplayClass26_0
    class $$c__DisplayClass26_0;
    // Nested type: GlobalNamespace::GameServerPlayerTableCell::$SetBeatmapUseButtonEnabledAsync$d__32
    struct $SetBeatmapUseButtonEnabledAsync$d__32;
    // private HMUI.CurvedTextMeshPro _playerNameText
    // Size: 0x8
    // Offset: 0x58
    HMUI::CurvedTextMeshPro* playerNameText;
    // Field size check
    static_assert(sizeof(HMUI::CurvedTextMeshPro*) == 0x8);
    // private UnityEngine.UI.Image _localPlayerBackgroundImage
    // Size: 0x8
    // Offset: 0x60
    UnityEngine::UI::Image* localPlayerBackgroundImage;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Image*) == 0x8);
    // [HeaderAttribute] Offset: 0xD3ED9C
    // private HMUI.CurvedTextMeshPro _suggestedLevelText
    // Size: 0x8
    // Offset: 0x68
    HMUI::CurvedTextMeshPro* suggestedLevelText;
    // Field size check
    static_assert(sizeof(HMUI::CurvedTextMeshPro*) == 0x8);
    // private HMUI.ImageView _suggestedCharacteristicIcon
    // Size: 0x8
    // Offset: 0x70
    HMUI::ImageView* suggestedCharacteristicIcon;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private TMPro.TextMeshProUGUI _suggestedDifficultyText
    // Size: 0x8
    // Offset: 0x78
    TMPro::TextMeshProUGUI* suggestedDifficultyText;
    // Field size check
    static_assert(sizeof(TMPro::TextMeshProUGUI*) == 0x8);
    // private HMUI.CurvedTextMeshPro _emptySuggestedLevelText
    // Size: 0x8
    // Offset: 0x80
    HMUI::CurvedTextMeshPro* emptySuggestedLevelText;
    // Field size check
    static_assert(sizeof(HMUI::CurvedTextMeshPro*) == 0x8);
    // [HeaderAttribute] Offset: 0xD3EE18
    // private GameplayModifierInfoListItemsList _suggestedModifiersList
    // Size: 0x8
    // Offset: 0x88
    GlobalNamespace::GameplayModifierInfoListItemsList* suggestedModifiersList;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifierInfoListItemsList*) == 0x8);
    // private HMUI.CurvedTextMeshPro _emptySuggestedModifiersText
    // Size: 0x8
    // Offset: 0x90
    HMUI::CurvedTextMeshPro* emptySuggestedModifiersText;
    // Field size check
    static_assert(sizeof(HMUI::CurvedTextMeshPro*) == 0x8);
    // [HeaderAttribute] Offset: 0xD3EE74
    // private UnityEngine.UI.Button _kickPlayerButton
    // Size: 0x8
    // Offset: 0x98
    UnityEngine::UI::Button* kickPlayerButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _useBeatmapButton
    // Size: 0x8
    // Offset: 0xA0
    UnityEngine::UI::Button* useBeatmapButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private UnityEngine.UI.Button _useModifiersButton
    // Size: 0x8
    // Offset: 0xA8
    UnityEngine::UI::Button* useModifiersButton;
    // Field size check
    static_assert(sizeof(UnityEngine::UI::Button*) == 0x8);
    // private HMUI.HoverHint _useBeatmapButtonHoverHint
    // Size: 0x8
    // Offset: 0xB0
    HMUI::HoverHint* useBeatmapButtonHoverHint;
    // Field size check
    static_assert(sizeof(HMUI::HoverHint*) == 0x8);
    // [HeaderAttribute] Offset: 0xD3EEF0
    // private HMUI.ImageView _statusImageView
    // Size: 0x8
    // Offset: 0xB8
    HMUI::ImageView* statusImageView;
    // Field size check
    static_assert(sizeof(HMUI::ImageView*) == 0x8);
    // private UnityEngine.Sprite _readyIcon
    // Size: 0x8
    // Offset: 0xC0
    UnityEngine::Sprite* readyIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // private UnityEngine.Sprite _spectatingIcon
    // Size: 0x8
    // Offset: 0xC8
    UnityEngine::Sprite* spectatingIcon;
    // Field size check
    static_assert(sizeof(UnityEngine::Sprite*) == 0x8);
    // [HeaderAttribute] Offset: 0xD3EF5C
    // private GameplayModifiersModelSO _gameplayModifiers
    // Size: 0x8
    // Offset: 0xD0
    GlobalNamespace::GameplayModifiersModelSO* gameplayModifiers;
    // Field size check
    static_assert(sizeof(GlobalNamespace::GameplayModifiersModelSO*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3EFA8
    // private System.Action`1<System.Int32> kickPlayerEvent
    // Size: 0x8
    // Offset: 0xD8
    System::Action_1<int>* kickPlayerEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3EFB8
    // private System.Action`1<System.Int32> useBeatmapEvent
    // Size: 0x8
    // Offset: 0xE0
    System::Action_1<int>* useBeatmapEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // [CompilerGeneratedAttribute] Offset: 0xD3EFC8
    // private System.Action`1<System.Int32> useModifiersEvent
    // Size: 0x8
    // Offset: 0xE8
    System::Action_1<int>* useModifiersEvent;
    // Field size check
    static_assert(sizeof(System::Action_1<int>*) == 0x8);
    // private readonly HMUI.ButtonBinder _buttonBinder
    // Size: 0x8
    // Offset: 0xF0
    HMUI::ButtonBinder* buttonBinder;
    // Field size check
    static_assert(sizeof(HMUI::ButtonBinder*) == 0x8);
    // private System.Threading.CancellationTokenSource _getLevelEntitlementCancellationTokenSource
    // Size: 0x8
    // Offset: 0xF8
    System::Threading::CancellationTokenSource* getLevelEntitlementCancellationTokenSource;
    // Field size check
    static_assert(sizeof(System::Threading::CancellationTokenSource*) == 0x8);
    // Creating value type constructor for type: GameServerPlayerTableCell
    GameServerPlayerTableCell(HMUI::CurvedTextMeshPro* playerNameText_ = {}, UnityEngine::UI::Image* localPlayerBackgroundImage_ = {}, HMUI::CurvedTextMeshPro* suggestedLevelText_ = {}, HMUI::ImageView* suggestedCharacteristicIcon_ = {}, TMPro::TextMeshProUGUI* suggestedDifficultyText_ = {}, HMUI::CurvedTextMeshPro* emptySuggestedLevelText_ = {}, GlobalNamespace::GameplayModifierInfoListItemsList* suggestedModifiersList_ = {}, HMUI::CurvedTextMeshPro* emptySuggestedModifiersText_ = {}, UnityEngine::UI::Button* kickPlayerButton_ = {}, UnityEngine::UI::Button* useBeatmapButton_ = {}, UnityEngine::UI::Button* useModifiersButton_ = {}, HMUI::HoverHint* useBeatmapButtonHoverHint_ = {}, HMUI::ImageView* statusImageView_ = {}, UnityEngine::Sprite* readyIcon_ = {}, UnityEngine::Sprite* spectatingIcon_ = {}, GlobalNamespace::GameplayModifiersModelSO* gameplayModifiers_ = {}, System::Action_1<int>* kickPlayerEvent_ = {}, System::Action_1<int>* useBeatmapEvent_ = {}, System::Action_1<int>* useModifiersEvent_ = {}, HMUI::ButtonBinder* buttonBinder_ = {}, System::Threading::CancellationTokenSource* getLevelEntitlementCancellationTokenSource_ = {}) noexcept : playerNameText{playerNameText_}, localPlayerBackgroundImage{localPlayerBackgroundImage_}, suggestedLevelText{suggestedLevelText_}, suggestedCharacteristicIcon{suggestedCharacteristicIcon_}, suggestedDifficultyText{suggestedDifficultyText_}, emptySuggestedLevelText{emptySuggestedLevelText_}, suggestedModifiersList{suggestedModifiersList_}, emptySuggestedModifiersText{emptySuggestedModifiersText_}, kickPlayerButton{kickPlayerButton_}, useBeatmapButton{useBeatmapButton_}, useModifiersButton{useModifiersButton_}, useBeatmapButtonHoverHint{useBeatmapButtonHoverHint_}, statusImageView{statusImageView_}, readyIcon{readyIcon_}, spectatingIcon{spectatingIcon_}, gameplayModifiers{gameplayModifiers_}, kickPlayerEvent{kickPlayerEvent_}, useBeatmapEvent{useBeatmapEvent_}, useModifiersEvent{useModifiersEvent_}, buttonBinder{buttonBinder_}, getLevelEntitlementCancellationTokenSource{getLevelEntitlementCancellationTokenSource_} {}
    // public System.Void add_kickPlayerEvent(System.Action`1<System.Int32> value)
    // Offset: 0xF36C10
    void add_kickPlayerEvent(System::Action_1<int>* value);
    // public System.Void remove_kickPlayerEvent(System.Action`1<System.Int32> value)
    // Offset: 0xF36CB4
    void remove_kickPlayerEvent(System::Action_1<int>* value);
    // public System.Void add_useBeatmapEvent(System.Action`1<System.Int32> value)
    // Offset: 0xF36D58
    void add_useBeatmapEvent(System::Action_1<int>* value);
    // public System.Void remove_useBeatmapEvent(System.Action`1<System.Int32> value)
    // Offset: 0xF36DFC
    void remove_useBeatmapEvent(System::Action_1<int>* value);
    // public System.Void add_useModifiersEvent(System.Action`1<System.Int32> value)
    // Offset: 0xF36EA0
    void add_useModifiersEvent(System::Action_1<int>* value);
    // public System.Void remove_useModifiersEvent(System.Action`1<System.Int32> value)
    // Offset: 0xF36F44
    void remove_useModifiersEvent(System::Action_1<int>* value);
    // public System.Void SetData(IConnectedPlayer connectedPlayer, ILobbyPlayerDataModel playerDataModel, System.Boolean isHost, System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> getLevelEntitlementTask)
    // Offset: 0xF36FE8
    void SetData(GlobalNamespace::IConnectedPlayer* connectedPlayer, GlobalNamespace::ILobbyPlayerDataModel* playerDataModel, bool isHost, System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* getLevelEntitlementTask);
    // protected System.Void Awake()
    // Offset: 0xF37B1C
    void Awake();
    // private System.Void HandleKickPlayerButtonPressed()
    // Offset: 0xF37C40
    void HandleKickPlayerButtonPressed();
    // private System.Void HandleUseBeatmapButtonPressed()
    // Offset: 0xF37CA4
    void HandleUseBeatmapButtonPressed();
    // private System.Void HandleUseModifiersButtonPressed()
    // Offset: 0xF37D08
    void HandleUseModifiersButtonPressed();
    // private System.Void SetBeatmapUseButtonEnabledAsync(System.Threading.Tasks.Task`1<AdditionalContentModel/EntitlementStatus> getLevelEntitlementTask)
    // Offset: 0xF37A30
    void SetBeatmapUseButtonEnabledAsync(System::Threading::Tasks::Task_1<GlobalNamespace::AdditionalContentModel::EntitlementStatus>* getLevelEntitlementTask);
    // public System.Void .ctor()
    // Offset: 0xF37D6C
    // Implemented from: TableCellWithSeparator
    // Base method: System.Void TableCellWithSeparator::.ctor()
    // Base method: System.Void TableCell::.ctor()
    // Base method: System.Void SelectableCell::.ctor()
    // Base method: System.Void Interactable::.ctor()
    // Base method: System.Void MonoBehaviour::.ctor()
    // Base method: System.Void Behaviour::.ctor()
    // Base method: System.Void Component::.ctor()
    // Base method: System.Void Object::.ctor()
    // Base method: System.Void Object::.ctor()
    template<::il2cpp_utils::CreationType creationType = ::il2cpp_utils::CreationType::Temporary>
    static GameServerPlayerTableCell* New_ctor() {
      static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::GameServerPlayerTableCell::.ctor");
      return THROW_UNLESS((::il2cpp_utils::New<GameServerPlayerTableCell*, creationType>()));
    }
  }; // GameServerPlayerTableCell
  #pragma pack(pop)
  static check_size<sizeof(GameServerPlayerTableCell), 248 + sizeof(System::Threading::CancellationTokenSource*)> __GlobalNamespace_GameServerPlayerTableCellSizeCheck;
  static_assert(sizeof(GameServerPlayerTableCell) == 0x100);
}
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GameServerPlayerTableCell*, "", "GameServerPlayerTableCell");
