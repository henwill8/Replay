#pragma once

#include <string>
#include <unordered_set>
#include "modloader/shared/modloader.hpp"

namespace bs_utils {
    /// @brief Returns a path to the persistent data directory for the provided const ModInfo&.
    /// @param info The const ModInfo& to find a path for.
    /// @return The path to the directory.
    std::string getDataDir(const ModInfo& info);

    /// @struct Information about the mod that is currentlying disabling score submission
    struct DisablingModInfo {
        // Id of the mod disabling
        std::string id;
        // Version of the mod disabling
        std::string version;
        /// @brief Construct a new disabling mod info from a ModInfo&
        /// @param info The ModInfo& to construct this from
        DisablingModInfo(const ModInfo& info) {
            id = info.id;
            version = info.version;
        }
        /// @brief Compare two DisablingModInfo objects
        /// @param info The other DisablingModInfo
        bool operator==(const DisablingModInfo& info) const {
            return id == info.id && version == info.version;
        }
    };
    /// @class Hash function for DisablingModInfos so it can be used in a map.
    class DisablingModInfoHash
    {
        public:
            size_t operator()(const DisablingModInfo& info) const {
                return strHasher(info.id) ^ strHasher(info.version);
            }
        private:
            std::hash<std::string> strHasher;
    };
    class Submission {
        public:
            /// @brief Disable score submission for the provided ModInfo&.
            /// @param info ModInfo& to disable score under.
            static void disable(const ModInfo& info);
            /// @brief Enable score submission for the provided ModInfo&.
            /// @param info ModInfo& to enable score under.
            static void enable(const ModInfo& info);
            /// @brief Get a set of all mods currently disabling score submission.
            /// @return The const unordered_set of DisablingModInfos
            static const std::unordered_set<DisablingModInfo, DisablingModInfoHash> getDisablingMods();
            /// @brief See if score submission is enabled.
            /// @return Whether score submission is enabled or not.
            static bool getEnabled();
        private:
            static std::unordered_set<DisablingModInfo, DisablingModInfoHash> disablingMods;
            static void init();
            static bool enabled;
            static bool initialized;
    };
}
