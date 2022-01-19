#pragma once
#include "static-defines.hpp"

#include <chrono>
#include <filesystem>

namespace Replay::TimeUtils {
    std::string GetStringForTimeSince(std::time_t start, std::time_t end) {
        auto startTimePoint = std::chrono::system_clock::from_time_t(start);
        auto endTimePoint = std::chrono::system_clock::from_time_t(end);

        std::chrono::duration<double> duration = endTimePoint - startTimePoint;

        int seconds = std::chrono::duration_cast<std::chrono::seconds>(duration).count();
        int minutes = seconds / 60;
        int hours = minutes / 60;
        int days = hours / 24;
        int weeks = days / 7;
        int months = weeks / 4;
        int years = weeks / 52;

        std::string unit;
        int value;

        if(years != 0) {
            unit = "year";
            value = years;
        } else if(months != 0) {
            unit = "month";
            value = months;
        } else if(weeks != 0) {
            unit = "week";
            value = weeks;
        } else if(days != 0) {
            unit = "day";
            value = days;
        } else if(hours != 0) {
            unit = "hour";
            value = hours;
        } else if(minutes != 0) {
            unit = "minute";
            value = minutes;
        } else {
            unit = "second";
            value = seconds;
        }

        if(value != 1) {
            unit = unit + "s";
        }

        return std::to_string(value) + " " + unit + " ago";
    }
}