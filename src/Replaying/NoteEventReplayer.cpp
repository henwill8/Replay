#include "Replaying/NoteEventReplayer.hpp"

void Replay::NoteEventReplayer::Init() {
    GlobalNamespace::SharedCoroutineStarter::get_instance()->StartCoroutine(reinterpret_cast<System::Collections::IEnumerator*>(custom_types::Helpers::CoroutineHelper::New(Update())));
}

void Replay::NoteEventReplayer::ReadCutEvents(std::ifstream& input, int eventsLength) {
    for(int i = 0; i < eventsLength; i++) {
        NoteCutEvent event;
        event.Read(input);

        cutEvents.push_back(event);
    }
}

void Replay::NoteEventReplayer::ReadMissEvents(std::ifstream& input, int eventsLength) {
    for(int i = 0; i < eventsLength; i++) {
        NoteMissEvent event;
        event.Read(input);

        missEvents.push_back(event);
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

custom_types::Helpers::Coroutine Replay::NoteEventReplayer::Update() {
    while(true) {
        float songTime = Replay::SongData::GetSongTime();

        std::vector<int> cutDeleteList;

        for(int i = 0; i < activeCutEvents.size(); i++) {
            if(songTime > activeCutEvents[i].event.time) {
                log("%p", il2cpp_utils::ExtractValue(byref(activeCutEvents[i].event.noteCutInfo)));
                log("%p", &byref(activeCutEvents[i].event.noteCutInfo).heldRef);

                SendNoteWasCutEvent(activeCutEvents[i].note, activeCutEvents[i].event.noteCutInfo);
                // activeCutEvents[i].note->SendNoteWasCutEvent(byref(activeCutEvents[i].event.noteCutInfo));

                cutDeleteList.push_back(i);
            }
        }

        for(int i = cutDeleteList.size()-1; i >= 0; i--) {
            activeCutEvents.erase(activeCutEvents.begin() + cutDeleteList[i]);
        }

        std::vector<int> missDeleteList;

        for(int i = 0; i < activeMissEvents.size(); i++) {
            if(songTime > activeMissEvents[i].event.time) {
                activeMissEvents[i].note->SendNoteWasMissedEvent();
                
                missDeleteList.push_back(i);
            }
        }

        for(int i = missDeleteList.size()-1; i >= 0; i--) {
            activeMissEvents.erase(activeMissEvents.begin() + missDeleteList[i]);
        }

        co_yield nullptr;
    }

    co_return;
}