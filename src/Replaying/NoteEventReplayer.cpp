#include "Replaying/NoteEventReplayer.hpp"

#include "GlobalNamespace/SaberSwingRatingCounter_Pool.hpp"
#include "GlobalNamespace/SaberMovementData.hpp"

#include "UnityEngine/Resources.hpp"

void Replay::NoteEventReplayer::Init() {
    GlobalNamespace::SharedCoroutineStarter::get_instance()->StartCoroutine(reinterpret_cast<System::Collections::IEnumerator*>(custom_types::Helpers::CoroutineHelper::New(Update())));
}

void Replay::NoteEventReplayer::AddActiveEvents(GlobalNamespace::NoteController* noteController) {
    auto noteHash = Replay::ReplayUtils::GetNoteHash(noteController);

    for (auto eventIt = cutEvents.begin(); eventIt != cutEvents.end(); eventIt++) {
        auto const &noteCutEvent = *eventIt;

        if(noteHash == noteCutEvent.noteHash) {
            auto saber = getSaberForType(noteCutEvent.noteCutInfo.saberType);
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
void SendNoteWasCutEvent(GlobalNamespace::NoteController* self, ByRef<GlobalNamespace::NoteCutInfo> noteCutInfo) {
    static auto ___internal__logger = ::Logger::get().WithContext("GlobalNamespace::NoteController::SendNoteWasCutEvent");
    static auto* ___internal__method = THROW_UNLESS((::il2cpp_utils::FindMethod(self, "SendNoteWasCutEvent", std::vector<Il2CppClass*>{}, ::std::vector<const Il2CppType*>{::NoteCutInfoT(noteCutInfo)})));
    CRASH_UNLESS(noteCutInfo->swingRatingCounter);
    ::il2cpp_utils::RunMethodRethrow<void, false>(self, ___internal__method, noteCutInfo);
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-noreturn"
custom_types::Helpers::Coroutine Replay::NoteEventReplayer::Update() {
    // TODO: Somehow get this earlier on, hook it?
    // Avoid Resources::FindObjectsOfTypeAll, it causes lag
    auto saberManagers = UnityEngine::Resources::FindObjectsOfTypeAll<SaberManager*>();

    if (!saberManagers) {
        getLogger().error("No saber managers found, stack bad");
    }

    saberManager = saberManagers.get(0);
    CRASH_UNLESS(saberManager);

    while(true) {
        float songTime = Replay::SongData::GetSongTime();

        for (auto eventIt = activeCutEvents.begin(); eventIt != activeCutEvents.end();) {
            auto& eventData = *eventIt;
            if(songTime > eventData.event.time) {
                // log("%p", il2cpp_utils::ExtractValue(byref(eventData.event.noteCutInfo)));
                // log("%p", &byref(eventData.event.noteCutInfo).heldRef);

                // Ensure we have a game note controller
                auto* gameNoteController = il2cpp_utils::cast<GameNoteController>(eventData.note);
                auto saberSwingRatingCounter = getOrSpawnSaberSwingRatingCounter(eventData.saber, gameNoteController);
                eventData.event.noteCutInfo.swingRatingCounter = saberSwingRatingCounter;

                SendNoteWasCutEvent(eventData.note, byref(eventData.event.noteCutInfo));
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
#pragma clang diagnostic pop

// Code from GameNoteController.HandleCut
ISaberSwingRatingCounter *Replay::NoteEventReplayer::getOrSpawnSaberSwingRatingCounter(Saber* saber, GameNoteController* noteController) {
    auto * saberSwingRatingCounter = noteController->saberSwingRatingCounterPool->Spawn();
    saberSwingRatingCounter->Init(saber->movementData, noteController->noteTransform, !noteController->noteData->skipBeforeCutScoring, !noteController->noteData->skipAfterCutScoring);
    saberSwingRatingCounter->RegisterDidFinishReceiver(reinterpret_cast<ISaberSwingRatingCounterDidFinishReceiver *>(noteController));

    return reinterpret_cast<ISaberSwingRatingCounter *>(saberSwingRatingCounter);
}
