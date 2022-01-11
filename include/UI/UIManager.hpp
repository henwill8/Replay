#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
#include "GlobalNamespace/StandardLevelDetailView.hpp"

#include "UI/ReplayViewController.hpp"
#include "ReplayManager.hpp"

namespace Replay::UI {
    class UIManager {
    public:
        static inline GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* singlePlayerFlowCoordinator;

        static inline Replay::UI::ReplayViewController* replayViewController;

        static inline UnityEngine::GameObject* replayCanvas;

        static void CreateReplayButton(GlobalNamespace::StandardLevelDetailView* standardLevelDetailView, bool replayFileExists);
    };
}