#include "static-defines.hpp"

#include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "SongData.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(StandardLevelDetailView_RefreshContent, &StandardLevelDetailView::RefreshContent, void, StandardLevelDetailView* self) {
    StandardLevelDetailView_RefreshContent(self);

    SongData::SetMapID(self);
}

void StandardLevelDetailViewHook(Logger& logger) {
    INSTALL_HOOK(logger, StandardLevelDetailView_RefreshContent);
}

ReplayInstallHooks(StandardLevelDetailViewHook);