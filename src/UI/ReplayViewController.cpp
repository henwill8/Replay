#include "UI/ReplayViewController.hpp"

#include "GlobalNamespace/ScoreModel.hpp"

#include "questui/shared/BeatSaberUI.hpp"

#include "UI/UIManager.hpp"
#include "ReplayManager.hpp"
#include "Utils/ReplayUtils.hpp"

using namespace Replay;
using namespace Replay::UI;
using namespace QuestUI;

DEFINE_TYPE(Replay::UI, ReplayViewController);

void Replay::UI::ReplayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
	if(firstActivation) {
        // levelBar = GlobalNamespace::LevelBar::New_ctor();
        // log("level bar is null: %i", levelBar == nullptr);
        // levelBar->get_transform();
        // log("test");
        // // levelBar->get_transform()->SetParent(get_transform(), false);
        // levelBar->get_gameObject()->GetComponent<UnityEngine::RectTransform*>()->set_anchoredPosition(UnityEngine::Vector2(0, 0));

        // Don't worry, this horrible code is just a POC
        int maxScore = GlobalNamespace::ScoreModel::MaxRawScoreForNumberOfNotes(SongUtils::noteCount);
        int modifiedScore = FileUtils::lastSelectedMetadata["ClearedInfo"]["ModifiedScore"].GetInt();
        float percentage = ((float) modifiedScore / (float) maxScore) * 100;

        float averageCutScore = FileUtils::lastSelectedMetadata["Info"]["AverageCutScore"].GetFloat();
        float percentageWithFC = (averageCutScore / 115.0f) * 100;

        QuestUI::BeatSaberUI::CreateText(
            get_transform(),
            "Score: " + std::to_string(modifiedScore) + " (" + ReplayUtils::FloatToString(percentage) + "%)\nAverage Cut Score: "+ReplayUtils::FloatToString(averageCutScore)+" ("+ReplayUtils::FloatToString(percentageWithFC)+"%)",
            true,
            UnityEngine::Vector2(0, 0)
        );

        BeatSaberUI::CreateUIButton(
            get_transform(),
            "Replay",
            "OkButton",
            UnityEngine::Vector2(0, -20),
            [this]() { 
                log("Replay button pressed");
                ReplayManager::replayState = ReplayState::REPLAYING;
                UIManager::singlePlayerFlowCoordinator->StartLevelOrShow360Prompt(nullptr, false);
            }
        );
    }
    if(addedToHierarchy) {
        log("Added to hierarchy poggers");
        // levelBar->Setup(reinterpret_cast<GlobalNamespace::IPreviewBeatmapLevel*>(SongUtils::difficultyBeatmap), SongUtils::beatmapCharacteristic, SongUtils::beatmapDifficulty);
    }
}