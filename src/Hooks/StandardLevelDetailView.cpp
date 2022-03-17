#include "static-defines.hpp"

#include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "GlobalNamespace/BeatmapData.hpp"

#include "Utils/SongUtils.hpp"
#include "Utils/ReplayUtils.hpp"
#include "Utils/FileUtils.hpp"
#include "UI/UIManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(StandardLevelDetailView_RefreshContent, &StandardLevelDetailView::RefreshContent, void, StandardLevelDetailView* self) {
    StandardLevelDetailView_RefreshContent(self);

    SongUtils::SetMapID(self);
    
    SongUtils::beatmapLevel = self->selectedDifficultyBeatmap->get_level();
    SongUtils::beatmapDifficulty = self->selectedDifficultyBeatmap->get_difficulty();
    SongUtils::beatmapCharacteristic = self->selectedDifficultyBeatmap->get_parentDifficultyBeatmapSet()->get_beatmapCharacteristic();

    bool replayFileExists = fileexists(ReplayUtils::GetReplayFilePath(SongUtils::GetMapID()));

    Replay::UI::UIManager::CreateReplayCanvas(self, replayFileExists);
}

void StandardLevelDetailViewHook(Logger& logger) {
    INSTALL_HOOK(logger, StandardLevelDetailView_RefreshContent);
}

ReplayInstallHooks(StandardLevelDetailViewHook);