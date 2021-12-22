#pragma once
#include "static-defines.hpp"

#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Quaternion.hpp"
#include "UnityEngine/Vector3.hpp"
#include "GlobalNamespace/PlayerTransforms.hpp"
#include "fstream"
#include "EventTypes.hpp"
#include "ReplayUtils.hpp"

using namespace Replay::PlayerEventTypes;

namespace Replay {
    class PlayerReplayer {
    private:
        std::vector<PlayerEvent> events;

        int index = 0;

        PlayerEvent GetCurrentEvent();
    public:
        void ReadEvents(std::ifstream& input, int eventsLength);

        void SetPlayerTransforms(GlobalNamespace::PlayerTransforms* playerTransforms);
    };
}