#pragma once
#include "static-defines.hpp"

#include <fstream>
#include "rapidjson/document.h"
#include "rapidjson/stringbuffer.h"
#include <rapidjson/writer.h>
#include <string.h>

namespace Replay {
    class FileUtils {
    public:
        template <typename T>
        static void WriteEvents(std::vector<T> events, byte eventID, std::ofstream& output) {
            unsigned int eventCount = (int)events.size();

            if(eventCount == 0) return;

            //Write events header
            output.write(reinterpret_cast<const char*>(&eventID), sizeof(byte));
            output.write(reinterpret_cast<const char*>(&eventCount), sizeof(unsigned int));

            //Write data
            for(T event : events) {
                event.Write(output);
            }
        }

        static rapidjson::Document GetMetadataFromReplayFile(std::string_view path) {
            log("Reading Replay file metadata at %s", path.data());
            std::ifstream input = std::ifstream(path, std::ios::binary);

            rapidjson::Document metadata;

            if(input.is_open()) {
                int magicBytes;
                input.read(reinterpret_cast<char*>(&magicBytes), sizeof(int));
                if(magicBytes != replayMagicBytes) {
                    log("INCORRECT MAGIC BYTES");
                    return metadata;
                }

                byte version;
                input.read(reinterpret_cast<char*>(&version), sizeof(byte));

                int metadataLength;
                input.read(reinterpret_cast<char*>(&metadataLength), sizeof(int));

                char* metadataString = new char[metadataLength];
                input.read(metadataString, (size_t) metadataLength);

                metadata.Parse(metadataString);

                free(metadataString);
            } else {
                log("COULD NOT FIND REPLAY FILE");
            }

            return metadata;
        }
    };
}