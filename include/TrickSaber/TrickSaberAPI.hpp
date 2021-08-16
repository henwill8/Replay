#pragma once



#include "TrickState.hpp"

#include "UnityEngine/GameObject.hpp"
#include "GlobalNamespace/SaberType.hpp"

#include <optional>
#include <functional>
#include <utility>
#include <unordered_map>

#include "conditional-dependencies/shared/main.hpp"

namespace TrickSaber {

    /// Uses conditional dependency to call the method safely or return
    /// nullopt if it isn't found or if the original method returned nullopt
    class TrickSaberAPI {
    public:
        static inline const std::string modId = "TrickSaber";

        /// @brief Gets the throw state of the saber
        /// @param saberType The id of the saber
        /// @return The throw state of the saber, or nullopt if method not found or no state
        static std::optional<TrickSaber::TrickState> getThrowState(GlobalNamespace::SaberType saberType) noexcept {
            static auto function = CondDeps::Find<TrickSaber::TrickState, GlobalNamespace::SaberType>(modId, "getThrowState");

            if (function) {
                auto state = function.value()(saberType);

                return std::make_optional(state);
            }

            return std::nullopt;
        }

        /// @brief Gets the spin state of the saber
        /// @param saberType The id of the saber
        /// @return The spin state of the saber, or nullopt if method not found or no state
        static std::optional<TrickSaber::TrickState> getSpinState(GlobalNamespace::SaberType saberType) noexcept {
            static auto function = CondDeps::Find<TrickSaber::TrickState, GlobalNamespace::SaberType>(modId, "getSpinState");

            if (function) {
                auto state = function.value()(saberType);

                return std::make_optional(state);
            }

            return std::nullopt;
        }

        /// @brief Gets the active game object of the saber
        /// @param saberType The id of the saber
        /// @return The active game object of the saber, or nullopt if method not found or no game object
        static std::optional<UnityEngine::GameObject*> getActiveSaber(int saberType) noexcept {
            static auto function = CondDeps::Find<UnityEngine::GameObject*, GlobalNamespace::SaberType>(modId, "getActiveSaber");

            if (function) {
                // Returns the game object value or nullptr if it was a nullopt
                auto pGameObject = function.value()(saberType);

                if (pGameObject == nullptr) return std::nullopt;

                return std::make_optional(pGameObject);
            }

            return std::nullopt;
        }

        /// @brief Gets the game object of the trick model saber
        /// @param saberType The id of the saber
        /// @return The game object of the trick model saber, or nullopt if method not found or no game object
        static std::optional<UnityEngine::GameObject*> getTrickSaber(int saberType) noexcept {
            static auto function = CondDeps::Find<UnityEngine::GameObject*, GlobalNamespace::SaberType>(modId, "getTrickSaber");

            if (function) {
                // Returns the game object value or nullptr if it was a nullopt
                auto pGameObject = function.value()(saberType);

                if (pGameObject == nullptr) return std::nullopt;

                return std::make_optional(pGameObject);
            }

            return std::nullopt;
        }

        /// @brief Gets the game object of the original saber
        /// @param saberType The id of the saber
        /// @return The game object of the original saber, or nullopt if method not found or no game object
        static std::optional<UnityEngine::GameObject*> getNormalSaber(int saberType) noexcept {
            static auto function = CondDeps::Find<UnityEngine::GameObject*, GlobalNamespace::SaberType>(modId, "getNormalSaber");

            if (function) {
                // Returns the game object value or nullptr if it was a nullopt
                auto pGameObject = function.value()(saberType);

                if (pGameObject == nullptr) return std::nullopt;

                return std::make_optional(pGameObject);
            }

            return std::nullopt;
        }
    };
}