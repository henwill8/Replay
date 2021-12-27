#include "Replaying/Replayer.hpp"

#include "rapidjson/document.h"
#include <string.h>

using namespace rapidjson;

void Replay::Replayer::Init() {
    log("Setting up Replayer");
    playerReplayer = Replay::PlayerReplayer();
    noteEventReplayer = Replay::NoteEventReplayer();
    noteEventReplayer.Init();
    obstacleEventReplayer = Replay::ObstacleEventReplayer();
    
    ReadReplayFile(Replay::ReplayUtils::GetReplayFilePath());
}

void Replay::Replayer::ReadReplayFile(std::string_view path) {
    log("Reading Replay file at %s", path.data());
    std::ifstream input = std::ifstream(path, std::ios::binary);

    if(input.is_open()) {
        int magicBytes;
        input.read(reinterpret_cast<char*>(&magicBytes), sizeof(int));
        if(magicBytes != replayMagicBytes) {
            log("INCORRECT MAGIC BYTES");
            return;
        }

        byte version;
        input.read(reinterpret_cast<char*>(&version), sizeof(byte));
        log("File version is %i", version);

        int metadataLength;
        input.read(reinterpret_cast<char*>(&metadataLength), sizeof(int));

        char* metadataString = new char[metadataLength];
        input.read(metadataString, (size_t) metadataLength);
        log("%s", metadataString);

        Document metadata;
        metadata.Parse(metadataString);

        free(metadataString);

        byte eventID;
        while(input.read(reinterpret_cast<char*>(&eventID), sizeof(byte))) {
            unsigned int eventsLength;
            input.read(reinterpret_cast<char*>(&eventsLength), sizeof(unsigned int));
            
            log("Event %i has %i events", eventID, eventsLength); // Add log for size in bytes of events

            int startByte = input.tellg();

            switch(eventID) {
                case PlayerEventTypes::eventID:
                    playerReplayer.ReadEvents(input, eventsLength);
                    break;
                case NoteEventTypes::cutEventID:
                    noteEventReplayer.ReadCutEvents(input, eventsLength);
                    break;
                case NoteEventTypes::missEventID:
                    noteEventReplayer.ReadMissEvents(input, eventsLength);
                    break;
                case ObstacleEventTypes::eventID:
                    obstacleEventReplayer.ReadEvents(input, eventsLength);
                    break;
            }

            int endByte = input.tellg();
            int bytes = endByte - startByte;
            float kiloBytes = (float) bytes / 1024.0f;
            float megaBytes = (float) kiloBytes / 1024.0f;
            log("Length of %i bytes (%f KB or %f MB)", bytes, kiloBytes, megaBytes);
        }
    } else {
        log("COULD NOT FIND REPLAY FILE");
    }
}