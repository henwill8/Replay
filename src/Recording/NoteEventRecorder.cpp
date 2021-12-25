#include "Recording/NoteEventRecorder.hpp"

void Replay::NoteEventRecorder::AddCutEvent(NoteController* noteController, ByRef<NoteCutInfo> noteCutInfo) {
    if(noteCutInfo->get_allIsOK()) {
        cutEvents.emplace_back(Replay::ReplayUtils::GetNoteHash(noteController), Replay::SongUtils::GetSongTime(), noteCutInfo.heldRef);
    } else {
        finishedCutEvents.emplace_back(Replay::ReplayUtils::GetNoteHash(noteController), Replay::SongUtils::GetSongTime(), noteCutInfo.heldRef, false);
    }
}

void Replay::NoteEventRecorder::FinalizeCutEvent(void* swingRatingPointer) {
    for(auto eventIt = cutEvents.begin(); eventIt != cutEvents.end(); eventIt++) {
        auto const &storedCutEvent = *eventIt;
        
        if(storedCutEvent.noteCutInfo.swingRatingCounter == swingRatingPointer) {
            finishedCutEvents.emplace_back(storedCutEvent.noteHash, storedCutEvent.time, storedCutEvent.noteCutInfo);

            cutEvents.erase(eventIt);

            return;
        }
    }
}

void Replay::NoteEventRecorder::WriteCutEvents(std::ofstream& output) {
    Replay::FileUtils::WriteEvents(finishedCutEvents, Replay::NoteEventTypes::cutEventID, output);
}

void Replay::NoteEventRecorder::AddMissEvent(NoteController* noteController) {
    missEvents.emplace_back(Replay::ReplayUtils::GetNoteHash(noteController), Replay::SongUtils::GetSongTime());
}

void Replay::NoteEventRecorder::WriteMissEvents(std::ofstream& output) {
    Replay::FileUtils::WriteEvents(missEvents, Replay::NoteEventTypes::missEventID, output);
}