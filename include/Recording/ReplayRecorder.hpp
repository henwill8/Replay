#pragma once
#include "static-defines.hpp"

#include "fstream"
#include "vector"
#include "Recording/PlayerRecorder.hpp"
#include "Recording/NoteEventRecorder.hpp"
#include "Utils/ReplayUtils.hpp"
#include <filesystem>

namespace Replay {
    class ReplayRecorder {
    private:

    public:
        void Init();

        void WriteReplayFile(std::string path);

        void StopRecording();

        PlayerRecorder playerRecorder;

        NoteEventRecorder noteEventRecorder;
    };
}