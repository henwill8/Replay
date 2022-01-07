#include "Utils/SongUtils.hpp"

std::string Replay::SongUtils::GetMapID() {
    return mapID;
}

void Replay::SongUtils::SetMapID(GlobalNamespace::StandardLevelDetailView* standardLevelDetailView) {
    auto* Level = reinterpret_cast<GlobalNamespace::BeatmapLevelSO*>(standardLevelDetailView->level);
    if(Level == nullptr) {
        log("Beatmap Level is null");
        return;
    }
    std::string LevelID = to_utf8(csstrtostr(Level->get_levelID()));

    if(LevelID.find("custom_level_") != std::string::npos) {
        LevelID.erase(LevelID.begin(), LevelID.begin()+13);
        transform(LevelID.begin(), LevelID.end(), LevelID.begin(), ::tolower);
    }

    auto* SelectedBeatmapDifficulty = standardLevelDetailView->selectedDifficultyBeatmap;
    int Difficulty = SelectedBeatmapDifficulty->get_difficulty();

    auto* beatMapData = SelectedBeatmapDifficulty->get_beatmapData();
    auto* parentDifficultyBeatmapSet = SelectedBeatmapDifficulty->get_parentDifficultyBeatmapSet();
    auto* beatmapCharacteristic = parentDifficultyBeatmapSet->get_beatmapCharacteristic();
    std::string modeName = to_utf8(csstrtostr(beatmapCharacteristic->compoundIdPartName));

    mapID = LevelID + "_" + std::to_string(Difficulty);
    if(!modeName.empty()) mapID = mapID + "_" + modeName;

    log("MapID is %s", mapID.c_str());
}