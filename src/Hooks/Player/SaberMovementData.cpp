#include "static-defines.hpp"

#include "GlobalNamespace/SaberMovementData.hpp"
#include "GlobalNamespace/SaberType.hpp"
#include "Recording/PlayerRecorder.hpp"
#include "EventTypes.hpp"
#include "ReplayManager.hpp"
#include "Utils/SaberUtils.hpp"
#include "fstream"

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(SaberMovementData_AddNewData, &SaberMovementData::AddNewData, void, SaberMovementData* self, UnityEngine::Vector3 topPos, UnityEngine::Vector3 bottomPos, float time) {
    SaberMovementData_AddNewData(self, topPos, bottomPos, time);

    if(ReplayManager::replayState == ReplayState::RECORDING) {
        SaberType saberType = SaberType::SaberA;
        if(self == SaberUtils::saberManager->rightSaber->get_movementData()) saberType = SaberType::SaberB;
         
        ReplayManager::recorder.playerRecorder.AddSaberMovement(self->get_lastAddedData(), saberType);
    }
}

void SaberMovementDataHook(Logger& logger) {
    INSTALL_HOOK(logger, SaberMovementData_AddNewData);
}

ReplayInstallHooks(SaberMovementDataHook);