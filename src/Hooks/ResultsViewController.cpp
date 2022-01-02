#include "static-defines.hpp"

#include "GlobalNamespace/ResultsViewController.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(ResultsViewController_Init, &ResultsViewController::Init, void, ResultsViewController* self, LevelCompletionResults* levelCompletionResults, IDifficultyBeatmap* difficultyBeatmap, bool practice, bool newHighScore) {
    ResultsViewController_Init(self, levelCompletionResults, difficultyBeatmap, practice, newHighScore);

    SongUtils::inSong = false;

    if(ReplayManager::replayState == ReplayState::RECORDING && !practice) {
        ReplayManager::recorder.StopRecording(levelCompletionResults);
    }
}

MAKE_HOOK_MATCH(ResultsViewController_RestartButtonPressed, &ResultsViewController::RestartButtonPressed, void, ResultsViewController* self) {
    ResultsViewController_RestartButtonPressed(self);

    ReplayManager::temporaryState = ReplayManager::replayState; // To keep replay state when restarting
}

void ResultsViewControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, ResultsViewController_Init);
    INSTALL_HOOK(logger, ResultsViewController_RestartButtonPressed);
}

ReplayInstallHooks(ResultsViewControllerHook);