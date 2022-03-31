#include "Recording/NoteEventRecorder.hpp"

#include <math.h>

float Replay::NoteEventRecorder::GetEventSaveTime(float songTime) {
    //This seems like a really bad solution for note cut race conditions, fix later?
    if(songTime == frameTime) {
        eventsInFrame++;

        float newTime = nextafterf(songTime, songTime + 1);

        // For if there are 3 or more events in a single frame (extremely unlikely except paulllssss)
        for(int i = 0; i < eventsInFrame - 2; i++) {
            newTime = nextafterf(newTime, songTime + 1);
        }

        return newTime;
    }

    frameTime = songTime;
    eventsInFrame = 1;

    return songTime;
}

void Replay::NoteEventRecorder::AddCutEvent(CutScoreBuffer* cutScoreBuffer, float time) {
    cutEvents.emplace_back(Replay::ReplayUtils::GetNoteHash(cutScoreBuffer->noteCutInfo.noteData), GetEventSaveTime(time), cutScoreBuffer);
}

void Replay::NoteEventRecorder::AddCutEvent(NoteCutInfo noteCutInfo, float time) {
    cutEvents.emplace_back(Replay::ReplayUtils::GetNoteHash(noteCutInfo.noteData), GetEventSaveTime(time), noteCutInfo);
}

void Replay::NoteEventRecorder::AddMissEvent(NoteController* noteController) {
    missEvents.emplace_back(Replay::ReplayUtils::GetNoteHash(noteController->get_noteData()), GetEventSaveTime(Replay::SongUtils::GetSongTime()));
}

void Replay::NoteEventRecorder::WriteEvents(std::ofstream& output) {
    Replay::FileUtils::WriteEvents(cutEvents, Replay::NoteEventTypes::cutEventID, output);

    Replay::FileUtils::WriteEvents(missEvents, Replay::NoteEventTypes::missEventID, output);
}

float Replay::NoteEventRecorder::GetAverageCutScore() {
    float total = 0;
    int goodCuts = 0;
    for(NoteEventTypes::NoteCutEvent event : cutEvents) {
        if(!event.noteCutInfo.AllIsOkay()) continue;

        // May cause issues with chains
        int beforeRating = std::round(event.swingRating.beforeCutRating * 70);
        int afterRating = std::round(event.swingRating.afterCutRating * 30);
        int accuracy = std::round((1.0f - std::clamp(event.noteCutInfo.cutDistanceToCenter / 0.3f, 0.0f, 1.0f)) * 15);

        int cutScore = beforeRating + afterRating + accuracy;
        
        total += cutScore;
        goodCuts++;
    }
    if(goodCuts == 0) return 0;
    return total / (float) goodCuts;
}