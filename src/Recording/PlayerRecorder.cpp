#include "Recording/PlayerRecorder.hpp"

#include "Utils/MathUtils.hpp"

void Replay::PlayerRecorder::AddEvent(PlayerEventTypes::PlayerTransforms const& playerTransforms) {
    float songTime = SongUtils::GetSongTime();
    if(!playerEvents.empty() && songTime == playerEvents[playerEvents.size() - 1].time) return;
    
    playerEvents.emplace_back(songTime, playerTransforms, SaberUtils::saberManager->leftSaber->saberBladeTopPos, SaberUtils::saberManager->rightSaber->saberBladeTopPos);
}

void Replay::PlayerRecorder::AddSaberEvent(GlobalNamespace::SaberType saberType) {
    //Not in the mood rn to figure out how to not hard code this, forgive me
    int lastAddedEventIndex = playerEvents.size() - 1;
    if(saberType == SaberType::SaberA) {
        leftSaberEvents.emplace_back(playerEvents[lastAddedEventIndex].time, playerEvents[lastAddedEventIndex].playerTransforms.leftSaber);
    } else {
        rightSaberEvents.emplace_back(playerEvents[lastAddedEventIndex].time, playerEvents[lastAddedEventIndex].playerTransforms.rightSaber);
    }
}

void Replay::PlayerRecorder::AddSaberMovement(GlobalNamespace::BladeMovementDataElement bladeMovement, GlobalNamespace::SaberType saberType) {
    //Not in the mood rn to figure out how to not hard code this, forgive me
    float angleNeeded = 30;
    float distanceNeeded = 0.5f;
    if(saberType == SaberType::SaberA) {
        if(!addedLeftSaberData && bladeMovement.segmentNormal != UnityEngine::Vector3::get_zero()) {
            leftSaberLastSavedMovement = bladeMovement;
            addedLeftSaberData = true;
            return;
        }

        float angle = UnityEngine::Vector3::Angle(bladeMovement.segmentNormal, leftSaberLastSavedMovement.segmentNormal);
        if(angle >= angleNeeded) {
            leftSaberLastSavedMovement = bladeMovement;
            AddSaberEvent(saberType);
            return;
        }

        float distance = UnityEngine::Vector3::Distance(bladeMovement.topPos, leftSaberLastSavedMovement.topPos);
        if(distance > distanceNeeded) {
            leftSaberLastSavedMovement = bladeMovement;
            AddSaberEvent(saberType);
            return;
        }
    } else {
        if(!addedRightSaberData && bladeMovement.segmentNormal != UnityEngine::Vector3::get_zero()) {
            rightSaberLastSavedMovement = bladeMovement;
            addedRightSaberData = true;
            return;
        }

        float angle = UnityEngine::Vector3::Angle(bladeMovement.segmentNormal, rightSaberLastSavedMovement.segmentNormal);
        if(angle >= angleNeeded) {
            rightSaberLastSavedMovement = bladeMovement;
            AddSaberEvent(saberType);
            return;
        }

        float distance = UnityEngine::Vector3::Distance(bladeMovement.topPos, rightSaberLastSavedMovement.topPos);
        if(distance > distanceNeeded) {
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

    // UnityEngine::Vector3 averageDirection = UnityEngine::Vector3::get_zero();
    // UnityEngine::Vector3 lastAngle = UnityEngine::Vector3::get_zero();
    // // int lastIndex = 0;
    // for(int i = 1; i < playerEvents.size() - 1; i++) {
    //     UnityEngine::Vector3 currentChange = playerEvents[i + 1].rightSaberTopPos - playerEvents[i].rightSaberTopPos;
    //     UnityEngine::Vector3 changeAngle = currentChange.get_normalized() * 360;
    //     averageDirection = MathUtils::Lerp(averageDirection, changeAngle, 0.5f);

    //     float distance = UnityEngine::Quaternion::Angle(UnityEngine::Quaternion::Euler(changeAngle), UnityEngine::Quaternion::Euler(averageDirection));
    //     if(distance > 90) {
    //         rightSaberEvents.emplace_back(playerEvents[i].time, playerEvents[i].playerTransforms.rightSaber);
    //     }

    //     lastAngle = changeAngle;
    // }

    // UnityEngine::Vector3 lastChange = UnityEngine::Vector3::get_zero();
    // lastAngle = UnityEngine::Vector3::get_zero();
    // for(int i = 1; i < playerEvents.size() - 1; i++) {
    //     UnityEngine::Vector3 currentChange = Replay::MathUtils::EulerAnglesDifference(playerEvents[i].playerTransforms.leftSaber.rotation, playerEvents[i + 1].playerTransforms.leftSaber.rotation);
    //     UnityEngine::Vector3 changeAngle = UnityEngine::Vector3::Normalize(currentChange);
    //     log("%f %f %f %f", changeAngle.x, changeAngle.y, changeAngle.z, changeAngle.get_magnitude());

    //     float distance = UnityEngine::Quaternion::Angle(UnityEngine::Quaternion::Euler(changeAngle), UnityEngine::Quaternion::Euler(lastAngle));
    //     log("%f %f", distance, UnityEngine::Vector3::Angle(changeAngle, lastAngle));
    //     if(distance > 90) {
    //         leftSaberEvents.emplace_back(playerEvents[i].time, playerEvents[i].playerTransforms.leftSaber);
    //     }

    //     lastChange = currentChange;
    //     lastAngle = changeAngle;
    // }

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
    log("Events per second: %f", (float)((rightSaberEvents.size() + leftSaberEvents.size()) / 2) / playerEvents[playerEvents.size() - 1].time);
}