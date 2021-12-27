#include "Replaying/ObstacleEventReplayer.hpp"

void Replay::ObstacleEventReplayer::ReadEvents(std::ifstream& input, int eventsLength) {
    for(int i = 0; i < eventsLength; i++) {
        events.emplace_back(input);
    }
}

bool Replay::ObstacleEventReplayer::ShouldSetEnergy() {
    if(nextEventIndex >= events.size()) return false;

    auto& event = events[nextEventIndex];

    if(SongUtils::GetSongTime() > event.time) {
        nextEventIndex++;

        return true;
    }

    return false;
}