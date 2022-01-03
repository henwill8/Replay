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

        static GlobalNamespace::Saber* GetSaberForType(GlobalNamespace::SaberType saberType) {
            return saberType == saberManager->leftSaber->saberType->saberType ? saberManager->leftSaber : saberManager->rightSaber;
        }

        // Code from GameNoteController.HandleCut
        static GlobalNamespace::ISaberSwingRatingCounter* GetOrSpawnSaberSwingRatingCounter(GlobalNamespace::Saber* saber, GlobalNamespace::GameNoteController* noteController, float beforeCutRating = 0.0f, float afterCutRating = 0.0f) {
            auto * saberSwingRatingCounter = noteController->saberSwingRatingCounterPool->Spawn();
            // saberSwingRatingCounter->Init(saber->movementData, noteController->noteTransform, !noteController->noteData->skipBeforeCutScoring, !noteController->noteData->skipAfterCutScoring);
            
            saberSwingRatingCounter->beforeCutRating = beforeCutRating;
            saberSwingRatingCounter->afterCutRating = afterCutRating;

            GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver* didFinishReceiver = reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounterDidFinishReceiver*>(noteController);
            saberSwingRatingCounter->RegisterDidFinishReceiver(didFinishReceiver);

            GlobalNamespace::ISaberSwingRatingCounter* swingRatingCounter = reinterpret_cast<GlobalNamespace::ISaberSwingRatingCounter*>(saberSwingRatingCounter);
            didFinishReceiver->HandleSaberSwingRatingCounterDidFinish(swingRatingCounter);

            return swingRatingCounter;
        }
    };

}
