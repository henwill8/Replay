#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/SharedCoroutineStarter.hpp"
#include "fstream"
#include "EventTypes.hpp"
#include "SongData.hpp"
#include <functional>
#include "System/Collections/IEnumerator.hpp"
#include "custom-types/shared/coroutine.hpp"

using namespace Replay::NoteEventTypes;

namespace Replay {
    struct ActiveNoteCutEvent {
        NoteController* note;
        NoteCutEvent event;
    };

    struct ActiveNoteMissEvent {
        NoteController* note;
        NoteMissEvent event;
    };

    class NoteEventReplayer {
    private:
        custom_types::Helpers::Coroutine Update();
    public:
        void Init();

        std::vector<NoteCutEvent> cutEvents;
        std::vector<ActiveNoteCutEvent> activeCutEvents;

        std::vector<NoteMissEvent> missEvents;
        std::vector<ActiveNoteMissEvent> activeMissEvents;

        void ReadCutEvents(std::ifstream& input, int eventsLength);

        void ReadMissEvents(std::ifstream& input, int eventsLength);
    };
}