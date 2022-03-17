#pragma once
#include "static-defines.hpp"

#include "Utils/SongUtils.hpp"
#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/SaberSwingRatingCounter.hpp"
#include "GlobalNamespace/GameplayModifiers.hpp"
#include "EventTypes.hpp"
#include <sstream>

namespace Replay {
    class ReplayUtils {
    public:
        static std::string GetFileName(std::string_view hash) {
            return hash + replayFileExtension;
        }

        static std::string GetModDirectory() {
            return "/sdcard/ModData/com.beatgames.beatsaber/Mods/Replay/";
        }

        static std::string GetReplaysDirectory() {
            return GetModDirectory() + "Replays/";
        }

        static std::string GetReplayFilePath(std::string_view hash) {
            return GetReplaysDirectory() + GetFileName(hash);
        }

        static std::string GetTempReplayFilePath() {
            return GetModDirectory() + "temp" + replayFileExtension;
        }

        template <typename T>
        static constexpr int GetCurrentIndex(std::vector<T> const& events, int lastIndex) {
            float songTime = Replay::SongUtils::GetSongTime();
            int eventsLength = events.size();

            int iterations = 0;
            if(songTime < events[lastIndex].time) {
                while(events[lastIndex + iterations - 1].time > songTime && lastIndex + iterations - 1 >= 0) {
                    iterations--;
                }
            } else {
                while(events[lastIndex + iterations + 1].time < songTime && lastIndex + iterations + 1 < eventsLength) {
                    iterations++;
                }
            }

            return lastIndex + iterations;
        }

        template <typename T>
        static constexpr float LerpAmountBetweenEvents(T const& eventA, T const& eventB) {
            float timeA = eventA.time;
            float timeB = eventB.time;

            float songTime = Replay::SongUtils::GetSongTime();

            return (songTime - timeA) / (timeB - timeA);
        }

        static int GetNoteHash(GlobalNamespace::NoteData* noteData) {
            NoteEventTypes::DifferentiatingNoteData differentiatingNoteData{noteData->time, noteData->lineIndex, (int)noteData->noteLineLayer, (int)noteData->colorType, (int)noteData->cutDirection};

            std::hash<NoteEventTypes::DifferentiatingNoteData> noteDataHash;

            return (int) noteDataHash(differentiatingNoteData);
        }

        static GlobalNamespace::NoteCutInfo CreateNoteCutInfoFromSimple(Replay::NoteEventTypes::SimpleNoteCutInfo simpleNoteCutInfo) {
            return GlobalNamespace::NoteCutInfo(
                nullptr, // Might need to get NoteData from a NoteController
                simpleNoteCutInfo.speedOK,
                simpleNoteCutInfo.directionOK,
                simpleNoteCutInfo.saberTypeOK,
                simpleNoteCutInfo.wasCutTooSoon,
                simpleNoteCutInfo.saberSpeed,
                simpleNoteCutInfo.saberDir,
                simpleNoteCutInfo.saberType,
                simpleNoteCutInfo.timeDeviation,
                simpleNoteCutInfo.cutDirDeviation,
                simpleNoteCutInfo.cutPoint,
                simpleNoteCutInfo.cutNormal,
                simpleNoteCutInfo.cutAngle,
                simpleNoteCutInfo.cutDistanceToCenter,
                UnityEngine::Quaternion::Euler(simpleNoteCutInfo.worldRotation),
                UnityEngine::Quaternion::Inverse(UnityEngine::Quaternion::Euler(simpleNoteCutInfo.worldRotation)),
                UnityEngine::Quaternion::Euler(simpleNoteCutInfo.noteRotation),
                simpleNoteCutInfo.notePosition,
                nullptr // Might actually need a saber movement data for some reason
            );
        }
    };
}