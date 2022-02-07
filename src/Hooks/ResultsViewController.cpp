#include "static-defines.hpp"

#include "GlobalNamespace/ResultsViewController.hpp"
#include "ReplayManager.hpp"
#include "UI/UIManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(ResultsViewController_Init, &ResultsViewController::Init, void, ResultsViewController* self, LevelCompletionResults* levelCompletionResults, IDifficultyBeatmap* difficultyBeatmap, bool practice, bool newHighScore) {
    ResultsViewController_Init(self, levelCompletionResults, difficultyBeatmap, practice, newHighScore);

    SongUtils::inSong = false;

    if(ReplayManager::replayState == ReplayState::RECORDING && !practice) {
        ReplayManager::recorder.StopRecording(levelCompletionResults);
    }
}

MAKE_HOOK_MATCH(ResultsViewController_DidActivate, &ResultsViewController::DidActivate, void, ResultsViewController* self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
    ResultsViewController_DidActivate(self, firstActivation, addedToHierarchy, screenSystemEnabling);

    Replay::UI::UIManager::CreateReplayButton(self->restartButton->get_transform()->GetParent(), self->restartButton, self->restartButton, ReplayUtils::GetTempReplayFilePath());
}

void ResultsViewControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, ResultsViewController_Init);
    INSTALL_HOOK(logger, ResultsViewController_DidActivate);
}

ReplayInstallHooks(ResultsViewControllerHook);