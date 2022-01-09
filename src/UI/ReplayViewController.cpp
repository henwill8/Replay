#include "UI/ReplayViewController.hpp"

#include "questui/shared/BeatSaberUI.hpp"

#include "UI/UIManager.hpp"
#include "ReplayManager.hpp"

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