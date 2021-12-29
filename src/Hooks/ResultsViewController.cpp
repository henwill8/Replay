#include "static-defines.hpp"

#include "GlobalNamespace/ResultsViewController.hpp"
#include "ReplayManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(ResultsViewController_Init, &ResultsViewController::Init, void, ResultsViewController* self, LevelCompletionResults* levelCompletionResults, IDifficultyBeatmap* difficultyBeatmap, bool practice, bool newHighScore) {
    ResultsViewController_Init(self, levelCompletionResults, difficultyBeatmap, practice, newHighScore);

    if(ReplayManager::replayState == ReplayState::RECORDING && !practice) {
        ReplayManager::recorder.CreateMetadata(levelCompletionResults);
        ReplayManager::recorder.CheckToWriteFile();
    }
}

void ResultsViewControllerHook(Logger& logger) {
    INSTALL_HOOK(logger, ResultsViewController_Init);
}

ReplayInstallHooks(ResultsViewControllerHook);