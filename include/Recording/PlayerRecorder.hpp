#pragma once
#include "static-defines.hpp"

#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Time.hpp"
#include "fstream"
#include "EventTypes.hpp"
#include "Utils/SongUtils.hpp"
#include "Utils/FileUtils.hpp"

using namespace Replay;

namespace Replay {
    class PlayerRecorder {
    private:
        std::vector<PlayerEventTypes::PlayerEvent> events;

        int eventsPerSecond = 15;

        float time = 1.0f/(float)eventsPerSecond;
    public:
        void AddEvent(PlayerEventTypes::PlayerTransforms const& playerTransforms);

        void WriteEvents(std::ofstream& output);
        
        static PlayerEventTypes::PlayerTransforms TransformsToPlayerTransforms(UnityEngine::Transform* head, UnityEngine::Transform* leftSaber, UnityEngine::Transform* rightSaber);
    };
}