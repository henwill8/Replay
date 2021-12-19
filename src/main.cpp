#include "static-defines.hpp"

// Hooks

extern "C" void setup(ModInfo& info) {
    info.id = ID;
    info.version = VERSION;

    modInfo = info;
}

extern "C" void load() {
    //Make hook installing class
}