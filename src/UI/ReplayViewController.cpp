#include "UI/ReplayViewController.hpp"

#include "GlobalNamespace/ScoreModel.hpp"

#include "questui/shared/BeatSaberUI.hpp"

#include "UI/UIManager.hpp"
#include "ReplayManager.hpp"
#include "Utils/ReplayUtils.hpp"
#include "Utils/TypeUtils.hpp"
#include "Utils/UnityUtils.hpp"

using namespace Replay;
using namespace Replay::UI;
using namespace QuestUI;

DEFINE_TYPE(Replay::UI, ReplayViewController);

void Replay::UI::ReplayViewController::DidActivate(bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
	if(firstActivation) {
        ArrayW<GlobalNamespace::LevelBar*> levelBars = UnityEngine::Resources::FindObjectsOfTypeAll<GlobalNamespace::LevelBar*>();
        levelBar = UnityEngine::GameObject::Instantiate(levelBars.get(3)->get_gameObject());

        levelBar->set_name(newcsstr("ReplayLevelBarSimple"));
        UnityUtils::SetAllActive(levelBar->get_transform(), true);
        levelBar->get_transform()->SetParent(get_transform(), false);
        levelBar->GetComponent<UnityEngine::RectTransform*>()->set_anchoredPosition(UnityEngine::Vector2(0, 0));

        QuestUI::BeatSaberUI::CreateText(
            get_transform(),
            "Score: 42069420 (93.54%)",
            true,
            UnityEngine::Vector2(0, 0)
        );

        BeatSaberUI::CreateUIButton(
            get_transform(),
            "Replay",
            "OkButton",
            UnityEngine::Vector2(0, -30),
            [this]() { 
                log("Replay button pressed");
                ReplayManager::replayState = ReplayState::REPLAYING;
                UIManager::singlePlayerFlowCoordinator->StartLevelOrShow360Prompt(nullptr, false);
            }
        );
    }
    if(addedToHierarchy) {
        GlobalNamespace::LevelBar* levelBarComponent = levelBar->GetComponent<GlobalNamespace::LevelBar*>();
        levelBarComponent->showDifficultyAndCharacteristic = true;
        levelBarComponent->Setup(reinterpret_cast<GlobalNamespace::IPreviewBeatmapLevel*>(SongUtils::beatmapLevel), SongUtils::beatmapCharacteristic, SongUtils::beatmapDifficulty);
    
        int maxScore = GlobalNamespace::ScoreModel::MaxRawScoreForNumberOfNotes(SongUtils::noteCount);
        int modifiedScore = FileUtils::lastSelectedMetadata["ClearedInfo"]["ModifiedScore"].GetInt();
        float percentage = ((float) modifiedScore / (float) maxScore) * 100;

        float averageCutScore = FileUtils::lastSelectedMetadata["Info"]["AverageCutScore"].GetFloat();
        float percentageWithFC = (averageCutScore / 115.0f) * 100;
    }
}