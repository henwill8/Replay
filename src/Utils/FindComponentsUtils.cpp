#include "Utils/FindComponentsUtils.hpp"

#include "questui/shared/ArrayUtil.hpp"

#include "UnityEngine/Resources.hpp"

using namespace GlobalNamespace;
using namespace HMUI;
using namespace UnityEngine;

namespace Replay::FindComponentsUtils {

    #define CacheNotFoundWarningLog(type) log("Can't find '" #type "'! (This shouldn't happen and can cause unexpected behaviour)");

    #define CacheFindComponentDefineFirst(name) \
    name* _##name = nullptr; \
    name* Get##name() { \
        if(!_##name) \
            _##name = QuestUI::ArrayUtil::First(Resources::FindObjectsOfTypeAll<name*>()); \
        if(!_##name) \
            CacheNotFoundWarningLog(_##name) \
        return _##name; \
    }
    #define CacheFindComponentDefineLast(name) \
    name* _##name = nullptr; \
    name* Get##name() { \
        if(!_##name) \
            _##name = QuestUI::ArrayUtil::Last(Resources::FindObjectsOfTypeAll<name*>()); \
        if(!_##name) \
            CacheNotFoundWarningLog(_##name) \
        return _##name; \
    }
    #define CacheClearComponent(name) _##name = nullptr;

    CacheFindComponentDefineLast(SimpleDialogPromptViewController)
    CacheFindComponentDefineFirst(LevelSelectionNavigationController)
    CacheFindComponentDefineLast(ScreenSystem)

    void ClearCache() {
        CacheClearComponent(SimpleDialogPromptViewController)
        CacheClearComponent(LevelSelectionNavigationController)
        CacheClearComponent(ScreenSystem)
    }
 
}