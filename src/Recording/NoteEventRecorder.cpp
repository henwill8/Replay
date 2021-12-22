#include "Recording/NoteEventRecorder.hpp"

void Replay::NoteEventRecorder::AddCutEvent(NoteController* noteController, ByRef<NoteCutInfo> noteCutInfo) {
    cutEvents.emplace_back(Replay::ReplayUtils::GetNoteHash(noteController), Replay::SongData::GetSongTime(), noteCutInfo.heldRef);
}

void Replay::NoteEventRecorder::WriteCutEvents(std::ofstream& output) {
    int eventCount = (int)cutEvents.size();

    if(eventCount == 0) return;

    //Write events header
    output.write(reinterpret_cast<const char*>(&Replay::NoteEventTypes::cutEventID), sizeof(byte));
    output.write(reinterpret_cast<const char*>(&eventCount), sizeof(int));

    //Write data
    for(NoteCutEvent const& event : cutEvents) {
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