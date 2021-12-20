#include "Recording/PlayerRecorder.hpp"

Replay::PlayerRecorder::PlayerRecorder() {
    // Is any setup needed?
}

void Replay::PlayerRecorder::AddEvent(PlayerTransforms playerTransforms) {
    log("ADDING EVENT");
    PlayerEvent event{Replay::SongData::GetSongTime(), playerTransforms};

    events.push_back(event);
}

void Replay::PlayerRecorder::WriteEvents(std::ofstream& output) {
    log("WRITING EVENTS");

    int eventCount = (int)events.size();

    //Write events header
    output.write(reinterpret_cast<const char*>(&eventID), sizeof(byte));
    output.write(reinterpret_cast<const char*>(&eventSize), sizeof(int));
    output.write(reinterpret_cast<const char*>(&eventCount), sizeof(int));

    //Write data
    for(PlayerEvent event : events) {
        event.Write(output);
    }
}

Replay::PlayerTransforms Replay::PlayerRecorder::TransformsToPlayerTransforms(UnityEngine::Transform* head, UnityEngine::Transform* leftSaber, UnityEngine::Transform* rightSaber) {
    EulerTransform eulerHead{head->get_position(), head->get_eulerAngles()};
    EulerTransform eulerLeftSaber{leftSaber->get_position(), leftSaber->get_eulerAngles()};
    EulerTransform eulerRightSaber{rightSaber->get_position(), rightSaber->get_eulerAngles()};

    return PlayerTransforms{eulerHead, eulerLeftSaber, eulerRightSaber};
}