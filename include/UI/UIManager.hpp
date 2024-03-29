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

        static void SetReplayButtonOnClick(UnityEngine::Transform* buttonTransform, std::string path, bool overwrite = false);
        static UnityEngine::Transform* CreateReplayButton(UnityEngine::Transform* parent, UnityEngine::UI::Button* templateButton, UnityEngine::UI::Button* actionButton, std::string path, bool overwrite = false);

        static void CreateReplayCanvas(GlobalNamespace::StandardLevelDetailView* standardLevelDetailView, bool replayFileExists);

        static void SetReplayButtonCanvasActive(bool active) {
            buttonParent->Find(newcsstr("ReplayButtonCanvas"))->get_gameObject()->SetActive(active);//Name of canvas is defined else where, use that eventually
            float xpos = active ? 4.2 : -1.8;
            ((UnityEngine::RectTransform*) buttonParent)->set_anchoredPosition({xpos, -55});
        }
    };
}