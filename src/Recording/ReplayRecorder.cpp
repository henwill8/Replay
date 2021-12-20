#include "Recording/ReplayRecorder.hpp"

Replay::ReplayRecorder::ReplayRecorder() {
    // TODO: Set up all Recorders in here
}

Replay::ReplayRecorder::~ReplayRecorder() {
    fileName = Replay::SongData::GetMapID() + replayFileExtension;

    WriteReplayFile(replaysDirectory + fileName); // TODO: Check to make sure file should be written
}

void Replay::ReplayRecorder::WriteReplayFile(std::string path) {
    std::ofstream output = std::ofstream(path, std::ios::binary);

    playerRecorder.WriteEvents(output);
    // TODO: Call all recorders writing functions
}