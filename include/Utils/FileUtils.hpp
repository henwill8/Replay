#pragma once
#include "static-defines.hpp"

#include <fstream>

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
    };
}