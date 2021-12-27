#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/GameEnergyCounter.hpp"
#include "GlobalNamespace/PlayerHeadAndObstacleInteraction.hpp"
#include "GlobalNamespace/ObstacleController.hpp"
#include "System/Collections/Generic/List_1.hpp"
#include "fstream"
#include "EventTypes.hpp"
#include "Utils/ReplayUtils.hpp"
#include "Utils/SongUtils.hpp"

using namespace Replay::ObstacleEventTypes;
using namespace System::Collections::Generic;

namespace Replay {
    class ObstacleEventReplayer {
    private:
        int lastPlayerObstacleInteractionCount = 0;
    public:
        std::vector<ObstacleEvent> events;

        int lastIndex = 0;

        int nextEventIndex = 0;

        void ReadEvents(std::ifstream& input, int eventsLength);

        bool ShouldSetEnergy();
    };
}