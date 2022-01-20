#pragma once
#include "static-defines.hpp"

namespace Replay::UIUtils {
    std::string GetLayeredText(std::string label, std::string value) {
        return "<i><uppercase><color=#bdbdbd>" + label + "</color></uppercase>\n" + value + "</i>";
    }
}