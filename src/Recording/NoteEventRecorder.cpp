#include "Recording/NoteEventRecorder.hpp"

void Replay::NoteEventRecorder::AddCutEvent(NoteController* noteController, ByRef<NoteCutInfo> noteCutInfo) {
    NoteCutEvent event{GetNoteDataFromController(noteController), Replay::SongData::GetSongTime(), noteCutInfo.heldRef};

    cutEvents.push_back(event);
}

void Replay::NoteEventRecorder::WriteCutEvents(std::ofstream& output) {
    int eventCount = (int)cutEvents.size();

    if(eventCount == 0) return;

    //Write events header
    output.write(reinterpret_cast<const char*>(&Replay::NoteEventTypes::cutEventID), sizeof(byte));
    output.write(reinterpret_cast<const char*>(&eventCount), sizeof(int));

    //Write data
    for(NoteCutEvent event : cutEvents) {
        event.Write(output);
    }
}

void Replay::NoteEventRecorder::AddMissEvent(NoteController* noteController) {
    NoteMissEvent event{GetNoteDataFromController(noteController), Replay::SongData::GetSongTime()};

    missEvents.push_back(event);
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

DifferentiatingNoteData Replay::NoteEventRecorder::GetNoteDataFromController(NoteController* noteController) {
    GlobalNamespace::NoteData* data = noteController->get_noteData();
    DifferentiatingNoteData noteData{data->time, data->lineIndex, data->noteLineLayer, data->colorType, data->cutDirection};

    return noteData;
}