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
#include "GlobalNamespace/ISaberSwingRatingCounter.hpp"

namespace Replay {

    struct SaberUtils {
        inline static GlobalNamespace::SaberManager* saberManager;

        static GlobalNamespace::Saber* GetSaberForType(GlobalNamespace::SaberType saberType) {
            return saberType == saberManager->leftSaber->saberType->saberType ? saberManager->leftSaber : saberManager->rightSaber;
        }
    };

}
