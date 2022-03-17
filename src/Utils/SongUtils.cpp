#include "Utils/SongUtils.hpp"

#include "custom-types/shared/coroutine.hpp"
#include "questui/shared/ArrayUtil.hpp"
#include "UnityEngine/Resources.hpp"
#include "GlobalNamespace/BeatmapLevelsModel.hpp"
#include "GlobalNamespace/SharedCoroutineStarter.hpp"
#include "GlobalNamespace/IReadonlyBeatmapData.hpp"
#include "System/Threading/Tasks/Task_1.hpp"

std::string Replay::SongUtils::GetMapID() {
    return mapID;
}

custom_types::Helpers::Coroutine GetBeatmapData(GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, std::string mapID) {
    auto* model = QuestUI::ArrayUtil::First(UnityEngine::Resources::FindObjectsOfTypeAll<GlobalNamespace::BeatmapLevelsModel*>());

    auto* preview = model->GetLevelPreviewForLevelId(mapID);
    if(preview == nullptr) co_return;

    auto* envInfo = preview->get_environmentInfo();

    auto* result = difficultyBeatmap->GetBeatmapDataAsync(envInfo);

    while(!result->get_IsCompleted()) co_yield nullptr;

    Replay::SongUtils::beatmapData = result->get_ResultOnSuccess();

    co_return;
}

void Replay::SongUtils::SetMapID(GlobalNamespace::StandardLevelDetailView* standardLevelDetailView) {
    auto* Level = reinterpret_cast<GlobalNamespace::BeatmapLevelSO*>(standardLevelDetailView->level);
    if(Level == nullptr) {
        log("Beatmap Level is null");
        return;
    }
    std::string LevelID = to_utf8(csstrtostr(Level->get_levelID()));

    std::string rawID = LevelID;
    
    if(LevelID.find("custom_level_") != std::string::npos) {
        LevelID.erase(LevelID.begin(), LevelID.begin()+13);
        transform(LevelID.begin(), LevelID.end(), LevelID.begin(), ::tolower);
    }

    auto* SelectedBeatmapDifficulty = standardLevelDetailView->selectedDifficultyBeatmap;
    int Difficulty = SelectedBeatmapDifficulty->get_difficulty();

    auto* parentDifficultyBeatmapSet = SelectedBeatmapDifficulty->get_parentDifficultyBeatmapSet();
    auto* beatmapCharacteristic = parentDifficultyBeatmapSet->get_beatmapCharacteristic();
    std::string modeName = to_utf8(csstrtostr(beatmapCharacteristic->compoundIdPartName));

    mapID = LevelID + "_" + std::to_string(Difficulty);
    if(!modeName.empty()) mapID = mapID + "_" + modeName;

    log("MapID is %s", mapID.c_str());
    
    GlobalNamespace::SharedCoroutineStarter::get_instance()->StartCoroutine(custom_types::Helpers::CoroutineHelper::New(GetBeatmapData(SelectedBeatmapDifficulty, rawID)));
}