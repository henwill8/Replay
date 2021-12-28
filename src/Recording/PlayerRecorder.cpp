#include "Recording/PlayerRecorder.hpp"

void Replay::PlayerRecorder::AddEvent(PlayerEventTypes::PlayerTransforms const& playerTransforms) {
    float songTime = SongUtils::GetSongTime();
    if(!events.empty()) {
        if(songTime == events[events.size() - 1].time) return;
    }

    time += UnityEngine::Time::get_deltaTime();
    if(time >= 1.0f/(float)eventsPerSecond) {
        events.emplace_back(songTime, playerTransforms);
        
        time -= 1.0f/(float)eventsPerSecond;
    }
}

void Replay::PlayerRecorder::WriteEvents(std::ofstream& output) {
    Replay::FileUtils::WriteEvents(events, Replay::PlayerEventTypes::eventID, output);
}

PlayerEventTypes::PlayerTransforms Replay::PlayerRecorder::TransformsToPlayerTransforms(UnityEngine::Transform* head, UnityEngine::Transform* leftSaber, UnityEngine::Transform* rightSaber) {
    PlayerEventTypes::EulerTransform eulerHead{head->get_position(), head->get_eulerAngles()};
    PlayerEventTypes::EulerTransform eulerLeftSaber{leftSaber->get_position(), leftSaber->get_eulerAngles()};
    PlayerEventTypes::EulerTransform eulerRightSaber{rightSaber->get_position(), rightSaber->get_eulerAngles()};

    return PlayerEventTypes::PlayerTransforms{eulerHead, eulerLeftSaber, eulerRightSaber};
}