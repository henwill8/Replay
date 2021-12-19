#include "Recording/PlayerRecorder.hpp"

void Replay::PlayerRecorder::AddEvent(PlayerTransforms playerTransforms) {
    float songTime;//TODO: Set up class to get this
    PlayerEvent event{songTime, playerTransforms};

    event.Write(recorder.tempFile);
}

Replay::PlayerTransforms Replay::PlayerRecorder::TransformsToPlayerTransforms(UnityEngine::Transform* head, UnityEngine::Transform* leftSaber, UnityEngine::Transform* rightSaber) {
    EulerTransform eulerHead{head->get_position(), head->get_eulerAngles()};
    EulerTransform eulerLeftSaber{leftSaber->get_position(), leftSaber->get_eulerAngles()};
    EulerTransform eulerRightSaber{rightSaber->get_position(), rightSaber->get_eulerAngles()};

    return PlayerTransforms{eulerHead, eulerLeftSaber, eulerRightSaber};
}