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

    SongUtils::noteCount = self->selectedDifficultyBeatmap->get_beatmapData()->get_cuttableNotesCount();

    bool replayFileExists = fileexists(ReplayUtils::GetReplayFilePath());
    if(replayFileExists) FileUtils::lastSelectedMetadata = FileUtils::GetMetadataFromReplayFile(ReplayUtils::GetReplayFilePath());

    Replay::UI::UIManager::CreateReplayButton(self, replayFileExists);
}

void StandardLevelDetailViewHook(Logger& logger) {
    INSTALL_HOOK(logger, StandardLevelDetailView_RefreshContent);
}

ReplayInstallHooks(StandardLevelDetailViewHook);