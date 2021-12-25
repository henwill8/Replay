#pragma once
#include "static-defines.hpp"

#include "Utils/SongUtils.hpp"
#include "UnityEngine/Quaternion.hpp"
#include "UnityEngine/Vector3.hpp"
#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/NoteData.hpp"
#include "GlobalNamespace/NoteCutInfo.hpp"
#include "GlobalNamespace/SaberSwingRatingCounter.hpp"
#include "EventTypes.hpp"

namespace Replay {
    class ReplayUtils {
    public:
        static std::string GetFileName() {
            return Replay::SongUtils::GetMapID() + replayFileExtension;
        }

        static std::string GetReplaysDirectory() {
            return "/sdcard/ModData/com.beatgames.beatsaber/Mods/Replay/Replays/";
        }

        static std::string GetReplayFilePath() {
            return GetReplaysDirectory() + GetFileName();
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

        // TODO: Use sombrero!
        static UnityEngine::Quaternion LerpEulerAngles(UnityEngine::Vector3 angleA, UnityEngine::Vector3 angleB, float amount) {
            UnityEngine::Quaternion quaternionA = UnityEngine::Quaternion::Euler(angleA);
            UnityEngine::Quaternion quaternionB = UnityEngine::Quaternion::Euler(angleB);

            return UnityEngine::Quaternion::Lerp(quaternionA, quaternionB, amount);
        }

        // TODO: Sombrero!
        static constexpr UnityEngine::Vector3 Lerp(UnityEngine::Vector3 const& value1, UnityEngine::Vector3 const& value2, float amount) {
            return {value1.x + (value2.x - value1.x) * amount, value1.y + (value2.y - value1.y) * amount, value1.z + (value2.z - value1.z) * amount};
        }

        static constexpr int GetNoteHash(GlobalNamespace::NoteController* noteController) {
            GlobalNamespace::NoteData* data = noteController->noteData;
            NoteEventTypes::DifferentiatingNoteData noteData{data->time, data->lineIndex, (int)data->noteLineLayer, (int)data->colorType, (int)data->cutDirection};

            std::hash<NoteEventTypes::DifferentiatingNoteData> noteDataHash;

            return (int) noteDataHash(noteData);
        }

        static GlobalNamespace::NoteCutInfo CreateNoteCutInfoFromSimple(Replay::NoteEventTypes::SimpleNoteCutInfo simpleNoteCutInfo, GlobalNamespace::ISaberSwingRatingCounter* saberSwingRatingCounter) {
            return GlobalNamespace::NoteCutInfo(
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
                saberSwingRatingCounter
            );
        }
    };
}