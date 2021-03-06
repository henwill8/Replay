#pragma once
#include <functional>

#include "beatsaber-hook/shared/utils/typedefs.h"
#include "beatsaber-hook/shared/utils/il2cpp-utils.hpp"

namespace bs_utils {
    typedef Il2CppObject Asset;

    /// @class A C++ wrapper around the C# AssetBundle type.
    class AssetBundle : public Il2CppObject {
      typedef std::function<void(Asset*)> AssetCallback;
      typedef std::function<void(AssetBundle*)> AssetBundleCallback;

      public:
        AssetBundle() = delete;
        /// @brief Loads an asset bundle from the provided file path, then calls the given callback.
        /// @param filePath The file path of the asset bundle to load.
        /// @param callback The callback to perform after the asset bundle has been loaded.
        /// @return True if successful, false otherwise.
        static bool LoadFromFileAsync(std::string_view filePath, AssetBundleCallback callback);
        /// @brief Loads an asset bundle from the provided file path, blocking until finished.
        /// @param filePath The file path of the asset bundle to load.
        /// @return The AssetBundle* loaded (nullptr on failure).
        static AssetBundle* LoadFromFile(std::string_view filePath);

        /// @brief Loads the asset with the given name and type from this bundle, then calls the given callback.
        /// @param assetName The name of the asset to load.
        /// @param callback The callback to perform after the asset has been loaded.
        /// @param assetType The Il2CppReflectionType* of the asset to load. Defaults to UnityEngine.GameObject if nullptr.
        /// @return True if successful, false otherwise.
        bool LoadAssetAsync(std::string_view assetName, AssetCallback callback, Il2CppReflectionType* assetType = nullptr);
        /// @brief Loads the asset with the given name and type from this bundle, blocking until finished.
        /// @param assetName The name of the asset to load.
        /// @param assetType The Il2CppReflectionType* of the asset to load. Defaults to UnityEngine.GameObject if nullptr.
        /// @return The Asset* loaded (nullptr on failure).
        Asset* LoadAsset(std::string_view assetName, Il2CppReflectionType* assetType = nullptr);
      private:
        static void AssetBundleComplete(AssetBundleCallback* callback, Il2CppObject* assetBundleCreateRequest);
        static void AssetComplete(AssetCallback* callback, Il2CppObject* assetBundleRequest);
    };
}
DEFINE_IL2CPP_ARG_TYPE(bs_utils::AssetBundle*, "UnityEngine", "AssetBundle");
