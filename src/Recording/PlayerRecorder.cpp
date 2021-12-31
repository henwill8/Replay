#include "Recording/PlayerRecorder.hpp"

void Replay::PlayerRecorder::AddEvent(PlayerEventTypes::PlayerTransforms const& playerTransforms) {
    // In future, save all events and then at the end decide which events are useful for each

    float songTime = SongUtils::GetSongTime();
    
    time += UnityEngine::Time::get_deltaTime();
    if(time >= 1.0f/(float)eventsPerSecond) {
        headEvents.emplace_back(songTime, playerTransforms.head);
        leftSaberEvents.emplace_back(songTime, playerTransforms.leftSaber);
        rightSaberEvents.emplace_back(songTime, playerTransforms.rightSaber);
        
        time -= 1.0f/(float)eventsPerSecond;
    }
}

void Replay::PlayerRecorder::WriteEvents(std::ofstream& output) {
    Replay::FileUtils::WriteEvents(headEvents, Replay::PlayerEventTypes::headEventID, output);

    Replay::FileUtils::WriteEvents(leftSaberEvents, Replay::PlayerEventTypes::leftSaberEventID, output);

    Replay::FileUtils::WriteEvents(rightSaberEvents, Replay::PlayerEventTypes::rightSaberEventID, output);
}

PlayerEventTypes::PlayerTransforms Replay::PlayerRecorder::TransformsToPlayerTransforms(UnityEngine::Transform* head, UnityEngine::Transform* leftSaber, UnityEngine::Transform* rightSaber) {
    PlayerEventTypes::EulerTransform eulerHead{head->get_position(), head->get_eulerAngles()};
    PlayerEventTypes::EulerTransform eulerLeftSaber{leftSaber->get_position(), leftSaber->get_eulerAngles()};
    PlayerEventTypes::EulerTransform eulerRightSaber{rightSaber->get_position(), rightSaber->get_eulerAngles()};

    return PlayerEventTypes::PlayerTransforms{eulerHead, eulerLeftSaber, eulerRightSaber};
}