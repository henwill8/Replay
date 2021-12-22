#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/NoteData.hpp"
#include "fstream"
#include "EventTypes.hpp"
#include "SongData.hpp"
#include "ReplayUtils.hpp"
#include <functional>

using namespace Replay::NoteEventTypes;
using namespace GlobalNamespace;

namespace Replay {
    class NoteEventRecorder {
    private:
        std::vector<NoteCutEvent> cutEvents;
        std::vector<NoteMissEvent> missEvents;
    public:
        void AddCutEvent(NoteController* noteController, ByRef<NoteCutInfo> noteCutInfo);
        void WriteCutEvents(std::ofstream& output);

        void AddMissEvent(NoteController* noteController);
        void WriteMissEvents(std::ofstream& output);
    };
}