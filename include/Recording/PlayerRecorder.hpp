#pragma once
#include "static-defines.hpp"

#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Time.hpp"
#include "GlobalNamespace/SaberType.hpp"
#include "GlobalNamespace/BladeMovementDataElement.hpp"
#include "fstream"
#include "EventTypes.hpp"
#include "Utils/SongUtils.hpp"
#include "Utils/FileUtils.hpp"
#include "Utils/SaberUtils.hpp"
#include "Utils/ReplayUtils.hpp"

using namespace Replay;

namespace Replay {
    class PlayerRecorder {
    private:
        GlobalNamespace::BladeMovementDataElement leftSaberLastSavedMovement;

        GlobalNamespace::BladeMovementDataElement rightSaberLastSavedMovement;

        std::vector<PlayerEventTypes::PlayerEvent> playerEvents;

        std::vector<PlayerEventTypes::EulerTransformEvent> headEvents;
        std::vector<PlayerEventTypes::EulerTransformEvent> leftSaberEvents;
        std::vector<PlayerEventTypes::EulerTransformEvent> rightSaberEvents;

        void GetImportantEvents();// change name later

        void AddSaberEvent(GlobalNamespace::SaberType saberType);
    public:
        void AddEvent(PlayerEventTypes::PlayerTransforms const& playerTransforms);

        void AddSaberMovement(GlobalNamespace::BladeMovementDataElement bladeMovement, GlobalNamespace::SaberType saberType);

        void WriteEvents(std::ofstream& output);
    };
}