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

#include "questui/shared/BeatSaberUI.hpp"

#include "UI/UIManager.hpp"
#include "ReplayManager.hpp"
#include "Utils/ReplayUtils.hpp"
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

DEFINE_TYPE(Replay::UI, ReplayViewController);

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
    }
}

void Replay::UI::ReplayViewController::CreateLevelBar(UnityEngine::Transform* parent) {
    ArrayW<GlobalNamespace::LevelBar*> levelBars = UnityEngine::Resources::FindObjectsOfTypeAll<GlobalNamespace::LevelBar*>();
    levelBar = UnityEngine::GameObject::Instantiate(levelBars.get(3)->get_gameObject());

    levelBar->set_name(newcsstr("ReplayLevelBarSimple"));
    levelBar->get_transform()->SetParent(parent, false);
    levelBar->GetComponent<UnityEngine::RectTransform*>()->set_anchoredPosition(UnityEngine::Vector2(0, -5));
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
    horizontalLayout->GetComponent<UnityEngine::RectTransform*>()->set_anchoredPosition(UnityEngine::Vector2(34.0f, 0));

    float childrenWidth = 43.5f;
    float childrenSpacing = 2.0f;

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

    CreateUIButton(
        buttonLayout->get_transform(),
        "Delete",
        [this]() {
            log("Pressed delete button");
            static auto titleName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Delete Replay");
            static auto deleteName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Delete");
            static auto cancelName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("Cancel");
            auto text = u"Are you sure?";

            getDeleteDialogPromptViewController()->Init(titleName, il2cpp_utils::newcsstr(text), deleteName, cancelName, il2cpp_utils::MakeDelegate<System::Action_1<int>*>(classof(System::Action_1<int>*), 
                (std::function<void(int)>) [] (int selectedButton) {
                    UIManager::singlePlayerFlowCoordinator->DismissViewController(getDeleteDialogPromptViewController(), ViewController::AnimationDirection::Horizontal, nullptr, selectedButton == 0);
                    
                    if(selectedButton == 0) {
                        std::remove(ReplayUtils::GetReplayFilePath().c_str());

                        UIManager::singlePlayerFlowCoordinator->BackButtonWasPressed(UIManager::replayViewController);

                        UIManager::SetReplayButtonCanvasActive(false);
                    }
                }
            ));
            UIManager::singlePlayerFlowCoordinator->PresentViewController(getDeleteDialogPromptViewController(), nullptr, ViewController::AnimationDirection::Horizontal, false);
        }
    )->get_gameObject()->GetComponent<UnityEngine::RectTransform*>()->set_sizeDelta(size);

    CreateUIButton(
        buttonLayout->get_transform(),
        "Watch Replay",
        "OkButton",
        [this]() { 
            log("Replay button pressed");
            ReplayManager::replayState = ReplayState::REPLAYING;
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
    auto replayTime = static_cast<time_t>(FileUtils::lastSelectedMetadata["Info"]["TimeSet"].GetInt64());
    auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

    dateText->set_text(newcsstr(UIUtils::GetLayeredText("Date Set", TimeUtils::GetStringForTimeSince(replayTime, now))));

    if(FileUtils::lastSelectedMetadata.HasMember("ClearedInfo")) {
        int maxScore = GlobalNamespace::ScoreModel::MaxRawScoreForNumberOfNotes(SongUtils::noteCount);
        int modifiedScore = FileUtils::lastSelectedMetadata["ClearedInfo"]["ModifiedScore"].GetInt();
        float percentage = ((float) modifiedScore / (float) maxScore) * 100;

        scoreOrFailedText->set_text(newcsstr(UIUtils::GetLayeredText("Score", "<color=" + GREEN + ">" + std::to_string(modifiedScore) + "</color> <size=80%>(<color=" + TEAL + ">" + TypeUtils::FloatToString(percentage) + "%</color>)</size>")));
    } else {
        float failedSongTime = FileUtils::lastSelectedMetadata["FailedInfo"]["FailedTime"].GetFloat();
        float songLength = reinterpret_cast<GlobalNamespace::IPreviewBeatmapLevel*>(SongUtils::beatmapLevel)->get_songDuration();

        scoreOrFailedText->set_text(newcsstr(UIUtils::GetLayeredText("Failed", "<color=" + RED + ">" + TimeUtils::SecondsToString(failedSongTime) + "</color> / " + TimeUtils::SecondsToString(songLength))));
    }

    std::string modifiersString = "";

    for(const auto& value : FileUtils::lastSelectedMetadata["Modifiers"].GetArray()) {
        modifiersString = modifiersString + ReplayUtils::GetInitialsFromModifierName(value.GetString()) + " ";
    }

    if(modifiersString.empty()) {
        modifiersString = "None";
    } else {
        modifiersString.pop_back(); // Remove last space
    }

    modifiersText->set_text(newcsstr(UIUtils::GetLayeredText("Modifiers", modifiersString)));

    float averageCutScore = FileUtils::lastSelectedMetadata["Info"]["AverageCutScore"].GetFloat();
    float cutPercentage = (averageCutScore / 115.0f) * 100;
    
    averageCutScoreText->set_text(newcsstr(UIUtils::GetLayeredText("Average Cut Score", TypeUtils::FloatToString(averageCutScore) + " <size=80%>(<color=" + TEAL + ">" + TypeUtils::FloatToString(cutPercentage) + "%</color>)</size>")));
    
    missedNotesText->set_text(newcsstr(UIUtils::GetLayeredText("Missed Notes", "<color=" + RED + ">" + std::to_string(FileUtils::lastSelectedMetadata["Info"]["MissedNotes"].GetInt()) + "</color>")));

    maxComboText->set_text(newcsstr(UIUtils::GetLayeredText("Max Combo", std::to_string(FileUtils::lastSelectedMetadata["Info"]["MaxCombo"].GetInt()))));
}