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

        static std::vector<std::string> ModifiersToStrings(GlobalNamespace::GameplayModifiers* gameplayModifiers) {
            std::vector<std::string> strings;
            
            if(gameplayModifiers->energyType == GlobalNamespace::GameplayModifiers::EnergyType::Battery) strings.push_back("BatteryEnergy");
            if(gameplayModifiers->noFailOn0Energy) strings.push_back("NoFail");
            if(gameplayModifiers->instaFail) strings.push_back("InstaFail");
            if(gameplayModifiers->enabledObstacleType == GlobalNamespace::GameplayModifiers::EnabledObstacleType::NoObstacles) strings.push_back("NoWalls");
            if(gameplayModifiers->noBombs) strings.push_back("NoBombs");
            if(gameplayModifiers->strictAngles) strings.push_back("StrictAngles");
            if(gameplayModifiers->disappearingArrows) strings.push_back("DisappearingArrows");
            if(gameplayModifiers->songSpeed == GlobalNamespace::GameplayModifiers::SongSpeed::Slower) strings.push_back("SlowerSong");
            if(gameplayModifiers->songSpeed == GlobalNamespace::GameplayModifiers::SongSpeed::Faster) strings.push_back("FasterSong");
            if(gameplayModifiers->songSpeed == GlobalNamespace::GameplayModifiers::SongSpeed::SuperFast) strings.push_back("SuperFastSong");
            if(gameplayModifiers->noArrows) strings.push_back("NoArrows");
            if(gameplayModifiers->ghostNotes) strings.push_back("GhostNotes");
            if(gameplayModifiers->proMode) strings.push_back("ProMode");
            if(gameplayModifiers->zenMode) strings.push_back("ZenMode");
            if(gameplayModifiers->smallCubes) strings.push_back("SmallCubes");

            return strings;
        }

        static GlobalNamespace::GameplayModifiers* CreateModifiersFromStrings(std::vector<std::string> strings) {
            GlobalNamespace::GameplayModifiers::EnergyType energyType = GlobalNamespace::GameplayModifiers::EnergyType::Bar;
            if(std::count(strings.begin(), strings.end(), "BatteryEnergy")) {
                energyType = GlobalNamespace::GameplayModifiers::EnergyType::Battery;
            }

            GlobalNamespace::GameplayModifiers::EnabledObstacleType enabledObstacleType = GlobalNamespace::GameplayModifiers::EnabledObstacleType::All;
            if(std::count(strings.begin(), strings.end(), "NoWalls")) {
                enabledObstacleType = GlobalNamespace::GameplayModifiers::EnabledObstacleType::NoObstacles;
            }

            GlobalNamespace::GameplayModifiers::SongSpeed songSpeed = GlobalNamespace::GameplayModifiers::SongSpeed::Normal;
            if(std::count(strings.begin(), strings.end(), "SlowerSong")) {
                songSpeed = GlobalNamespace::GameplayModifiers::SongSpeed::Slower;
            } else if(std::count(strings.begin(), strings.end(), "FasterSong")) {
                songSpeed = GlobalNamespace::GameplayModifiers::SongSpeed::Faster;
            } else if(std::count(strings.begin(), strings.end(), "SuperFastSong")) {
                songSpeed = GlobalNamespace::GameplayModifiers::SongSpeed::SuperFast;
            }

            GlobalNamespace::GameplayModifiers* modifiers = GlobalNamespace::GameplayModifiers::New_ctor(
                false,
                false,
                energyType,
                std::count(strings.begin(), strings.end(), "NoFail"),
                std::count(strings.begin(), strings.end(), "InstaFail"),
                false,
                enabledObstacleType,
                std::count(strings.begin(), strings.end(), "NoBombs"),
                false,
                std::count(strings.begin(), strings.end(), "StrictAngles"),
                std::count(strings.begin(), strings.end(), "DisappearingArrows"),
                songSpeed,
                std::count(strings.begin(), strings.end(), "NoArrows"),
                std::count(strings.begin(), strings.end(), "GhostNotes"),
                std::count(strings.begin(), strings.end(), "ProMode"),
                std::count(strings.begin(), strings.end(), "ZenMode"),
                std::count(strings.begin(), strings.end(), "SmallCubes")
            );

            return modifiers;
        }
    };
}