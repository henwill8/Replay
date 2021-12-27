#include "static-defines.hpp"

#include "GlobalNamespace/GameEnergyCounter.hpp"
#include "ReplayManager.hpp"
#include "Recording/ObstacleEventRecorder.hpp"
#include "Replaying/ObstacleEventReplayer.hpp"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(GameEnergyCounter_LateUpdate, &GameEnergyCounter::LateUpdate, void, GameEnergyCounter* self) {
    GameEnergyCounter_LateUpdate(self);

    if(ReplayManager::replayState == ReplayState::RECORDING) {
        ReplayManager::recorder.obstacleEventRecorder.AddEvent(self);
    } else if(ReplayManager::replayState == ReplayState::REPLAYING) {
        if(ReplayManager::replayer.obstacleEventReplayer.ShouldSetEnergy()) {
            auto& obstacleReplayer = ReplayManager::replayer.obstacleEventReplayer;
            float energyChange = obstacleReplayer.events[obstacleReplayer.nextEventIndex - 1].energy - self->get_energy();
            
            self->ProcessEnergyChange(energyChange);
        }
    }
}

void GameEnergyCounterHook(Logger& logger) {
    INSTALL_HOOK(logger, GameEnergyCounter_LateUpdate);
}

ReplayInstallHooks(GameEnergyCounterHook);