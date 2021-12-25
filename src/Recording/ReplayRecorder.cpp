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

    byte version = fileVersion;
    output.write(reinterpret_cast<const char*>(&version), sizeof(byte));

    std::string metadataJSON = "temporary, make actual json later";

    unsigned int metadataLength;

    playerRecorder.WriteEvents(output);

    noteEventRecorder.WriteCutEvents(output);
    noteEventRecorder.WriteMissEvents(output);
}