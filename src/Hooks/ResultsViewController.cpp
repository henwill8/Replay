#include "static-defines.hpp"

#include "GlobalNamespace/ResultsViewController.hpp"
#include "GlobalNamespace/IReadonlyBeatmapData.hpp"
#include "ReplayManager.hpp"
#include "UI/UIManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(ResultsViewController_Init, &ResultsViewController::Init, void, ResultsViewController* self, LevelCompletionResults* levelCompletionResults, IReadonlyBeatmapData* transformedBeatmapData, IDifficultyBeatmap* difficultyBeatmap, bool practice, bool newHighScore) {
    ResultsViewController_Init(self, levelCompletionResults, transformedBeatmapData, difficultyBeatmap, practice, newHighScore);

    SongUtils::inSong = false;

    if(ReplayManager::replayState == ReplayState::RECORDING && !practice) {
        ReplayManager::recorder.StopRecording(levelCompletionResults);
    }
}

MAKE_HOOK_MATCH(ResultsViewController_DidActivate, &ResultsViewController::DidActivate, void, ResultsViewController* self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
    ResultsViewController_DidActivate(self, firstActivation, addedToHierarchy, screenSystemEnabling);

    UnityEngine::Transform* parent = self->restartButton->get_transform()->GetParent();
    UnityEngine::Transform* buttonTransform = parent->Find(newcsstr("ReplayButton"));//Replay button name is defined in two other places, make better
    
    if(buttonTransform) {
        std::string path = fileexists(ReplayUtils::GetTempReplayFilePath()) ? ReplayUtils::GetTempReplayFilePath() : ReplayUtils::GetReplayFilePath(SongUtils::GetMapID());
        Replay::UI::UIManager::SetReplayButtonOnClick(buttonTransform, path, true);
    } else {
        ((UnityEngine::RectTransform*) Replay::UI::UIManager::CreateReplayButton(parent, self->restartButton, self->restartButton, ReplayUtils::GetTempReplayFilePath(), true))->set_anchoredPosition({48, 0});
    }
}

void ResultsViewControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, ResultsViewController_Init);
    INSTALL_HOOK(logger, ResultsViewController_DidActivate);
}

ReplayInstallHooks(ResultsViewControllerHook);