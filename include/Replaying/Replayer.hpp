#pragma once
#include "static-defines.hpp"

#include "fstream"
#include "vector"
#include "Replaying/PlayerReplayer.hpp"
#include "Replaying/NoteEventReplayer.hpp"
#include "Replaying/ObstacleEventReplayer.hpp"
#include "Utils/ReplayUtils.hpp"

using namespace Replay;

namespace Replay {
    class Replayer {
    private:

    public:
        void Init();

        Replay::PlayerReplayer playerReplayer;
        Replay::NoteEventReplayer noteEventReplayer;
        Replay::ObstacleEventReplayer obstacleEventReplayer;

        void ReadReplayFile(std::string_view path);
    };
}