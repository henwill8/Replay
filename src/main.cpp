#include "static-defines.hpp"
#include "hooks.hpp"

// Hooks

extern "C" void setup(ModInfo& info) {
    info.id = ID;
    info.version = VERSION;

    modInfo = info;
}

extern "C" void load() {
    il2cpp_functions::Init();

    custom_types::Register::AutoRegister();

    log("Installing Replay hooks...");
    Hooks::InstallHooks(getLogger());
    log("Installed Replay hooks!");
}