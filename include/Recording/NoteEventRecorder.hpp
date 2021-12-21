#pragma once
#include "static-defines.hpp"

#include "UnityEngine/Transform.hpp"
#include "UnityEngine/Time.hpp"
#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "fstream"
#include "EventTypes.hpp"
#include "SongData.hpp"
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

        static DifferentiatingNoteData GetNoteDataFromController(NoteController* noteController);
    };
}