#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/SimpleDialogPromptViewController.hpp"
#include "GlobalNamespace/LevelSelectionNavigationController.hpp"
#include "HMUI/ScreenSystem.hpp"

namespace Replay::FindComponentsUtils {

    #define CacheFindComponentDeclare(namespace, name) namespace::name* Get##name();

    CacheFindComponentDeclare(GlobalNamespace, SimpleDialogPromptViewController)
    CacheFindComponentDeclare(GlobalNamespace, LevelSelectionNavigationController)
    CacheFindComponentDeclare(HMUI, ScreenSystem)

    void ClearCache();

}