#include "Recording/ReplayRecorder.hpp"

Replay::ReplayRecorder::ReplayRecorder() {
    tempFile = std::ofstream(tempFilePath, std::ios::binary);
}