#pragma once
#include "static-defines.hpp"

#include "GlobalNamespace/GameplayModifiers.hpp"

namespace Replay {
    class ModifiersUtils {
    public:
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

        static std::string GetInitialsFromModifierName(std::string modifierName) {
            if(modifierName == "BatteryEnergy") {
                return "BE";
            } else if(modifierName == "InstaFail") {
                return "IF";
            } else if(modifierName == "NoFail") {
                return "<color=" + RED + ">NF</color>";
            } else if(modifierName == "NoWalls") {
                return "<color=" + RED + ">NW</color>";
            } else if(modifierName == "NoBombs") {
                return "<color=" + RED + ">NB</color>";
            } else if(modifierName == "StrictAngles") {
                return "SA";
            } else if(modifierName == "DisappearingArrows") {
                return "<color=" + GREEN + ">DA</color>";
            } else if(modifierName == "SlowerSong") {
                return "<color=" + RED + ">SS</color>";
            } else if(modifierName == "FasterSong") {
                return "<color=" + GREEN + ">FS</color>";
            } else if(modifierName == "SuperFastSong") {
                return "<color=" + GREEN + ">SFS</color>";
            } else if(modifierName == "NoArrows") {
                return "<color=" + RED + ">NA</color>";
            } else if(modifierName == "GhostNotes") {
                return "<color=" + GREEN + ">GN</color>";
            } else if(modifierName == "ProMode") {
                return "PM";
            } else if(modifierName == "ZenMode") {
                return "<color=" + RED + ">ZM</color>";
            } else if(modifierName == "SmallCubes") {
                return "SC";
            }
            
            return "No matching modifier";
        }
    };
}