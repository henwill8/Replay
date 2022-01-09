#pragma once
#include "static-defines.hpp"

namespace Replay::TypeUtils {
    std::string FloatToString(float value, int precision = 2) {
        float power = (float) pow(100, precision);
        value = std::round(value * power) / power;

        std::stringstream stream;
        stream << std::fixed << std::setprecision(precision) << value;

        return stream.str();
    }
}