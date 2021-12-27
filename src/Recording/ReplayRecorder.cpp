#include "Recording/ReplayRecorder.hpp"

#include "rapidjson/document.h"
#include "rapidjson/stringbuffer.h"
#include <rapidjson/writer.h>
#include <string.h>

using namespace rapidjson;

void Replay::ReplayRecorder::Init() {
    log("Setting up Replay Recorder");
    playerRecorder = Replay::PlayerRecorder();
    noteEventRecorder = Replay::NoteEventRecorder();
    obstacleEventRecorder = Replay::ObstacleEventRecorder();
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

    // TEMPORARY, probably move to file utils
    Document metadata;
    metadata.SetObject();

    rapidjson::Document::AllocatorType& allocator = metadata.GetAllocator();

    Value modifiers(kArrayType);
    modifiers.PushBack("NF", allocator); // Probably make method to take modifier string and return initials for it
    modifiers.PushBack("SC", allocator);
    modifiers.PushBack("GN", allocator);
    metadata.AddMember("Modifiers", modifiers, allocator);

    Value playerOptions(kObjectType);
    playerOptions.AddMember("LH", true, allocator);
    playerOptions.AddMember("Height", 1.7f, allocator);
    metadata.AddMember("Player Options", playerOptions, allocator);

    StringBuffer buffer;
    Writer<StringBuffer> writer(buffer);
    metadata.Accept(writer);
    const char* metadataString = buffer.GetString();

    unsigned int metadataLength = (int) strlen(metadataString);
    output.write(reinterpret_cast<const char*>(&metadataLength), sizeof(unsigned int));

    output.write(metadataString, strlen(metadataString));

    playerRecorder.WriteEvents(output);

    noteEventRecorder.WriteCutEvents(output);
    noteEventRecorder.WriteMissEvents(output);

    obstacleEventRecorder.WriteEvents(output);
}