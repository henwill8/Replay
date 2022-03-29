#pragma once
#include "static-defines.hpp"

#include "fstream"
#include "vector"
#include "Replaying/PlayerReplayer.hpp"
#include "Replaying/NoteEventReplayer.hpp"
#include "Replaying/ObstacleEventReplayer.hpp"
#include "Utils/ReplayUtils.hpp"

#include "System/Collections/IEnumerator.hpp"
#include "custom-types/shared/coroutine.hpp"

using namespace Replay;

namespace Replay {
    class Replayer {
    private:
        custom_types::Helpers::Coroutine WaitForSongStartToInit();

    public:
        void Init(std::string_view path);

        Replay::PlayerReplayer playerReplayer;
        Replay::NoteEventReplayer noteEventReplayer;
        Replay::ObstacleEventReplayer obstacleEventReplayer;

        void ReadReplayFile(std::string_view path);
    };
}