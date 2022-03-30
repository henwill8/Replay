#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/CutScoreBuffer.hpp"
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
        std::vector<NoteCutEvent> cutEvents;
        std::vector<NoteMissEvent> missEvents;

        float frameTime = 0;
        int eventsInFrame = 0;

        float GetEventSaveTime(float songTime);
    public:
        std::vector<std::pair<float, CutScoreBuffer*>> cutTimes;

        void AddCutEvent(CutScoreBuffer* cutScoreBuffer, float time);
        void AddMissEvent(NoteController* noteController);
        
        void WriteEvents(std::ofstream& output);

        float GetAverageCutScore();
    };
}