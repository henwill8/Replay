#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/NoteData.hpp"
#include "fstream"
#include "EventTypes.hpp"
#include "Utils/SongUtils.hpp"
#include "Utils/ReplayUtils.hpp"
#include "Utils/FileUtils.hpp"
#include <functional>

using namespace Replay::NoteEventTypes;
using namespace GlobalNamespace;

namespace Replay {
    class NoteEventRecorder {
    private:
        std::vector<StoredCutEvent> cutEvents;
        std::vector<NoteCutEvent> finishedCutEvents;
        std::vector<NoteMissEvent> missEvents;
    public:
        void AddCutEvent(NoteController* noteController, ByRef<NoteCutInfo> noteCutInfo);
        void FinalizeCutEvent(void* swingRatingPointer);

        void AddMissEvent(NoteController* noteController);
        
        void WriteEvents(std::ofstream& output);

        float GetAverageCutScore();
    };
}