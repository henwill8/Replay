#include "Replaying/PlayerReplayer.hpp"

#include "Utils/MathUtils.hpp"

void Replay::PlayerReplayer::ReadHeadEvents(std::ifstream& input, int eventsLength) {
    for(int i = 0; i < eventsLength; i++) {
        headEvents.emplace_back(input);
    }
}

void Replay::PlayerReplayer::ReadLeftSaberEvents(std::ifstream& input, int eventsLength) {
    for(int i = 0; i < eventsLength; i++) {
        leftSaberEvents.emplace_back(input);
    }
}

void Replay::PlayerReplayer::ReadRightSaberEvents(std::ifstream& input, int eventsLength) {
    for(int i = 0; i < eventsLength; i++) {
        rightSaberEvents.emplace_back(input);
    }
}

void Replay::PlayerReplayer::SetPlayerTransforms(GlobalNamespace::PlayerTransforms* playerTransforms) {
    // Grossly hard coded, reminder to fix in future

    UnityEngine::Transform* origin = playerTransforms->useOriginParentTransformForPseudoLocalCalculations ? playerTransforms->originParentTransform : playerTransforms->headTransform->GetParent();

    headIndex = Replay::ReplayUtils::GetCurrentIndex(headEvents, headIndex);
    EulerTransformEvent event = headEvents[headIndex];

    UnityEngine::Transform* head = playerTransforms->headTransform;
    head->set_rotation(origin->get_rotation() * UnityEngine::Quaternion::Euler(event.transform.rotation));
    head->set_position(origin->TransformPoint(event.transform.position));

    leftSaberIndex = Replay::ReplayUtils::GetCurrentIndex(leftSaberEvents, leftSaberIndex);
    event = leftSaberEvents[leftSaberIndex];
    EulerTransformEvent nextEvent = leftSaberEvents[std::min(leftSaberIndex + 1, (int)leftSaberEvents.size() - 1)];
    
    float lerpAmount = std::max(0.0f, std::min(1.0f, Replay::ReplayUtils::LerpAmountBetweenEvents(event, nextEvent)));

    UnityEngine::Transform* leftSaber = playerTransforms->leftHandTransform;
    leftSaber->set_rotation(origin->get_rotation() * Replay::MathUtils::LerpEulerAngles(event.transform.rotation, nextEvent.transform.rotation, lerpAmount));
    leftSaber->set_position(origin->TransformPoint(Replay::MathUtils::Lerp(event.transform.position, nextEvent.transform.position, lerpAmount)));
    
    rightSaberIndex = Replay::ReplayUtils::GetCurrentIndex(rightSaberEvents, rightSaberIndex);
    event = rightSaberEvents[rightSaberIndex];
    nextEvent = rightSaberEvents[std::min(rightSaberIndex + 1, (int)rightSaberEvents.size() - 1)];

    lerpAmount = std::max(0.0f, std::min(1.0f, Replay::ReplayUtils::LerpAmountBetweenEvents(event, nextEvent)));

    UnityEngine::Transform* rightSaber = playerTransforms->rightHandTransform;
    rightSaber->set_rotation(origin->get_rotation() * Replay::MathUtils::LerpEulerAngles(event.transform.rotation, nextEvent.transform.rotation, lerpAmount));
    rightSaber->set_position(origin->TransformPoint(Replay::MathUtils::Lerp(event.transform.position, nextEvent.transform.position, lerpAmount)));
}