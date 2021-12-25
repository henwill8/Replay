#include "Recording/NoteEventRecorder.hpp"

void Replay::NoteEventRecorder::AddCutEvent(NoteController* noteController, ByRef<NoteCutInfo> noteCutInfo) {
    cutEvents.emplace_back(Replay::ReplayUtils::GetNoteHash(noteController), Replay::SongData::GetSongTime(), noteCutInfo.heldRef);
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
    int eventCount = (int)finishedCutEvents.size();

    if(eventCount == 0) return;

    //Write events header
    output.write(reinterpret_cast<const char*>(&Replay::NoteEventTypes::cutEventID), sizeof(byte));
    output.write(reinterpret_cast<const char*>(&eventCount), sizeof(int));

    //Write data
    for(NoteCutEvent const& event : finishedCutEvents) {
        event.Write(output);
    }
}

void Replay::NoteEventRecorder::AddMissEvent(NoteController* noteController) {
    missEvents.emplace_back(Replay::ReplayUtils::GetNoteHash(noteController), Replay::SongData::GetSongTime());
}

void Replay::NoteEventRecorder::WriteMissEvents(std::ofstream& output) {
    int eventCount = (int)missEvents.size();

    if(eventCount == 0) return;

    //Write events header
    output.write(reinterpret_cast<const char*>(&Replay::NoteEventTypes::missEventID), sizeof(byte));
    output.write(reinterpret_cast<const char*>(&eventCount), sizeof(int));

    //Write data
    for(NoteMissEvent event : missEvents) {
        event.Write(output);
    }
}