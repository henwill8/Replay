#include "Recording/NoteEventRecorder.hpp"

#include <math.h>

float Replay::NoteEventRecorder::GetEventSaveTime(float songTime) {
    //This seems like a really bad solution for note cut race conditions, fix later?
    if(songTime == frameTime) {
        eventsInFrame++;

        float newTime = nextafterf(songTime, songTime + 1);

        // For if there are 3 or more events in a single frame (extremely unlikely)
        for(int i = 0; i < eventsInFrame - 2; i++) {
            newTime = nextafterf(newTime, songTime + 1);
        }

        return newTime;
    }

    frameTime = songTime;
    eventsInFrame = 1;

    return songTime;
}

void Replay::NoteEventRecorder::AddCutEvent(NoteController* noteController, ByRef<NoteCutInfo> noteCutInfo) {
    if(noteCutInfo->get_allIsOK()) {
        cutEvents.emplace_back(Replay::ReplayUtils::GetNoteHash(noteController), GetEventSaveTime(Replay::SongUtils::GetSongTime()), noteCutInfo.heldRef);
    } else {
        finishedCutEvents.emplace_back(Replay::ReplayUtils::GetNoteHash(noteController), GetEventSaveTime(Replay::SongUtils::GetSongTime()), noteCutInfo.heldRef, false);
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

void Replay::NoteEventRecorder::AddMissEvent(NoteController* noteController) {
    missEvents.emplace_back(Replay::ReplayUtils::GetNoteHash(noteController), GetEventSaveTime(Replay::SongUtils::GetSongTime()));
}

void Replay::NoteEventRecorder::WriteEvents(std::ofstream& output) {
    Replay::FileUtils::WriteEvents(finishedCutEvents, Replay::NoteEventTypes::cutEventID, output);

    Replay::FileUtils::WriteEvents(missEvents, Replay::NoteEventTypes::missEventID, output);
}

float Replay::NoteEventRecorder::GetAverageCutScore() {
    float total = 0;
    int goodCuts = 0;
    for(NoteEventTypes::NoteCutEvent event : finishedCutEvents) {
        if(!event.noteCutInfo.AllIsOkay()) continue;

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