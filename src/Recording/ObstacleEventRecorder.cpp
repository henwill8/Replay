#include "Recording/ObstacleEventRecorder.hpp"

void Replay::ObstacleEventRecorder::AddEvent(GlobalNamespace::GameEnergyCounter* gameEnergyCounter) {
    bool playerObstacleInteracting = (bool) gameEnergyCounter->playerHeadAndObstacleInteraction->intersectingObstacles->get_Count();
    if(playerObstacleInteracting == lastInteracting) return;

    float songTime = SongUtils::GetSongTime();
    float energy = gameEnergyCounter->get_energy();

    events.emplace_back(songTime, energy);

    lastInteracting = playerObstacleInteracting;
}

void Replay::ObstacleEventRecorder::WriteEvents(std::ofstream& output) {
    Replay::FileUtils::WriteEvents(events, Replay::ObstacleEventTypes::eventID, output);
}
