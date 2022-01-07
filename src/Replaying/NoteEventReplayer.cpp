#include "Replaying/NoteEventReplayer.hpp"

void Replay::NoteEventReplayer::Init() {
    GlobalNamespace::SharedCoroutineStarter::get_instance()->StartCoroutine(reinterpret_cast<System::Collections::IEnumerator*>(custom_types::Helpers::CoroutineHelper::New(Update())));
}

void Replay::NoteEventReplayer::AddActiveEvents(GlobalNamespace::NoteController* noteController) {
    auto noteHash = Replay::ReplayUtils::GetNoteHash(noteController);

    for (auto eventIt = cutEvents.begin(); eventIt != cutEvents.end(); eventIt++) {
        auto const &noteCutEvent = *eventIt;

        if(noteHash == noteCutEvent.noteHash) {
            auto saber = SaberUtils::GetSaberForType(noteCutEvent.noteCutInfo.saberType);
            activeCutEvents.emplace_back(noteController, saber, noteCutEvent);

            cutEvents.erase(eventIt);

            return;
        }
    }

    for (auto eventIt = missEvents.begin(); eventIt != missEvents.end(); eventIt++) {
        auto const &noteMissEvent = *eventIt;

        if(noteHash == noteMissEvent.noteHash) {
            activeMissEvents.emplace_back(noteController, noteMissEvent);

            missEvents.erase(eventIt);

            return;
        }
    }
}

void Replay::NoteEventReplayer::ReadCutEvents(std::ifstream& input, int eventsLength) {
    for(int i = 0; i < eventsLength; i++) {
        cutEvents.emplace_back(input);
    }
}

void Replay::NoteEventReplayer::ReadMissEvents(std::ifstream& input, int eventsLength) {
    for(int i = 0; i < eventsLength; i++) {
        missEvents.emplace_back(input);
    }
}

static const Il2CppType * NoteCutInfoT(ByRef<NoteCutInfo> info) {
    return il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<NoteCutInfo>>::get();
}

//GlobalNamespace::NoteController::
void SendNoteWasCutEvent(GlobalNamespace::NoteController* self, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) {
    static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteController::SendNoteWasCutEvent");
    static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(self, "SendNoteWasCutEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::NoteCutInfoT(noteCutInfo)})));
    ::il2cpp_utils::RunMethodRethrow<void, false>(self, ___internal__method, noteCutInfo);
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-noreturn"
#pragma ide diagnostic ignored "EndlessLoop"
custom_types::Helpers::Coroutine Replay::NoteEventReplayer::Update() {
    while(SongUtils::inSong) {
        float songTime = Replay::SongUtils::GetSongTime();
        
        // Feel free to make this not terrible, just trying to run the events in order of time
        std::vector<EventToRun> eventsToRun;

        for(int i = 0; i < activeCutEvents.size(); i++) {
            float eventTime = activeCutEvents[i].event.time;
            if(songTime > eventTime) {
                eventsToRun.emplace_back(eventTime, true, i);
            }
        }

        for(int i = 0; i < activeMissEvents.size(); i++) {
            float eventTime = activeMissEvents[i].event.time;
            if(songTime > eventTime) {
                eventsToRun.emplace_back(eventTime, false, i);
            }
        }

        // I am truly sorry to whoever reads this code next, I am just doing the first thing that comes to mind
        std::sort(eventsToRun.begin(), eventsToRun.end());

        for(auto& eventToRun : eventsToRun) {
            if(eventToRun.isCutEvent) {
                auto& eventData = activeCutEvents[eventToRun.eventIndex];

                NoteCutInfo noteCutInfo;

                if(eventData.note->noteData->colorType == GlobalNamespace::ColorType::None) {
                    noteCutInfo = ReplayUtils::CreateNoteCutInfoFromSimple(eventData.event.noteCutInfo, nullptr);
                } else {
                    auto* gameNoteController = il2cpp_utils::cast<GameNoteController>(eventData.note);
                    GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter = SaberUtils::GetOrSpawnSaberSwingRatingCounter(eventData.saber, gameNoteController, eventData.event.swingRating.beforeCutRating, eventData.event.swingRating.afterCutRating);

                    noteCutInfo = ReplayUtils::CreateNoteCutInfoFromSimple(eventData.event.noteCutInfo, saberSwingRatingCounter);
                }

                SendNoteWasCutEvent(eventData.note, byref(noteCutInfo));
            } else {
                activeMissEvents[eventToRun.eventIndex].note->SendNoteWasMissedEvent();
            }
        }

        // Two sorts every frame... I am gonna scrape out my eyes
        std::sort(eventsToRun.begin(), eventsToRun.end(), std::greater<EventToRun>());

        for(auto& eventToRun : eventsToRun) {
            if(eventToRun.isCutEvent) {
                activeCutEvents.erase(activeCutEvents.begin() + eventToRun.eventIndex);
            } else {
                activeMissEvents.erase(activeMissEvents.begin() + eventToRun.eventIndex);
            }
        }

        co_yield nullptr;
    }
    co_return;
}
#pragma clang diagnostic pop


