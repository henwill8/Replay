#include "static-defines.hpp"

#include "modloader/shared/modloader.hpp"
#include "beatsaber-hook/shared/utils/logging.hpp"
#include "beatsaber-hook/shared/utils/hooking.hpp"
#include "custom-types/shared/register.hpp"
#include "questui/shared/QuestUI.hpp"

// Hooks

extern "C" void setup(ModInfo& info) {
    info.id = "Replay";
    info.version = "1.0.0";

    modInfo = info;
}

extern "C" void load() {
    //Make hook installing class
}