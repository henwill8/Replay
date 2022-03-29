#include "UI/ReplayViewController.hpp"

#include "GlobalNamespace/ScoreModel.hpp"
#include "GlobalNamespace/SimpleDialogPromptViewController.hpp"
#include "UnityEngine/RectOffset.hpp"
#include "UnityEngine/Object.hpp"
#include "HMUI/TitleViewController.hpp"
#include "HMUI/ViewController.hpp"
#include "HMUI/ViewController_AnimationDirection.hpp"
#include "VRUIControls/VRGraphicRaycaster.hpp"
#include "System/Action_1.hpp"
#include "UnityEngine/Events/UnityAction.hpp"

#include "questui/shared/BeatSaberUI.hpp"

#include "UI/UIManager.hpp"
#include "ReplayManager.hpp"
#include "Utils/ReplayUtils.hpp"
#include "Utils/ModifiersUtils.hpp"
#include "Utils/TypeUtils.hpp"
#include "Utils/UnityUtils.hpp"
#include "Utils/FindComponentsUtils.hpp"
#include "Utils/TimeUtils.hpp"
#include "Utils/UIUtils.hpp"

using namespace Replay;
using namespace Replay::UI;
using namespace QuestUI;
using namespace QuestUI::BeatSaberUI;
using namespace VRUIControls;
using namespace UnityEngine::Events;

DEFINE_TYPE(Replay::UI, ReplayViewController);

void Replay::UI::ReplayViewController::Init(std::string_view filePath, bool overwriteFile) {
    path = filePath;
    overwrite = overwriteFile;
}

void Replay::UI::ReplayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
	if(firstActivation) {
        get_gameObject()->GetComponent<VRGraphicRaycaster*>()->physicsRaycaster = BeatSaberUI::GetPhysicsRaycasterWithCache();
        // WHy this no worky? it worky on delete view controller, why not worky here

        CreateLevelBar(get_transform());

        CreateText(get_rectTransform());

        CreateButtons(get_rectTransform());
    }

    if(addedToHierarchy) {
        SetupLevelBar();

        SetText();

        SetButton(overwrite);
    }
}

void Replay::UI::ReplayViewController::CreateLevelBar(UnityEngine::Transform* parent) {
    levelBar = ArrayUtil::First(UnityEngine::Resources::FindObjectsOfTypeAll<GlobalNamespace::LevelBar*>(), [] (GlobalNamespace::LevelBar* x) { return to_utf8(csstrtostr(x->get_transform()->GetParent()->get_name())) == "PracticeViewController"; })->get_gameObject();

    levelBar->set_name(newcsstr("ReplayLevelBarSimple"));
    levelBar->get_transform()->SetParent(parent, false);
    levelBar->GetComponent<UnityEngine::RectTransform*>()->set_anchoredPosition(UnityEngine::Vector2(0, -3.0f));
}

#define CreateCenteredText(text, parent, fontSize, lineSpacing) text = QuestUI::BeatSaberUI::CreateText(parent, ""); \
                                                                text->set_fontSize(fontSize); \
                                                                text->set_alignment(TMPro::TextAlignmentOptions::Center); \
                                                                text->set_lineSpacing(lineSpacing);

void Replay::UI::ReplayViewController::CreateText(UnityEngine::RectTransform* parent) {
    UnityEngine::UI::HorizontalLayoutGroup* horizontalLayout = CreateHorizontalLayoutGroup(parent);
    horizontalLayout->set_spacing(0);
    horizontalLayout->set_childControlWidth(false);
    horizontalLayout->set_childForceExpandWidth(false);
    horizontalLayout->GetComponent<UnityEngine::RectTransform*>()->set_anchoredPosition(UnityEngine::Vector2(34.0f, 1));

    float childrenWidth = 43.5f;
    float childrenSpacing = 2.5f;

    UnityEngine::UI::VerticalLayoutGroup* layout1 = CreateVerticalLayoutGroup(horizontalLayout->get_rectTransform());
    layout1->set_spacing(childrenSpacing);
    layout1->GetComponent<UnityEngine::UI::LayoutElement*>()->set_preferredWidth(childrenWidth);

    UnityEngine::UI::VerticalLayoutGroup* layout2 = CreateVerticalLayoutGroup(horizontalLayout->get_rectTransform());
    layout2->set_spacing(childrenSpacing);
    layout2->GetComponent<UnityEngine::UI::LayoutElement*>()->set_preferredWidth(childrenWidth);

    float fontSize = 4.5f;
    float lineSpacing = -35.0f;

    CreateCenteredText(dateText, layout1->get_transform(), fontSize, lineSpacing);
    CreateCenteredText(scoreOrFailedText, layout1->get_transform(), fontSize, lineSpacing);
    CreateCenteredText(modifiersText, layout1->get_transform(), fontSize, lineSpacing);
    
    CreateCenteredText(averageCutScoreText, layout2->get_transform(), fontSize, lineSpacing);
    CreateCenteredText(missedNotesText, layout2->get_transform(), fontSize, lineSpacing);
    CreateCenteredText(maxComboText, layout2->get_transform(), fontSize, lineSpacing);
}

GlobalNamespace::SimpleDialogPromptViewController* deleteDialogPromptViewController = nullptr;

GlobalNamespace::SimpleDialogPromptViewController* getDeleteDialogPromptViewController() {
    if(!deleteDialogPromptViewController) {
        deleteDialogPromptViewController = UnityEngine::Object::Instantiate<SimpleDialogPromptViewController*>(FindComponentsUtils::GetSimpleDialogPromptViewController());
        deleteDialogPromptViewController->GetComponent<VRGraphicRaycaster*>()->physicsRaycaster = BeatSaberUI::GetPhysicsRaycasterWithCache();
        static auto dialogViewControllerName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("DeleteDialogPromptViewController");
        deleteDialogPromptViewController->set_name(dialogViewControllerName);
        deleteDialogPromptViewController->get_gameObject()->SetActive(false);
    }
    return deleteDialogPromptViewController;
}

void Replay::UI::ReplayViewController::CreateButtons(UnityEngine::RectTransform* parent) {
    UnityEngine::UI::HorizontalLayoutGroup* buttonLayout = CreateHorizontalLayoutGroup(parent);
    buttonLayout->set_spacing(3);
    buttonLayout->set_childControlWidth(false);
    buttonLayout->set_childForceExpandWidth(false);
    buttonLayout->set_childControlHeight(false);
    buttonLayout->set_childForceExpandHeight(false);
    buttonLayout->set_childAlignment(UnityEngine::TextAnchor::MiddleCenter);
    buttonLayout->GetComponent<UnityEngine::RectTransform*>()->set_anchoredPosition(UnityEngine::Vector2(-3, -25));

    UnityEngine::Vector2 size(40, 10);

    deleteButton = CreateUIButton(
        buttonLayout->get_transform(),
        ""
    );
    deleteButton->get_gameObject()->GetComponent<UnityEngine::RectTransform*>()->set_sizeDelta(size);

    CreateUIButton(
        buttonLayout->get_transform(),
        "Watch Replay",
        "OkButton",
        [this]() { 
            log("Replay button pressed");
            ReplayManager::replayState = ReplayState::REPLAYING;
            ReplayManager::replayer = Replayer();
            ReplayManager::replayer.Init(path);
            
            UIManager::singlePlayerFlowCoordinator->StartLevelOrShow360Prompt(nullptr, false);
        }
    )->GetComponent<UnityEngine::RectTransform*>()->set_sizeDelta(size);
}

void Replay::UI::ReplayViewController::SetupLevelBar() {
    GlobalNamespace::LevelBar* levelBarComponent = levelBar->GetComponent<GlobalNamespace::LevelBar*>();
    levelBarComponent->showDifficultyAndCharacteristic = true;
    levelBarComponent->Setup(reinterpret_cast<GlobalNamespace::IPreviewBeatmapLevel*>(SongUtils::beatmapLevel), SongUtils::beatmapCharacteristic, SongUtils::beatmapDifficulty);
}

void Replay::UI::ReplayViewController::SetText() {
    rapidjson::Document metadata = FileUtils::GetMetadataFromReplayFile(path);

    auto replayTime = static_cast<time_t>(metadata["Info"]["TimeSet"].GetInt64());
    auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    dateText->set_text(newcsstr(UIUtils::GetLayeredText("Date Set", TimeUtils::GetStringForTimeSince(replayTime, now))));

    if(metadata.HasMember("ClearedInfo")) {
        int maxScore = GlobalNamespace::ScoreModel::ComputeMaxMultipliedScoreForBeatmap(SongUtils::beatmapData);
        int modifiedScore = metadata["ClearedInfo"]["ModifiedScore"].GetInt();
        float percentage = ((float) modifiedScore / (float) maxScore) * 100;

        scoreOrFailedText->set_text(newcsstr(UIUtils::GetLayeredText("Score", std::to_string(modifiedScore) + " <size=80%>(<color=" + TEAL + ">" + TypeUtils::FloatToString(percentage) + "%</color>)</size>")));
    } else {
        float failedSongTime = metadata["FailedInfo"]["FailedTime"].GetFloat();
        float songLength = reinterpret_cast<GlobalNamespace::IPreviewBeatmapLevel*>(SongUtils::beatmapLevel)->get_songDuration();

        scoreOrFailedText->set_text(newcsstr(UIUtils::GetLayeredText("Failed", "<color=" + RED + ">" + TimeUtils::SecondsToString(failedSongTime) + "</color> / " + TimeUtils::SecondsToString(songLength))));
    }

    std::string modifiersString = "";

    for(const auto& value : metadata["Modifiers"].GetArray()) {
        modifiersString = modifiersString + ModifiersUtils::GetInitialsFromModifierName(value.GetString()) + " ";
    }

    if(modifiersString.empty()) {
        modifiersString = "None";
    } else {
        modifiersString.pop_back(); // Remove last space
    }

    modifiersText->set_text(newcsstr(UIUtils::GetLayeredText("Modifiers", modifiersString)));

    float averageCutScore = metadata["Info"]["AverageCutScore"].GetFloat();
    float cutPercentage = (averageCutScore / 115.0f) * 100;
    
    averageCutScoreText->set_text(newcsstr(UIUtils::GetLayeredText("Average Cut Score", TypeUtils::FloatToString(averageCutScore) + " <size=80%>(<color=" + TEAL + ">" + TypeUtils::FloatToString(cutPercentage) + "%</color>)</size>")));
    
    missedNotesText->set_text(newcsstr(UIUtils::GetLayeredText("Missed Notes", "<color=" + RED + ">" + std::to_string(metadata["Info"]["MissedNotes"].GetInt()) + "</color>")));

    maxComboText->set_text(newcsstr(UIUtils::GetLayeredText("Max Combo", std::to_string(metadata["Info"]["MaxCombo"].GetInt()))));
}

void Replay::UI::ReplayViewController::SetButton(bool overwriteFile) {
    std::string actionName = overwriteFile ? "Overwrite" : "Delete";

    static auto contentName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Content");
    static auto textName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Text");
    auto contentTransform = deleteButton->get_transform()->Find(contentName);
    contentTransform->Find(textName)->GetComponent<TMPro::TextMeshProUGUI*>()->set_text(newcsstr(actionName));

    std::function<void()> deleteFunction = (std::function<void()>) [actionName, overwriteFile] () {
        auto titleName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>(actionName + " Replay");
        auto deleteName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>(actionName);
        auto cancelName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Cancel");
        auto text = u"Are you sure?";

        getDeleteDialogPromptViewController()->Init(titleName, il2cpp_utils::newcsstr(text), deleteName, cancelName, il2cpp_utils::MakeDelegate<System::Action_1<int>*>(classof(System::Action_1<int>*), 
            (std::function<void(int)>) [overwriteFile] (int selectedButton) {
                UIManager::singlePlayerFlowCoordinator->DismissViewController(getDeleteDialogPromptViewController(), ViewController::AnimationDirection::Horizontal, nullptr, selectedButton == 0);
                
                if(selectedButton == 0) {
                    if(overwriteFile) {
                        std::filesystem::rename(UIManager::replayViewController->path.c_str(), ReplayUtils::GetReplayFilePath(SongUtils::GetMapID()));
                    } else {
                        std::remove(UIManager::replayViewController->path.c_str());
                    }

                    UIManager::singlePlayerFlowCoordinator->BackButtonWasPressed(UIManager::replayViewController);

                    UIManager::SetReplayButtonCanvasActive(overwriteFile);
                }
            }
        ));
        UIManager::singlePlayerFlowCoordinator->PresentViewController(getDeleteDialogPromptViewController(), nullptr, ViewController::AnimationDirection::Horizontal, false);
    };

    auto onClick = UnityEngine::UI::Button::ButtonClickedEvent::New_ctor();
    onClick->AddListener(il2cpp_utils::MakeDelegate<UnityAction*>(classof(UnityAction*), deleteFunction));

    deleteButton->set_onClick(onClick);
}