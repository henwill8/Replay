#pragma once
#include "static-defines.hpp"
#include "Recording/ReplayRecorder.hpp"
#include "Replaying/Replayer.hpp"
#include "Utils/SongUtils.hpp"

namespace Replay {
    enum ReplayState {
        RECORDING,
        REPLAYING,
        NONE
    };

    class ReplayManager {
    public:
        static inline Replay::ReplayState replayState;

        static Replay::ReplayState temporaryState;

        static Replay::ReplayRecorder recorder;

        static Replay::Replayer replayer;
    };
}