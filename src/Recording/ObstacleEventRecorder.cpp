#include "Recording/ObstacleEventRecorder.hpp"

void Replay::ObstacleEventRecorder::AddEvent(GlobalNamespace::GameEnergyCounter* gameEnergyCounter) {
    int playerObstacleInteractionCount = gameEnergyCounter->playerHeadAndObstacleInteraction->intersectingObstacles->get_Count();
    if(playerObstacleInteractionCount == lastInteractionCount) return;

    float songTime = SongUtils::GetSongTime();
    float energy = gameEnergyCounter->get_energy();

    events.emplace_back(songTime, energy);

    lastInteractionCount = playerObstacleInteractionCount;
}

void Replay::ObstacleEventRecorder::WriteEvents(std::ofstream& output) {
    Replay::FileUtils::WriteEvents(events, Replay::ObstacleEventTypes::eventID, output);
}