#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/SinglePlayerLevelSelectionFlowCoordinator.hpp"
#include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "UnityEngine/RectTransform.hpp"

#include "UI/ReplayViewController.hpp"
#include "ReplayManager.hpp"

namespace Replay::UI {
    class UIManager {
    public:
        static inline GlobalNamespace::SinglePlayerLevelSelectionFlowCoordinator* singlePlayerFlowCoordinator;

        static inline Replay::UI::ReplayViewController* replayViewController;

        static inline UnityEngine::Transform* buttonParent;

        static void CreateReplayButton(GlobalNamespace::StandardLevelDetailView* standardLevelDetailView, bool replayFileExists);

        static void SetReplayButtonCanvasActive(bool active) {
            buttonParent->Find(newcsstr("ReplayButtonCanvas"))->get_gameObject()->SetActive(active);
            float xpos = active ? 4.2 : -1.8;
            ((UnityEngine::RectTransform*) buttonParent)->set_anchoredPosition({xpos, -55});
        }
    };
}