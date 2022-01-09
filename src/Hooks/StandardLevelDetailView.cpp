#include "static-defines.hpp"

#include "GlobalNamespace/StandardLevelDetailView.hpp"

#include "Utils/SongUtils.hpp"
#include "Utils/ReplayUtils.hpp"
#include "Utils/FileUtils.hpp"
#include "UI/UIManager.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(StandardLevelDetailView_RefreshContent, &StandardLevelDetailView::RefreshContent, void, StandardLevelDetailView* self) {
    StandardLevelDetailView_RefreshContent(self);

    SongUtils::SetMapID(self);

    bool replayFileExists = fileexists(ReplayUtils::GetReplayFilePath());
    if(replayFileExists) FileUtils::lastSelectedMetadata = FileUtils::GetMetadataFromReplayFile(ReplayUtils::GetReplayFilePath());

    Replay::UI::UIManager::CreateReplayButton(self, replayFileExists);
}

MAKE_HOOK_MATCH(StandardLevelDetailView_SetContent, &StandardLevelDetailView::SetContent, void, StandardLevelDetailView* self, GlobalNamespace::IBeatmapLevel* level, GlobalNamespace::BeatmapDifficulty defaultDifficulty, GlobalNamespace::BeatmapCharacteristicSO* defaultBeatmapCharacteristic, GlobalNamespace::PlayerData* playerData) {
    StandardLevelDetailView_SetContent(self, level, defaultDifficulty, defaultBeatmapCharacteristic, playerData);

    SongUtils::difficultyBeatmap = reinterpret_cast<GlobalNamespace::IDifficultyBeatmap*>(level);
    SongUtils::beatmapDifficulty = defaultDifficulty;
    SongUtils::beatmapCharacteristic = defaultBeatmapCharacteristic;
}

void StandardLevelDetailViewHook(Logger& logger) {
    INSTALL_HOOK(logger, StandardLevelDetailView_RefreshContent);
    INSTALL_HOOK(logger, StandardLevelDetailView_SetContent);
}

ReplayInstallHooks(StandardLevelDetailViewHook);