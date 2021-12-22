#include "Recording/PlayerRecorder.hpp"

void Replay::PlayerRecorder::AddEvent(PlayerEventTypes::PlayerTransforms playerTransforms) {
    float songTime = SongData::GetSongTime();
    if(events.size() > 0) {
        if(songTime == events[events.size() - 1].time) return;
    }

    time += UnityEngine::Time::get_deltaTime();
    if(time >= 1.0f/(float)eventsPerSecond) {
        PlayerEventTypes::PlayerEvent event{songTime, playerTransforms};
        
        events.push_back(event);
        
        time -= 1.0f/(float)eventsPerSecond;
    }
}

void Replay::PlayerRecorder::WriteEvents(std::ofstream& output) {
    int eventCount = (int)events.size();

    //Write events header
    output.write(reinterpret_cast<const char*>(&Replay::PlayerEventTypes::eventID), sizeof(byte));
    output.write(reinterpret_cast<const char*>(&eventCount), sizeof(int));

    //Write data
    for(PlayerEventTypes::PlayerEvent event : events) {
        event.Write(output);
    }
}

PlayerEventTypes::PlayerTransforms Replay::PlayerRecorder::TransformsToPlayerTransforms(UnityEngine::Transform* head, UnityEngine::Transform* leftSaber, UnityEngine::Transform* rightSaber) {
    PlayerEventTypes::EulerTransform eulerHead{head->get_position(), head->get_eulerAngles()};
    PlayerEventTypes::EulerTransform eulerLeftSaber{leftSaber->get_position(), leftSaber->get_eulerAngles()};
    PlayerEventTypes::EulerTransform eulerRightSaber{rightSaber->get_position(), rightSaber->get_eulerAngles()};

    return PlayerEventTypes::PlayerTransforms{eulerHead, eulerLeftSaber, eulerRightSaber};
}