#include "ReplayManager.hpp"

Replay::ReplayState Replay::ReplayManager::temporaryState = Replay::ReplayState::NONE;

Replay::ReplayRecorder Replay::ReplayManager::recorder;

Replay::Replayer Replay::ReplayManager::replayer;