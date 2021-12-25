#include "Replaying/Replayer.hpp"

void Replay::Replayer::Init() {
    log("Setting up Replayer");
    playerReplayer = Replay::PlayerReplayer();
    noteEventReplayer = Replay::NoteEventReplayer();
    noteEventReplayer.Init();
    
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

        byte eventID;
        while(input.read(reinterpret_cast<char*>(&eventID), sizeof(byte))) {
            unsigned int eventsLength;
            input.read(reinterpret_cast<char*>(&eventsLength), sizeof(unsigned int));
            
            log("Event %i has %i events", eventID, eventsLength);

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
            }
        }
    } else {
        log("COULD NOT FIND REPLAY FILE");
    }
}