#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/GameEnergyCounter.hpp"
#include "GlobalNamespace/PlayerHeadAndObstacleInteraction.hpp"
#include "GlobalNamespace/ObstacleController.hpp"
#include "System/Collections/Generic/List_1.hpp"
#include "UnityEngine/Time.hpp"
#include "fstream"
#include "EventTypes.hpp"
#include "Utils/SongUtils.hpp"
#include "Utils/FileUtils.hpp"

using namespace Replay;

namespace Replay {
    class ObstacleEventRecorder {
    private:
        std::vector<ObstacleEventTypes::ObstacleEvent> events;

        int lastInteractionCount = 0;
    public:
        void AddEvent(GlobalNamespace::GameEnergyCounter* gameEnergyCounter);

        void WriteEvents(std::ofstream& output);
    };
}