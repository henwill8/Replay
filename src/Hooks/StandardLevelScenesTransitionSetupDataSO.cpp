#include "static-defines.hpp"

#include "GlobalNamespace/StandardLevelScenesTransitionSetupDataSO.hpp"
#include "Utils/SongUtils.hpp"
#include "Utils/ReplayUtils.hpp"
#include "Utils/FileUtils.hpp"
#include "ReplayManager.hpp"

#include "rapidjson/document.h"
#include "rapidjson/stringbuffer.h"
#include <rapidjson/writer.h>
#include <string.h>

using namespace GlobalNamespace;
using namespace Replay;
using namespace Replay::FileUtils;

MAKE_HOOK_MATCH(StandardLevelScenesTransitionSetupDataSO_Init, &StandardLevelScenesTransitionSetupDataSO::Init, void, StandardLevelScenesTransitionSetupDataSO* self, Il2CppString* gameMode, GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings, GlobalNamespace::ColorScheme* overrideColorScheme, GlobalNamespace::GameplayModifiers* gameplayModifiers, GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, GlobalNamespace::PracticeSettings* practiceSettings, Il2CppString* backButtonText, bool useTestNoteCutSoundEffects) {
    if(ReplayManager::temporaryState == ReplayState::REPLAYING) {
        std::vector<std::string> modifierStrings;
        log("Doc exists: %s", FileUtils::lastSelectedMetadata().has_value() ? "true" : "false");
        auto const& metadata = FileUtils::lastSelectedMetadata().value();

        for(const auto& value : metadata["Modifiers"].GetArray()) {
            modifierStrings.emplace_back(value.GetString());
        }

        gameplayModifiers = ReplayUtils::CreateModifiersFromStrings(modifierStrings);

        playerSpecificSettings->leftHanded = metadata["PlayerSettings"]["LeftHanded"].GetBool();
        playerSpecificSettings->automaticPlayerHeight = metadata["PlayerSettings"]["AutoHeight"].GetBool();
        playerSpecificSettings->playerHeight = metadata["PlayerSettings"]["Height"].GetFloat();
    }

    StandardLevelScenesTransitionSetupDataSO_Init(self, gameMode, difficultyBeatmap, previewBeatmapLevel, overrideEnvironmentSettings, overrideColorScheme, gameplayModifiers, playerSpecificSettings, practiceSettings, backButtonText, useTestNoteCutSoundEffects);

    SongUtils::playerSpecificSettings = playerSpecificSettings;
}

void StandardLevelScenesTransitionSetupDataSOHook(Logger& logger) {
    INSTALL_HOOK(logger, StandardLevelScenesTransitionSetupDataSO_Init);
}

ReplayInstallHooks(StandardLevelScenesTransitionSetupDataSOHook);