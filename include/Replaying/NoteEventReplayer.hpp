#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/SharedCoroutineStarter.hpp"
#include "fstream"
#include "EventTypes.hpp"
#include "Utils/SongUtils.hpp"
#include "Utils/ReplayUtils.hpp"
#include <functional>
#include "System/Collections/IEnumerator.hpp"
#include "custom-types/shared/coroutine.hpp"
#include "Utils/SaberUtils.hpp"

#include "UnityEngine/Resources.hpp"
#include "GlobalNamespace/GameNoteController.hpp"
#include "GlobalNamespace/Saber.hpp"
#include "GlobalNamespace/SaberManager.hpp"
#include "GlobalNamespace/SaberType.hpp"
#include "GlobalNamespace/SaberTypeObject.hpp"
#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/ColorType.hpp"

// Using namespace in headers is icky
using namespace Replay::NoteEventTypes;

namespace Replay {
    struct ActiveNoteCutEvent {
        NoteController* note;
        Saber* saber;
        NoteCutEvent event;

        constexpr ActiveNoteCutEvent() = default;

        constexpr ActiveNoteCutEvent(NoteController *note, Saber *saber, const NoteCutEvent &event) : note(note), saber(saber),
                                                                                            event(event) {}
    };

    struct ActiveNoteMissEvent {
        NoteController* note;
        NoteMissEvent event;

        constexpr ActiveNoteMissEvent() = default;

        constexpr ActiveNoteMissEvent(NoteController *note, const NoteMissEvent &event) : note(note), event(event) {}
    };

    struct EventToRun {
        float time;
        bool isCutEvent;
        int eventIndex;
        
        constexpr EventToRun() = default;

        constexpr EventToRun(float time, bool isCutEvent, int eventIndex) : time(time), isCutEvent(isCutEvent), eventIndex(eventIndex) {}

        bool operator < (const EventToRun& str) const {
            return (time < str.time);
        }

        bool operator > (const EventToRun& str) const {
            return (eventIndex > str.eventIndex);
        }
    };

    class NoteEventReplayer {
    private:
        custom_types::Helpers::Coroutine Update();
        GlobalNamespace::SaberManager* saberManager;

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