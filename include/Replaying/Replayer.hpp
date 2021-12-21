#pragma once
#include "static-defines.hpp"

#include "fstream"
#include "vector"
#include "Replaying/PlayerReplayer.hpp"
#include "ReplayUtils.hpp"

using namespace Replay;

namespace Replay {
    class Replayer {
    private:

    public:
        void Init();

        Replay::PlayerReplayer playerReplayer;

        void ReadReplayFile(std::string path);
    };
}