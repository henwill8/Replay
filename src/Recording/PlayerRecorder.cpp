#include "Recording/PlayerRecorder.hpp"

#include "Utils/MathUtils.hpp"

void Replay::PlayerRecorder::AddEvent(PlayerEventTypes::PlayerTransforms const& playerTransforms) {
    float songTime = SongUtils::GetSongTime();
    if(!playerEvents.empty() && songTime == playerEvents[playerEvents.size() - 1].time) return;
    
    playerEvents.emplace_back(songTime, playerTransforms, SaberUtils::saberManager->leftSaber->saberBladeTopPos, SaberUtils::saberManager->rightSaber->saberBladeTopPos);
}

void Replay::PlayerRecorder::AddSaberEvent(GlobalNamespace::SaberType saberType) {
    int lastAddedEventIndex = playerEvents.size() - 1;
    if(saberType == SaberType::SaberA) {
        leftSaberEvents.emplace_back(playerEvents[lastAddedEventIndex].time, playerEvents[lastAddedEventIndex].playerTransforms.leftSaber);
    } else {
        rightSaberEvents.emplace_back(playerEvents[lastAddedEventIndex].time, playerEvents[lastAddedEventIndex].playerTransforms.rightSaber);
    }
}

void Replay::PlayerRecorder::AddSaberMovement(GlobalNamespace::BladeMovementDataElement bladeMovement, GlobalNamespace::SaberType saberType) {
    //Not in the mood rn to not hard code this, forgive me
    float angleNeeded = 30;//These values can be optimized more
    float minDistance = 0.05f;
    float maxDistance = 1;
    float maxTime = 1.0f / 10.0f;

    float songTime = SongUtils::GetSongTime();

    if(saberType == SaberType::SaberA) {
        if(leftSaberLastSavedMovement.segmentNormal == UnityEngine::Vector3::get_zero()) {
            leftSaberLastSavedMovement = bladeMovement;
            return;
        }

        float lastEventTime = 0;
        if(!leftSaberEvents.empty()) lastEventTime = leftSaberEvents[leftSaberEvents.size() - 1].time;

        float timeSinceLastEvent = songTime - lastEventTime;
        float distance = UnityEngine::Vector3::Distance(bladeMovement.topPos, leftSaberLastSavedMovement.topPos);
        float angle = UnityEngine::Vector3::Angle(bladeMovement.segmentNormal, leftSaberLastSavedMovement.segmentNormal);

        bool addEvent = (angle > angleNeeded && distance > minDistance) || distance > maxDistance || timeSinceLastEvent > maxTime;

        if(addEvent) {
            leftSaberLastSavedMovement = bladeMovement;
            AddSaberEvent(saberType);
            return;
        }
    } else {
        if(rightSaberLastSavedMovement.segmentNormal == UnityEngine::Vector3::get_zero()) {
            rightSaberLastSavedMovement = bladeMovement;
            return;
        }

        float lastEventTime = 0;
        if(!rightSaberEvents.empty()) lastEventTime = rightSaberEvents[rightSaberEvents.size() - 1].time;

        float timeSinceLastEvent = songTime - lastEventTime;
        float distance = UnityEngine::Vector3::Distance(bladeMovement.topPos, rightSaberLastSavedMovement.topPos);
        float angle = UnityEngine::Vector3::Angle(bladeMovement.segmentNormal, rightSaberLastSavedMovement.segmentNormal);

        bool addEvent = (angle > angleNeeded && distance > minDistance) || distance > maxDistance || timeSinceLastEvent > maxTime;

        if(addEvent) {
            rightSaberLastSavedMovement = bladeMovement;
            AddSaberEvent(saberType);
            return;
        }
    }
}

void Replay::PlayerRecorder::GetImportantEvents() {
    headEvents.emplace_back(playerEvents[0].time, playerEvents[0].playerTransforms.head);
    leftSaberEvents.emplace_back(playerEvents[0].time, playerEvents[0].playerTransforms.leftSaber);
    rightSaberEvents.emplace_back(playerEvents[0].time, playerEvents[0].playerTransforms.rightSaber);

    float timePerEvent = 1.0f / 10.0f;// Can probably be lower, check after adding smooth camera (also maybe dynamic head events?)
    float lastSavedEventTime = 0;

    for(auto& event : playerEvents) {
        if(event.time - lastSavedEventTime > timePerEvent) {
            headEvents.emplace_back(event.time, event.playerTransforms.head);
            lastSavedEventTime = event.time;
        }
    }

    int lastIndex = playerEvents.size() - 1;
    headEvents.emplace_back(playerEvents[lastIndex].time, playerEvents[lastIndex].playerTransforms.head);
    leftSaberEvents.emplace_back(playerEvents[lastIndex].time, playerEvents[lastIndex].playerTransforms.leftSaber);
    rightSaberEvents.emplace_back(playerEvents[lastIndex].time, playerEvents[lastIndex].playerTransforms.rightSaber);
}

void Replay::PlayerRecorder::WriteEvents(std::ofstream& output) {
    GetImportantEvents();

    Replay::FileUtils::WriteEvents(headEvents, Replay::PlayerEventTypes::headEventID, output);

    Replay::FileUtils::WriteEvents(leftSaberEvents, Replay::PlayerEventTypes::leftSaberEventID, output);
    
    Replay::FileUtils::WriteEvents(rightSaberEvents, Replay::PlayerEventTypes::rightSaberEventID, output);
    log("Average saber events per second per hand: %f", (float)((rightSaberEvents.size() + leftSaberEvents.size()) / 2) / playerEvents[playerEvents.size() - 1].time);
}