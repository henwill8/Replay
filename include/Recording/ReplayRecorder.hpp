#pragma once
#include "static-defines.hpp"

#include "fstream"
#include "vector"
#include "extern/includes/bs-utils/shared/utils.hpp"
#include "Recording/PlayerRecorder.hpp"

namespace Replay {
    class ReplayRecorder {
    private:
        const inline static std::string replaysDirectory = bs_utils::getDataDir(modInfo) + "Replays/";
        std::string fileName;
        
        std::ofstream output;

        PlayerRecorder playerRecorder;

    public:
        ReplayRecorder();

        void WriteReplayFile(std::string path);
        
        ~ReplayRecorder();
    };
}