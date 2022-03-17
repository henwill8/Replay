#include "static-defines.hpp"

#include "GlobalNamespace/StandardLevelScenesTransitionSetupDataSO.hpp"
#include "Utils/SongUtils.hpp"
#include "Utils/ModifiersUtils.hpp"
#include "Utils/FileUtils.hpp"
#include "UI/UIManager.hpp"
#include "ReplayManager.hpp"

#include "rapidjson/document.h"
#include "rapidjson/stringbuffer.h"
#include <rapidjson/writer.h>
#include <string.h>

using namespace GlobalNamespace;
using namespace Replay;

MAKE_HOOK_MATCH(StandardLevelScenesTransitionSetupDataSO_Init, &StandardLevelScenesTransitionSetupDataSO::Init, void, StandardLevelScenesTransitionSetupDataSO* self, ::StringW gameMode, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, ::StringW backButtonText, bool useTestNoteCutSoundEffects, bool startPaused) {
    if(ReplayManager::replayState == ReplayState::REPLAYING) {
        rapidjson::Document metadata = FileUtils::GetMetadataFromReplayFile(Replay::UI::UIManager::replayViewController->path);

        std::vector<std::string> modifierStrings;
        for(const auto& value : metadata["Modifiers"].GetArray()) {
            modifierStrings.push_back(value.GetString());
        }

        gameplayModifiers = ModifiersUtils::CreateModifiersFromStrings(modifierStrings);

        PlayerSpecificSettings* settings = PlayerSpecificSettings::New_ctor(
            metadata["PlayerSettings"]["LeftHanded"].GetBool(),
            metadata["PlayerSettings"]["Height"].GetFloat(),
            metadata["PlayerSettings"]["AutoHeight"].GetBool(),
            playerSpecificSettings->sfxVolume,
            playerSpecificSettings->reduceDebris,
            playerSpecificSettings->noTextsAndHuds,
            playerSpecificSettings->noFailEffects,
            playerSpecificSettings->advancedHud,
            playerSpecificSettings->autoRestart,
            playerSpecificSettings->saberTrailIntensity,
            playerSpecificSettings->noteJumpDurationTypeSettings,
            playerSpecificSettings->noteJumpFixedDuration,
            playerSpecificSettings->noteJumpStartBeatOffset,
            playerSpecificSettings->hideNoteSpawnEffect,
            playerSpecificSettings->adaptiveSfx,
            playerSpecificSettings->environmentEffectsFilterDefaultPreset,
            playerSpecificSettings->environmentEffectsFilterExpertPlusPreset
        );

        playerSpecificSettings = settings;
    }

    StandardLevelScenesTransitionSetupDataSO_Init(self, gameMode, difficultyBeatmap, previewBeatmapLevel, overrideEnvironmentSettings, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects, startPaused);

    SongUtils::playerSpecificSettings = playerSpecificSettings;
}

void StandardLevelScenesTransitionSetupDataSOHook(Logger& logger) {
    INSTALL_HOOK(logger, StandardLevelScenesTransitionSetupDataSO_Init);
}

ReplayInstallHooks(StandardLevelScenesTransitionSetupDataSOHook);