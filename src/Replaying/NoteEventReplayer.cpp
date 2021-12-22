#include "Replaying/NoteEventReplayer.hpp"

void Replay::NoteEventReplayer::Init() {
    GlobalNamespace::SharedCoroutineStarter::get_instance()->StartCoroutine(reinterpret_cast<System::Collections::IEnumerator*>(custom_types::Helpers::CoroutineHelper::New(Update())));
}

void Replay::NoteEventReplayer::ReadCutEvents(std::ifstream& input, int eventsLength) {
    for(int i = 0; i < eventsLength; i++) {
        NoteCutEvent event;
        event.Read(input);

        cutEvents.emplace_back(event);
    }
}

void Replay::NoteEventReplayer::ReadMissEvents(std::ifstream& input, int eventsLength) {
    for(int i = 0; i < eventsLength; i++) {
        NoteMissEvent event;
        event.Read(input);

        missEvents.emplace_back(event);
    }
}

// lazy
static const Il2CppType * NoteCutInfoT(ByRef<NoteCutInfo> info) {
    return il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<NoteCutInfo>>::get();
//    return il2cpp_utils::il2cpp_type_check::il2cpp_arg_type<ByRef<NoteCutInfo>>::get(info);
}

//GlobalNamespace::NoteController::
void SendNoteWasCutEvent(GlobalNamespace::NoteController* self, GlobalNamespace::NoteCutInfo noteCutInfo) {
    static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteController::SendNoteWasCutEvent");
    static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(self, "SendNoteWasCutEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::NoteCutInfoT(noteCutInfo)})));
    ::il2cpp_utils::RunMethodRethrow<void, false>(self, ___internal__method, byref(noteCutInfo));
}

[[noreturn]] custom_types::Helpers::Coroutine Replay::NoteEventReplayer::Update() {
    while(true) {
        float songTime = Replay::SongData::GetSongTime();



        for (auto eventIt = activeCutEvents.begin(); eventIt != activeCutEvents.end();) {
            auto const& eventData = *eventIt;
            if(songTime > eventData.event.time) {
                log("%p", il2cpp_utils::ExtractValue(byref(eventData.event.noteCutInfo)));
                log("%p", &byref(eventData.event.noteCutInfo).heldRef);

                SendNoteWasCutEvent(eventData.note, eventData.event.noteCutInfo);
                // activeCutEvents[i].note->SendNoteWasCutEvent(byref(activeCutEvents[i].event.noteCutInfo));


                // will return the next iterator, making this safe
                eventIt = activeCutEvents.erase(eventIt);
            } else {
                eventIt++;
            }
        }


        for (auto eventIt = activeMissEvents.begin(); eventIt != activeMissEvents.end();) {
            auto const& eventData = *eventIt;
            if(songTime > eventData.event.time) {
                eventData.note->SendNoteWasMissedEvent();

                eventIt = activeMissEvents.erase(eventIt);
            } else {
                eventIt++;
            }
        }

        co_yield nullptr;
    }

    co_return;
}