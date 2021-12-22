#include "Replaying/PlayerReplayer.hpp"

void Replay::PlayerReplayer::ReadEvents(std::ifstream& input, int eventsLength) {
    for(int i = 0; i < eventsLength; i++) {
        PlayerEvent event;
        event.Read(input);

        events.push_back(event);
    }
}

PlayerEvent Replay::PlayerReplayer::GetCurrentEvent() {
    index = Replay::ReplayUtils::GetCurrentIndex(events, index);
    return events[index];
}

void Replay::PlayerReplayer::SetPlayerTransforms(GlobalNamespace::PlayerTransforms* playerTransforms) {
    PlayerEvent event = GetCurrentEvent();
    PlayerEvent nextEvent = events[index + 1];
    
    float lerpAmount = Replay::ReplayUtils::LerpAmountBetweenEvents(event, nextEvent);

    UnityEngine::Transform* head = playerTransforms->headTransform;
    head->set_eulerAngles(event.player.head.rotation);
    head->set_position(event.player.head.position);

    UnityEngine::Transform* leftSaber = playerTransforms->leftHandTransform;
    leftSaber->set_rotation(Replay::ReplayUtils::LerpEulerAngles(event.player.leftSaber.rotation, nextEvent.player.leftSaber.rotation, lerpAmount));
    leftSaber->set_position(Replay::ReplayUtils::Lerp(event.player.leftSaber.position, nextEvent.player.leftSaber.position, lerpAmount));
    
    UnityEngine::Transform* rightSaber = playerTransforms->rightHandTransform;
    rightSaber->set_rotation(Replay::ReplayUtils::LerpEulerAngles(event.player.rightSaber.rotation, nextEvent.player.rightSaber.rotation, lerpAmount));
    rightSaber->set_position(Replay::ReplayUtils::Lerp(event.player.rightSaber.position, nextEvent.player.rightSaber.position, lerpAmount));
}