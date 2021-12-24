#pragma once

#include "static-defines.hpp"

#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/GameNoteController.hpp"
#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/Saber.hpp"
#include "GlobalNamespace/SaberManager.hpp"
#include "GlobalNamespace/SaberTypeObject.hpp"
#include "GlobalNamespace/SaberType.hpp"
#include "GlobalNamespace/SaberSwingRatingCounter.hpp"
#include "GlobalNamespace/SaberSwingRatingCounter_Pool.hpp"
#include "GlobalNamespace/ISaberSwingRatingCounter.hpp"

namespace Replay {

    struct SaberUtils {
        inline static GlobalNamespace::SaberManager* saberManager;

        static GlobalNamespace::Saber* getSaberForType(GlobalNamespace::SaberType saberType) {
            return saberType == saberManager->leftSaber->saberType->saberType ? saberManager->leftSaber : saberManager->rightSaber;
        }

        // Code from GameNoteController.HandleCut
        static GlobalNamespace::ISaberSwingRatingCounter* getOrSpawnSaberSwingRatingCounter(GlobalNamespace::Saber* saber, GlobalNamespace::GameNoteController* noteController) {
            auto * saberSwingRatingCounter = noteController->saberSwingRatingCounterPool->Spawn();
            saberSwingRatingCounter->Init(saber->movementData, noteController->noteTransform, !noteController->noteData->skipBeforeCutScoring, !noteController->noteData->skipAfterCutScoring);
            saberSwingRatingCounter->RegisterDidFinishReceiver(reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver *>(noteController));

            return reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounter *>(saberSwingRatingCounter);
        }
    };

}