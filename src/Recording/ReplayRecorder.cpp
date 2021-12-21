#include "Recording/ReplayRecorder.hpp"

void Replay::ReplayRecorder::Init() {
    log("Setting up Replay Recorder");
    playerRecorder = Replay::PlayerRecorder();
    noteEventRecorder = Replay::NoteEventRecorder();
}

void Replay::ReplayRecorder::StopRecording() {
    log("Stopping recording");

    WriteReplayFile(ReplayUtils::GetReplayFilePath()); // TODO: Check to make sure file should be written
}

void Replay::ReplayRecorder::WriteReplayFile(std::string path) {
    log("Writing Replay file at %s", path.c_str());
    std::filesystem::create_directories(Replay::ReplayUtils::GetReplaysDirectory());

    std::ofstream output = std::ofstream(path, std::ios::binary);

    int magicBytes = replayMagicBytes;
    output.write(reinterpret_cast<const char*>(&magicBytes), sizeof(int));

    playerRecorder.WriteEvents(output);
}