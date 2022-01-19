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

using namespace Replay;
using namespace Replay::UI;
using namespace QuestUI;
using namespace QuestUI::BeatSaberUI;
using namespace VRUIControls;

DEFINE_TYPE(Replay::UI, ReplayViewController);

GlobalNamespace::SimpleDialogPromptViewController* deleteDialogPromptViewController = nullptr;

GlobalNamespace::SimpleDialogPromptViewController* getDeleteDialogPromptViewController() {
    if(!deleteDialogPromptViewController) {
        log("Creating delete dialog prompt");
        deleteDialogPromptViewController = UnityEngine::Object::Instantiate<SimpleDialogPromptViewController*>(FindComponentsUtils::GetSimpleDialogPromptViewController());
        deleteDialogPromptViewController->GetComponent<VRGraphicRaycaster*>()->physicsRaycaster = BeatSaberUI::GetPhysicsRaycasterWithCache();
        static auto dialogViewControllerName = il2cpp_utils::newcsstr<il2cpp_utils::CreationType::Manual>("DeleteDialogPromptViewController");
        deleteDialogPromptViewController->set_name(dialogViewControllerName);
        deleteDialogPromptViewController->get_gameObject()->SetActive(false);
    }
    return deleteDialogPromptViewController;
}

void Replay::UI::ReplayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
	if(firstActivation) {
        // POC mainly, move to cleaner and separate methods later

       get_gameObject()->GetComponent<VRGraphicRaycaster*>()->physicsRaycaster = BeatSaberUI::GetPhysicsRaycasterWithCache();

        ArrayW<GlobalNamespace::LevelBar*> levelBars = UnityEngine::Resources::FindObjectsOfTypeAll<GlobalNamespace::LevelBar*>();
        levelBar = UnityEngine::GameObject::Instantiate(levelBars.get(3)->get_gameObject());

        levelBar->set_name(newcsstr("ReplayLevelBarSimple"));
        levelBar->get_transform()->SetParent(get_transform(), false);
        levelBar->GetComponent<UnityEngine::RectTransform*>()->set_anchoredPosition(UnityEngine::Vector2(0, -5));

        UnityEngine::UI::HorizontalLayoutGroup* horizontalLayout = CreateHorizontalLayoutGroup(get_rectTransform());
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

        dateText = CreateText(
            layout1->get_transform(),
            "Date Set\n9 days ago"
        );
        dateText->set_fontSize(fontSize);
        dateText->set_alignment(TMPro::TextAlignmentOptions::Center);
        dateText->set_lineSpacing(lineSpacing);

        scoreOrFailedText = CreateText(
            layout1->get_transform(),
            ""
        );
        scoreOrFailedText->set_fontSize(fontSize);
        scoreOrFailedText->set_alignment(TMPro::TextAlignmentOptions::Center);
        scoreOrFailedText->set_lineSpacing(lineSpacing);
        scoreOrFailedText->set_richText(true);

        modifiersText = CreateText(
            layout1->get_transform(),
            "Modifiers\nSFS GN"
        );
        modifiersText->set_fontSize(fontSize);
        modifiersText->set_alignment(TMPro::TextAlignmentOptions::Center);
        modifiersText->set_lineSpacing(lineSpacing);


        averageCutScoreText = CreateText(
            layout2->get_transform(),
            ""
        );
        averageCutScoreText->set_fontSize(fontSize);
        averageCutScoreText->set_alignment(TMPro::TextAlignmentOptions::Center);
        averageCutScoreText->set_lineSpacing(lineSpacing);

        missedNotesText = CreateText(
            layout2->get_transform(),
            ""
        );
        missedNotesText->set_fontSize(fontSize);
        missedNotesText->set_alignment(TMPro::TextAlignmentOptions::Center);
        missedNotesText->set_lineSpacing(lineSpacing);
        missedNotesText->set_richText(true);

        maxComboText = CreateText(
            layout2->get_transform(),
            ""
        );
        maxComboText->set_fontSize(fontSize);
        maxComboText->set_alignment(TMPro::TextAlignmentOptions::Center);
        maxComboText->set_lineSpacing(lineSpacing);

        UnityEngine::UI::HorizontalLayoutGroup* buttonLayout = CreateHorizontalLayoutGroup(get_rectTransform());
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

    if(addedToHierarchy) {
        GlobalNamespace::LevelBar* levelBarComponent = levelBar->GetComponent<GlobalNamespace::LevelBar*>();
        levelBarComponent->showDifficultyAndCharacteristic = true;
        levelBarComponent->Setup(reinterpret_cast<GlobalNamespace::IPreviewBeatmapLevel*>(SongUtils::beatmapLevel), SongUtils::beatmapCharacteristic, SongUtils::beatmapDifficulty);

        auto replayTime = static_cast<time_t>(FileUtils::lastSelectedMetadata["Info"]["TimeSet"].GetInt64());
        auto now = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());

        dateText->set_text(newcsstr("Date Set\n" + TimeUtils::GetStringForTimeSince(replayTime, now)));

        if(FileUtils::lastSelectedMetadata.HasMember("ClearedInfo")) {
            int maxScore = GlobalNamespace::ScoreModel::MaxRawScoreForNumberOfNotes(SongUtils::noteCount);
            int modifiedScore = FileUtils::lastSelectedMetadata["ClearedInfo"]["ModifiedScore"].GetInt();
            float percentage = ((float) modifiedScore / (float) maxScore) * 100;

            scoreOrFailedText->set_text(newcsstr("Score\n<color=#0ED600>" + std::to_string(modifiedScore) + "</color> (" + TypeUtils::FloatToString(percentage) + "%)"));
        } else {
            float failedSongTime = FileUtils::lastSelectedMetadata["FailedInfo"]["FailedTime"].GetFloat();
            int minutes = (int)(failedSongTime / 60.0f);
            int seconds = (int)(failedSongTime - (float(minutes) * 60.0f));

            std::string minutesString = std::to_string(minutes);
            std::string secondsString = std::to_string(seconds);
            if(seconds < 10) {
                secondsString = "0"+std::to_string(seconds);
            }
            
            std::string failedTimeString = minutesString+":"+secondsString;

            scoreOrFailedText->set_text(newcsstr("Failed At\n<color=#FF0000>" + failedTimeString + "</color>"));
        }

        float averageCutScore = FileUtils::lastSelectedMetadata["Info"]["AverageCutScore"].GetFloat();
        float cutPercentage = (averageCutScore / 115.0f) * 100;
        
        averageCutScoreText->set_text(newcsstr("Average Cut Score\n" + TypeUtils::FloatToString(averageCutScore) + " (" + TypeUtils::FloatToString(cutPercentage) + "%)"));
        
        missedNotesText->set_text(newcsstr("Missed Notes\n<color=#FF0000>" + std::to_string(FileUtils::lastSelectedMetadata["Info"]["MissedNotes"].GetInt()) + "</color>"));

        maxComboText->set_text(newcsstr("Max Combo\n" + std::to_string(FileUtils::lastSelectedMetadata["Info"]["MaxCombo"].GetInt())));
    }
}