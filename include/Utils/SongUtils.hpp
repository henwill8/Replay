#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/AudioTimeSyncController.hpp"
#include "GlobalNamespace/StandardLevelDetailView.hpp"
#include "GlobalNamespace/BeatmapLevelSO.hpp"
#include "GlobalNamespace/IDifficultyBeatmap.hpp"
#include "GlobalNamespace/IDifficultyBeatmapSet.hpp"
#include "GlobalNamespace/BeatmapDifficulty.hpp"
#include "GlobalNamespace/BeatmapCharacteristicSO.hpp"
#include "GlobalNamespace/ScoreController.hpp"
#include "GlobalNamespace/PlayerSpecificSettings.hpp"

using namespace il2cpp_utils;

namespace Replay {
    class SongUtils {
    private:
        static inline std::string mapID;
    public:
        static inline GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;

        static inline bool inSong;

        static float GetSongTime() {
            static auto const *timeSyncControllerClass = classof(GlobalNamespace::AudioTimeSyncController *);
            auto *timeSourceObject = reinterpret_cast<Il2CppObject *>(audioTimeSyncController);
            if (timeSourceObject->klass == timeSyncControllerClass) {
                auto *timeSyncController = reinterpret_cast<GlobalNamespace::AudioTimeSyncController *>(audioTimeSyncController);
                return timeSyncController->songTime;
            } else {
                return audioTimeSyncController->get_songTime();
            }
        }

        static std::string GetMapID();

        static void SetMapID(GlobalNamespace::StandardLevelDetailView* standardLevelDetailView);

        static inline GlobalNamespace::ScoreController* scoreController;

        static inline GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings;

        static inline bool didFail;
        static inline float failTime;

        static inline GlobalNamespace::IBeatmapLevel* beatmapLevel;
        static inline GlobalNamespace::BeatmapDifficulty beatmapDifficulty;
        static inline GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;
        static inline GlobalNamespace::IReadonlyBeatmapData* beatmapData;
    };
}