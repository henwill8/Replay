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
        NoteCutEvent event;

        constexpr ActiveNoteCutEvent() = default;

        constexpr ActiveNoteCutEvent(NoteController *note, const NoteCutEvent &event) : note(note), event(event) {}
    };

    struct SwingRatingData {
        int noteHash;
        SwingRating swingRating;

        constexpr SwingRatingData() = default;

        constexpr SwingRatingData(int noteHash, SwingRating swingRating) : noteHash(noteHash), swingRating(swingRating) {}
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

        std::vector<SwingRatingData> swingRatings;

        std::vector<NoteMissEvent> missEvents;
        std::vector<ActiveNoteMissEvent> activeMissEvents;

        void AddActiveEvents(GlobalNamespace::NoteController* noteController);

        void ReadCutEvents(std::ifstream& input, int eventsLength);

        void ReadMissEvents(std::ifstream& input, int eventsLength);
    };
}