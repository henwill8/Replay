#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/SharedCoroutineStarter.hpp"
#include "fstream"
#include "EventTypes.hpp"
#include "SongData.hpp"
#include "ReplayUtils.hpp"
#include <functional>
#include "System/Collections/IEnumerator.hpp"
#include "custom-types/shared/coroutine.hpp"

using namespace Replay::NoteEventTypes;

namespace Replay {
    struct ActiveNoteCutEvent {
        NoteController* note;
        NoteCutEvent event;

        ActiveNoteCutEvent() = default;

        ActiveNoteCutEvent(NoteController *note, const NoteCutEvent &event) : note(note), event(event) {}
    };

    struct ActiveNoteMissEvent {
        NoteController* note;
        NoteMissEvent event;

        ActiveNoteMissEvent() = default;

        ActiveNoteMissEvent(NoteController *note, const NoteMissEvent &event) : note(note), event(event) {}
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

        void AddActiveEvents(GlobalNamespace::NoteController* noteController);

        void ReadCutEvents(std::ifstream& input, int eventsLength);

        void ReadMissEvents(std::ifstream& input, int eventsLength);
    };
}