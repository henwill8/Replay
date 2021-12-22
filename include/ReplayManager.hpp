#pragma once
#include "static-defines.hpp"
#include "Recording/ReplayRecorder.hpp"
#include "Replaying/Replayer.hpp"
// #include "extern/includes/bs-utils/shared/utils.hpp"
#include "SongData.hpp"

namespace Replay {
    enum ReplayState {
        RECORDING,
        REPLAYING
    };

    class ReplayManager {
    public:
        static inline Replay::ReplayState replayState;

        static Replay::ReplayRecorder recorder;

        static Replay::Replayer replayer;
    };
}