#pragma once
#include "static-defines.hpp"
// #include "extern/includes/bs-utils/shared/utils.hpp"
#include "SongData.hpp"
#include "UnityEngine/Quaternion.hpp"
#include "UnityEngine/Vector3.hpp"
#include "GlobalNamespace/NoteController.hpp"
#include "GlobalNamespace/NoteData.hpp"
#include "EventTypes.hpp"

#define StructTime(struct) struct.time

namespace Replay {
    class ReplayUtils {
    public:
        static std::string GetFileName() {
            return Replay::SongData::GetMapID() + replayFileExtension;
        }

        static std::string GetReplaysDirectory() {
            return "/sdcard/ModData/com.beatgames.beatsaber/Mods/Replay/Replays/";
        }

        static std::string GetReplayFilePath() {
            return GetReplaysDirectory() + GetFileName();
        }

        template <typename T>
        static int GetCurrentIndex(std::vector<T> const& events, int lastIndex) {
            float songTime = Replay::SongData::GetSongTime();
            int eventsLength = events.size();

            int iterations = 0;
            if(songTime < StructTime(events[lastIndex])) {
                while(StructTime(events[lastIndex + iterations - 1]) > songTime && lastIndex + iterations - 1 >= 0) {
                    iterations--;
                }
            } else {
                while(StructTime(events[lastIndex + iterations + 1]) < songTime && lastIndex + iterations + 1 < eventsLength) {
                    iterations++;
                }
            }

            return lastIndex + iterations;
        }

        template <typename T>
        static float LerpAmountBetweenEvents(T const& eventA, T const& eventB) {
            float timeA = StructTime(eventA);
            float timeB = StructTime(eventB);

            float songTime = Replay::SongData::GetSongTime();

            return (songTime - timeA) / (timeB - timeA);
        }

        // TODO: Use sombrero!
        static UnityEngine::Quaternion LerpEulerAngles(UnityEngine::Vector3 const& angleA, UnityEngine::Vector3 const& angleB, float amount) {
            UnityEngine::Quaternion quaternionA = UnityEngine::Quaternion::Euler(angleA);
            UnityEngine::Quaternion quaternionB = UnityEngine::Quaternion::Euler(angleB);

            return UnityEngine::Quaternion::Lerp(quaternionA, quaternionB, amount);
        }

        // TODO: Sombrero!
        static UnityEngine::Vector3 Lerp(UnityEngine::Vector3 const& value1, UnityEngine::Vector3 const& value2, float amount) {
            return {value1.x + (value2.x - value1.x) * amount, value1.y + (value2.y - value1.y) * amount, value1.z + (value2.z - value1.z) * amount};
        }

        static size_t GetNoteHash(GlobalNamespace::NoteController* noteController) {
            GlobalNamespace::NoteData* data = noteController->noteData; // getter not needed?
            NoteEventTypes::DifferentiatingNoteData noteData{data->time, data->lineIndex, (int)data->noteLineLayer, (int)data->colorType, (int)data->cutDirection};

            std::hash<NoteEventTypes::DifferentiatingNoteData> noteDataHash;

            return noteDataHash(noteData);
        }
    };
}