#include "utils/FileUtils.hpp"

static std::optional<rapidjson::Document>& Replay::FileUtils::lastSelectedMetadata() {
    static std::optional<rapidjson::Document> doc;

    return doc;
}