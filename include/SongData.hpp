#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/AudioTimeSyncController.hpp"
#include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "GlobalNamespace/BeatmapLevelSO.hpp"
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"

using namespace il2cpp_utils;

namespace Replay {
    class SongData {
    private:
        static inline std::string mapID;
    public:
        static inline GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;

        static float GetSongTime() {
            return audioTimeSyncController->get_songTime();
        }

        static std::string GetMapID();

        static void SetMapID(GlobalNamespace::StandardLevelDetailView* standardLevelDetailView);
    };
}