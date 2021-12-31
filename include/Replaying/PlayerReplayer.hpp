#pragma once
#include "static-defines.hpp"

#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Quaternion.hpp"
#include "UnityEngine/Vector3.hpp"
#include "GlobalNamespace/PlayerTransforms.hpp"
#include "fstream"
#include "EventTypes.hpp"
#include "Utils/ReplayUtils.hpp"

using namespace Replay::PlayerEventTypes;

namespace Replay {
    class PlayerReplayer {
    private:
        std::vector<EulerTransformEvent> headEvents;
        std::vector<EulerTransformEvent> leftSaberEvents;
        std::vector<EulerTransformEvent> rightSaberEvents;

        int headIndex = 0;
        int leftSaberIndex = 0;
        int rightSaberIndex = 0;
    public:
        void ReadHeadEvents(std::ifstream& input, int eventsLength);
        void ReadLeftSaberEvents(std::ifstream& input, int eventsLength);
        void ReadRightSaberEvents(std::ifstream& input, int eventsLength);

        void SetPlayerTransforms(GlobalNamespace::PlayerTransforms* playerTransforms);
    };
}