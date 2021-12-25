#include "Utils/SongUtils.hpp"

std::string Replay::SongUtils::GetMapID() {
    return mapID;
}

void Replay::SongUtils::SetMapID(GlobalNamespace::StandardLevelDetailView* standardLevelDetailView) {
    log("Getting map ID");

    auto* Level = reinterpret_cast<GlobalNamespace::BeatmapLevelSO*>(standardLevelDetailView->level);
    if(Level == nullptr) {
        log("Beatmap Level is null");
        return;
    }
    Il2CppString* LevelID = Level->get_levelID();
    log("Got map hash");

    auto* SelectedBeatmapDifficulty = standardLevelDetailView->selectedDifficultyBeatmap;
    
    int Difficulty = SelectedBeatmapDifficulty->get_difficulty();
    log("Got map difficulty");

    auto* beatMapData = SelectedBeatmapDifficulty->get_beatmapData();
    auto* parentDifficultyBeatmapSet = SelectedBeatmapDifficulty->get_parentDifficultyBeatmapSet();
    auto* beatmapCharacteristic = parentDifficultyBeatmapSet->get_beatmapCharacteristic();
    std::string modeName = to_utf8(csstrtostr(beatmapCharacteristic->compoundIdPartName));
    log("Got map mode");

    mapID = to_utf8(csstrtostr(LevelID)) + std::to_string(Difficulty) + modeName;
    if(mapID.find("custom_level_") != std::string::npos) {
        log("Removing 'custom_level_' from hash");
        mapID.erase(mapID.begin(), mapID.begin()+13);
        transform(mapID.begin(), mapID.end(), mapID.begin(), ::tolower);
    }
    log("MapID is %s", mapID.c_str());
}