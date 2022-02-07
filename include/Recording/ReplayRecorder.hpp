#pragma once
#include "static-defines.hpp"

#include "fstream"
#include "vector"
#include "Recording/PlayerRecorder.hpp"
#include "Recording/NoteEventRecorder.hpp"
#include "Recording/ObstacleEventRecorder.hpp"
#include "GlobalNamespace/LevelCompletionResults.hpp"
#include "Utils/ReplayUtils.hpp"
#include <filesystem>

#include "rapidjson/document.h"
#include "rapidjson/stringbuffer.h"
#include <rapidjson/writer.h>
#include <string.h>

namespace Replay {
    class ReplayRecorder {
    private:
        void CreateClearedSpecificMetadata(GlobalNamespace::LevelCompletionResults* results, rapidjson::Document::AllocatorType& allocator);

        void CreateFailedSpecificMetadata(GlobalNamespace::LevelCompletionResults* results, rapidjson::Document::AllocatorType& allocator);

        void CreateMetadata(GlobalNamespace::LevelCompletionResults* results);

        bool ShouldMoveFile(GlobalNamespace::LevelCompletionResults* results, std::string_view filepath);

        void WriteReplayFile(std::string path);
    public:
        void Init();

        void StopRecording(GlobalNamespace::LevelCompletionResults* results);

        PlayerRecorder playerRecorder;
        NoteEventRecorder noteEventRecorder;
        ObstacleEventRecorder obstacleEventRecorder;

        rapidjson::Document metadata;
    };
}