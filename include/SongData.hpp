#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/AudioTimeSyncController.hpp"

namespace Replay {
    class SongData {
    public:
        static inline GlobalNamespace::AudioTimeSyncController* audioTimeSyncController;

        static float GetSongTime() {
            return audioTimeSyncController->get_songTime();
        }

        static std::string GetMapID();
    };
}